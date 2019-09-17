#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 124
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__ARROW = 1,
  anon_sym_field = 2,
  anon_sym_overlap = 3,
  anon_sym_COLON = 4,
  anon_sym_instance = 5,
  anon_sym_AT = 6,
  sym_id = 7,
  sym_qid = 8,
  anon_sym_DOT = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LBRACE_LBRACE = 13,
  anon_sym_RBRACE_RBRACE = 14,
  anon_sym_ = 15,
  anon_sym_2 = 16,
  anon_sym_EQ = 17,
  anon_sym__ = 18,
  anon_sym_DASH = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_let = 22,
  sym_Application = 23,
  sym_Open = 24,
  sym__expr1 = 25,
  sym_Attributes1 = 26,
  sym__application3 = 27,
  sym__expr_or_attr = 28,
  sym__newline = 29,
  sym__indent = 30,
  sym__dedent = 31,
  sym_source_file = 32,
  sym__declaration_block = 33,
  sym__declaration = 34,
  sym_fields = 35,
  sym__arg_type_sig_block = 36,
  sym_arg_type_sig = 37,
  sym__modal_arg_ids = 38,
  sym__attribute = 39,
  sym_ids1 = 40,
  sym__maybe_dotted_id = 41,
  aux_sym__maybe_dotted_ids1 = 42,
  aux_sym__arg_ids1 = 43,
  sym__arg_id = 44,
  sym__binding_ids_and_absurds = 45,
  sym_expr = 46,
  sym_typed_bindings1 = 47,
  sym_typed_binding = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym__arg_type_sig_block_repeat1 = 50,
  aux_sym__modal_arg_ids_repeat1 = 51,
  aux_sym_ids1_repeat1 = 52,
  aux_sym_typed_bindings1_repeat1 = 53,
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
  [sym_qid] = "qid",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_] = "⦃",
  [anon_sym_2] = "⦄",
  [anon_sym_EQ] = "=",
  [anon_sym__] = "_",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [sym_Application] = "Application",
  [sym_Open] = "Open",
  [sym__expr1] = "_expr1",
  [sym_Attributes1] = "Attributes1",
  [sym__application3] = "_application3",
  [sym__expr_or_attr] = "_expr_or_attr",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__declaration_block] = "_declaration_block",
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
  [sym__binding_ids_and_absurds] = "_binding_ids_and_absurds",
  [sym_expr] = "expr",
  [sym_typed_bindings1] = "typed_bindings1",
  [sym_typed_binding] = "typed_binding",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__arg_type_sig_block_repeat1] = "_arg_type_sig_block_repeat1",
  [aux_sym__modal_arg_ids_repeat1] = "_modal_arg_ids_repeat1",
  [aux_sym_ids1_repeat1] = "ids1_repeat1",
  [aux_sym_typed_bindings1_repeat1] = "typed_bindings1_repeat1",
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
  [sym_qid] = {
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [sym_Application] = {
    .visible = true,
    .named = true,
  },
  [sym_Open] = {
    .visible = true,
    .named = true,
  },
  [sym__expr1] = {
    .visible = false,
    .named = true,
  },
  [sym_Attributes1] = {
    .visible = true,
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
  [sym__declaration_block] = {
    .visible = false,
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
  [sym__binding_ids_and_absurds] = {
    .visible = false,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_bindings1] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_binding] = {
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
  [aux_sym_typed_bindings1_repeat1] = {
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
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == 8594) ADVANCE(96);
      if (lookahead == 10627) ADVANCE(147);
      if (lookahead == 10628) ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == 8594) ADVANCE(96);
      if (lookahead == 10627) ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == 10627) ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == 10627) ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == 10627) ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '}') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(118);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '}') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(118);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 10628) ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(163);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(163);
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(164);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(166);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == '\\') ADVANCE(94);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(67);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 88:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(146);
      END_STATE();
    case 91:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 92:
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
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(139);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__ARROW);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 99:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 101:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 103:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(113);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(112);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(109);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(114);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(103);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(105);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(115);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(107);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(99);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(110);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(116);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(106);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(108);
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 118:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 148:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 150:
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
          lookahead != '}') ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym__);
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
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_Application);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_Application);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_Application);
      if (lookahead == '3') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_Open);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__expr1);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_Attributes1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_Attributes1);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(139);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__application3);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__expr_or_attr);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5, .external_lex_state = 2},
  [3] = {.lex_state = 5, .external_lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
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
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [sym_Application] = ACTIONS(1),
    [sym_Open] = ACTIONS(1),
    [sym__expr1] = ACTIONS(1),
    [sym_Attributes1] = ACTIONS(1),
    [sym__application3] = ACTIONS(1),
    [sym__expr_or_attr] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(112),
    [sym__declaration] = STATE(111),
    [sym_fields] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_field] = ACTIONS(5),
  },
  [2] = {
    [sym_arg_type_sig] = STATE(104),
    [sym__modal_arg_ids] = STATE(97),
    [sym__attribute] = STATE(20),
    [sym__maybe_dotted_id] = STATE(22),
    [aux_sym__arg_ids1] = STATE(22),
    [sym__arg_id] = STATE(22),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(2),
    [aux_sym__modal_arg_ids_repeat1] = STATE(20),
    [anon_sym_overlap] = ACTIONS(7),
    [anon_sym_instance] = ACTIONS(10),
    [anon_sym_AT] = ACTIONS(13),
    [sym_id] = ACTIONS(16),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(22),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(28),
    [anon_sym_] = ACTIONS(31),
    [sym__dedent] = ACTIONS(34),
  },
  [3] = {
    [sym_arg_type_sig] = STATE(104),
    [sym__modal_arg_ids] = STATE(97),
    [sym__attribute] = STATE(20),
    [sym__maybe_dotted_id] = STATE(22),
    [aux_sym__arg_ids1] = STATE(22),
    [sym__arg_id] = STATE(22),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(2),
    [aux_sym__modal_arg_ids_repeat1] = STATE(20),
    [anon_sym_overlap] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [sym_id] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
    [sym__dedent] = ACTIONS(54),
  },
  [4] = {
    [sym_arg_type_sig] = STATE(104),
    [sym__modal_arg_ids] = STATE(97),
    [sym__attribute] = STATE(20),
    [sym__maybe_dotted_id] = STATE(22),
    [aux_sym__arg_ids1] = STATE(22),
    [sym__arg_id] = STATE(22),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(3),
    [aux_sym__modal_arg_ids_repeat1] = STATE(20),
    [anon_sym_overlap] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(40),
    [sym_id] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
  },
  [5] = {
    [sym_expr] = STATE(95),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [6] = {
    [sym_expr] = STATE(56),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [7] = {
    [sym_expr] = STATE(58),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [8] = {
    [sym_expr] = STATE(93),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [9] = {
    [sym_expr] = STATE(94),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [10] = {
    [sym_expr] = STATE(116),
    [sym_typed_bindings1] = STATE(118),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(74),
    [sym_Attributes1] = ACTIONS(76),
    [sym__application3] = ACTIONS(78),
  },
  [11] = {
    [sym__modal_arg_ids] = STATE(96),
    [sym__attribute] = STATE(20),
    [sym__maybe_dotted_id] = STATE(22),
    [aux_sym__arg_ids1] = STATE(22),
    [sym__arg_id] = STATE(22),
    [aux_sym__modal_arg_ids_repeat1] = STATE(20),
    [anon_sym_AT] = ACTIONS(40),
    [sym_id] = ACTIONS(42),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
  },
  [12] = {
    [sym_expr] = STATE(98),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [13] = {
    [sym_expr] = STATE(117),
    [sym_typed_bindings1] = STATE(118),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(74),
    [sym_Attributes1] = ACTIONS(76),
    [sym__application3] = ACTIONS(78),
  },
  [14] = {
    [sym_expr] = STATE(99),
    [sym_typed_bindings1] = STATE(118),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(74),
    [sym_Attributes1] = ACTIONS(76),
    [sym__application3] = ACTIONS(78),
  },
  [15] = {
    [sym_expr] = STATE(103),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [16] = {
    [sym_expr] = STATE(102),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [17] = {
    [sym_expr] = STATE(101),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [18] = {
    [sym_expr] = STATE(78),
    [sym_typed_bindings1] = STATE(121),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(68),
    [sym_Attributes1] = ACTIONS(70),
    [sym__application3] = ACTIONS(72),
  },
  [19] = {
    [sym_expr] = STATE(86),
    [sym_typed_bindings1] = STATE(118),
    [sym_typed_binding] = STATE(25),
    [aux_sym_typed_bindings1_repeat1] = STATE(25),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym__expr1] = ACTIONS(74),
    [sym_Attributes1] = ACTIONS(76),
    [sym__application3] = ACTIONS(78),
  },
  [20] = {
    [sym__attribute] = STATE(27),
    [sym__maybe_dotted_id] = STATE(21),
    [aux_sym__arg_ids1] = STATE(21),
    [sym__arg_id] = STATE(21),
    [aux_sym__modal_arg_ids_repeat1] = STATE(27),
    [anon_sym_AT] = ACTIONS(40),
    [sym_id] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
  },
  [21] = {
    [sym__maybe_dotted_id] = STATE(24),
    [aux_sym__arg_ids1] = STATE(24),
    [sym__arg_id] = STATE(24),
    [anon_sym_COLON] = ACTIONS(82),
    [sym_id] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
  },
  [22] = {
    [sym__maybe_dotted_id] = STATE(24),
    [aux_sym__arg_ids1] = STATE(24),
    [sym__arg_id] = STATE(24),
    [anon_sym_COLON] = ACTIONS(86),
    [sym_id] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(50),
    [anon_sym_] = ACTIONS(52),
  },
  [23] = {
    [anon_sym_overlap] = ACTIONS(88),
    [anon_sym_instance] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(34),
    [sym_id] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_DOT_DOT] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(34),
    [anon_sym_] = ACTIONS(88),
    [sym__dedent] = ACTIONS(34),
  },
  [24] = {
    [sym__maybe_dotted_id] = STATE(24),
    [aux_sym__arg_ids1] = STATE(24),
    [sym__arg_id] = STATE(24),
    [anon_sym_COLON] = ACTIONS(90),
    [sym_id] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(104),
    [anon_sym_] = ACTIONS(107),
  },
  [25] = {
    [sym_typed_binding] = STATE(26),
    [aux_sym_typed_bindings1_repeat1] = STATE(26),
    [sym__ARROW] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(56),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(62),
    [anon_sym_] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(66),
  },
  [26] = {
    [sym_typed_binding] = STATE(26),
    [aux_sym_typed_bindings1_repeat1] = STATE(26),
    [sym__ARROW] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(123),
    [anon_sym_] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(129),
  },
  [27] = {
    [sym__attribute] = STATE(27),
    [aux_sym__modal_arg_ids_repeat1] = STATE(27),
    [anon_sym_AT] = ACTIONS(132),
    [sym_id] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(137),
    [anon_sym_] = ACTIONS(135),
  },
  [28] = {
    [sym__ARROW] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(139),
    [anon_sym_] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
  },
  [29] = {
    [sym__ARROW] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(143),
    [anon_sym_] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [30] = {
    [anon_sym_AT] = ACTIONS(147),
    [sym_id] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [anon_sym_] = ACTIONS(149),
  },
  [31] = {
    [anon_sym_COLON] = ACTIONS(151),
    [sym_id] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(153),
    [anon_sym_] = ACTIONS(151),
  },
  [32] = {
    [sym__maybe_dotted_id] = STATE(32),
    [aux_sym__maybe_dotted_ids1] = STATE(32),
    [sym_id] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(166),
  },
  [33] = {
    [sym__ARROW] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_DOT_DOT] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(168),
    [anon_sym_] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
  },
  [34] = {
    [anon_sym_COLON] = ACTIONS(172),
    [sym_id] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_DOT_DOT] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(174),
    [anon_sym_] = ACTIONS(172),
  },
  [35] = {
    [sym__ARROW] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_DOT_DOT] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(176),
    [anon_sym_] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(176),
  },
  [36] = {
    [anon_sym_COLON] = ACTIONS(180),
    [sym_id] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_DOT_DOT] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(182),
    [anon_sym_] = ACTIONS(180),
  },
  [37] = {
    [sym__maybe_dotted_id] = STATE(37),
    [aux_sym__maybe_dotted_ids1] = STATE(37),
    [sym_id] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(190),
    [anon_sym_2] = ACTIONS(164),
  },
  [38] = {
    [sym__maybe_dotted_id] = STATE(37),
    [aux_sym__maybe_dotted_ids1] = STATE(37),
    [sym_id] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(197),
    [anon_sym_2] = ACTIONS(199),
  },
  [39] = {
    [sym__maybe_dotted_id] = STATE(32),
    [aux_sym__maybe_dotted_ids1] = STATE(32),
    [sym_id] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(207),
  },
  [40] = {
    [sym__maybe_dotted_id] = STATE(32),
    [aux_sym__maybe_dotted_ids1] = STATE(32),
    [sym_id] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(207),
  },
  [41] = {
    [sym__declaration] = STATE(119),
    [sym_fields] = STATE(119),
    [aux_sym_source_file_repeat1] = STATE(44),
    [anon_sym_field] = ACTIONS(5),
    [sym__dedent] = ACTIONS(209),
  },
  [42] = {
    [sym__maybe_dotted_id] = STATE(40),
    [aux_sym__maybe_dotted_ids1] = STATE(40),
    [sym_id] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
  },
  [43] = {
    [sym__maybe_dotted_id] = STATE(39),
    [aux_sym__maybe_dotted_ids1] = STATE(39),
    [sym_id] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_DOT_DOT] = ACTIONS(205),
  },
  [44] = {
    [sym__declaration] = STATE(119),
    [sym_fields] = STATE(119),
    [aux_sym_source_file_repeat1] = STATE(44),
    [anon_sym_field] = ACTIONS(215),
    [sym__dedent] = ACTIONS(218),
  },
  [45] = {
    [sym_id] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(153),
  },
  [46] = {
    [sym__maybe_dotted_id] = STATE(38),
    [aux_sym__maybe_dotted_ids1] = STATE(38),
    [sym_id] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_DOT_DOT] = ACTIONS(197),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(224),
    [anon_sym_2] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(224),
  },
  [48] = {
    [sym__binding_ids_and_absurds] = STATE(113),
    [sym_qid] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_Application] = ACTIONS(230),
    [sym_Attributes1] = ACTIONS(232),
  },
  [49] = {
    [sym__binding_ids_and_absurds] = STATE(110),
    [sym_qid] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_Application] = ACTIONS(234),
    [sym_Attributes1] = ACTIONS(236),
  },
  [50] = {
    [sym__binding_ids_and_absurds] = STATE(107),
    [sym_qid] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_Application] = ACTIONS(238),
    [sym_Attributes1] = ACTIONS(240),
  },
  [51] = {
    [sym__declaration] = STATE(111),
    [sym_fields] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_field] = ACTIONS(215),
  },
  [52] = {
    [sym__declaration] = STATE(111),
    [sym_fields] = STATE(111),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_field] = ACTIONS(5),
  },
  [53] = {
    [sym__binding_ids_and_absurds] = STATE(79),
    [sym_qid] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_Application] = ACTIONS(244),
  },
  [54] = {
    [sym_id] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(250),
    [anon_sym_] = ACTIONS(252),
  },
  [55] = {
    [sym_id] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(153),
    [anon_sym_2] = ACTIONS(151),
  },
  [56] = {
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(256),
    [anon_sym_2] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
  },
  [57] = {
    [aux_sym_ids1_repeat1] = STATE(59),
    [sym_id] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(262),
  },
  [58] = {
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(266),
    [anon_sym_2] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
  },
  [59] = {
    [aux_sym_ids1_repeat1] = STATE(59),
    [sym_id] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(271),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(273),
  },
  [60] = {
    [sym__binding_ids_and_absurds] = STATE(89),
    [sym_qid] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_Application] = ACTIONS(275),
  },
  [61] = {
    [sym__binding_ids_and_absurds] = STATE(100),
    [sym_qid] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [sym_Application] = ACTIONS(277),
  },
  [62] = {
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(279),
    [anon_sym_] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(283),
  },
  [63] = {
    [anon_sym_let] = ACTIONS(285),
    [sym_Application] = ACTIONS(287),
    [sym_Open] = ACTIONS(289),
    [sym_Attributes1] = ACTIONS(283),
  },
  [64] = {
    [sym__declaration] = STATE(119),
    [sym_fields] = STATE(119),
    [aux_sym_source_file_repeat1] = STATE(41),
    [anon_sym_field] = ACTIONS(5),
  },
  [65] = {
    [aux_sym_ids1_repeat1] = STATE(65),
    [sym_id] = ACTIONS(291),
    [anon_sym_2] = ACTIONS(271),
  },
  [66] = {
    [sym_ids1] = STATE(84),
    [aux_sym_ids1_repeat1] = STATE(57),
    [sym_id] = ACTIONS(294),
  },
  [67] = {
    [aux_sym_ids1_repeat1] = STATE(65),
    [sym_id] = ACTIONS(296),
    [anon_sym_2] = ACTIONS(260),
  },
  [68] = {
    [sym_ids1] = STATE(82),
    [aux_sym_ids1_repeat1] = STATE(57),
    [sym_id] = ACTIONS(294),
  },
  [69] = {
    [sym_ids1] = STATE(81),
    [aux_sym_ids1_repeat1] = STATE(67),
    [sym_id] = ACTIONS(298),
  },
  [70] = {
    [anon_sym_field] = ACTIONS(218),
    [sym__dedent] = ACTIONS(218),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [anon_sym_field] = ACTIONS(218),
  },
  [72] = {
    [sym__declaration_block] = STATE(83),
    [sym__indent] = ACTIONS(300),
  },
  [73] = {
    [anon_sym_EQ] = ACTIONS(302),
    [sym__newline] = ACTIONS(224),
  },
  [74] = {
    [sym__arg_type_sig_block] = STATE(91),
    [sym__indent] = ACTIONS(304),
  },
  [75] = {
    [sym_qid] = ACTIONS(306),
    [anon_sym__] = ACTIONS(308),
  },
  [76] = {
    [sym__arg_type_sig_block] = STATE(109),
    [sym__indent] = ACTIONS(304),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(310),
  },
  [78] = {
    [anon_sym_RBRACE] = ACTIONS(312),
  },
  [79] = {
    [anon_sym_COLON] = ACTIONS(314),
  },
  [80] = {
    [anon_sym_COLON] = ACTIONS(316),
  },
  [81] = {
    [anon_sym_2] = ACTIONS(318),
  },
  [82] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(318),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(320),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(318),
  },
  [85] = {
    [sym__newline] = ACTIONS(322),
  },
  [86] = {
    [sym__newline] = ACTIONS(266),
  },
  [87] = {
    [sym_id] = ACTIONS(324),
  },
  [88] = {
    [sym__application3] = ACTIONS(326),
  },
  [89] = {
    [anon_sym_COLON] = ACTIONS(328),
  },
  [90] = {
    [sym__ARROW] = ACTIONS(330),
  },
  [91] = {
    [sym__newline] = ACTIONS(332),
  },
  [92] = {
    [anon_sym_COLON] = ACTIONS(334),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(336),
  },
  [94] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(336),
  },
  [95] = {
    [anon_sym_2] = ACTIONS(336),
  },
  [96] = {
    [anon_sym_COLON] = ACTIONS(338),
  },
  [97] = {
    [anon_sym_COLON] = ACTIONS(340),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(336),
  },
  [99] = {
    [sym__newline] = ACTIONS(256),
  },
  [100] = {
    [anon_sym_COLON] = ACTIONS(342),
  },
  [101] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(312),
  },
  [102] = {
    [anon_sym_2] = ACTIONS(312),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(312),
  },
  [104] = {
    [sym__newline] = ACTIONS(344),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(346),
  },
  [106] = {
    [anon_sym_COLON] = ACTIONS(348),
  },
  [107] = {
    [anon_sym_COLON] = ACTIONS(350),
  },
  [108] = {
    [sym__expr_or_attr] = ACTIONS(352),
  },
  [109] = {
    [sym__newline] = ACTIONS(354),
  },
  [110] = {
    [anon_sym_COLON] = ACTIONS(356),
  },
  [111] = {
    [sym__newline] = ACTIONS(358),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(360),
  },
  [113] = {
    [anon_sym_COLON] = ACTIONS(362),
  },
  [114] = {
    [anon_sym_EQ] = ACTIONS(364),
  },
  [115] = {
    [sym_Application] = ACTIONS(366),
  },
  [116] = {
    [sym__newline] = ACTIONS(368),
  },
  [117] = {
    [sym__newline] = ACTIONS(370),
  },
  [118] = {
    [sym__ARROW] = ACTIONS(302),
  },
  [119] = {
    [sym__newline] = ACTIONS(372),
  },
  [120] = {
    [sym_id] = ACTIONS(374),
  },
  [121] = {
    [sym__ARROW] = ACTIONS(226),
  },
  [122] = {
    [sym__ARROW] = ACTIONS(376),
  },
  [123] = {
    [sym__application3] = ACTIONS(378),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(76),
  [7] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(11),
  [10] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(74),
  [13] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(108),
  [16] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(22),
  [19] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(54),
  [22] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(54),
  [25] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(42),
  [28] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(43),
  [31] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(46),
  [34] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [36] = {.count = 1, .reusable = false}, SHIFT(11),
  [38] = {.count = 1, .reusable = false}, SHIFT(74),
  [40] = {.count = 1, .reusable = true}, SHIFT(108),
  [42] = {.count = 1, .reusable = false}, SHIFT(22),
  [44] = {.count = 1, .reusable = false}, SHIFT(54),
  [46] = {.count = 1, .reusable = true}, SHIFT(54),
  [48] = {.count = 1, .reusable = false}, SHIFT(42),
  [50] = {.count = 1, .reusable = true}, SHIFT(43),
  [52] = {.count = 1, .reusable = false}, SHIFT(46),
  [54] = {.count = 1, .reusable = true}, SHIFT(85),
  [56] = {.count = 1, .reusable = false}, SHIFT(62),
  [58] = {.count = 1, .reusable = true}, SHIFT(62),
  [60] = {.count = 1, .reusable = false}, SHIFT(48),
  [62] = {.count = 1, .reusable = true}, SHIFT(49),
  [64] = {.count = 1, .reusable = true}, SHIFT(50),
  [66] = {.count = 1, .reusable = true}, SHIFT(63),
  [68] = {.count = 1, .reusable = true}, SHIFT(47),
  [70] = {.count = 1, .reusable = true}, SHIFT(123),
  [72] = {.count = 1, .reusable = true}, SHIFT(121),
  [74] = {.count = 1, .reusable = true}, SHIFT(73),
  [76] = {.count = 1, .reusable = true}, SHIFT(88),
  [78] = {.count = 1, .reusable = true}, SHIFT(118),
  [80] = {.count = 1, .reusable = false}, SHIFT(21),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym__modal_arg_ids, 2),
  [84] = {.count = 1, .reusable = false}, SHIFT(24),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym__modal_arg_ids, 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [90] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2),
  [92] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(24),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(54),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(54),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(42),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(43),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids1, 2), SHIFT_REPEAT(46),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_typed_bindings1, 1),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(62),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(62),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(48),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(49),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(50),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(63),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2), SHIFT_REPEAT(108),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 4),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 4),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__attribute, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__attribute, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_id, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__maybe_dotted_id, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(32),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(87),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(87),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 3),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 3),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 4),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 4),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(37),
  [187] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(120),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids1, 2), SHIFT_REPEAT(120),
  [193] = {.count = 1, .reusable = false}, SHIFT(37),
  [195] = {.count = 1, .reusable = false}, SHIFT(120),
  [197] = {.count = 1, .reusable = true}, SHIFT(120),
  [199] = {.count = 1, .reusable = false}, SHIFT(34),
  [201] = {.count = 1, .reusable = true}, SHIFT(32),
  [203] = {.count = 1, .reusable = false}, SHIFT(87),
  [205] = {.count = 1, .reusable = true}, SHIFT(87),
  [207] = {.count = 1, .reusable = true}, SHIFT(34),
  [209] = {.count = 1, .reusable = true}, SHIFT(105),
  [211] = {.count = 1, .reusable = true}, SHIFT(40),
  [213] = {.count = 1, .reusable = true}, SHIFT(39),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(38),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [226] = {.count = 1, .reusable = true}, SHIFT(7),
  [228] = {.count = 1, .reusable = false}, SHIFT(114),
  [230] = {.count = 1, .reusable = false}, SHIFT(113),
  [232] = {.count = 1, .reusable = false}, SHIFT(60),
  [234] = {.count = 1, .reusable = false}, SHIFT(110),
  [236] = {.count = 1, .reusable = false}, SHIFT(61),
  [238] = {.count = 1, .reusable = false}, SHIFT(107),
  [240] = {.count = 1, .reusable = false}, SHIFT(53),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [244] = {.count = 1, .reusable = false}, SHIFT(79),
  [246] = {.count = 1, .reusable = false}, SHIFT(31),
  [248] = {.count = 1, .reusable = false}, SHIFT(66),
  [250] = {.count = 1, .reusable = true}, SHIFT(68),
  [252] = {.count = 1, .reusable = false}, SHIFT(69),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 4),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 4),
  [258] = {.count = 1, .reusable = true}, SHIFT(59),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_ids1, 1),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_ids1, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ids1_repeat1, 2), SHIFT_REPEAT(59),
  [271] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ids1_repeat1, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ids1_repeat1, 2),
  [275] = {.count = 1, .reusable = false}, SHIFT(89),
  [277] = {.count = 1, .reusable = false}, SHIFT(100),
  [279] = {.count = 1, .reusable = true}, SHIFT(61),
  [281] = {.count = 1, .reusable = true}, SHIFT(53),
  [283] = {.count = 1, .reusable = true}, SHIFT(115),
  [285] = {.count = 1, .reusable = true}, SHIFT(72),
  [287] = {.count = 1, .reusable = true}, SHIFT(106),
  [289] = {.count = 1, .reusable = true}, SHIFT(77),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ids1_repeat1, 2), SHIFT_REPEAT(65),
  [294] = {.count = 1, .reusable = true}, SHIFT(57),
  [296] = {.count = 1, .reusable = false}, SHIFT(65),
  [298] = {.count = 1, .reusable = true}, SHIFT(67),
  [300] = {.count = 1, .reusable = true}, SHIFT(64),
  [302] = {.count = 1, .reusable = true}, SHIFT(19),
  [304] = {.count = 1, .reusable = true}, SHIFT(4),
  [306] = {.count = 1, .reusable = true}, SHIFT(92),
  [308] = {.count = 1, .reusable = false}, SHIFT(92),
  [310] = {.count = 1, .reusable = true}, SHIFT(33),
  [312] = {.count = 1, .reusable = true}, SHIFT(35),
  [314] = {.count = 1, .reusable = true}, SHIFT(16),
  [316] = {.count = 1, .reusable = true}, SHIFT(15),
  [318] = {.count = 1, .reusable = true}, SHIFT(36),
  [320] = {.count = 1, .reusable = true}, SHIFT(29),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_sig_block, 3),
  [324] = {.count = 1, .reusable = true}, SHIFT(45),
  [326] = {.count = 1, .reusable = true}, SHIFT(90),
  [328] = {.count = 1, .reusable = true}, SHIFT(18),
  [330] = {.count = 1, .reusable = true}, SHIFT(14),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 2),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__binding_ids_and_absurds, 3),
  [336] = {.count = 1, .reusable = true}, SHIFT(28),
  [338] = {.count = 1, .reusable = true}, SHIFT(10),
  [340] = {.count = 1, .reusable = true}, SHIFT(13),
  [342] = {.count = 1, .reusable = true}, SHIFT(17),
  [344] = {.count = 1, .reusable = true}, SHIFT(23),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym__declaration_block, 3),
  [348] = {.count = 1, .reusable = true}, SHIFT(12),
  [350] = {.count = 1, .reusable = true}, SHIFT(5),
  [352] = {.count = 1, .reusable = true}, SHIFT(30),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [356] = {.count = 1, .reusable = true}, SHIFT(9),
  [358] = {.count = 1, .reusable = true}, SHIFT(71),
  [360] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [362] = {.count = 1, .reusable = true}, SHIFT(8),
  [364] = {.count = 1, .reusable = true}, SHIFT(75),
  [366] = {.count = 1, .reusable = true}, SHIFT(80),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 4),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 3),
  [372] = {.count = 1, .reusable = true}, SHIFT(70),
  [374] = {.count = 1, .reusable = true}, SHIFT(55),
  [376] = {.count = 1, .reusable = true}, SHIFT(6),
  [378] = {.count = 1, .reusable = true}, SHIFT(122),
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
