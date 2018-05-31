#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 10
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__newline = 1,
  sym__indent = 2,
  sym__dedent = 3,
  sym_string = 4,
  sym_int = 5,
  sym_name = 6,
  anon_sym__ = 7,
  sym_comment = 8,
  sym_pragma = 9,
  anon_sym_infix = 10,
  anon_sym_infixl = 11,
  anon_sym_infixr = 12,
  sym_source_file = 13,
  sym_binding_name = 14,
  sym__declaration = 15,
  sym_infix = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_infix_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [ts_builtin_sym_end] = "END",
  [sym_string] = "string",
  [sym_int] = "int",
  [sym_name] = "name",
  [anon_sym__] = "_",
  [sym_comment] = "comment",
  [sym_pragma] = "pragma",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [sym_source_file] = "source_file",
  [sym_binding_name] = "binding_name",
  [sym__declaration] = "_declaration",
  [sym_infix] = "infix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_infix_repeat1] = "infix_repeat1",
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_name] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_infix_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(6);
      if (lookahead == '_')
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '-')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 8:
      if (lookahead == 'n')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'f')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'i')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'x')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(13);
      if (lookahead == 'r')
        ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 15:
      if (lookahead == '-')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '#')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '#')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '}')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    case 21:
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(26);
      if (lookahead == 'i')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == 'n')
        SKIP(25);
      END_STATE();
    case 27:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'n')
        SKIP(27);
      END_STATE();
    case 29:
      if (lookahead == '-')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == '{')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(46);
      if (lookahead == 'r')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
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

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_pragma] = ACTIONS(1),
    [anon_sym_infix] = ACTIONS(3),
    [anon_sym_infixl] = ACTIONS(1),
    [anon_sym_infixr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym__declaration] = STATE(4),
    [sym_infix] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_pragma] = ACTIONS(9),
    [anon_sym_infix] = ACTIONS(11),
    [anon_sym_infixl] = ACTIONS(13),
    [anon_sym_infixr] = ACTIONS(13),
  },
  [2] = {
    [sym_int] = ACTIONS(15),
    [sym_comment] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_comment] = ACTIONS(7),
  },
  [4] = {
    [sym__declaration] = STATE(6),
    [sym_infix] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(7),
    [sym_pragma] = ACTIONS(21),
    [anon_sym_infix] = ACTIONS(11),
    [anon_sym_infixl] = ACTIONS(13),
    [anon_sym_infixr] = ACTIONS(13),
  },
  [5] = {
    [sym_binding_name] = STATE(8),
    [aux_sym_infix_repeat1] = STATE(8),
    [sym_name] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
  [6] = {
    [sym__declaration] = STATE(6),
    [sym_infix] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(7),
    [sym_pragma] = ACTIONS(29),
    [anon_sym_infix] = ACTIONS(32),
    [anon_sym_infixl] = ACTIONS(35),
    [anon_sym_infixr] = ACTIONS(35),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_name] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(25),
    [sym_pragma] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
  },
  [8] = {
    [sym_binding_name] = STATE(9),
    [aux_sym_infix_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_name] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_pragma] = ACTIONS(44),
    [anon_sym_infix] = ACTIONS(44),
    [anon_sym_infixl] = ACTIONS(44),
    [anon_sym_infixr] = ACTIONS(44),
  },
  [9] = {
    [sym_binding_name] = STATE(9),
    [aux_sym_infix_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_name] = ACTIONS(48),
    [anon_sym__] = ACTIONS(48),
    [sym_comment] = ACTIONS(25),
    [sym_pragma] = ACTIONS(51),
    [anon_sym_infix] = ACTIONS(51),
    [anon_sym_infixl] = ACTIONS(51),
    [anon_sym_infixr] = ACTIONS(51),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = false}, SHIFT(7),
  [25] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_binding_name, 1),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym_binding_name, 1),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_infix, 3),
  [44] = {.count = 1, .reusable = false}, REDUCE(sym_infix, 3),
  [46] = {.count = 1, .reusable = true}, REDUCE(aux_sym_infix_repeat1, 2),
  [48] = {.count = 2, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2), SHIFT_REPEAT(7),
  [51] = {.count = 1, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2),
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
