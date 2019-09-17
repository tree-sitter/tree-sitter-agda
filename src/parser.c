#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 48
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_field = 1,
  anon_sym_overlap = 2,
  anon_sym_COLON = 3,
  anon_sym_instance = 4,
  anon_sym_AT = 5,
  sym_id = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LBRACE_LBRACE = 9,
  anon_sym_RBRACE_RBRACE = 10,
  anon_sym_ = 11,
  anon_sym_2 = 12,
  anon_sym_DOT = 13,
  anon_sym_DOT_DOT = 14,
  sym__maybe_dotted_id = 15,
  sym__maybe_dotted_ids = 16,
  sym__type_sig_block = 17,
  sym_expr = 18,
  sym__expr_or_attr = 19,
  sym__newline = 20,
  sym__indent = 21,
  sym__dedent = 22,
  sym_source_file = 23,
  sym__declaration = 24,
  sym_fields = 25,
  sym__arg_type_sig_block = 26,
  sym_type_sig = 27,
  sym__modal_arg_ids = 28,
  sym__attribute = 29,
  aux_sym__spaces_ids = 30,
  aux_sym__arg_ids1 = 31,
  sym__arg_id = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym__arg_type_sig_block_repeat1 = 34,
  aux_sym__modal_arg_ids_repeat1 = 35,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_field] = "field",
  [anon_sym_overlap] = "overlap",
  [anon_sym_COLON] = ":",
  [anon_sym_instance] = "instance",
  [anon_sym_AT] = "@",
  [sym_id] = "id",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_] = "⦃",
  [anon_sym_2] = "⦄",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [sym__maybe_dotted_id] = "_maybe_dotted_id",
  [sym__maybe_dotted_ids] = "_maybe_dotted_ids",
  [sym__type_sig_block] = "_type_sig_block",
  [sym_expr] = "expr",
  [sym__expr_or_attr] = "_expr_or_attr",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_fields] = "fields",
  [sym__arg_type_sig_block] = "_arg_type_sig_block",
  [sym_type_sig] = "type_sig",
  [sym__modal_arg_ids] = "_modal_arg_ids",
  [sym__attribute] = "_attribute",
  [aux_sym__spaces_ids] = "_spaces_ids",
  [aux_sym__arg_ids1] = "_arg_ids1",
  [sym__arg_id] = "_arg_id",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__arg_type_sig_block_repeat1] = "_arg_type_sig_block_repeat1",
  [aux_sym__modal_arg_ids_repeat1] = "_modal_arg_ids_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__maybe_dotted_id] = {
    .visible = false,
    .named = true,
  },
  [sym__maybe_dotted_ids] = {
    .visible = false,
    .named = true,
  },
  [sym__type_sig_block] = {
    .visible = false,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_or_attr] = {
    .visible = false,
    .named = true,
  },
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym__arg_type_sig_block] = {
    .visible = false,
    .named = true,
  },
  [sym_type_sig] = {
    .visible = true,
    .named = true,
  },
  [sym__modal_arg_ids] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__spaces_ids] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_ids1] = {
    .visible = false,
    .named = false,
  },
  [sym__arg_id] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_type_sig_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__modal_arg_ids_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(95);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == 10627) ADVANCE(107);
      if (lookahead == 10628) ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == 10627) ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '}') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == 10628) ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == 'v') ADVANCE(40);
      END_STATE();
    case 85:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 89:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 90:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 92:
      if (lookahead == '}') ADVANCE(106);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(101);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__maybe_dotted_id);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__maybe_dotted_id);
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__maybe_dotted_ids);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__type_sig_block);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_expr);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_expr);
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__expr_or_attr);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 4},
  [34] = {.lex_state = 0, .external_lex_state = 4},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 0, .external_lex_state = 4},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
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
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_overlap] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym__maybe_dotted_id] = ACTIONS(1),
    [sym__maybe_dotted_ids] = ACTIONS(1),
    [sym__type_sig_block] = ACTIONS(1),
    [sym_expr] = ACTIONS(1),
    [sym__expr_or_attr] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym__declaration] = STATE(36),
    [sym_fields] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_field] = ACTIONS(5),
  },
  [2] = {
    [sym_type_sig] = STATE(45),
    [sym__modal_arg_ids] = STATE(42),
    [sym__attribute] = STATE(6),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(2),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_overlap] = ACTIONS(7),
    [anon_sym_instance] = ACTIONS(10),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(19),
    [anon_sym_] = ACTIONS(22),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(28),
    [sym__maybe_dotted_id] = ACTIONS(31),
    [sym__dedent] = ACTIONS(34),
  },
  [3] = {
    [sym_type_sig] = STATE(45),
    [sym__modal_arg_ids] = STATE(42),
    [sym__attribute] = STATE(6),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(2),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_overlap] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(44),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [sym__maybe_dotted_id] = ACTIONS(52),
    [sym__dedent] = ACTIONS(54),
  },
  [4] = {
    [sym_type_sig] = STATE(45),
    [sym__modal_arg_ids] = STATE(42),
    [sym__attribute] = STATE(6),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(3),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_overlap] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(44),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [sym__maybe_dotted_id] = ACTIONS(52),
  },
  [5] = {
    [sym__modal_arg_ids] = STATE(40),
    [sym__attribute] = STATE(6),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(44),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [sym__maybe_dotted_id] = ACTIONS(52),
  },
  [6] = {
    [sym__attribute] = STATE(9),
    [aux_sym__arg_ids1] = STATE(10),
    [sym__arg_id] = STATE(10),
    [aux_sym__modal_arg_ids_repeat1] = STATE(9),
    [anon_sym_AT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(44),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [sym__maybe_dotted_id] = ACTIONS(56),
  },
  [7] = {
    [anon_sym_overlap] = ACTIONS(34),
    [anon_sym_instance] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(34),
    [anon_sym_] = ACTIONS(34),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_DOT_DOT] = ACTIONS(34),
    [sym__maybe_dotted_id] = ACTIONS(34),
    [sym__dedent] = ACTIONS(34),
  },
  [8] = {
    [aux_sym__arg_ids1] = STATE(11),
    [sym__arg_id] = STATE(11),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(44),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [sym__maybe_dotted_id] = ACTIONS(62),
  },
  [9] = {
    [sym__attribute] = STATE(9),
    [aux_sym__modal_arg_ids_repeat1] = STATE(9),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(69),
    [anon_sym_] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [sym__maybe_dotted_id] = ACTIONS(69),
  },
  [10] = {
    [aux_sym__arg_ids1] = STATE(11),
    [sym__arg_id] = STATE(11),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(44),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [sym__maybe_dotted_id] = ACTIONS(62),
  },
  [11] = {
    [aux_sym__arg_ids1] = STATE(11),
    [sym__arg_id] = STATE(11),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(78),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(87),
    [sym__maybe_dotted_id] = ACTIONS(90),
  },
  [12] = {
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(93),
    [anon_sym_] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(93),
    [sym__maybe_dotted_id] = ACTIONS(93),
  },
  [13] = {
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(97),
    [anon_sym_] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [sym__maybe_dotted_id] = ACTIONS(97),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(101),
    [anon_sym_] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_DOT_DOT] = ACTIONS(101),
    [sym__maybe_dotted_id] = ACTIONS(101),
  },
  [15] = {
    [sym__declaration] = STATE(36),
    [sym_fields] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_field] = ACTIONS(5),
  },
  [16] = {
    [sym__declaration] = STATE(36),
    [sym_fields] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_field] = ACTIONS(109),
  },
  [17] = {
    [aux_sym__spaces_ids] = STATE(17),
    [sym_id] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(117),
  },
  [18] = {
    [aux_sym__spaces_ids] = STATE(18),
    [sym_id] = ACTIONS(119),
    [anon_sym_2] = ACTIONS(115),
  },
  [19] = {
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(124),
    [anon_sym_] = ACTIONS(126),
  },
  [20] = {
    [aux_sym__spaces_ids] = STATE(18),
    [sym_id] = ACTIONS(128),
    [anon_sym_2] = ACTIONS(130),
  },
  [21] = {
    [aux_sym__spaces_ids] = STATE(17),
    [sym_id] = ACTIONS(132),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(134),
  },
  [22] = {
    [aux_sym__spaces_ids] = STATE(17),
    [sym_id] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(134),
  },
  [23] = {
    [aux_sym__spaces_ids] = STATE(22),
    [sym_id] = ACTIONS(136),
  },
  [24] = {
    [sym__arg_type_sig_block] = STATE(33),
    [sym__indent] = ACTIONS(138),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_field] = ACTIONS(107),
  },
  [26] = {
    [aux_sym__spaces_ids] = STATE(21),
    [sym_id] = ACTIONS(140),
  },
  [27] = {
    [aux_sym__spaces_ids] = STATE(20),
    [sym_id] = ACTIONS(142),
  },
  [28] = {
    [sym__type_sig_block] = ACTIONS(144),
  },
  [29] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(146),
  },
  [30] = {
    [anon_sym_2] = ACTIONS(146),
  },
  [31] = {
    [sym__maybe_dotted_ids] = ACTIONS(148),
  },
  [32] = {
    [sym_expr] = ACTIONS(150),
  },
  [33] = {
    [sym__newline] = ACTIONS(152),
  },
  [34] = {
    [sym__newline] = ACTIONS(154),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(146),
  },
  [36] = {
    [sym__newline] = ACTIONS(156),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(158),
  },
  [38] = {
    [sym_expr] = ACTIONS(160),
  },
  [39] = {
    [sym__newline] = ACTIONS(162),
  },
  [40] = {
    [anon_sym_COLON] = ACTIONS(164),
  },
  [41] = {
    [sym__expr_or_attr] = ACTIONS(166),
  },
  [42] = {
    [anon_sym_COLON] = ACTIONS(168),
  },
  [43] = {
    [sym__newline] = ACTIONS(170),
  },
  [44] = {
    [sym__newline] = ACTIONS(172),
  },
  [45] = {
    [sym__newline] = ACTIONS(174),
  },
  [46] = {
    [sym__maybe_dotted_ids] = ACTIONS(176),
  },
  [47] = {
    [sym__maybe_dotted_ids] = ACTIONS(178),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(24),
  [7] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(5),
  [10] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(28),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(41),
  [16] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(31),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(47),
  [22] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(46),
  [25] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(19),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [36] = {.count = 1, .reusable = true}, SHIFT(5),
  [38] = {.count = 1, .reusable = true}, SHIFT(28),
  [40] = {.count = 1, .reusable = true}, SHIFT(41),
  [42] = {.count = 1, .reusable = false}, SHIFT(31),
  [44] = {.count = 1, .reusable = true}, SHIFT(47),
  [46] = {.count = 1, .reusable = true}, SHIFT(46),
  [48] = {.count = 1, .reusable = false}, SHIFT(19),
  [50] = {.count = 1, .reusable = true}, SHIFT(19),
  [52] = {.count = 1, .reusable = true}, SHIFT(8),
  [54] = {.count = 1, .reusable = true}, SHIFT(34),
  [56] = {.count = 1, .reusable = true}, SHIFT(10),
  [58] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym__modal_arg_ids, 1),
  [62] = {.count = 1, .reusable = true}, SHIFT(11),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2), SHIFT_REPEAT(41),
  [67] = {.count = 1, .reusable = false}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__modal_arg_ids, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(31),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(47),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(46),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(19),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(19),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(11),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym__attribute, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym__attribute, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 4),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 4),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 3),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [112] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spaces_ids, 2), SHIFT_REPEAT(17),
  [115] = {.count = 1, .reusable = false}, REDUCE(aux_sym__spaces_ids, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spaces_ids, 2),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym__spaces_ids, 2), SHIFT_REPEAT(18),
  [122] = {.count = 1, .reusable = false}, SHIFT(23),
  [124] = {.count = 1, .reusable = true}, SHIFT(26),
  [126] = {.count = 1, .reusable = true}, SHIFT(27),
  [128] = {.count = 1, .reusable = false}, SHIFT(18),
  [130] = {.count = 1, .reusable = false}, SHIFT(13),
  [132] = {.count = 1, .reusable = true}, SHIFT(17),
  [134] = {.count = 1, .reusable = true}, SHIFT(13),
  [136] = {.count = 1, .reusable = true}, SHIFT(22),
  [138] = {.count = 1, .reusable = true}, SHIFT(4),
  [140] = {.count = 1, .reusable = true}, SHIFT(21),
  [142] = {.count = 1, .reusable = true}, SHIFT(20),
  [144] = {.count = 1, .reusable = true}, SHIFT(39),
  [146] = {.count = 1, .reusable = true}, SHIFT(14),
  [148] = {.count = 1, .reusable = true}, SHIFT(35),
  [150] = {.count = 1, .reusable = true}, SHIFT(43),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_sig_block, 3),
  [156] = {.count = 1, .reusable = true}, SHIFT(25),
  [158] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [160] = {.count = 1, .reusable = true}, SHIFT(44),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_type_sig, 2),
  [164] = {.count = 1, .reusable = true}, SHIFT(38),
  [166] = {.count = 1, .reusable = true}, SHIFT(12),
  [168] = {.count = 1, .reusable = true}, SHIFT(32),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_type_sig, 3),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_type_sig, 4),
  [174] = {.count = 1, .reusable = true}, SHIFT(7),
  [176] = {.count = 1, .reusable = true}, SHIFT(30),
  [178] = {.count = 1, .reusable = true}, SHIFT(29),
};

void *tree_sitter_agda_external_scanner_create(void);
void tree_sitter_agda_external_scanner_destroy(void *);
bool tree_sitter_agda_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_agda_external_scanner_serialize(void *, char *);
void tree_sitter_agda_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_agda(void) {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
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
