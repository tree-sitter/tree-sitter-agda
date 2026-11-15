#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"
#include "tree_sitter/parser.h"

enum TokenType {
    DUMMY,  // also works as an error sentinel
    COMMENT,
    NEWLINE,
    INDENT,
    DEDENT,
    // to recognize patterns "let ... (in ...)" and "with ... (in ...)"
    LET_VOPEN,
    LET_VCLOSE,
    WITH_VOPEN,
    WITH_VCLOSE,
};

typedef enum {
    LEX_STATE_NORMAL,
    LEX_STATE_LAYOUT,
    LEX_STATE_BOL,
    LEX_STATE_EMPTY_LAYOUT,
} LexState;

static const char* lex_state_names[] = {
    "NORMAL",
    "LAYOUT",
    "BOL",
    "EMP_LAY",
};

typedef struct {
    Array(LexState) lex_state;
    Array(uint32_t) open_layout;
    bool cur_layout_confirmed;
} Scanner;

#define LAYOUT_CONFIRMED_FLAG (1 << 31)

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline LexState cur_lex_state(Scanner *scanner) {
    assert(scanner->lex_state.size > 0);
    return *array_back(&scanner->lex_state);
}

// we use 1-based column count just like Agda
static inline uint32_t lexer_get_column(TSLexer *lexer) {
    uint32_t n = lexer->get_column(lexer);
    assert(n < INT32_MAX);
    return n + 1;
}

static inline bool can_delimit_agda_id(int32_t c) {
    // want   = all ascii except for (idchar or "_")
    // idchar = digit or alpha or op or "'" or "\"
    // op     = one of: "-!#$%&*+/<=>^|~?`[],:"
    return (c >= 0 && c <= 32) || c == 0x7f ||
        c == '"' || c == '(' || c == ')' || c == '.' ||
        c == ';' || c == '@' || c == '{' || c == '}';
}

static void confirmTentativeBlocks(Scanner *scanner, uint32_t mcol) {
    for (uint32_t i = scanner->open_layout.size; i--; ) {
        uint32_t col = scanner->open_layout.contents[i] & INT32_MAX;
        if (col < mcol) {
            scanner->open_layout.contents[i] = scanner->open_layout.contents[i] | LAYOUT_CONFIRMED_FLAG;
            mcol = col;
        } else {
            break;
        }
    }
}

static void confirmLayout(Scanner *scanner) {
    if (scanner->lex_state.size) {
        LexState s = cur_lex_state(scanner);
        if (s == LEX_STATE_LAYOUT) {
            // confirmLayoutComing
            scanner->cur_layout_confirmed = true;
            return;
        }
    }

    // confirmLayoutAtNewLine = confirmTentativeBlocks Nothing
    confirmTentativeBlocks(scanner, UINT32_MAX);
}

bool tree_sitter_agda_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;

    if (valid_symbols[DUMMY]) {
        // in error recovery, do nothing
        return false;
    }

    if (valid_symbols[LET_VOPEN]) {
        lexer->log(lexer, "!!! Emit LET_VOPEN");
        lexer->result_symbol = LET_VOPEN;
        return true;
    }
    if (valid_symbols[WITH_VOPEN]) {
        lexer->log(lexer, "!!! Emit WITH_VOPEN");
        lexer->result_symbol = WITH_VOPEN;
        return true;
    }

    while (true) {
        while (lexer->lookahead == ' ') skip(lexer);

        assert(scanner->lex_state.size > 0);
        lexer->log(lexer, "!!! Enter loop with lex state len %u, top %-6s, can indent? %d, can dedent? %d, lookahead=%d",
            scanner->lex_state.size, lex_state_names[cur_lex_state(scanner)], valid_symbols[INDENT], valid_symbols[DEDENT], lexer->lookahead);

        // in normal state, let the internal lexer deal with any char we cannot consume
        // XXX: returning `false` does not save our modified state;
        //      throughout the code, only BOL taking "x > n" branch can end up here,
        //      not sure if it will be an issue.
        if (cur_lex_state(scanner) == LEX_STATE_NORMAL &&
            !valid_symbols[INDENT] &&
            !lexer->eof(lexer) &&
            lexer->lookahead != '\n' && lexer->lookahead != '-' && lexer->lookahead != 'i') {
            return false;
        }

        LexState lst = cur_lex_state(scanner);

        // detect layout keyword via an expected extra vopen token
        if (lst == LEX_STATE_NORMAL && valid_symbols[INDENT]) {
            // --- withLayout -> enterLayout
            // but without processing the keyword token
            lexer->log(lexer, "!!! NORMAL & can indent, switch to LAYOUT");
            array_push(&scanner->lex_state, LEX_STATE_LAYOUT);
            continue;

        // special case lexing the token "in" and triggering a dedent;
        } else if (lst == LEX_STATE_NORMAL && lexer->lookahead == 'i') {
            advance(lexer);
            if (lexer->lookahead != 'n') {
                return false;
            }
            advance(lexer);
            if (!can_delimit_agda_id(lexer->lookahead)) {
                return false;
            }

            if (valid_symbols[LET_VCLOSE]) {
                // let ... in: "let" is also a layout keyword, so we need to close a block.
                // Agda seems to handle this via an error token, but I cannot replicate the exact behavior in tree-sitter
                lexer->log(lexer, "!!! NORMAL & tokenized 'in': close a \"let\" block (# open layout=%d)", scanner->open_layout.size);
                assert(scanner->open_layout.size > 0);
                (void) array_pop(&scanner->open_layout);
                lexer->result_symbol = LET_VCLOSE;
                return true;
            } if (valid_symbols[WITH_VCLOSE]) {
                // with ... in
                lexer->log(lexer, "!!! NORMAL & tokenized 'in': close a \"with\"");
                lexer->result_symbol = WITH_VCLOSE;
                return true;
            } else {
                return false;
            }
        } else if (lst == LEX_STATE_EMPTY_LAYOUT) {
            lexer->log(lexer, "!!! EMPTY_LAYOUT");
            // --- emptyLayout
            (void) array_pop(&scanner->lex_state);
            array_push(&scanner->lex_state, LEX_STATE_BOL);
            lexer->result_symbol = DEDENT;
            return true;
        } else if (lexer->lookahead == '\n') {
            if (lst == LEX_STATE_NORMAL) {
                lexer->log(lexer, "!!! NORMAL && peeked '\\n'");
                array_push(&scanner->lex_state, LEX_STATE_BOL);
                // the BOL state will revisit the '\n' char
                continue;
            } else if (lst == LEX_STATE_LAYOUT || lst == LEX_STATE_BOL) {
                lexer->log(lexer, "!!! %s && peeked '\\n'", lex_state_names[lst]);
                confirmLayout(scanner);
                skip(lexer);
                continue;
            } else {
                assert(false);
            }
        } else if (lexer->lookahead == '-') {
            // comment can be added anywhere in the syntax tree, but should before lexer states peeking non-nl chars
            advance(lexer);
            if (lexer->lookahead != '-') {
                return false;
            }
            advance(lexer);
            lexer->log(lexer, "!!! peeked \"--\", lexing line comment token");
            while (lexer->lookahead && lexer->lookahead != '\n') {
                advance(lexer);
            }
            confirmLayout(scanner);
            lexer->mark_end(lexer);
            advance(lexer);
            lexer->result_symbol = COMMENT;
            return true;
        }  else if (lst == LEX_STATE_LAYOUT) {
            lexer->log(lexer, "!!! LAYOUT && peeked NOT '\\n', newLayoutBlock: prev layout size %u", scanner->open_layout.size);
            // --- endWith newLayoutBlock
            //   1. popLexState
            (void) array_pop(&scanner->lex_state);

            //   2. newLayoutBlock
            //   2-1. popPendingLayout
            bool pendingIsConfirmed = scanner->cur_layout_confirmed;
            scanner->cur_layout_confirmed = false;

            //   2-2. confirmedLayoutColumn
            int prevOffs = 0;
            for (uint32_t i = scanner->open_layout.size; i--; ) {
                if (scanner->open_layout.contents[i] & LAYOUT_CONFIRMED_FLAG) {
                    prevOffs = scanner->open_layout.contents[i] ^ LAYOUT_CONFIRMED_FLAG;
                    break;
                }
            }
            lexer->log(lexer, "!!! >> pendingConf? %d, prevOffs = %d", pendingIsConfirmed, prevOffs);

            //   2-3. if prevOffs >= offset, then pushLexState, else (confirm top blocks + add layout block)
            uint32_t offs = lexer_get_column(lexer);
            lexer->log(lexer, "!!! >> nowOffs = %d", offs);

            if (prevOffs >= offs) {
                array_push(&scanner->lex_state, LEX_STATE_EMPTY_LAYOUT);
            } else {
                if (pendingIsConfirmed) {
                    // confirmTentativeBlocks (Just offs)
                    confirmTentativeBlocks(scanner, offs);
                }

                lexer->log(lexer, "!!! >> push open_layout (%d conf=%d)", offs, pendingIsConfirmed);
                array_push(&scanner->open_layout, offs | (pendingIsConfirmed ? LAYOUT_CONFIRMED_FLAG : 0));
            }

            //   2-4. emit vopen
            assert(valid_symbols[INDENT]);
            lexer->result_symbol = INDENT;
            return true;
        } else if (lexer->eof(lexer)) {
            // --- popBlock: close all remaining open layouts
            // the original lexer leaves this job to the parser through error recovery
            lexer->log(lexer, "!!! EOF with %d open layout", scanner->open_layout.size);
            if (scanner->open_layout.size > 0) {
                (void) array_pop(&scanner->open_layout);
                lexer->log(lexer, "!!! EOF output DEDENT");
                lexer->result_symbol = DEDENT;
                return true;
            } else {
                return false;
            }
        } else if (lst == LEX_STATE_BOL) {
            lexer->log(lexer, "!!! BOL");
            // --- offsideRule: getOffside of the first token on this line
            uint32_t x = lexer_get_column(lexer);
            lexer->log(lexer, "!!! BOL scanner->open_layout.size: %d", scanner->open_layout.size);
            uint32_t n = scanner->open_layout.size == 0 ? 0 : (*array_back(&scanner->open_layout) & INT32_MAX);
            lexer->log(lexer, "!!! BOL offsideRule: curr %d vs. prev %d", x, n);

            if (x < n) {
                assert(scanner->open_layout.size > 0);
                // --- popBlock
                (void) array_pop(&scanner->open_layout);
                lexer->result_symbol = DEDENT;
                lexer->log(lexer, "!!! bol emits DEDENT");
                return true;
            } else {
                (void) array_pop(&scanner->lex_state);
                if (x == n) {
                    lexer->result_symbol = NEWLINE;
                    lexer->log(lexer, "!!! bol emits NEWLINE");
                    return true;
                } else {
                    // x > n; this branch may be problematic since it does not emit a token and reenters with an unknown lex state
                    continue;
                }
            }
        } else {
            // the above should have handled all lex states
            assert(false);
        }
    }

    return false;
}

unsigned tree_sitter_agda_external_scanner_serialize(void *payload,
                                                     char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    assert(scanner->lex_state.size <= UINT32_MAX / array_elem_size(&scanner->lex_state));
    uint32_t state_size = array_elem_size(&scanner->lex_state) * scanner->lex_state.size;
    assert(scanner->open_layout.size <= UINT32_MAX / array_elem_size(&scanner->open_layout));
    uint32_t layout_size = array_elem_size(&scanner->open_layout) * scanner->open_layout.size;

    uint32_t total_size = 4 + 4 + state_size + layout_size + 1;
    if (total_size <= state_size || total_size <= layout_size ||
        total_size > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
        return 0;
    }

    uint32_t len = 0;

    memcpy(buffer + len, &scanner->lex_state.size, 4);
    len += 4;
    memcpy(buffer + len, &scanner->open_layout.size, 4);
    len += 4;
    memcpy(buffer + len, scanner->lex_state.contents, state_size);
    len += state_size;
    memcpy(buffer + len, scanner->open_layout.contents, layout_size);
    len += layout_size;

    buffer[len] = scanner->cur_layout_confirmed;
    len += 1;

    assert(len == total_size);
    return len;
}

static void init_state(Scanner *scanner) {
    array_clear(&scanner->lex_state);
    array_push(&scanner->lex_state, LEX_STATE_NORMAL);
    array_push(&scanner->lex_state, LEX_STATE_LAYOUT);
    array_clear(&scanner->open_layout);
    scanner->cur_layout_confirmed = true;
}

void tree_sitter_agda_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    if (length == 0) {
        init_state(scanner);
    } else {
        uint32_t state_cnt;
        uint32_t layout_cnt;

        uint32_t len = 0;
        memcpy(&state_cnt, buffer + len, 4);
        assert(state_cnt <= UINT32_MAX / array_elem_size(&scanner->lex_state));
        len += 4;
        memcpy(&layout_cnt, buffer + len, 4);
        assert(layout_cnt <= UINT32_MAX / array_elem_size(&scanner->open_layout));
        len += 4;

        array_clear(&scanner->lex_state);
        array_extend(&scanner->lex_state, state_cnt, (LexState*)(buffer + len));
        len += array_elem_size(&scanner->lex_state) * state_cnt;

        array_clear(&scanner->open_layout);
        array_extend(&scanner->open_layout, layout_cnt, (uint32_t*)(buffer + len));
        len += array_elem_size(&scanner->open_layout) * layout_cnt;

        scanner->cur_layout_confirmed = !!buffer[len];
        len += 1;

        assert(length == len);
    }
}

void *tree_sitter_agda_external_scanner_create() {
    Scanner *scanner = ts_calloc(1, sizeof(Scanner));
    init_state(scanner);
    return scanner;
}

void tree_sitter_agda_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    array_delete(&scanner->lex_state);
    array_delete(&scanner->open_layout);
    ts_free(scanner);
}
