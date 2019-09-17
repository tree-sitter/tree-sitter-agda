#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 67
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym__ARROW = 1,
  anon_sym_field = 2,
  anon_sym_overlap = 3,
  anon_sym_COLON = 4,
  anon_sym_instance = 5,
  anon_sym_AT = 6,
  sym_id = 7,
  anon_sym_DOT = 8,
  anon_sym_DOT_DOT = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_LBRACE_LBRACE = 12,
  anon_sym_RBRACE_RBRACE = 13,
  anon_sym_ = 14,
  anon_sym_2 = 15,
  anon_sym_EQ = 16,
  sym__expr1 = 17,
  sym__attributes1 = 18,
  sym__tele_arrow = 19,
  sym__application3 = 20,
  sym__expr_or_attr = 21,
  sym__newline = 22,
  sym__indent = 23,
  sym__dedent = 24,
  sym_source_file = 25,
  sym__declaration = 26,
  sym_fields = 27,
  sym__arg_type_sig_block = 28,
  sym_arg_type_sig = 29,
  sym__modal_arg_ids = 30,
  sym__attribute = 31,
  sym_ids1 = 32,
  sym__maybe_dotted_id = 33,
  aux_sym__maybe_dotted_ids1 = 34,
  aux_sym__arg_ids1 = 35,
  sym__arg_id = 36,
  sym_expr = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym__arg_type_sig_block_repeat1 = 39,
  aux_sym__modal_arg_ids_repeat1 = 40,
  aux_sym_ids1_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ARROW] = "_ARROW",
  [anon_sym_field] = "field",
  [anon_sym_overlap] = "overlap",
  [anon_sym_COLON] = ":",
  [anon_sym_instance] = "instance",
  [anon_sym_AT] = "@",
  [sym_id] = "id",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_] = "⦃",
  [anon_sym_2] = "⦄",
  [anon_sym_EQ] = "=",
  [sym__expr1] = "_expr1",
  [sym__attributes1] = "_attributes1",
  [sym__tele_arrow] = "_tele_arrow",
  [sym__application3] = "_application3",
  [sym__expr_or_attr] = "_expr_or_attr",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_fields] = "fields",
  [sym__arg_type_sig_block] = "_arg_type_sig_block",
  [sym_arg_type_sig] = "arg_type_sig",
  [sym__modal_arg_ids] = "_modal_arg_ids",
  [sym__attribute] = "_attribute",
  [sym_ids1] = "ids1",
  [sym__maybe_dotted_id] = "_maybe_dotted_id",
  [aux_sym__maybe_dotted_ids1] = "_maybe_dotted_ids1",
  [aux_sym__arg_ids1] = "_arg_ids1",
  [sym__arg_id] = "_arg_id",
  [sym_expr] = "expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__arg_type_sig_block_repeat1] = "_arg_type_sig_block_repeat1",
  [aux_sym__modal_arg_ids_repeat1] = "_modal_arg_ids_repeat1",
  [aux_sym_ids1_repeat1] = "ids1_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ARROW] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__expr1] = {
    .visible = false,
    .named = true,
  },
  [sym__attributes1] = {
    .visible = false,
    .named = true,
  },
  [sym__tele_arrow] = {
    .visible = false,
    .named = true,
  },
  [sym__application3] = {
    .visible = false,
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
  [sym_arg_type_sig] = {
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
  [sym_ids1] = {
    .visible = true,
    .named = true,
  },
  [sym__maybe_dotted_id] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__maybe_dotted_ids1] = {
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
  [sym_expr] = {
    .visible = true,
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
  [aux_sym_ids1_repeat1] = {
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
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == 8594) ADVANCE(67);
      if (lookahead == 10627) ADVANCE(97);
      if (lookahead == 10628) ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == 10627) ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == 10627) ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == 10627) ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == 10628) ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 60:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == '}') ADVANCE(96);
      END_STATE();
    case 64:
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__ARROW);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_overlap);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_instance);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(84);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(83);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(80);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(85);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(74);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(76);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(86);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(78);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(70);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(81);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(87);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(77);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(79);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 89:
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_);
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 100:
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
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__expr1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__attributes1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__tele_arrow);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__application3);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__expr_or_attr);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0, .external_lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
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
    [sym__ARROW] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_overlap] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__expr1] = ACTIONS(1),
    [sym__attributes1] = ACTIONS(1),
    [sym__tele_arrow] = ACTIONS(1),
    [sym__application3] = ACTIONS(1),
    [sym__expr_or_attr] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__declaration] = STATE(53),
    [sym_fields] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_field] = ACTIONS(5),
  },
  [2] = {
    [sym_arg_type_sig] = STATE(47),
    [sym__modal_arg_ids] = STATE(65),
    [sym__attribute] = STATE(6),
    [sym__maybe_dotted_id] = STATE(8),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(3),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_overlap] = ACTIONS(7),
    [anon_sym_instance] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_id] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
    [sym__dedent] = ACTIONS(25),
  },
  [3] = {
    [sym_arg_type_sig] = STATE(47),
    [sym__modal_arg_ids] = STATE(65),
    [sym__attribute] = STATE(6),
    [sym__maybe_dotted_id] = STATE(8),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(3),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_overlap] = ACTIONS(27),
    [anon_sym_instance] = ACTIONS(30),
    [anon_sym_AT] = ACTIONS(33),
    [sym_id] = ACTIONS(36),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(48),
    [anon_sym_] = ACTIONS(51),
    [sym__dedent] = ACTIONS(54),
  },
  [4] = {
    [sym_arg_type_sig] = STATE(47),
    [sym__modal_arg_ids] = STATE(65),
    [sym__attribute] = STATE(6),
    [sym__maybe_dotted_id] = STATE(8),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(2),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_overlap] = ACTIONS(7),
    [anon_sym_instance] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_id] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
  },
  [5] = {
    [sym__modal_arg_ids] = STATE(64),
    [sym__attribute] = STATE(6),
    [sym__maybe_dotted_id] = STATE(8),
    [aux_sym__arg_ids1] = STATE(8),
    [sym__arg_id] = STATE(8),
    [aux_sym__modal_arg_ids_repeat1] = STATE(6),
    [anon_sym_AT] = ACTIONS(11),
    [sym_id] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
  },
  [6] = {
    [sym__attribute] = STATE(11),
    [sym__maybe_dotted_id] = STATE(9),
    [aux_sym__arg_ids1] = STATE(9),
    [sym__arg_id] = STATE(9),
    [aux_sym__modal_arg_ids_repeat1] = STATE(11),
    [anon_sym_AT] = ACTIONS(11),
    [sym_id] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
  },
  [7] = {
    [anon_sym_overlap] = ACTIONS(58),
    [anon_sym_instance] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(54),
    [sym_id] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_DOT_DOT] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(54),
    [anon_sym_] = ACTIONS(58),
    [sym__dedent] = ACTIONS(54),
  },
  [8] = {
    [sym__maybe_dotted_id] = STATE(10),
    [aux_sym__arg_ids1] = STATE(10),
    [sym__arg_id] = STATE(10),
    [anon_sym_COLON] = ACTIONS(60),
    [sym_id] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
  },
  [9] = {
    [sym__maybe_dotted_id] = STATE(10),
    [aux_sym__arg_ids1] = STATE(10),
    [sym__arg_id] = STATE(10),
    [anon_sym_COLON] = ACTIONS(64),
    [sym_id] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(21),
    [anon_sym_] = ACTIONS(23),
  },
  [10] = {
    [sym__maybe_dotted_id] = STATE(10),
    [aux_sym__arg_ids1] = STATE(10),
    [sym__arg_id] = STATE(10),
    [anon_sym_COLON] = ACTIONS(66),
    [sym_id] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(80),
    [anon_sym_] = ACTIONS(83),
  },
  [11] = {
    [sym__attribute] = STATE(11),
    [aux_sym__modal_arg_ids_repeat1] = STATE(11),
    [anon_sym_AT] = ACTIONS(86),
    [sym_id] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(89),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(93),
    [sym_id] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(95),
    [anon_sym_] = ACTIONS(93),
  },
  [13] = {
    [anon_sym_AT] = ACTIONS(97),
    [sym_id] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(97),
    [anon_sym_] = ACTIONS(99),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(101),
    [sym_id] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_DOT_DOT] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(103),
    [anon_sym_] = ACTIONS(101),
  },
  [15] = {
    [sym__maybe_dotted_id] = STATE(15),
    [aux_sym__maybe_dotted_ids1] = STATE(15),
    [sym_id] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_DOT_DOT] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(116),
  },
  [16] = {
    [anon_sym_COLON] = ACTIONS(118),
    [sym_id] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_DOT_DOT] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(120),
    [anon_sym_] = ACTIONS(118),
  },
  [17] = {
    [sym__maybe_dotted_id] = STATE(15),
    [aux_sym__maybe_dotted_ids1] = STATE(15),
    [sym_id] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_DOT_DOT] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(128),
  },
  [18] = {
    [sym__maybe_dotted_id] = STATE(15),
    [aux_sym__maybe_dotted_ids1] = STATE(15),
    [sym_id] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_DOT_DOT] = ACTIONS(126),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(128),
  },
  [19] = {
    [sym__maybe_dotted_id] = STATE(19),
    [aux_sym__maybe_dotted_ids1] = STATE(19),
    [sym_id] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_DOT_DOT] = ACTIONS(136),
    [anon_sym_2] = ACTIONS(114),
  },
  [20] = {
    [sym__maybe_dotted_id] = STATE(19),
    [aux_sym__maybe_dotted_ids1] = STATE(19),
    [sym_id] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_2] = ACTIONS(145),
  },
  [21] = {
    [sym__maybe_dotted_id] = STATE(20),
    [aux_sym__maybe_dotted_ids1] = STATE(20),
    [sym_id] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT] = ACTIONS(143),
  },
  [22] = {
    [sym__maybe_dotted_id] = STATE(17),
    [aux_sym__maybe_dotted_ids1] = STATE(17),
    [sym_id] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_DOT_DOT] = ACTIONS(126),
  },
  [23] = {
    [sym__maybe_dotted_id] = STATE(18),
    [aux_sym__maybe_dotted_ids1] = STATE(18),
    [sym_id] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_DOT_DOT] = ACTIONS(126),
  },
  [24] = {
    [sym_id] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_DOT_DOT] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(103),
  },
  [25] = {
    [sym_expr] = STATE(60),
    [sym__expr1] = ACTIONS(153),
    [sym__attributes1] = ACTIONS(155),
    [sym__tele_arrow] = ACTIONS(157),
    [sym__application3] = ACTIONS(159),
  },
  [26] = {
    [sym_expr] = STATE(51),
    [sym__expr1] = ACTIONS(153),
    [sym__attributes1] = ACTIONS(155),
    [sym__tele_arrow] = ACTIONS(157),
    [sym__application3] = ACTIONS(159),
  },
  [27] = {
    [sym_expr] = STATE(58),
    [sym__expr1] = ACTIONS(153),
    [sym__attributes1] = ACTIONS(155),
    [sym__tele_arrow] = ACTIONS(157),
    [sym__application3] = ACTIONS(159),
  },
  [28] = {
    [sym_expr] = STATE(57),
    [sym__expr1] = ACTIONS(153),
    [sym__attributes1] = ACTIONS(155),
    [sym__tele_arrow] = ACTIONS(157),
    [sym__application3] = ACTIONS(159),
  },
  [29] = {
    [sym__declaration] = STATE(53),
    [sym_fields] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_field] = ACTIONS(163),
  },
  [30] = {
    [sym__declaration] = STATE(53),
    [sym_fields] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_field] = ACTIONS(5),
  },
  [31] = {
    [sym_expr] = STATE(52),
    [sym__expr1] = ACTIONS(153),
    [sym__attributes1] = ACTIONS(155),
    [sym__tele_arrow] = ACTIONS(157),
    [sym__application3] = ACTIONS(159),
  },
  [32] = {
    [aux_sym_ids1_repeat1] = STATE(35),
    [sym_id] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(172),
  },
  [33] = {
    [sym_id] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_DOT_DOT] = ACTIONS(103),
    [anon_sym_2] = ACTIONS(101),
  },
  [34] = {
    [sym_id] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(178),
    [anon_sym_] = ACTIONS(180),
  },
  [35] = {
    [aux_sym_ids1_repeat1] = STATE(35),
    [sym_id] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(187),
  },
  [36] = {
    [aux_sym_ids1_repeat1] = STATE(36),
    [sym_id] = ACTIONS(189),
    [anon_sym_2] = ACTIONS(185),
  },
  [37] = {
    [aux_sym_ids1_repeat1] = STATE(36),
    [sym_id] = ACTIONS(192),
    [anon_sym_2] = ACTIONS(170),
  },
  [38] = {
    [sym_ids1] = STATE(48),
    [aux_sym_ids1_repeat1] = STATE(32),
    [sym_id] = ACTIONS(194),
  },
  [39] = {
    [sym_ids1] = STATE(49),
    [aux_sym_ids1_repeat1] = STATE(32),
    [sym_id] = ACTIONS(194),
  },
  [40] = {
    [sym_ids1] = STATE(54),
    [aux_sym_ids1_repeat1] = STATE(37),
    [sym_id] = ACTIONS(196),
  },
  [41] = {
    [sym__arg_type_sig_block] = STATE(56),
    [sym__indent] = ACTIONS(198),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(200),
    [sym__newline] = ACTIONS(202),
  },
  [43] = {
    [sym__arg_type_sig_block] = STATE(62),
    [sym__indent] = ACTIONS(198),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_field] = ACTIONS(161),
  },
  [45] = {
    [sym__application3] = ACTIONS(204),
  },
  [46] = {
    [sym__ARROW] = ACTIONS(206),
  },
  [47] = {
    [sym__newline] = ACTIONS(208),
  },
  [48] = {
    [anon_sym_RBRACE] = ACTIONS(210),
  },
  [49] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(210),
  },
  [50] = {
    [sym__ARROW] = ACTIONS(200),
  },
  [51] = {
    [sym__newline] = ACTIONS(212),
  },
  [52] = {
    [sym__newline] = ACTIONS(214),
  },
  [53] = {
    [sym__newline] = ACTIONS(216),
  },
  [54] = {
    [anon_sym_2] = ACTIONS(210),
  },
  [55] = {
    [sym__newline] = ACTIONS(218),
  },
  [56] = {
    [sym__newline] = ACTIONS(220),
  },
  [57] = {
    [sym__newline] = ACTIONS(222),
  },
  [58] = {
    [sym__newline] = ACTIONS(224),
  },
  [59] = {
    [sym__expr_or_attr] = ACTIONS(226),
  },
  [60] = {
    [sym__newline] = ACTIONS(228),
  },
  [61] = {
    [sym_id] = ACTIONS(230),
  },
  [62] = {
    [sym__newline] = ACTIONS(232),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(234),
  },
  [64] = {
    [anon_sym_COLON] = ACTIONS(236),
  },
  [65] = {
    [anon_sym_COLON] = ACTIONS(238),
  },
  [66] = {
    [sym_id] = ACTIONS(240),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(41),
  [7] = {.count = 1, .reusable = false}, SHIFT(5),
  [9] = {.count = 1, .reusable = false}, SHIFT(43),
  [11] = {.count = 1, .reusable = true}, SHIFT(59),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(34),
  [17] = {.count = 1, .reusable = true}, SHIFT(34),
  [19] = {.count = 1, .reusable = false}, SHIFT(22),
  [21] = {.count = 1, .reusable = true}, SHIFT(23),
  [23] = {.count = 1, .reusable = false}, SHIFT(21),
  [25] = {.count = 1, .reusable = true}, SHIFT(55),
  [27] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(5),
  [30] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(43),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(59),
  [36] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(8),
  [39] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(34),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(34),
  [45] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(22),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(23),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(21),
  [54] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [56] = {.count = 1, .reusable = false}, SHIFT(9),
  [58] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [60] = {.count = 1, .reusable = false}, REDUCE(sym__modal_arg_ids, 1),
  [62] = {.count = 1, .reusable = false}, SHIFT(10),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym__modal_arg_ids, 2),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(10),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(34),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(34),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(22),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(23),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(21),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2), SHIFT_REPEAT(59),
  [89] = {.count = 1, .reusable = false}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 3),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 3),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__attribute, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__attribute, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_id, 2),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__maybe_dotted_id, 2),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(15),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(61),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(61),
  [114] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 4),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 4),
  [122] = {.count = 1, .reusable = true}, SHIFT(15),
  [124] = {.count = 1, .reusable = false}, SHIFT(61),
  [126] = {.count = 1, .reusable = true}, SHIFT(61),
  [128] = {.count = 1, .reusable = true}, SHIFT(12),
  [130] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(19),
  [133] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(66),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(66),
  [139] = {.count = 1, .reusable = false}, SHIFT(19),
  [141] = {.count = 1, .reusable = false}, SHIFT(66),
  [143] = {.count = 1, .reusable = true}, SHIFT(66),
  [145] = {.count = 1, .reusable = false}, SHIFT(12),
  [147] = {.count = 1, .reusable = true}, SHIFT(20),
  [149] = {.count = 1, .reusable = true}, SHIFT(17),
  [151] = {.count = 1, .reusable = true}, SHIFT(18),
  [153] = {.count = 1, .reusable = true}, SHIFT(42),
  [155] = {.count = 1, .reusable = true}, SHIFT(45),
  [157] = {.count = 1, .reusable = true}, SHIFT(28),
  [159] = {.count = 1, .reusable = true}, SHIFT(50),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [168] = {.count = 1, .reusable = true}, SHIFT(35),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_ids1, 1),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_ids1, 1),
  [174] = {.count = 1, .reusable = false}, SHIFT(14),
  [176] = {.count = 1, .reusable = false}, SHIFT(38),
  [178] = {.count = 1, .reusable = true}, SHIFT(39),
  [180] = {.count = 1, .reusable = false}, SHIFT(40),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ids1_repeat1, 2), SHIFT_REPEAT(35),
  [185] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ids1_repeat1, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ids1_repeat1, 2),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ids1_repeat1, 2), SHIFT_REPEAT(36),
  [192] = {.count = 1, .reusable = false}, SHIFT(36),
  [194] = {.count = 1, .reusable = true}, SHIFT(32),
  [196] = {.count = 1, .reusable = true}, SHIFT(37),
  [198] = {.count = 1, .reusable = true}, SHIFT(4),
  [200] = {.count = 1, .reusable = true}, SHIFT(27),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [204] = {.count = 1, .reusable = true}, SHIFT(46),
  [206] = {.count = 1, .reusable = true}, SHIFT(25),
  [208] = {.count = 1, .reusable = true}, SHIFT(7),
  [210] = {.count = 1, .reusable = true}, SHIFT(16),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 4),
  [216] = {.count = 1, .reusable = true}, SHIFT(44),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_sig_block, 3),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 2),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [226] = {.count = 1, .reusable = true}, SHIFT(13),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 4),
  [230] = {.count = 1, .reusable = true}, SHIFT(24),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 2),
  [234] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [236] = {.count = 1, .reusable = true}, SHIFT(31),
  [238] = {.count = 1, .reusable = true}, SHIFT(26),
  [240] = {.count = 1, .reusable = true}, SHIFT(33),
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
