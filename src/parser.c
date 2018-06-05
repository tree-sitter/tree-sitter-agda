#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 17
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
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 3},
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

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
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
    [aux_sym_line_repeat1] = STATE(11),
    [sym__dedent] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(21),
  },
  [9] = {
    [sym_line] = STATE(13),
    [sym_block] = STATE(13),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(13),
    [sym__dedent] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [10] = {
    [sym_line] = STATE(15),
    [sym_block] = STATE(15),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(15),
    [sym__dedent] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [11] = {
    [aux_sym_line_repeat1] = STATE(11),
    [sym__dedent] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(31),
    [anon_sym_do] = ACTIONS(29),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(34),
  },
  [13] = {
    [sym_line] = STATE(13),
    [sym_block] = STATE(13),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(13),
    [sym__dedent] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(41),
  },
  [14] = {
    [sym__dedent] = ACTIONS(17),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(17),
  },
  [15] = {
    [sym_line] = STATE(13),
    [sym_block] = STATE(13),
    [aux_sym_line_repeat1] = STATE(8),
    [aux_sym_block_repeat1] = STATE(13),
    [sym__dedent] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
  },
  [16] = {
    [sym__dedent] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(34),
    [anon_sym_do] = ACTIONS(34),
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
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_line_repeat1, 2),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(11),
  [34] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [36] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [38] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.count = 1, .reusable = true}, SHIFT(16),
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
