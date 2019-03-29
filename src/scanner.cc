#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cassert>
#include <cstring>

namespace {

    using std::vector;

    enum TokenType {
        NEWLINE,
        INDENT,
        DEDENT,
    };

    struct Scanner {
        Scanner() {
            deserialize(NULL, 0);
        }

        unsigned serialize(char *buffer) {
            size_t n_copied_so_far = 0;
            size_t n_to_copy = sizeof(decltype(queued_dedent_count));

            std::memcpy((void *) &(buffer[n_copied_so_far]),
                        (void *) &queued_dedent_count,
                        n_to_copy);
            n_copied_so_far += n_to_copy;

            using element_type = decltype(indent_length_stack)::value_type;
            n_to_copy = indent_length_stack.size() * sizeof(element_type);
            if (n_copied_so_far + n_to_copy > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
                n_to_copy = TREE_SITTER_SERIALIZATION_BUFFER_SIZE - n_copied_so_far;
                n_to_copy -= n_to_copy % sizeof(element_type);
            }
            std::memcpy((void *) &(buffer[n_copied_so_far]),
                        (void *) indent_length_stack.data(),
                        n_to_copy);
            n_copied_so_far += n_to_copy;

            return n_copied_so_far;
        }

        void deserialize(const char *buffer, unsigned length) {
            queued_dedent_count = 0;
            indent_length_stack.clear();

            if (buffer == NULL) {
                indent_length_stack.push_back(0);
                return;
            }

            size_t n_copied_so_far = 0;
            size_t n_to_copy = sizeof(queued_dedent_count);

            if (length < n_to_copy) return;
            std::memcpy((void *) &queued_dedent_count,
                        (void *) &(buffer[n_copied_so_far]),
                        n_to_copy);
            n_copied_so_far += n_to_copy;

            using element_type = decltype(indent_length_stack)::value_type;
            n_to_copy = length - n_copied_so_far;
            n_to_copy -= n_to_copy % sizeof(element_type);
            if (n_to_copy == 0) {
                indent_length_stack.push_back(0);
                return;
            }
            indent_length_stack.resize(n_to_copy / sizeof(element_type));
            std::memcpy((void *) indent_length_stack.data(),
                        (void *) &(buffer[n_copied_so_far]),
                        n_to_copy);
        }

        void advance(TSLexer *lexer) {
            lexer->advance(lexer, false);

            advanceCarriage();
        }

        void skip(TSLexer *lexer) {
            lexer->advance(lexer, true);

            advanceCarriage();
        }

        // https://github.com/tree-sitter/tree-sitter/issues/312
        // maintaining the column position by ourselves

        void advanceCarriage() {
            if (column_number != -1) {
                column_number++;
            }
        }

        // set `column_number` with `get_column`
        void setCarriage(TSLexer *lexer) {
            column_number = (int)lexer->get_column(lexer);
        }

        // set `column_number` to 0, use after newline
        void returnCarriage() {
            column_number = 0;
        }

        // see if `column_number` is available
        // else retrieve from `get_column`
        uint32_t readCarriage(TSLexer *lexer) {
            return column_number == -1
                ? lexer->get_column(lexer)
                : (uint32_t)column_number;
        }


        // returns True if newline \n were skipped
        bool skipJunk(TSLexer *lexer) {
            bool skippedNewline = false;

            // assuming that `get_column` is correct before skipping
            setCarriage(lexer);

            while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' || lexer->lookahead == '\n') {
                if (lexer->lookahead == '\n') {
                    skippedNewline = true;
                    skip(lexer);
                    // mark the end of the last lexeme
                    lexer->mark_end(lexer);
                    // set column_number to 0
                    returnCarriage();
                } else {
                    skip(lexer);
                }
            }

            return skippedNewline;
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {
            bool skippedNewline = false;

            if (valid_symbols[DEDENT] && queued_dedent_count > 0) {
                queued_dedent_count--;
                lexer->result_symbol = DEDENT;
                return true;
            }

            // skip spaces and newline
            skippedNewline = skippedNewline || skipJunk(lexer);

            // in case of EOF
            if (lexer->lookahead == 0) {
                if (valid_symbols[DEDENT] && indent_length_stack.size() > 1) {
                    indent_length_stack.pop_back();
                    lexer->result_symbol = DEDENT;
                    return true;
                }

                if (valid_symbols[NEWLINE]) {
                    lexer->result_symbol = NEWLINE;
                    return true;
                }

                return false;
            }


            // TODO: handle comments
            bool next_token_is_comment = false;

            int indent_length = readCarriage(lexer);

            bool in = indent_length > indent_length_stack.back();
            bool noop = indent_length == indent_length_stack.back();
            bool out = indent_length < indent_length_stack.back();

            // TODO: tidy this mess up
            if (!next_token_is_comment) {

                // do
                //      line0  <newline>
                //      line1
                if (valid_symbols[NEWLINE] && skippedNewline && noop) {
                    lexer->result_symbol = NEWLINE;
                    return true;
                }

                // do
                //      line0 <newline>
                //    line1
                if (valid_symbols[NEWLINE] && skippedNewline && out) {
                    lexer->result_symbol = NEWLINE;
                    return true;
                }


                // do
                //      line0
                //          still0
                // or
                //      line0 still0
                if (valid_symbols[INDENT] && in) {
                    indent_length_stack.push_back(indent_length);
                    lexer->result_symbol = INDENT;
                    return true;
                }

                // do
                //      do
                //          line0
                //      line1
                //      ^ here
                if (!skippedNewline && out) {
                    indent_length_stack.pop_back();
                    while (indent_length < indent_length_stack.back()) {
                        indent_length_stack.pop_back();
                        queued_dedent_count++;
                    }
                    if (valid_symbols[DEDENT]) {
                        lexer->result_symbol = DEDENT;
                        return true;
                    } else {
                        queued_dedent_count++;
                    }
                }
            }

            return false;
        }

        vector<uint16_t> indent_length_stack;
        uint32_t queued_dedent_count;

        // column_number : Maybe Int
        // -1 as Nothing,
        int column_number;
    };

}

extern "C" {

    void *tree_sitter_agda_external_scanner_create() {
        return new Scanner();
    }

    bool tree_sitter_agda_external_scanner_scan(void *payload, TSLexer *lexer,
        const bool *valid_symbols) {
            Scanner *scanner = static_cast<Scanner *>(payload);
            return scanner->scan(lexer, valid_symbols);
        }

        unsigned tree_sitter_agda_external_scanner_serialize(void *payload, char *buffer) {
            Scanner *scanner = static_cast<Scanner *>(payload);
            return scanner->serialize(buffer);
        }

        void tree_sitter_agda_external_scanner_deserialize(void *payload,
            const char *buffer,
            unsigned length) {
                Scanner *scanner = static_cast<Scanner *>(payload);
                scanner->deserialize(buffer, length);
            }

            void tree_sitter_agda_external_scanner_destroy(void *payload) {
                Scanner *scanner = static_cast<Scanner *>(payload);
                delete scanner;
            }

        }
