#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 18
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__newline = 1,
  sym__indent = 2,
  sym__dedent = 3,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 4,
  anon_sym_do = 5,
  sym_source_file = 6,
  sym_line = 7,
  sym_block = 8,
  aux_sym_line_repeat1 = 9,
  aux_sym_block_repeat1 = 10,
};

static const char *ts_symbol_names[] = {
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
  [anon_sym_do] = "do",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_block] = "block",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\\')
        SKIP(2);
      if (lookahead == 'd')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 3:
      if (lookahead == 'o')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 6:
      END_STATE();
    case 7:
      if (lookahead == '\\')
        SKIP(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'n')
        SKIP(7);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 7, .external_lex_state = 4},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 7, .external_lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__newline,
  ts_external_token__indent,
  ts_external_token__dedent,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_block] = STATE(4),
    [anon_sym_do] = ACTIONS(3),
  },
  [2] = {
    [sym__indent] = ACTIONS(5),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(7),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [5] = {
    [sym_line] = STATE(9),
    [sym_block] = STATE(9),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(9),
    [sym__dedent] = ACTIONS(11),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [7] = {
    [sym__indent] = ACTIONS(19),
  },
  [8] = {
    [aux_sym_line_repeat1] = STATE(12),
    [sym__newline] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(23),
  },
  [9] = {
    [sym_line] = STATE(14),
    [sym_block] = STATE(14),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(14),
    [sym__dedent] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [10] = {
    [sym_line] = STATE(16),
    [sym_block] = STATE(16),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(16),
    [sym__dedent] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [11] = {
    [sym__dedent] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(29),
    [anon_sym_do] = ACTIONS(29),
  },
  [12] = {
    [aux_sym_line_repeat1] = STATE(12),
    [sym__newline] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(33),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(36),
  },
  [14] = {
    [sym_line] = STATE(14),
    [sym_block] = STATE(14),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(14),
    [sym__dedent] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(43),
  },
  [15] = {
    [sym__dedent] = ACTIONS(17),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(17),
  },
  [16] = {
    [sym_line] = STATE(14),
    [sym_block] = STATE(14),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(14),
    [sym__dedent] = ACTIONS(46),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [17] = {
    [sym__dedent] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(36),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(5),
  [7] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_line, 2),
  [31] = {.count = 1, .reusable = true}, REDUCE(aux_sym_line_repeat1, 2),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(12),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [38] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [46] = {.count = 1, .reusable = true}, SHIFT(17),
};

void *tree_sitter_agda_external_scanner_create();
void tree_sitter_agda_external_scanner_destroy(void *);
bool tree_sitter_agda_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_agda_external_scanner_serialize(void *, char *);
void tree_sitter_agda_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_agda() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_agda_external_scanner_create,
      tree_sitter_agda_external_scanner_destroy,
      tree_sitter_agda_external_scanner_scan,
      tree_sitter_agda_external_scanner_serialize,
      tree_sitter_agda_external_scanner_deserialize,
    },
  };
  return &language;
}
