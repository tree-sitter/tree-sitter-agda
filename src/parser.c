#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 193
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__FORALL = 1,
  sym__ARROW = 2,
  sym__LAMBDA = 3,
  sym__ELLIPSIS = 4,
  anon_sym_field = 5,
  anon_sym_overlap = 6,
  anon_sym_COLON = 7,
  anon_sym_instance = 8,
  sym_id = 9,
  sym_qid = 10,
  anon_sym_DOT = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACE_LBRACE = 15,
  anon_sym_RBRACE_RBRACE = 16,
  anon_sym_ = 17,
  anon_sym_2 = 18,
  anon_sym_EQ = 19,
  anon_sym__ = 20,
  anon_sym_DASH = 21,
  anon_sym_AT = 22,
  anon_sym_PIPE = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  sym_atom = 26,
  anon_sym_let = 27,
  anon_sym_do = 28,
  anon_sym_quoteGoal = 29,
  anon_sym_in = 30,
  anon_sym_tactic = 31,
  sym_Literal = 32,
  sym_Open = 33,
  sym_LamBindings = 34,
  sym_ExtendedOrAbsurdLam = 35,
  sym_ForallBindings = 36,
  sym_LetBody = 37,
  sym_DoBlock = 38,
  sym__newline = 39,
  sym__indent = 40,
  sym__dedent = 41,
  sym_source_file = 42,
  sym__declaration_block = 43,
  sym__declaration = 44,
  sym_fields = 45,
  sym__arg_type_sig_block = 46,
  sym_arg_type_sig = 47,
  sym__modal_arg_ids = 48,
  sym_ids = 49,
  sym__maybe_dotted_id = 50,
  aux_sym__maybe_dotted_ids = 51,
  aux_sym__arg_ids = 52,
  sym__arg_id = 53,
  sym__binding_ids_and_absurds = 54,
  sym_attribute = 55,
  sym_attributes1 = 56,
  sym_expr = 57,
  sym__with_exprs = 58,
  sym__expr_or_attr = 59,
  sym_atoms = 60,
  sym__application = 61,
  sym_Expr2 = 62,
  sym_typed_bindings1 = 63,
  sym_typed_binding = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym__arg_type_sig_block_repeat1 = 66,
  aux_sym__modal_arg_ids_repeat1 = 67,
  aux_sym_ids_repeat1 = 68,
  aux_sym__with_exprs_repeat1 = 69,
  aux_sym_atoms_repeat1 = 70,
  aux_sym_typed_bindings1_repeat1 = 71,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__FORALL] = "_FORALL",
  [sym__ARROW] = "_ARROW",
  [sym__LAMBDA] = "_LAMBDA",
  [sym__ELLIPSIS] = "_ELLIPSIS",
  [anon_sym_field] = "field",
  [anon_sym_overlap] = "overlap",
  [anon_sym_COLON] = ":",
  [anon_sym_instance] = "instance",
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
  [anon_sym_AT] = "@",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_atom] = "atom",
  [anon_sym_let] = "let",
  [anon_sym_do] = "do",
  [anon_sym_quoteGoal] = "quoteGoal",
  [anon_sym_in] = "in",
  [anon_sym_tactic] = "tactic",
  [sym_Literal] = "Literal",
  [sym_Open] = "Open",
  [sym_LamBindings] = "LamBindings",
  [sym_ExtendedOrAbsurdLam] = "ExtendedOrAbsurdLam",
  [sym_ForallBindings] = "ForallBindings",
  [sym_LetBody] = "LetBody",
  [sym_DoBlock] = "DoBlock",
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
  [sym_ids] = "ids",
  [sym__maybe_dotted_id] = "_maybe_dotted_id",
  [aux_sym__maybe_dotted_ids] = "_maybe_dotted_ids",
  [aux_sym__arg_ids] = "_arg_ids",
  [sym__arg_id] = "_arg_id",
  [sym__binding_ids_and_absurds] = "_binding_ids_and_absurds",
  [sym_attribute] = "attribute",
  [sym_attributes1] = "attributes1",
  [sym_expr] = "expr",
  [sym__with_exprs] = "_with_exprs",
  [sym__expr_or_attr] = "_expr_or_attr",
  [sym_atoms] = "atoms",
  [sym__application] = "_application",
  [sym_Expr2] = "Expr2",
  [sym_typed_bindings1] = "typed_bindings1",
  [sym_typed_binding] = "typed_binding",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__arg_type_sig_block_repeat1] = "_arg_type_sig_block_repeat1",
  [aux_sym__modal_arg_ids_repeat1] = "_modal_arg_ids_repeat1",
  [aux_sym_ids_repeat1] = "ids_repeat1",
  [aux_sym__with_exprs_repeat1] = "_with_exprs_repeat1",
  [aux_sym_atoms_repeat1] = "atoms_repeat1",
  [aux_sym_typed_bindings1_repeat1] = "typed_bindings1_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__FORALL] = {
    .visible = false,
    .named = true,
  },
  [sym__ARROW] = {
    .visible = false,
    .named = true,
  },
  [sym__LAMBDA] = {
    .visible = false,
    .named = true,
  },
  [sym__ELLIPSIS] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quoteGoal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tactic] = {
    .visible = true,
    .named = false,
  },
  [sym_Literal] = {
    .visible = true,
    .named = true,
  },
  [sym_Open] = {
    .visible = true,
    .named = true,
  },
  [sym_LamBindings] = {
    .visible = true,
    .named = true,
  },
  [sym_ExtendedOrAbsurdLam] = {
    .visible = true,
    .named = true,
  },
  [sym_ForallBindings] = {
    .visible = true,
    .named = true,
  },
  [sym_LetBody] = {
    .visible = true,
    .named = true,
  },
  [sym_DoBlock] = {
    .visible = true,
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
  [sym_ids] = {
    .visible = true,
    .named = true,
  },
  [sym__maybe_dotted_id] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__maybe_dotted_ids] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_ids] = {
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
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes1] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__with_exprs] = {
    .visible = false,
    .named = true,
  },
  [sym__expr_or_attr] = {
    .visible = false,
    .named = true,
  },
  [sym_atoms] = {
    .visible = true,
    .named = true,
  },
  [sym__application] = {
    .visible = false,
    .named = true,
  },
  [sym_Expr2] = {
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
  [aux_sym_ids_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__with_exprs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atoms_repeat1] = {
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
      if (lookahead == 0) ADVANCE(120);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'D') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == '\\' ||
          lookahead == 955) ADVANCE(124);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'q') ADVANCE(111);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead == 8230) ADVANCE(127);
      if (lookahead == 8594) ADVANCE(123);
      if (lookahead == 8704) ADVANCE(121);
      if (lookahead == 10627) ADVANCE(207);
      if (lookahead == 10628) ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '\\' ||
          lookahead == 955) ADVANCE(124);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'q') ADVANCE(111);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead == 8594) ADVANCE(123);
      if (lookahead == 8704) ADVANCE(121);
      if (lookahead == 10627) ADVANCE(207);
      if (lookahead == 10628) ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '_') ADVANCE(117);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(126);
      if (lookahead == '_') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == 'q') ADVANCE(195);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '}') ADVANCE(203);
      if (lookahead == 955) ADVANCE(125);
      if (lookahead == 8704) ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '{') ADVANCE(197);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == 10627) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == 10627) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead)) ADVANCE(148);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '@') ADVANCE(216);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead == 10627) ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(148);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(148);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '}') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 10628) ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(89);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '_') ADVANCE(117);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 112:
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(239);
      END_STATE();
    case 115:
      if (lookahead == '}') ADVANCE(206);
      END_STATE();
    case 116:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 117:
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 118:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(197);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__FORALL);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__FORALL);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__ARROW);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__LAMBDA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__LAMBDA);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__LAMBDA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(197);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ELLIPSIS);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 130:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 132:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 134:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(143);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'a') ADVANCE(142);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'c') ADVANCE(139);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(144);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'e') ADVANCE(134);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'l') ADVANCE(135);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(145);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'n') ADVANCE(137);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'p') ADVANCE(130);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'r') ADVANCE(140);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 's') ADVANCE(146);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 't') ADVANCE(136);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'v') ADVANCE(138);
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 148:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'A') ADVANCE(158);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'G') ADVANCE(181);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'L') ADVANCE(155);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(183);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(160);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(174);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(176);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(172);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'a') ADVANCE(173);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(187);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(231);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(189);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(152);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(151);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(166);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(177);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(150);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(161);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(188);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(186);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(159);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(193);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(122);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(227);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(233);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(171);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(221);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(237);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(163);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(225);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(184);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(175);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(156);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(192);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(149);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(154);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(162);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(157);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 's') ADVANCE(194);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 't') ADVANCE(223);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 't') ADVANCE(169);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 't') ADVANCE(164);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 't') ADVANCE(180);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 't') ADVANCE(165);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 't') ADVANCE(168);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(185);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(182);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(190);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_qid);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(127);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 208:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 210:
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
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 213:
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(123);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_quoteGoal);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_quoteGoal);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_tactic);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_tactic);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_Literal);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_Literal);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_Open);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_LamBindings);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ExtendedOrAbsurdLam);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ExtendedOrAbsurdLam);
      if (lookahead == '.') ADVANCE(21);
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
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ForallBindings);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_LetBody);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_DoBlock);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 5, .external_lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5, .external_lex_state = 2},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1, .external_lex_state = 3},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 5, .external_lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0, .external_lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
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
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__FORALL] = ACTIONS(1),
    [sym__ARROW] = ACTIONS(1),
    [sym__LAMBDA] = ACTIONS(1),
    [sym__ELLIPSIS] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_overlap] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_quoteGoal] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_tactic] = ACTIONS(1),
    [sym_Literal] = ACTIONS(1),
    [sym_Open] = ACTIONS(1),
    [sym_LamBindings] = ACTIONS(1),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(1),
    [sym_ForallBindings] = ACTIONS(1),
    [sym_LetBody] = ACTIONS(1),
    [sym_DoBlock] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(192),
    [sym__declaration] = STATE(188),
    [sym_fields] = STATE(188),
    [aux_sym_source_file_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_field] = ACTIONS(5),
  },
  [2] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(77),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [3] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(111),
    [sym_expr] = STATE(135),
    [sym__with_exprs] = STATE(126),
    [sym_atoms] = STATE(122),
    [sym__application] = STATE(126),
    [sym_Expr2] = STATE(126),
    [sym_typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [4] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(76),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [5] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(83),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [6] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(139),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [7] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(111),
    [sym_expr] = STATE(189),
    [sym__with_exprs] = STATE(126),
    [sym_atoms] = STATE(122),
    [sym__application] = STATE(126),
    [sym_Expr2] = STATE(126),
    [sym_typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [8] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(111),
    [sym_expr] = STATE(119),
    [sym__with_exprs] = STATE(126),
    [sym_atoms] = STATE(122),
    [sym__application] = STATE(126),
    [sym_Expr2] = STATE(126),
    [sym_typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [9] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(152),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [10] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(111),
    [sym_expr] = STATE(132),
    [sym__with_exprs] = STATE(126),
    [sym_atoms] = STATE(122),
    [sym__application] = STATE(126),
    [sym_Expr2] = STATE(126),
    [sym_typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [11] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(111),
    [sym_expr] = STATE(118),
    [sym__with_exprs] = STATE(126),
    [sym_atoms] = STATE(122),
    [sym__application] = STATE(126),
    [sym_Expr2] = STATE(126),
    [sym_typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [12] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(142),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [13] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(143),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [14] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(144),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [15] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(151),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [16] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(180),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [17] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(148),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [18] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(147),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [19] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(78),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [20] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(111),
    [sym_expr] = STATE(186),
    [sym__with_exprs] = STATE(126),
    [sym_atoms] = STATE(122),
    [sym__application] = STATE(126),
    [sym_Expr2] = STATE(126),
    [sym_typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [21] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(141),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [22] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(114),
    [sym_expr] = STATE(187),
    [sym__with_exprs] = STATE(79),
    [sym_atoms] = STATE(131),
    [sym__application] = STATE(79),
    [sym_Expr2] = STATE(79),
    [sym_typed_bindings1] = STATE(191),
    [sym_typed_binding] = STATE(62),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [aux_sym_typed_bindings1_repeat1] = STATE(62),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [23] = {
    [sym_arg_type_sig] = STATE(150),
    [sym__modal_arg_ids] = STATE(149),
    [sym__maybe_dotted_id] = STATE(52),
    [aux_sym__arg_ids] = STATE(52),
    [sym__arg_id] = STATE(52),
    [sym_attribute] = STATE(43),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(26),
    [aux_sym__modal_arg_ids_repeat1] = STATE(43),
    [anon_sym_overlap] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(55),
    [sym_id] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(65),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(69),
    [sym__dedent] = ACTIONS(71),
  },
  [24] = {
    [sym__binding_ids_and_absurds] = STATE(174),
    [sym_attribute] = STATE(41),
    [sym_attributes1] = STATE(35),
    [sym__application] = STATE(174),
    [sym_Expr2] = STATE(174),
    [aux_sym__modal_arg_ids_repeat1] = STATE(41),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(73),
    [sym__LAMBDA] = ACTIONS(75),
    [sym_qid] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(79),
    [sym_atom] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_quoteGoal] = ACTIONS(87),
    [anon_sym_tactic] = ACTIONS(89),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(91),
  },
  [25] = {
    [sym__binding_ids_and_absurds] = STATE(179),
    [sym_attribute] = STATE(41),
    [sym_attributes1] = STATE(34),
    [sym__application] = STATE(179),
    [sym_Expr2] = STATE(179),
    [aux_sym__modal_arg_ids_repeat1] = STATE(41),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(73),
    [sym__LAMBDA] = ACTIONS(75),
    [sym_qid] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(79),
    [sym_atom] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_quoteGoal] = ACTIONS(87),
    [anon_sym_tactic] = ACTIONS(89),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(91),
  },
  [26] = {
    [sym_arg_type_sig] = STATE(150),
    [sym__modal_arg_ids] = STATE(149),
    [sym__maybe_dotted_id] = STATE(52),
    [aux_sym__arg_ids] = STATE(52),
    [sym__arg_id] = STATE(52),
    [sym_attribute] = STATE(43),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(26),
    [aux_sym__modal_arg_ids_repeat1] = STATE(43),
    [anon_sym_overlap] = ACTIONS(93),
    [anon_sym_instance] = ACTIONS(96),
    [sym_id] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(102),
    [anon_sym_DOT_DOT] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(111),
    [anon_sym_] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(117),
    [sym__dedent] = ACTIONS(120),
  },
  [27] = {
    [sym__binding_ids_and_absurds] = STATE(172),
    [sym_attribute] = STATE(41),
    [sym_attributes1] = STATE(36),
    [sym__application] = STATE(172),
    [sym_Expr2] = STATE(172),
    [aux_sym__modal_arg_ids_repeat1] = STATE(41),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(73),
    [sym__LAMBDA] = ACTIONS(75),
    [sym_qid] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(79),
    [sym_atom] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_quoteGoal] = ACTIONS(87),
    [anon_sym_tactic] = ACTIONS(89),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(91),
  },
  [28] = {
    [aux_sym_atoms_repeat1] = STATE(28),
    [sym__FORALL] = ACTIONS(122),
    [sym__ARROW] = ACTIONS(122),
    [sym__LAMBDA] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(122),
    [anon_sym_2] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_atom] = ACTIONS(126),
    [anon_sym_let] = ACTIONS(122),
    [anon_sym_do] = ACTIONS(122),
    [anon_sym_quoteGoal] = ACTIONS(122),
    [anon_sym_tactic] = ACTIONS(122),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(122),
  },
  [29] = {
    [sym_arg_type_sig] = STATE(150),
    [sym__modal_arg_ids] = STATE(149),
    [sym__maybe_dotted_id] = STATE(52),
    [aux_sym__arg_ids] = STATE(52),
    [sym__arg_id] = STATE(52),
    [sym_attribute] = STATE(43),
    [aux_sym__arg_type_sig_block_repeat1] = STATE(23),
    [aux_sym__modal_arg_ids_repeat1] = STATE(43),
    [anon_sym_overlap] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(55),
    [sym_id] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(65),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(69),
  },
  [30] = {
    [sym_attribute] = STATE(50),
    [sym_attributes1] = STATE(48),
    [sym__application] = STATE(169),
    [sym_Expr2] = STATE(169),
    [aux_sym__modal_arg_ids_repeat1] = STATE(50),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(21),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_Open] = ACTIONS(131),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [31] = {
    [sym__FORALL] = ACTIONS(133),
    [sym__ARROW] = ACTIONS(133),
    [sym__LAMBDA] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(135),
    [anon_sym_2] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_atom] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_quoteGoal] = ACTIONS(133),
    [anon_sym_tactic] = ACTIONS(133),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(133),
  },
  [32] = {
    [sym__with_exprs] = STATE(78),
    [sym_atoms] = STATE(165),
    [sym__application] = STATE(78),
    [sym_Expr2] = STATE(78),
    [aux_sym__with_exprs_repeat1] = STATE(39),
    [aux_sym_atoms_repeat1] = STATE(45),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [33] = {
    [sym__with_exprs] = STATE(118),
    [sym_atoms] = STATE(165),
    [sym__application] = STATE(118),
    [sym_Expr2] = STATE(118),
    [aux_sym__with_exprs_repeat1] = STATE(40),
    [aux_sym_atoms_repeat1] = STATE(44),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [34] = {
    [sym__binding_ids_and_absurds] = STATE(163),
    [sym__application] = STATE(163),
    [sym_Expr2] = STATE(163),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(73),
    [sym__LAMBDA] = ACTIONS(75),
    [sym_qid] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym_atom] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_quoteGoal] = ACTIONS(87),
    [anon_sym_tactic] = ACTIONS(89),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(91),
  },
  [35] = {
    [sym__binding_ids_and_absurds] = STATE(138),
    [sym__application] = STATE(138),
    [sym_Expr2] = STATE(138),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(73),
    [sym__LAMBDA] = ACTIONS(75),
    [sym_qid] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym_atom] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_quoteGoal] = ACTIONS(87),
    [anon_sym_tactic] = ACTIONS(89),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(91),
  },
  [36] = {
    [sym__binding_ids_and_absurds] = STATE(162),
    [sym__application] = STATE(162),
    [sym_Expr2] = STATE(162),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(73),
    [sym__LAMBDA] = ACTIONS(75),
    [sym_qid] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym_atom] = ACTIONS(81),
    [anon_sym_let] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(85),
    [anon_sym_quoteGoal] = ACTIONS(87),
    [anon_sym_tactic] = ACTIONS(89),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(91),
  },
  [37] = {
    [sym_attribute] = STATE(37),
    [aux_sym__modal_arg_ids_repeat1] = STATE(37),
    [sym__FORALL] = ACTIONS(139),
    [sym__LAMBDA] = ACTIONS(139),
    [sym_qid] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(141),
    [sym_atom] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_do] = ACTIONS(139),
    [anon_sym_quoteGoal] = ACTIONS(139),
    [anon_sym_tactic] = ACTIONS(139),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(139),
  },
  [38] = {
    [sym__modal_arg_ids] = STATE(146),
    [sym__maybe_dotted_id] = STATE(52),
    [aux_sym__arg_ids] = STATE(52),
    [sym__arg_id] = STATE(52),
    [sym_attribute] = STATE(43),
    [aux_sym__modal_arg_ids_repeat1] = STATE(43),
    [sym_id] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(65),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(69),
  },
  [39] = {
    [sym_atoms] = STATE(165),
    [sym__application] = STATE(87),
    [sym_Expr2] = STATE(87),
    [aux_sym__with_exprs_repeat1] = STATE(51),
    [aux_sym_atoms_repeat1] = STATE(45),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [40] = {
    [sym_atoms] = STATE(165),
    [sym__application] = STATE(125),
    [sym_Expr2] = STATE(125),
    [aux_sym__with_exprs_repeat1] = STATE(51),
    [aux_sym_atoms_repeat1] = STATE(44),
    [sym__FORALL] = ACTIONS(37),
    [sym__LAMBDA] = ACTIONS(39),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [41] = {
    [sym_attribute] = STATE(37),
    [aux_sym__modal_arg_ids_repeat1] = STATE(37),
    [sym__FORALL] = ACTIONS(144),
    [sym__LAMBDA] = ACTIONS(144),
    [sym_qid] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(79),
    [sym_atom] = ACTIONS(144),
    [anon_sym_let] = ACTIONS(144),
    [anon_sym_do] = ACTIONS(144),
    [anon_sym_quoteGoal] = ACTIONS(144),
    [anon_sym_tactic] = ACTIONS(144),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(144),
  },
  [42] = {
    [sym__FORALL] = ACTIONS(133),
    [sym__ARROW] = ACTIONS(133),
    [sym__LAMBDA] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(133),
    [sym_atom] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_quoteGoal] = ACTIONS(133),
    [anon_sym_tactic] = ACTIONS(133),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(133),
    [sym__newline] = ACTIONS(135),
  },
  [43] = {
    [sym__maybe_dotted_id] = STATE(55),
    [aux_sym__arg_ids] = STATE(55),
    [sym__arg_id] = STATE(55),
    [sym_attribute] = STATE(61),
    [aux_sym__modal_arg_ids_repeat1] = STATE(61),
    [sym_id] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(65),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(69),
  },
  [44] = {
    [sym_Expr2] = STATE(117),
    [aux_sym_atoms_repeat1] = STATE(28),
    [sym__FORALL] = ACTIONS(37),
    [sym__ARROW] = ACTIONS(148),
    [sym__LAMBDA] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_atom] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(45),
    [anon_sym_quoteGoal] = ACTIONS(47),
    [anon_sym_tactic] = ACTIONS(49),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(51),
  },
  [45] = {
    [sym_Expr2] = STATE(85),
    [aux_sym_atoms_repeat1] = STATE(28),
    [sym__FORALL] = ACTIONS(7),
    [sym__ARROW] = ACTIONS(148),
    [sym__LAMBDA] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [46] = {
    [sym_attribute] = STATE(46),
    [aux_sym__modal_arg_ids_repeat1] = STATE(46),
    [sym__FORALL] = ACTIONS(150),
    [sym__LAMBDA] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(152),
    [sym_atom] = ACTIONS(150),
    [anon_sym_let] = ACTIONS(150),
    [anon_sym_do] = ACTIONS(150),
    [anon_sym_quoteGoal] = ACTIONS(150),
    [anon_sym_tactic] = ACTIONS(150),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(150),
  },
  [47] = {
    [sym__FORALL] = ACTIONS(155),
    [sym__LAMBDA] = ACTIONS(155),
    [sym_qid] = ACTIONS(155),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(157),
    [sym_atom] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_quoteGoal] = ACTIONS(155),
    [anon_sym_tactic] = ACTIONS(155),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(155),
  },
  [48] = {
    [sym__application] = STATE(161),
    [sym_Expr2] = STATE(161),
    [aux_sym_atoms_repeat1] = STATE(54),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [49] = {
    [sym__FORALL] = ACTIONS(159),
    [sym__LAMBDA] = ACTIONS(159),
    [sym_qid] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(161),
    [sym_atom] = ACTIONS(159),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(159),
    [anon_sym_quoteGoal] = ACTIONS(159),
    [anon_sym_tactic] = ACTIONS(159),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(159),
  },
  [50] = {
    [sym_attribute] = STATE(46),
    [aux_sym__modal_arg_ids_repeat1] = STATE(46),
    [sym__FORALL] = ACTIONS(163),
    [sym__LAMBDA] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(21),
    [sym_atom] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(163),
    [anon_sym_quoteGoal] = ACTIONS(163),
    [anon_sym_tactic] = ACTIONS(163),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(163),
  },
  [51] = {
    [sym_atoms] = STATE(165),
    [aux_sym__with_exprs_repeat1] = STATE(51),
    [aux_sym_atoms_repeat1] = STATE(53),
    [sym__FORALL] = ACTIONS(165),
    [sym__LAMBDA] = ACTIONS(165),
    [sym_atom] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [anon_sym_quoteGoal] = ACTIONS(165),
    [anon_sym_tactic] = ACTIONS(165),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(165),
  },
  [52] = {
    [sym__maybe_dotted_id] = STATE(56),
    [aux_sym__arg_ids] = STATE(56),
    [sym__arg_id] = STATE(56),
    [anon_sym_COLON] = ACTIONS(170),
    [sym_id] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(65),
    [anon_sym_] = ACTIONS(67),
  },
  [53] = {
    [aux_sym_atoms_repeat1] = STATE(28),
    [sym__ARROW] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(148),
    [anon_sym_2] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [sym_atom] = ACTIONS(176),
  },
  [54] = {
    [sym_Expr2] = STATE(85),
    [aux_sym_atoms_repeat1] = STATE(28),
    [sym__FORALL] = ACTIONS(7),
    [sym__LAMBDA] = ACTIONS(9),
    [sym_atom] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_do] = ACTIONS(29),
    [anon_sym_quoteGoal] = ACTIONS(31),
    [anon_sym_tactic] = ACTIONS(33),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(35),
  },
  [55] = {
    [sym__maybe_dotted_id] = STATE(56),
    [aux_sym__arg_ids] = STATE(56),
    [sym__arg_id] = STATE(56),
    [anon_sym_COLON] = ACTIONS(178),
    [sym_id] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(65),
    [anon_sym_] = ACTIONS(67),
  },
  [56] = {
    [sym__maybe_dotted_id] = STATE(56),
    [aux_sym__arg_ids] = STATE(56),
    [sym__arg_id] = STATE(56),
    [anon_sym_COLON] = ACTIONS(180),
    [sym_id] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_DOT_DOT] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(194),
    [anon_sym_] = ACTIONS(197),
  },
  [57] = {
    [anon_sym_overlap] = ACTIONS(200),
    [anon_sym_instance] = ACTIONS(200),
    [sym_id] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_DOT_DOT] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(120),
    [anon_sym_] = ACTIONS(200),
    [anon_sym_AT] = ACTIONS(120),
    [sym__dedent] = ACTIONS(120),
  },
  [58] = {
    [sym__FORALL] = ACTIONS(161),
    [sym__LAMBDA] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [sym_atom] = ACTIONS(161),
    [anon_sym_let] = ACTIONS(161),
    [anon_sym_do] = ACTIONS(161),
    [anon_sym_quoteGoal] = ACTIONS(161),
    [anon_sym_tactic] = ACTIONS(161),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(161),
  },
  [59] = {
    [sym_typed_binding] = STATE(59),
    [aux_sym_typed_bindings1_repeat1] = STATE(59),
    [sym__ARROW] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(213),
    [anon_sym_] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(219),
  },
  [60] = {
    [sym__FORALL] = ACTIONS(157),
    [sym__LAMBDA] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [sym_atom] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [anon_sym_quoteGoal] = ACTIONS(157),
    [anon_sym_tactic] = ACTIONS(157),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(157),
  },
  [61] = {
    [sym_attribute] = STATE(61),
    [aux_sym__modal_arg_ids_repeat1] = STATE(61),
    [sym_id] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(150),
    [anon_sym_] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(222),
  },
  [62] = {
    [sym_typed_binding] = STATE(59),
    [aux_sym_typed_bindings1_repeat1] = STATE(59),
    [sym__ARROW] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(17),
    [anon_sym_] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
  },
  [63] = {
    [sym__FORALL] = ACTIONS(165),
    [sym__LAMBDA] = ACTIONS(165),
    [sym_atom] = ACTIONS(165),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [anon_sym_quoteGoal] = ACTIONS(165),
    [anon_sym_tactic] = ACTIONS(165),
    [sym_ExtendedOrAbsurdLam] = ACTIONS(165),
  },
  [64] = {
    [anon_sym_COLON] = ACTIONS(227),
    [sym_id] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(229),
    [anon_sym_] = ACTIONS(227),
  },
  [65] = {
    [sym__ARROW] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_DOT_DOT] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(231),
    [anon_sym_] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
  },
  [66] = {
    [sym__maybe_dotted_id] = STATE(66),
    [aux_sym__maybe_dotted_ids] = STATE(66),
    [sym_id] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_DOT_DOT] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(246),
  },
  [67] = {
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(248),
    [anon_sym_2] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(248),
  },
  [68] = {
    [anon_sym_COLON] = ACTIONS(254),
    [sym_id] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_DOT_DOT] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(256),
    [anon_sym_] = ACTIONS(254),
  },
  [69] = {
    [sym_id] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(157),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(157),
  },
  [70] = {
    [sym__ARROW] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(258),
    [anon_sym_] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(258),
  },
  [71] = {
    [sym__ARROW] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(262),
    [anon_sym_] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
  },
  [72] = {
    [anon_sym_COLON] = ACTIONS(266),
    [sym_id] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_DOT_DOT] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(268),
    [anon_sym_] = ACTIONS(266),
  },
  [73] = {
    [sym_id] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(159),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(161),
    [anon_sym_] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(161),
  },
  [74] = {
    [sym__ARROW] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_DOT_DOT] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(270),
    [anon_sym_] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
  },
  [75] = {
    [sym__maybe_dotted_id] = STATE(75),
    [aux_sym__maybe_dotted_ids] = STATE(75),
    [sym_id] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_DOT_DOT] = ACTIONS(280),
    [anon_sym_2] = ACTIONS(244),
  },
  [76] = {
    [anon_sym_COLON] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(283),
    [anon_sym_2] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(283),
  },
  [77] = {
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(287),
    [anon_sym_2] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
  },
  [78] = {
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(291),
    [anon_sym_2] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
  },
  [79] = {
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(295),
    [anon_sym_2] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(295),
  },
  [80] = {
    [sym__maybe_dotted_id] = STATE(66),
    [aux_sym__maybe_dotted_ids] = STATE(66),
    [sym_id] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_DOT_DOT] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(307),
  },
  [81] = {
    [sym__maybe_dotted_id] = STATE(66),
    [aux_sym__maybe_dotted_ids] = STATE(66),
    [sym_id] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_DOT_DOT] = ACTIONS(305),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(307),
  },
  [82] = {
    [sym__maybe_dotted_id] = STATE(75),
    [aux_sym__maybe_dotted_ids] = STATE(75),
    [sym_id] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(313),
    [anon_sym_2] = ACTIONS(315),
  },
  [83] = {
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(317),
    [anon_sym_2] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [84] = {
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(135),
    [anon_sym_2] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
  },
  [85] = {
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(321),
    [anon_sym_2] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
  },
  [86] = {
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(248),
    [anon_sym_2] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
  },
  [87] = {
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(325),
    [anon_sym_2] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [88] = {
    [sym__maybe_dotted_id] = STATE(82),
    [aux_sym__maybe_dotted_ids] = STATE(82),
    [sym_id] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(313),
  },
  [89] = {
    [sym__maybe_dotted_id] = STATE(80),
    [aux_sym__maybe_dotted_ids] = STATE(80),
    [sym_id] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_DOT_DOT] = ACTIONS(305),
  },
  [90] = {
    [sym__declaration] = STATE(173),
    [sym_fields] = STATE(173),
    [aux_sym_source_file_repeat1] = STATE(90),
    [anon_sym_field] = ACTIONS(333),
    [sym__dedent] = ACTIONS(336),
  },
  [91] = {
    [sym__declaration] = STATE(188),
    [sym_fields] = STATE(188),
    [aux_sym_source_file_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_field] = ACTIONS(5),
  },
  [92] = {
    [sym_id] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(229),
  },
  [93] = {
    [aux_sym_atoms_repeat1] = STATE(97),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_atom] = ACTIONS(340),
    [sym__newline] = ACTIONS(148),
  },
  [94] = {
    [sym__declaration] = STATE(173),
    [sym_fields] = STATE(173),
    [aux_sym_source_file_repeat1] = STATE(90),
    [anon_sym_field] = ACTIONS(5),
    [sym__dedent] = ACTIONS(342),
  },
  [95] = {
    [sym__maybe_dotted_id] = STATE(81),
    [aux_sym__maybe_dotted_ids] = STATE(81),
    [sym_id] = ACTIONS(344),
    [anon_sym_DOT] = ACTIONS(303),
    [anon_sym_DOT_DOT] = ACTIONS(305),
  },
  [96] = {
    [sym__declaration] = STATE(188),
    [sym_fields] = STATE(188),
    [aux_sym_source_file_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_field] = ACTIONS(333),
  },
  [97] = {
    [aux_sym_atoms_repeat1] = STATE(97),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [sym_atom] = ACTIONS(346),
    [sym__newline] = ACTIONS(122),
  },
  [98] = {
    [sym__expr_or_attr] = STATE(69),
    [sym_qid] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(351),
    [sym_Literal] = ACTIONS(349),
  },
  [99] = {
    [sym_id] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(355),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(357),
    [anon_sym_] = ACTIONS(359),
  },
  [100] = {
    [sym__declaration] = STATE(173),
    [sym_fields] = STATE(173),
    [aux_sym_source_file_repeat1] = STATE(94),
    [anon_sym_field] = ACTIONS(5),
  },
  [101] = {
    [sym__expr_or_attr] = STATE(47),
    [sym_qid] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym_Literal] = ACTIONS(361),
  },
  [102] = {
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(367),
    [anon_sym_] = ACTIONS(369),
    [anon_sym_LPAREN] = ACTIONS(371),
  },
  [103] = {
    [aux_sym_ids_repeat1] = STATE(103),
    [sym_id] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(376),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(378),
  },
  [104] = {
    [sym__expr_or_attr] = STATE(60),
    [sym_qid] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(382),
    [sym_Literal] = ACTIONS(380),
  },
  [105] = {
    [aux_sym_ids_repeat1] = STATE(103),
    [sym_id] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(388),
  },
  [106] = {
    [sym_id] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_DOT_DOT] = ACTIONS(229),
    [anon_sym_2] = ACTIONS(227),
  },
  [107] = {
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(390),
    [sym__newline] = ACTIONS(248),
  },
  [108] = {
    [sym_ids] = STATE(157),
    [aux_sym_ids_repeat1] = STATE(113),
    [sym_id] = ACTIONS(392),
  },
  [109] = {
    [sym_ids] = STATE(156),
    [aux_sym_ids_repeat1] = STATE(105),
    [sym_id] = ACTIONS(394),
  },
  [110] = {
    [sym_ids] = STATE(155),
    [aux_sym_ids_repeat1] = STATE(105),
    [sym_id] = ACTIONS(394),
  },
  [111] = {
    [sym_atoms] = STATE(185),
    [aux_sym_atoms_repeat1] = STATE(53),
    [sym_atom] = ACTIONS(396),
  },
  [112] = {
    [sym_atoms] = STATE(67),
    [aux_sym_atoms_repeat1] = STATE(53),
    [sym_atom] = ACTIONS(396),
  },
  [113] = {
    [aux_sym_ids_repeat1] = STATE(116),
    [sym_id] = ACTIONS(398),
    [anon_sym_2] = ACTIONS(386),
  },
  [114] = {
    [sym_atoms] = STATE(166),
    [aux_sym_atoms_repeat1] = STATE(53),
    [sym_atom] = ACTIONS(396),
  },
  [115] = {
    [sym_atoms] = STATE(107),
    [aux_sym_atoms_repeat1] = STATE(93),
    [sym_atom] = ACTIONS(400),
  },
  [116] = {
    [aux_sym_ids_repeat1] = STATE(116),
    [sym_id] = ACTIONS(402),
    [anon_sym_2] = ACTIONS(376),
  },
  [117] = {
    [anon_sym_EQ] = ACTIONS(321),
    [sym__newline] = ACTIONS(321),
  },
  [118] = {
    [anon_sym_EQ] = ACTIONS(291),
    [sym__newline] = ACTIONS(291),
  },
  [119] = {
    [anon_sym_EQ] = ACTIONS(287),
    [sym__newline] = ACTIONS(287),
  },
  [120] = {
    [anon_sym_EQ] = ACTIONS(248),
    [sym__newline] = ACTIONS(248),
  },
  [121] = {
    [sym__declaration_block] = STATE(123),
    [sym__indent] = ACTIONS(405),
  },
  [122] = {
    [sym__ARROW] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(409),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(411),
    [sym_LetBody] = ACTIONS(413),
  },
  [124] = {
    [sym__declaration_block] = STATE(168),
    [sym__indent] = ACTIONS(405),
  },
  [125] = {
    [anon_sym_EQ] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
  },
  [126] = {
    [anon_sym_EQ] = ACTIONS(407),
    [sym__newline] = ACTIONS(295),
  },
  [127] = {
    [anon_sym_EQ] = ACTIONS(135),
    [sym__newline] = ACTIONS(135),
  },
  [128] = {
    [sym__declaration_block] = STATE(183),
    [sym__indent] = ACTIONS(405),
  },
  [129] = {
    [sym_qid] = ACTIONS(415),
    [anon_sym__] = ACTIONS(417),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(419),
    [sym_LetBody] = ACTIONS(419),
  },
  [131] = {
    [sym__ARROW] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(409),
  },
  [132] = {
    [anon_sym_EQ] = ACTIONS(283),
    [sym__newline] = ACTIONS(283),
  },
  [133] = {
    [sym__arg_type_sig_block] = STATE(171),
    [sym__indent] = ACTIONS(421),
  },
  [134] = {
    [sym__arg_type_sig_block] = STATE(145),
    [sym__indent] = ACTIONS(421),
  },
  [135] = {
    [anon_sym_EQ] = ACTIONS(317),
    [sym__newline] = ACTIONS(317),
  },
  [136] = {
    [anon_sym_field] = ACTIONS(336),
    [sym__dedent] = ACTIONS(336),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_field] = ACTIONS(336),
  },
  [138] = {
    [anon_sym_COLON] = ACTIONS(423),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(425),
  },
  [140] = {
    [sym_id] = ACTIONS(427),
  },
  [141] = {
    [anon_sym_2] = ACTIONS(425),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(429),
  },
  [143] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(425),
  },
  [144] = {
    [anon_sym_RBRACE] = ACTIONS(425),
  },
  [145] = {
    [sym__newline] = ACTIONS(431),
  },
  [146] = {
    [anon_sym_COLON] = ACTIONS(433),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(435),
  },
  [148] = {
    [anon_sym_2] = ACTIONS(435),
  },
  [149] = {
    [anon_sym_COLON] = ACTIONS(437),
  },
  [150] = {
    [sym__newline] = ACTIONS(439),
  },
  [151] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(435),
  },
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(435),
  },
  [153] = {
    [anon_sym_COLON] = ACTIONS(441),
  },
  [154] = {
    [sym__newline] = ACTIONS(443),
  },
  [155] = {
    [anon_sym_RBRACE] = ACTIONS(445),
  },
  [156] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(445),
  },
  [157] = {
    [anon_sym_2] = ACTIONS(445),
  },
  [158] = {
    [sym_ForallBindings] = ACTIONS(447),
  },
  [159] = {
    [sym_LamBindings] = ACTIONS(447),
  },
  [160] = {
    [sym_DoBlock] = ACTIONS(449),
  },
  [161] = {
    [anon_sym_COLON] = ACTIONS(451),
  },
  [162] = {
    [anon_sym_COLON] = ACTIONS(453),
  },
  [163] = {
    [anon_sym_COLON] = ACTIONS(455),
  },
  [164] = {
    [sym_id] = ACTIONS(457),
  },
  [165] = {
    [anon_sym_PIPE] = ACTIONS(409),
  },
  [166] = {
    [sym__ARROW] = ACTIONS(459),
  },
  [167] = {
    [anon_sym_in] = ACTIONS(461),
  },
  [168] = {
    [sym_LetBody] = ACTIONS(413),
  },
  [169] = {
    [anon_sym_COLON] = ACTIONS(463),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(465),
  },
  [171] = {
    [sym__newline] = ACTIONS(467),
  },
  [172] = {
    [anon_sym_COLON] = ACTIONS(469),
  },
  [173] = {
    [sym__newline] = ACTIONS(471),
  },
  [174] = {
    [anon_sym_COLON] = ACTIONS(473),
  },
  [175] = {
    [sym_id] = ACTIONS(475),
  },
  [176] = {
    [sym_ForallBindings] = ACTIONS(477),
  },
  [177] = {
    [sym_LamBindings] = ACTIONS(477),
  },
  [178] = {
    [sym_DoBlock] = ACTIONS(479),
  },
  [179] = {
    [anon_sym_COLON] = ACTIONS(481),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(483),
  },
  [181] = {
    [anon_sym_EQ] = ACTIONS(485),
  },
  [182] = {
    [sym__ARROW] = ACTIONS(407),
  },
  [183] = {
    [sym_LetBody] = ACTIONS(487),
  },
  [184] = {
    [anon_sym_in] = ACTIONS(489),
  },
  [185] = {
    [sym__ARROW] = ACTIONS(491),
  },
  [186] = {
    [sym__newline] = ACTIONS(493),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(495),
  },
  [188] = {
    [sym__newline] = ACTIONS(497),
  },
  [189] = {
    [sym__newline] = ACTIONS(499),
  },
  [190] = {
    [sym_id] = ACTIONS(501),
  },
  [191] = {
    [sym__ARROW] = ACTIONS(299),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(503),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(133),
  [7] = {.count = 1, .reusable = true}, SHIFT(158),
  [9] = {.count = 1, .reusable = true}, SHIFT(159),
  [11] = {.count = 1, .reusable = false}, SHIFT(102),
  [13] = {.count = 1, .reusable = true}, SHIFT(102),
  [15] = {.count = 1, .reusable = false}, SHIFT(25),
  [17] = {.count = 1, .reusable = true}, SHIFT(24),
  [19] = {.count = 1, .reusable = true}, SHIFT(27),
  [21] = {.count = 1, .reusable = true}, SHIFT(104),
  [23] = {.count = 1, .reusable = true}, SHIFT(30),
  [25] = {.count = 1, .reusable = true}, SHIFT(31),
  [27] = {.count = 1, .reusable = true}, SHIFT(124),
  [29] = {.count = 1, .reusable = true}, SHIFT(160),
  [31] = {.count = 1, .reusable = true}, SHIFT(164),
  [33] = {.count = 1, .reusable = true}, SHIFT(112),
  [35] = {.count = 1, .reusable = true}, SHIFT(84),
  [37] = {.count = 1, .reusable = true}, SHIFT(176),
  [39] = {.count = 1, .reusable = true}, SHIFT(177),
  [41] = {.count = 1, .reusable = true}, SHIFT(42),
  [43] = {.count = 1, .reusable = true}, SHIFT(128),
  [45] = {.count = 1, .reusable = true}, SHIFT(178),
  [47] = {.count = 1, .reusable = true}, SHIFT(190),
  [49] = {.count = 1, .reusable = true}, SHIFT(115),
  [51] = {.count = 1, .reusable = true}, SHIFT(127),
  [53] = {.count = 1, .reusable = false}, SHIFT(38),
  [55] = {.count = 1, .reusable = false}, SHIFT(134),
  [57] = {.count = 1, .reusable = false}, SHIFT(52),
  [59] = {.count = 1, .reusable = false}, SHIFT(99),
  [61] = {.count = 1, .reusable = true}, SHIFT(99),
  [63] = {.count = 1, .reusable = false}, SHIFT(89),
  [65] = {.count = 1, .reusable = true}, SHIFT(95),
  [67] = {.count = 1, .reusable = false}, SHIFT(88),
  [69] = {.count = 1, .reusable = true}, SHIFT(98),
  [71] = {.count = 1, .reusable = true}, SHIFT(154),
  [73] = {.count = 1, .reusable = false}, SHIFT(158),
  [75] = {.count = 1, .reusable = false}, SHIFT(159),
  [77] = {.count = 1, .reusable = false}, SHIFT(181),
  [79] = {.count = 1, .reusable = true}, SHIFT(101),
  [81] = {.count = 1, .reusable = false}, SHIFT(31),
  [83] = {.count = 1, .reusable = false}, SHIFT(124),
  [85] = {.count = 1, .reusable = false}, SHIFT(160),
  [87] = {.count = 1, .reusable = false}, SHIFT(164),
  [89] = {.count = 1, .reusable = false}, SHIFT(112),
  [91] = {.count = 1, .reusable = false}, SHIFT(84),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(38),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(134),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(52),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(99),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(99),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(89),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(95),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(88),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2), SHIFT_REPEAT(98),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atoms_repeat1, 2),
  [124] = {.count = 1, .reusable = false}, REDUCE(aux_sym_atoms_repeat1, 2),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atoms_repeat1, 2), SHIFT_REPEAT(28),
  [129] = {.count = 1, .reusable = true}, SHIFT(121),
  [131] = {.count = 1, .reusable = true}, SHIFT(170),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_atoms_repeat1, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_Expr2, 1),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_Expr2, 1),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2), SHIFT_REPEAT(101),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_attributes1, 1),
  [146] = {.count = 1, .reusable = false}, SHIFT(55),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_atoms, 1),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2),
  [152] = {.count = 2, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2), SHIFT_REPEAT(104),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_attribute, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__expr_or_attr, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym__expr_or_attr, 3),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_attributes1, 1),
  [165] = {.count = 1, .reusable = true}, REDUCE(aux_sym__with_exprs_repeat1, 2),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym__with_exprs_repeat1, 2), SHIFT_REPEAT(53),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym__modal_arg_ids, 1),
  [172] = {.count = 1, .reusable = false}, SHIFT(56),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_atoms, 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(28),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym__modal_arg_ids, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_ids, 2),
  [182] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids, 2), SHIFT_REPEAT(56),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids, 2), SHIFT_REPEAT(99),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids, 2), SHIFT_REPEAT(99),
  [191] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids, 2), SHIFT_REPEAT(89),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym__arg_ids, 2), SHIFT_REPEAT(95),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_ids, 2), SHIFT_REPEAT(88),
  [200] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_type_sig_block_repeat1, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(102),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(102),
  [210] = {.count = 2, .reusable = false}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(25),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(24),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(27),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_typed_bindings1_repeat1, 2), SHIFT_REPEAT(30),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym__modal_arg_ids_repeat1, 2), SHIFT_REPEAT(98),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_typed_bindings1, 1),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_id, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__maybe_dotted_id, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 3),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids, 2), SHIFT_REPEAT(66),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids, 2), SHIFT_REPEAT(140),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids, 2), SHIFT_REPEAT(140),
  [244] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids, 2),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_Expr2, 2),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_Expr2, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(32),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 3),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 3),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 4),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 4),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym__arg_id, 4),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__arg_id, 4),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [274] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids, 2), SHIFT_REPEAT(75),
  [277] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_ids, 2), SHIFT_REPEAT(175),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym__maybe_dotted_ids, 2), SHIFT_REPEAT(175),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_Expr2, 3),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_Expr2, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 4),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 4),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_Expr2, 4),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_Expr2, 4),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [299] = {.count = 1, .reusable = true}, SHIFT(5),
  [301] = {.count = 1, .reusable = true}, SHIFT(66),
  [303] = {.count = 1, .reusable = false}, SHIFT(140),
  [305] = {.count = 1, .reusable = true}, SHIFT(140),
  [307] = {.count = 1, .reusable = true}, SHIFT(68),
  [309] = {.count = 1, .reusable = false}, SHIFT(75),
  [311] = {.count = 1, .reusable = false}, SHIFT(175),
  [313] = {.count = 1, .reusable = true}, SHIFT(175),
  [315] = {.count = 1, .reusable = false}, SHIFT(68),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym__with_exprs, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym__with_exprs, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(82),
  [331] = {.count = 1, .reusable = true}, SHIFT(80),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [336] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [340] = {.count = 1, .reusable = true}, SHIFT(97),
  [342] = {.count = 1, .reusable = true}, SHIFT(130),
  [344] = {.count = 1, .reusable = true}, SHIFT(81),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_atoms_repeat1, 2), SHIFT_REPEAT(97),
  [349] = {.count = 1, .reusable = false}, SHIFT(69),
  [351] = {.count = 1, .reusable = true}, SHIFT(12),
  [353] = {.count = 1, .reusable = false}, SHIFT(64),
  [355] = {.count = 1, .reusable = false}, SHIFT(110),
  [357] = {.count = 1, .reusable = true}, SHIFT(109),
  [359] = {.count = 1, .reusable = false}, SHIFT(108),
  [361] = {.count = 1, .reusable = false}, SHIFT(47),
  [363] = {.count = 1, .reusable = true}, SHIFT(22),
  [365] = {.count = 1, .reusable = false}, SHIFT(34),
  [367] = {.count = 1, .reusable = true}, SHIFT(35),
  [369] = {.count = 1, .reusable = true}, SHIFT(36),
  [371] = {.count = 1, .reusable = true}, SHIFT(48),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ids_repeat1, 2), SHIFT_REPEAT(103),
  [376] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ids_repeat1, 2),
  [378] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ids_repeat1, 2),
  [380] = {.count = 1, .reusable = false}, SHIFT(60),
  [382] = {.count = 1, .reusable = true}, SHIFT(16),
  [384] = {.count = 1, .reusable = true}, SHIFT(103),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_ids, 1),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_ids, 1),
  [390] = {.count = 1, .reusable = true}, SHIFT(33),
  [392] = {.count = 1, .reusable = true}, SHIFT(113),
  [394] = {.count = 1, .reusable = true}, SHIFT(105),
  [396] = {.count = 1, .reusable = true}, SHIFT(53),
  [398] = {.count = 1, .reusable = false}, SHIFT(116),
  [400] = {.count = 1, .reusable = true}, SHIFT(93),
  [402] = {.count = 2, .reusable = false}, REDUCE(aux_sym_ids_repeat1, 2), SHIFT_REPEAT(116),
  [405] = {.count = 1, .reusable = true}, SHIFT(100),
  [407] = {.count = 1, .reusable = true}, SHIFT(3),
  [409] = {.count = 1, .reusable = true}, SHIFT(63),
  [411] = {.count = 1, .reusable = true}, SHIFT(70),
  [413] = {.count = 1, .reusable = true}, SHIFT(76),
  [415] = {.count = 1, .reusable = true}, SHIFT(153),
  [417] = {.count = 1, .reusable = false}, SHIFT(153),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__declaration_block, 3),
  [421] = {.count = 1, .reusable = true}, SHIFT(29),
  [423] = {.count = 1, .reusable = true}, SHIFT(13),
  [425] = {.count = 1, .reusable = true}, SHIFT(74),
  [427] = {.count = 1, .reusable = true}, SHIFT(92),
  [429] = {.count = 1, .reusable = true}, SHIFT(73),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 2),
  [433] = {.count = 1, .reusable = true}, SHIFT(20),
  [435] = {.count = 1, .reusable = true}, SHIFT(71),
  [437] = {.count = 1, .reusable = true}, SHIFT(7),
  [439] = {.count = 1, .reusable = true}, SHIFT(57),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__binding_ids_and_absurds, 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_sig_block, 3),
  [445] = {.count = 1, .reusable = true}, SHIFT(72),
  [447] = {.count = 1, .reusable = true}, SHIFT(4),
  [449] = {.count = 1, .reusable = true}, SHIFT(86),
  [451] = {.count = 1, .reusable = true}, SHIFT(6),
  [453] = {.count = 1, .reusable = true}, SHIFT(21),
  [455] = {.count = 1, .reusable = true}, SHIFT(14),
  [457] = {.count = 1, .reusable = true}, SHIFT(167),
  [459] = {.count = 1, .reusable = true}, SHIFT(2),
  [461] = {.count = 1, .reusable = true}, SHIFT(19),
  [463] = {.count = 1, .reusable = true}, SHIFT(18),
  [465] = {.count = 1, .reusable = true}, SHIFT(65),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_fields, 2),
  [469] = {.count = 1, .reusable = true}, SHIFT(17),
  [471] = {.count = 1, .reusable = true}, SHIFT(136),
  [473] = {.count = 1, .reusable = true}, SHIFT(15),
  [475] = {.count = 1, .reusable = true}, SHIFT(106),
  [477] = {.count = 1, .reusable = true}, SHIFT(10),
  [479] = {.count = 1, .reusable = true}, SHIFT(120),
  [481] = {.count = 1, .reusable = true}, SHIFT(9),
  [483] = {.count = 1, .reusable = true}, SHIFT(58),
  [485] = {.count = 1, .reusable = true}, SHIFT(129),
  [487] = {.count = 1, .reusable = true}, SHIFT(132),
  [489] = {.count = 1, .reusable = true}, SHIFT(11),
  [491] = {.count = 1, .reusable = true}, SHIFT(8),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 4),
  [495] = {.count = 1, .reusable = true}, SHIFT(49),
  [497] = {.count = 1, .reusable = true}, SHIFT(137),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_sig, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(184),
  [503] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
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
