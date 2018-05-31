#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 508
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__newline = 1,
  sym__indent = 2,
  sym__dedent = 3,
  sym__const_forall = 4,
  sym__const_right_arrow = 5,
  sym_string = 6,
  sym_int = 7,
  sym_name = 8,
  sym_qualified_name = 9,
  anon_sym__ = 10,
  anon_sym_DOT = 11,
  anon_sym_DOT_DOT = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACE_LBRACE = 15,
  anon_sym_RBRACE_RBRACE = 16,
  sym_comment = 17,
  anon_sym_EQ = 18,
  anon_sym_PIPE = 19,
  anon_sym_QMARK = 20,
  anon_sym_Prop = 21,
  anon_sym_Set = 22,
  anon_sym_quote = 23,
  anon_sym_quoteTerm = 24,
  anon_sym_unquote = 25,
  anon_sym_LPAREN = 26,
  anon_sym_COLON = 27,
  anon_sym_RPAREN = 28,
  anon_sym_rewrite = 29,
  anon_sym_with = 30,
  anon_sym_where = 31,
  anon_sym_module = 32,
  anon_sym_data = 33,
  anon_sym_codata = 34,
  anon_sym_record = 35,
  anon_sym_instance = 36,
  anon_sym_constructor = 37,
  anon_sym_inductive = 38,
  anon_sym_coinductive = 39,
  anon_sym_eta_DASHequality = 40,
  anon_sym_no_DASHeta_DASHequality = 41,
  anon_sym_field = 42,
  anon_sym_overlap = 43,
  sym_pragma = 44,
  anon_sym_infix = 45,
  anon_sym_infixl = 46,
  anon_sym_infixr = 47,
  sym_source_file = 48,
  sym_literal = 49,
  sym_binding_name = 50,
  sym_anonymous_name = 51,
  sym__maybe_dotted_name = 52,
  sym__maybe_dotted_names1 = 53,
  sym__arg_names = 54,
  sym_arg_name = 55,
  sym_expr = 56,
  sym__expr1 = 57,
  sym__application = 58,
  sym__expr2 = 59,
  sym__atoms1 = 60,
  sym_atom = 61,
  sym__atom_curly = 62,
  sym__atom_no_curly = 63,
  sym__typed_bindings1 = 64,
  sym_untyped_binding = 65,
  sym_typed_binding = 66,
  sym__typed_untyped_binding1 = 67,
  sym_function_clause = 68,
  sym_lhs = 69,
  sym_rewrite_equations = 70,
  sym_with_expressions = 71,
  sym_rhs = 72,
  sym_where_clause = 73,
  sym_data = 74,
  sym_data_signature_only = 75,
  sym_record = 76,
  sym_record_signature_only = 77,
  sym_record_declarations_block = 78,
  sym__record_directives1 = 79,
  sym_record_constructor_instance = 80,
  sym_record_constructor = 81,
  sym__record_directive = 82,
  sym_record_induction = 83,
  sym_record_eta = 84,
  sym_field = 85,
  sym__arg_type_signatures_block = 86,
  sym__arg_type_signatures1 = 87,
  sym_arg_type_signature = 88,
  sym__declaration = 89,
  sym__declaration_block = 90,
  sym_instance = 91,
  sym__declarations0 = 92,
  sym__declarations1 = 93,
  aux_sym__maybe_dotted_names1_repeat1 = 94,
  aux_sym__arg_names_repeat1 = 95,
  aux_sym_arg_name_repeat1 = 96,
  aux_sym__expr1_repeat1 = 97,
  aux_sym__application_repeat1 = 98,
  aux_sym__typed_bindings1_repeat1 = 99,
  aux_sym__typed_untyped_binding1_repeat1 = 100,
  aux_sym__record_directives1_repeat1 = 101,
  aux_sym__arg_type_signatures1_repeat1 = 102,
  aux_sym__declarations1_repeat1 = 103,
};

static const char *ts_symbol_names[] = {
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [ts_builtin_sym_end] = "END",
  [sym__const_forall] = "_const_forall",
  [sym__const_right_arrow] = "_const_right_arrow",
  [sym_string] = "string",
  [sym_int] = "int",
  [sym_name] = "name",
  [sym_qualified_name] = "qualified_name",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_QMARK] = "?",
  [anon_sym_Prop] = "Prop",
  [anon_sym_Set] = "Set",
  [anon_sym_quote] = "quote",
  [anon_sym_quoteTerm] = "quoteTerm",
  [anon_sym_unquote] = "unquote",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_with] = "with",
  [anon_sym_where] = "where",
  [anon_sym_module] = "module",
  [anon_sym_data] = "data",
  [anon_sym_codata] = "codata",
  [anon_sym_record] = "record",
  [anon_sym_instance] = "instance",
  [anon_sym_constructor] = "constructor",
  [anon_sym_inductive] = "inductive",
  [anon_sym_coinductive] = "coinductive",
  [anon_sym_eta_DASHequality] = "eta-equality",
  [anon_sym_no_DASHeta_DASHequality] = "no-eta-equality",
  [anon_sym_field] = "field",
  [anon_sym_overlap] = "overlap",
  [sym_pragma] = "pragma",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [sym_source_file] = "source_file",
  [sym_literal] = "literal",
  [sym_binding_name] = "binding_name",
  [sym_anonymous_name] = "anonymous_name",
  [sym__maybe_dotted_name] = "_maybe_dotted_name",
  [sym__maybe_dotted_names1] = "_maybe_dotted_names1",
  [sym__arg_names] = "_arg_names",
  [sym_arg_name] = "arg_name",
  [sym_expr] = "expr",
  [sym__expr1] = "_expr1",
  [sym__application] = "_application",
  [sym__expr2] = "_expr2",
  [sym__atoms1] = "_atoms1",
  [sym_atom] = "atom",
  [sym__atom_curly] = "_atom_curly",
  [sym__atom_no_curly] = "_atom_no_curly",
  [sym__typed_bindings1] = "_typed_bindings1",
  [sym_untyped_binding] = "untyped_binding",
  [sym_typed_binding] = "typed_binding",
  [sym__typed_untyped_binding1] = "_typed_untyped_binding1",
  [sym_function_clause] = "function_clause",
  [sym_lhs] = "lhs",
  [sym_rewrite_equations] = "rewrite_equations",
  [sym_with_expressions] = "with_expressions",
  [sym_rhs] = "rhs",
  [sym_where_clause] = "where_clause",
  [sym_data] = "data",
  [sym_data_signature_only] = "data_signature_only",
  [sym_record] = "record",
  [sym_record_signature_only] = "record_signature_only",
  [sym_record_declarations_block] = "record_declarations_block",
  [sym__record_directives1] = "_record_directives1",
  [sym_record_constructor_instance] = "record_constructor_instance",
  [sym_record_constructor] = "record_constructor",
  [sym__record_directive] = "_record_directive",
  [sym_record_induction] = "record_induction",
  [sym_record_eta] = "record_eta",
  [sym_field] = "field",
  [sym__arg_type_signatures_block] = "_arg_type_signatures_block",
  [sym__arg_type_signatures1] = "_arg_type_signatures1",
  [sym_arg_type_signature] = "arg_type_signature",
  [sym__declaration] = "_declaration",
  [sym__declaration_block] = "_declaration_block",
  [sym_instance] = "instance",
  [sym__declarations0] = "_declarations0",
  [sym__declarations1] = "_declarations1",
  [aux_sym__maybe_dotted_names1_repeat1] = "_maybe_dotted_names1_repeat1",
  [aux_sym__arg_names_repeat1] = "_arg_names_repeat1",
  [aux_sym_arg_name_repeat1] = "arg_name_repeat1",
  [aux_sym__expr1_repeat1] = "_expr1_repeat1",
  [aux_sym__application_repeat1] = "_application_repeat1",
  [aux_sym__typed_bindings1_repeat1] = "_typed_bindings1_repeat1",
  [aux_sym__typed_untyped_binding1_repeat1] = "_typed_untyped_binding1_repeat1",
  [aux_sym__record_directives1_repeat1] = "_record_directives1_repeat1",
  [aux_sym__arg_type_signatures1_repeat1] = "_arg_type_signatures1_repeat1",
  [aux_sym__declarations1_repeat1] = "_declarations1_repeat1",
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
  [sym__const_forall] = {
    .visible = false,
    .named = true,
  },
  [sym__const_right_arrow] = {
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
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quoteTerm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_codata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coinductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eta_DASHequality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHeta_DASHequality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overlap] = {
    .visible = true,
    .named = false,
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_name] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_name] = {
    .visible = true,
    .named = true,
  },
  [sym__maybe_dotted_name] = {
    .visible = false,
    .named = true,
  },
  [sym__maybe_dotted_names1] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_names] = {
    .visible = false,
    .named = true,
  },
  [sym_arg_name] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr1] = {
    .visible = false,
    .named = true,
  },
  [sym__application] = {
    .visible = false,
    .named = true,
  },
  [sym__expr2] = {
    .visible = false,
    .named = true,
  },
  [sym__atoms1] = {
    .visible = false,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__atom_curly] = {
    .visible = false,
    .named = true,
  },
  [sym__atom_no_curly] = {
    .visible = false,
    .named = true,
  },
  [sym__typed_bindings1] = {
    .visible = false,
    .named = true,
  },
  [sym_untyped_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__typed_untyped_binding1] = {
    .visible = false,
    .named = true,
  },
  [sym_function_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs] = {
    .visible = true,
    .named = true,
  },
  [sym_rewrite_equations] = {
    .visible = true,
    .named = true,
  },
  [sym_with_expressions] = {
    .visible = true,
    .named = true,
  },
  [sym_rhs] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_data_signature_only] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_record_signature_only] = {
    .visible = true,
    .named = true,
  },
  [sym_record_declarations_block] = {
    .visible = true,
    .named = true,
  },
  [sym__record_directives1] = {
    .visible = false,
    .named = true,
  },
  [sym_record_constructor_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_record_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym__record_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_record_induction] = {
    .visible = true,
    .named = true,
  },
  [sym_record_eta] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__arg_type_signatures_block] = {
    .visible = false,
    .named = true,
  },
  [sym__arg_type_signatures1] = {
    .visible = false,
    .named = true,
  },
  [sym_arg_type_signature] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_block] = {
    .visible = false,
    .named = true,
  },
  [sym_instance] = {
    .visible = true,
    .named = true,
  },
  [sym__declarations0] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__maybe_dotted_names1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expr1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__typed_bindings1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__typed_untyped_binding1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__record_directives1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_type_signatures1_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__declarations1_repeat1] = {
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
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == 'P')
        ADVANCE(14);
      if (lookahead == 'S')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(21);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(23);
      if (lookahead == 'd')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'f')
        ADVANCE(63);
      if (lookahead == 'i')
        ADVANCE(73);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == 'q')
        ADVANCE(121);
      if (lookahead == 'r')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(141);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(167);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == 8704)
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      if (lookahead == '-')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__const_right_arrow);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'o')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'p')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_Prop);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 't')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 21:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'd')
        ADVANCE(25);
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'a')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_codata);
      END_STATE();
    case 29:
      if (lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'd')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'u')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'c')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 't')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'i')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'v')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_coinductive);
      END_STATE();
    case 38:
      if (lookahead == 's')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'r')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'u')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 't')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'o')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'r')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 47:
      if (lookahead == 'a')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 't')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'a')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 51:
      if (lookahead == 't')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'a')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'q')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'u')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'l')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 't')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'y')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_eta_DASHequality);
      END_STATE();
    case 63:
      if (lookahead == 'i')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'd')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'l')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'l')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__const_forall);
      END_STATE();
    case 73:
      if (lookahead == 'n')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 'f')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'u')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'c')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'i')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'v')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_inductive);
      END_STATE();
    case 82:
      if (lookahead == 'i')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'x')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == 'l')
        ADVANCE(85);
      if (lookahead == 'r')
        ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_infixl);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_infixr);
      END_STATE();
    case 87:
      if (lookahead == 't')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'n')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'c')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 93:
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'd')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'u')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 99:
      if (lookahead == 'o')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == '-')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'e')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'a')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '-')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'q')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'u')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'a')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'l')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 't')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'y')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_no_DASHeta_DASHequality);
      END_STATE();
    case 114:
      if (lookahead == 'v')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'r')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'l')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'a')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'p')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_overlap);
      END_STATE();
    case 121:
      if (lookahead == 'u')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == 'T')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'r')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'm')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'c')
        ADVANCE(132);
      if (lookahead == 'w')
        ADVANCE(136);
      END_STATE();
    case 132:
      if (lookahead == 'o')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'r')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'd')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 136:
      if (lookahead == 'r')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 141:
      if (lookahead == 'n')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'q')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'u')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'o')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_unquote);
      END_STATE();
    case 148:
      if (lookahead == 'h')
        ADVANCE(149);
      if (lookahead == 'i')
        ADVANCE(153);
      END_STATE();
    case 149:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 153:
      if (lookahead == 't')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'h')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '{')
        ADVANCE(165);
      END_STATE();
    case 157:
      if (lookahead == '#')
        ADVANCE(158);
      if (lookahead != 0)
        ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == '#')
        ADVANCE(159);
      if (lookahead != 0)
        ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '-')
        ADVANCE(160);
      if (lookahead != 0)
        ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead == '}')
        ADVANCE(161);
      if (lookahead != 0)
        ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    case 162:
      if (lookahead == '-')
        ADVANCE(163);
      if (lookahead != 0)
        ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead != 0)
        ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 170:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(184);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(172);
      END_STATE();
    case 174:
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'p')
        ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(184);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_codata);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_field);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 's')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
        ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'm')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
        ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_record);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(157);
      END_STATE();
    case 233:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(236);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(233);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(236);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(244);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(251);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'w')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
        ADVANCE(252);
      if (lookahead == 'i')
        ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
        ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(162);
      END_STATE();
    case 262:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(262);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(265);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '{')
        ADVANCE(165);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 268:
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(272);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(270);
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
        ADVANCE(271);
      END_STATE();
    case 270:
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
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(270);
      END_STATE();
    case 271:
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
        ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(273);
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
        ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '\\')
        ADVANCE(272);
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
        ADVANCE(271);
      END_STATE();
    case 274:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == '\\')
        SKIP(276);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 276:
      if (lookahead == 'n')
        SKIP(274);
      END_STATE();
    case 277:
      if (lookahead == '-')
        ADVANCE(261);
      END_STATE();
    case 278:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(279);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'r')
        ADVANCE(280);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(278);
      END_STATE();
    case 279:
      if (lookahead == 'n')
        SKIP(278);
      END_STATE();
    case 280:
      if (lookahead == 'e')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'w')
        ADVANCE(136);
      END_STATE();
    case 282:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(283);
      if (lookahead == 'w')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '|')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      END_STATE();
    case 283:
      if (lookahead == 'n')
        SKIP(282);
      END_STATE();
    case 284:
      if (lookahead == 'h')
        ADVANCE(149);
      END_STATE();
    case 285:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(286);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      END_STATE();
    case 286:
      if (lookahead == 'n')
        SKIP(285);
      END_STATE();
    case 287:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(288);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(288);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 290:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(291);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(291);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 293:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(296);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == 8594)
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(296);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 298:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(299);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(299);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 301:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(302);
      if (lookahead == '\\')
        ADVANCE(303);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(301);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_COLON);
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
        ADVANCE(271);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(304);
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
        ADVANCE(271);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == ':')
        ADVANCE(302);
      if (lookahead == '\\')
        ADVANCE(303);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == 'w')
        ADVANCE(306);
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
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 305:
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
        ADVANCE(271);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(307);
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
        ADVANCE(271);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(308);
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
        ADVANCE(271);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(309);
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
        ADVANCE(271);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(310);
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
        ADVANCE(271);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_where);
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
        ADVANCE(271);
      END_STATE();
    case 311:
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(312);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'o')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(311);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(313);
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
        ADVANCE(271);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '\\')
        ADVANCE(312);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'o')
        ADVANCE(322);
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
        ADVANCE(271);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(315);
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
        ADVANCE(271);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(316);
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
        ADVANCE(271);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(317);
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
        ADVANCE(271);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(318);
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
        ADVANCE(271);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(319);
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
        ADVANCE(271);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(320);
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
        ADVANCE(271);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(321);
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
        ADVANCE(271);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_instance);
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
        ADVANCE(271);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v')
        ADVANCE(323);
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
        ADVANCE(271);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(324);
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
        ADVANCE(271);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(325);
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
        ADVANCE(271);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(326);
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
        ADVANCE(271);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(327);
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
        ADVANCE(271);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(328);
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
        ADVANCE(271);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_overlap);
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
        ADVANCE(271);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(330);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(329);
      END_STATE();
    case 330:
      if (lookahead == 'n')
        SKIP(329);
      END_STATE();
    case 331:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '\\')
        ADVANCE(332);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(333);
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
        ADVANCE(271);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '\\')
        ADVANCE(332);
      if (lookahead == '_')
        ADVANCE(305);
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
        ADVANCE(271);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == '\\')
        SKIP(335);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      END_STATE();
    case 335:
      if (lookahead == 'n')
        SKIP(334);
      END_STATE();
    case 336:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(337);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == 8594)
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(336);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(337);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 339:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(340);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(339);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(340);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 342:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(343);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '}')
        ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(342);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(343);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 345:
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(302);
      if (lookahead == '\\')
        ADVANCE(346);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(345);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(347);
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
        ADVANCE(271);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == ':')
        ADVANCE(302);
      if (lookahead == '\\')
        ADVANCE(346);
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
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 348:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(349);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(251);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(348);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(349);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(251);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 351:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(352);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(351);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(352);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
        ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 355:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(356);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(356);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(359);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(358);
      END_STATE();
    case 359:
      if (lookahead == 'n')
        SKIP(358);
      END_STATE();
    case 360:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '}')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(360);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(361);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 363:
      if (lookahead == '}')
        ADVANCE(168);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(365);
      if (lookahead == 'c')
        ADVANCE(366);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'i')
        ADVANCE(368);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '}')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(364);
      END_STATE();
    case 365:
      if (lookahead == 'n')
        SKIP(364);
      END_STATE();
    case 366:
      if (lookahead == 'o')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 368:
      if (lookahead == 'n')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 370:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(371);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == '\\')
        SKIP(374);
      if (lookahead == 'w')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(373);
      END_STATE();
    case 374:
      if (lookahead == 'n')
        SKIP(373);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(275);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == 'w')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        SKIP(375);
      END_STATE();
    case 377:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(378);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(380);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(400);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(412);
      if (lookahead == 'n')
        ADVANCE(421);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(378);
      if (lookahead == 'c')
        ADVANCE(380);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(400);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(412);
      if (lookahead == 'n')
        ADVANCE(421);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'n')
        ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
        ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'v')
        ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_coinductive);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 's')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
        ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
        ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'y')
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_eta_DASHequality);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(414);
      if (lookahead == 's')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
        ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'v')
        ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_inductive);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(423);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(427);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
        ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'y')
        ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_no_DASHeta_DASHequality);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 436:
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(437);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '}')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(436);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(271);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(438);
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
        ADVANCE(271);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '\\')
        ADVANCE(437);
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
        ADVANCE(271);
      END_STATE();
    case 439:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(440);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(439);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(440);
      if (lookahead == 'm')
        ADVANCE(238);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 442:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '}')
        ADVANCE(363);
      if (lookahead == 8594)
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(294);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 445:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(445);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 448:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(449);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(453);
      if (lookahead == '?')
        ADVANCE(454);
      if (lookahead == 'P')
        ADVANCE(455);
      if (lookahead == 'S')
        ADVANCE(459);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(464);
      if (lookahead == 'o')
        ADVANCE(472);
      if (lookahead == 'q')
        ADVANCE(479);
      if (lookahead == 'u')
        ADVANCE(488);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '|')
        ADVANCE(495);
      if (lookahead == 8594)
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(452);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(450);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(451);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(173);
      if (lookahead == '_')
        ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'r')
        ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'o')
        ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 't')
        ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'n')
        ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(449);
      if (lookahead == '.')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(453);
      if (lookahead == '?')
        ADVANCE(454);
      if (lookahead == 'P')
        ADVANCE(455);
      if (lookahead == 'S')
        ADVANCE(459);
      if (lookahead == '\\')
        ADVANCE(462);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(464);
      if (lookahead == 'o')
        ADVANCE(472);
      if (lookahead == 'q')
        ADVANCE(479);
      if (lookahead == 'u')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(495);
      if (lookahead == 8594)
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(452);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'n')
        ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 's')
        ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 't')
        ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'a')
        ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'n')
        ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'c')
        ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'v')
        ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'r')
        ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'l')
        ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'a')
        ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'u')
        ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'o')
        ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 't')
        ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
        ADVANCE(484);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'r')
        ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'm')
        ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'n')
        ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'q')
        ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'u')
        ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'o')
        ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 't')
        ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(498);
      if (lookahead == '\\')
        ADVANCE(499);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'o')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(497);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(271);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_EQ);
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
        ADVANCE(271);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(500);
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
        ADVANCE(271);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(269);
      if (lookahead == '=')
        ADVANCE(498);
      if (lookahead == '\\')
        ADVANCE(499);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'o')
        ADVANCE(322);
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
        ADVANCE(271);
      END_STATE();
    case 501:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(260);
      if (lookahead == '|')
        ADVANCE(259);
      if (lookahead == '}')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(501);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(502);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 504:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(507);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(224);
      if (lookahead == '{')
        ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(504);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == 'c')
        ADVANCE(507);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'q')
        ADVANCE(209);
      if (lookahead == 'r')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 'n')
        ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 509:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(510);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(453);
      if (lookahead == '?')
        ADVANCE(454);
      if (lookahead == 'P')
        ADVANCE(455);
      if (lookahead == 'S')
        ADVANCE(459);
      if (lookahead == '\\')
        ADVANCE(511);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(464);
      if (lookahead == 'o')
        ADVANCE(472);
      if (lookahead == 'q')
        ADVANCE(479);
      if (lookahead == 'u')
        ADVANCE(488);
      if (lookahead == '{')
        ADVANCE(266);
      if (lookahead == '|')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(509);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(452);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(450);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(271);
      if (lookahead == 'n')
        ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(452);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(510);
      if (lookahead == '.')
        ADVANCE(265);
      if (lookahead == '=')
        ADVANCE(453);
      if (lookahead == '?')
        ADVANCE(454);
      if (lookahead == 'P')
        ADVANCE(455);
      if (lookahead == 'S')
        ADVANCE(459);
      if (lookahead == '\\')
        ADVANCE(511);
      if (lookahead == '_')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(464);
      if (lookahead == 'o')
        ADVANCE(472);
      if (lookahead == 'q')
        ADVANCE(479);
      if (lookahead == 'u')
        ADVANCE(488);
      if (lookahead == '|')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(452);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 170},
  [2] = {.lex_state = 233, .external_lex_state = 2},
  [3] = {.lex_state = 262},
  [4] = {.lex_state = 268},
  [5] = {.lex_state = 268},
  [6] = {.lex_state = 262},
  [7] = {.lex_state = 274, .external_lex_state = 3},
  [8] = {.lex_state = 274, .external_lex_state = 4},
  [9] = {.lex_state = 274},
  [10] = {.lex_state = 278, .external_lex_state = 2},
  [11] = {.lex_state = 282},
  [12] = {.lex_state = 233, .external_lex_state = 2},
  [13] = {.lex_state = 233, .external_lex_state = 2},
  [14] = {.lex_state = 285, .external_lex_state = 2},
  [15] = {.lex_state = 274, .external_lex_state = 2},
  [16] = {.lex_state = 170},
  [17] = {.lex_state = 274},
  [18] = {.lex_state = 287},
  [19] = {.lex_state = 290},
  [20] = {.lex_state = 170},
  [21] = {.lex_state = 293},
  [22] = {.lex_state = 282},
  [23] = {.lex_state = 262},
  [24] = {.lex_state = 233, .external_lex_state = 2},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 287},
  [27] = {.lex_state = 282},
  [28] = {.lex_state = 282},
  [29] = {.lex_state = 282},
  [30] = {.lex_state = 293},
  [31] = {.lex_state = 293},
  [32] = {.lex_state = 282},
  [33] = {.lex_state = 287},
  [34] = {.lex_state = 298},
  [35] = {.lex_state = 282},
  [36] = {.lex_state = 301},
  [37] = {.lex_state = 301},
  [38] = {.lex_state = 301},
  [39] = {.lex_state = 301},
  [40] = {.lex_state = 170},
  [41] = {.lex_state = 170},
  [42] = {.lex_state = 311},
  [43] = {.lex_state = 170},
  [44] = {.lex_state = 287},
  [45] = {.lex_state = 287},
  [46] = {.lex_state = 329, .external_lex_state = 2},
  [47] = {.lex_state = 285, .external_lex_state = 2},
  [48] = {.lex_state = 287},
  [49] = {.lex_state = 262},
  [50] = {.lex_state = 274, .external_lex_state = 3},
  [51] = {.lex_state = 331},
  [52] = {.lex_state = 334, .external_lex_state = 2},
  [53] = {.lex_state = 274, .external_lex_state = 2},
  [54] = {.lex_state = 170},
  [55] = {.lex_state = 278, .external_lex_state = 2},
  [56] = {.lex_state = 287},
  [57] = {.lex_state = 278, .external_lex_state = 2},
  [58] = {.lex_state = 290},
  [59] = {.lex_state = 274, .external_lex_state = 2},
  [60] = {.lex_state = 170},
  [61] = {.lex_state = 170},
  [62] = {.lex_state = 287},
  [63] = {.lex_state = 287},
  [64] = {.lex_state = 287},
  [65] = {.lex_state = 336},
  [66] = {.lex_state = 262},
  [67] = {.lex_state = 293},
  [68] = {.lex_state = 282},
  [69] = {.lex_state = 282},
  [70] = {.lex_state = 336},
  [71] = {.lex_state = 336},
  [72] = {.lex_state = 298},
  [73] = {.lex_state = 339},
  [74] = {.lex_state = 262},
  [75] = {.lex_state = 278},
  [76] = {.lex_state = 339},
  [77] = {.lex_state = 339},
  [78] = {.lex_state = 287},
  [79] = {.lex_state = 278},
  [80] = {.lex_state = 233, .external_lex_state = 2},
  [81] = {.lex_state = 262},
  [82] = {.lex_state = 342},
  [83] = {.lex_state = 262},
  [84] = {.lex_state = 282},
  [85] = {.lex_state = 342},
  [86] = {.lex_state = 342},
  [87] = {.lex_state = 290},
  [88] = {.lex_state = 262},
  [89] = {.lex_state = 282},
  [90] = {.lex_state = 298},
  [91] = {.lex_state = 287},
  [92] = {.lex_state = 282},
  [93] = {.lex_state = 301},
  [94] = {.lex_state = 331},
  [95] = {.lex_state = 287},
  [96] = {.lex_state = 287},
  [97] = {.lex_state = 287},
  [98] = {.lex_state = 262},
  [99] = {.lex_state = 274, .external_lex_state = 3},
  [100] = {.lex_state = 301},
  [101] = {.lex_state = 278},
  [102] = {.lex_state = 301},
  [103] = {.lex_state = 262},
  [104] = {.lex_state = 278},
  [105] = {.lex_state = 262},
  [106] = {.lex_state = 170, .external_lex_state = 4},
  [107] = {.lex_state = 278},
  [108] = {.lex_state = 268},
  [109] = {.lex_state = 268},
  [110] = {.lex_state = 262},
  [111] = {.lex_state = 274, .external_lex_state = 3},
  [112] = {.lex_state = 274, .external_lex_state = 4},
  [113] = {.lex_state = 274, .external_lex_state = 2},
  [114] = {.lex_state = 170, .external_lex_state = 5},
  [115] = {.lex_state = 274, .external_lex_state = 5},
  [116] = {.lex_state = 170},
  [117] = {.lex_state = 268},
  [118] = {.lex_state = 268},
  [119] = {.lex_state = 268},
  [120] = {.lex_state = 274, .external_lex_state = 4},
  [121] = {.lex_state = 268},
  [122] = {.lex_state = 345},
  [123] = {.lex_state = 278},
  [124] = {.lex_state = 274, .external_lex_state = 5},
  [125] = {.lex_state = 345},
  [126] = {.lex_state = 311, .external_lex_state = 5},
  [127] = {.lex_state = 348, .external_lex_state = 2},
  [128] = {.lex_state = 262},
  [129] = {.lex_state = 329, .external_lex_state = 2},
  [130] = {.lex_state = 348, .external_lex_state = 2},
  [131] = {.lex_state = 348, .external_lex_state = 2},
  [132] = {.lex_state = 287},
  [133] = {.lex_state = 290},
  [134] = {.lex_state = 351, .external_lex_state = 2},
  [135] = {.lex_state = 262},
  [136] = {.lex_state = 285, .external_lex_state = 2},
  [137] = {.lex_state = 351, .external_lex_state = 2},
  [138] = {.lex_state = 351, .external_lex_state = 2},
  [139] = {.lex_state = 287},
  [140] = {.lex_state = 290},
  [141] = {.lex_state = 285, .external_lex_state = 2},
  [142] = {.lex_state = 355, .external_lex_state = 2},
  [143] = {.lex_state = 262},
  [144] = {.lex_state = 334, .external_lex_state = 2},
  [145] = {.lex_state = 358, .external_lex_state = 2},
  [146] = {.lex_state = 282},
  [147] = {.lex_state = 355, .external_lex_state = 2},
  [148] = {.lex_state = 355, .external_lex_state = 2},
  [149] = {.lex_state = 282},
  [150] = {.lex_state = 287},
  [151] = {.lex_state = 298},
  [152] = {.lex_state = 170},
  [153] = {.lex_state = 274, .external_lex_state = 2},
  [154] = {.lex_state = 278},
  [155] = {.lex_state = 278},
  [156] = {.lex_state = 274, .external_lex_state = 2},
  [157] = {.lex_state = 290},
  [158] = {.lex_state = 262},
  [159] = {.lex_state = 290},
  [160] = {.lex_state = 290},
  [161] = {.lex_state = 170},
  [162] = {.lex_state = 274, .external_lex_state = 2},
  [163] = {.lex_state = 278},
  [164] = {.lex_state = 278},
  [165] = {.lex_state = 278},
  [166] = {.lex_state = 336},
  [167] = {.lex_state = 282},
  [168] = {.lex_state = 293},
  [169] = {.lex_state = 262},
  [170] = {.lex_state = 262},
  [171] = {.lex_state = 339},
  [172] = {.lex_state = 282},
  [173] = {.lex_state = 262},
  [174] = {.lex_state = 287},
  [175] = {.lex_state = 262},
  [176] = {.lex_state = 282},
  [177] = {.lex_state = 342},
  [178] = {.lex_state = 282},
  [179] = {.lex_state = 298},
  [180] = {.lex_state = 262},
  [181] = {.lex_state = 298},
  [182] = {.lex_state = 278},
  [183] = {.lex_state = 287},
  [184] = {.lex_state = 287},
  [185] = {.lex_state = 287},
  [186] = {.lex_state = 301},
  [187] = {.lex_state = 282},
  [188] = {.lex_state = 360},
  [189] = {.lex_state = 262},
  [190] = {.lex_state = 364},
  [191] = {.lex_state = 360},
  [192] = {.lex_state = 360},
  [193] = {.lex_state = 287},
  [194] = {.lex_state = 278},
  [195] = {.lex_state = 370, .external_lex_state = 2},
  [196] = {.lex_state = 262},
  [197] = {.lex_state = 373, .external_lex_state = 2},
  [198] = {.lex_state = 375, .external_lex_state = 2},
  [199] = {.lex_state = 282},
  [200] = {.lex_state = 370, .external_lex_state = 2},
  [201] = {.lex_state = 370, .external_lex_state = 2},
  [202] = {.lex_state = 282},
  [203] = {.lex_state = 287},
  [204] = {.lex_state = 298},
  [205] = {.lex_state = 170},
  [206] = {.lex_state = 262},
  [207] = {.lex_state = 274, .external_lex_state = 3},
  [208] = {.lex_state = 301},
  [209] = {.lex_state = 370},
  [210] = {.lex_state = 262},
  [211] = {.lex_state = 278},
  [212] = {.lex_state = 278},
  [213] = {.lex_state = 282},
  [214] = {.lex_state = 370},
  [215] = {.lex_state = 370},
  [216] = {.lex_state = 282},
  [217] = {.lex_state = 287},
  [218] = {.lex_state = 298},
  [219] = {.lex_state = 262},
  [220] = {.lex_state = 373, .external_lex_state = 2},
  [221] = {.lex_state = 377, .external_lex_state = 5},
  [222] = {.lex_state = 170},
  [223] = {.lex_state = 262},
  [224] = {.lex_state = 170, .external_lex_state = 4},
  [225] = {.lex_state = 301},
  [226] = {.lex_state = 301},
  [227] = {.lex_state = 301},
  [228] = {.lex_state = 170},
  [229] = {.lex_state = 170, .external_lex_state = 5},
  [230] = {.lex_state = 311},
  [231] = {.lex_state = 170, .external_lex_state = 5},
  [232] = {.lex_state = 170, .external_lex_state = 5},
  [233] = {.lex_state = 170},
  [234] = {.lex_state = 274, .external_lex_state = 2},
  [235] = {.lex_state = 170, .external_lex_state = 5},
  [236] = {.lex_state = 345},
  [237] = {.lex_state = 268},
  [238] = {.lex_state = 268},
  [239] = {.lex_state = 268},
  [240] = {.lex_state = 282},
  [241] = {.lex_state = 268},
  [242] = {.lex_state = 268},
  [243] = {.lex_state = 364},
  [244] = {.lex_state = 436},
  [245] = {.lex_state = 311},
  [246] = {.lex_state = 311, .external_lex_state = 5},
  [247] = {.lex_state = 278},
  [248] = {.lex_state = 262},
  [249] = {.lex_state = 170},
  [250] = {.lex_state = 345},
  [251] = {.lex_state = 311, .external_lex_state = 5},
  [252] = {.lex_state = 348, .external_lex_state = 2},
  [253] = {.lex_state = 282},
  [254] = {.lex_state = 351, .external_lex_state = 2},
  [255] = {.lex_state = 282},
  [256] = {.lex_state = 355, .external_lex_state = 2},
  [257] = {.lex_state = 282},
  [258] = {.lex_state = 262},
  [259] = {.lex_state = 439, .external_lex_state = 2},
  [260] = {.lex_state = 262},
  [261] = {.lex_state = 439, .external_lex_state = 2},
  [262] = {.lex_state = 439, .external_lex_state = 2},
  [263] = {.lex_state = 290},
  [264] = {.lex_state = 262},
  [265] = {.lex_state = 274, .external_lex_state = 5},
  [266] = {.lex_state = 274, .external_lex_state = 3},
  [267] = {.lex_state = 290},
  [268] = {.lex_state = 282},
  [269] = {.lex_state = 170},
  [270] = {.lex_state = 262},
  [271] = {.lex_state = 262},
  [272] = {.lex_state = 262},
  [273] = {.lex_state = 336},
  [274] = {.lex_state = 282},
  [275] = {.lex_state = 339},
  [276] = {.lex_state = 442},
  [277] = {.lex_state = 262},
  [278] = {.lex_state = 364},
  [279] = {.lex_state = 364},
  [280] = {.lex_state = 282},
  [281] = {.lex_state = 442},
  [282] = {.lex_state = 442},
  [283] = {.lex_state = 282},
  [284] = {.lex_state = 287},
  [285] = {.lex_state = 298},
  [286] = {.lex_state = 287},
  [287] = {.lex_state = 262},
  [288] = {.lex_state = 287},
  [289] = {.lex_state = 282},
  [290] = {.lex_state = 282},
  [291] = {.lex_state = 282},
  [292] = {.lex_state = 282},
  [293] = {.lex_state = 342},
  [294] = {.lex_state = 298},
  [295] = {.lex_state = 282},
  [296] = {.lex_state = 282},
  [297] = {.lex_state = 364},
  [298] = {.lex_state = 278},
  [299] = {.lex_state = 301},
  [300] = {.lex_state = 262},
  [301] = {.lex_state = 360},
  [302] = {.lex_state = 282},
  [303] = {.lex_state = 262},
  [304] = {.lex_state = 364},
  [305] = {.lex_state = 262},
  [306] = {.lex_state = 370, .external_lex_state = 2},
  [307] = {.lex_state = 282},
  [308] = {.lex_state = 274, .external_lex_state = 3},
  [309] = {.lex_state = 262},
  [310] = {.lex_state = 445, .external_lex_state = 2},
  [311] = {.lex_state = 262},
  [312] = {.lex_state = 445, .external_lex_state = 2},
  [313] = {.lex_state = 445, .external_lex_state = 2},
  [314] = {.lex_state = 290},
  [315] = {.lex_state = 262},
  [316] = {.lex_state = 373, .external_lex_state = 2},
  [317] = {.lex_state = 170},
  [318] = {.lex_state = 370},
  [319] = {.lex_state = 282},
  [320] = {.lex_state = 262},
  [321] = {.lex_state = 445},
  [322] = {.lex_state = 262},
  [323] = {.lex_state = 445},
  [324] = {.lex_state = 445},
  [325] = {.lex_state = 290},
  [326] = {.lex_state = 262},
  [327] = {.lex_state = 278},
  [328] = {.lex_state = 170, .external_lex_state = 4},
  [329] = {.lex_state = 170},
  [330] = {.lex_state = 274, .external_lex_state = 3},
  [331] = {.lex_state = 268},
  [332] = {.lex_state = 274, .external_lex_state = 2},
  [333] = {.lex_state = 274, .external_lex_state = 2},
  [334] = {.lex_state = 170, .external_lex_state = 5},
  [335] = {.lex_state = 377, .external_lex_state = 5},
  [336] = {.lex_state = 274, .external_lex_state = 2},
  [337] = {.lex_state = 274, .external_lex_state = 5},
  [338] = {.lex_state = 364},
  [339] = {.lex_state = 373, .external_lex_state = 2},
  [340] = {.lex_state = 170},
  [341] = {.lex_state = 262},
  [342] = {.lex_state = 274, .external_lex_state = 3},
  [343] = {.lex_state = 278},
  [344] = {.lex_state = 262},
  [345] = {.lex_state = 278},
  [346] = {.lex_state = 262},
  [347] = {.lex_state = 170, .external_lex_state = 6},
  [348] = {.lex_state = 278},
  [349] = {.lex_state = 274, .external_lex_state = 5},
  [350] = {.lex_state = 274, .external_lex_state = 5},
  [351] = {.lex_state = 170, .external_lex_state = 5},
  [352] = {.lex_state = 268},
  [353] = {.lex_state = 436},
  [354] = {.lex_state = 268},
  [355] = {.lex_state = 345},
  [356] = {.lex_state = 268},
  [357] = {.lex_state = 436},
  [358] = {.lex_state = 436},
  [359] = {.lex_state = 274, .external_lex_state = 5},
  [360] = {.lex_state = 262},
  [361] = {.lex_state = 448, .external_lex_state = 5},
  [362] = {.lex_state = 262},
  [363] = {.lex_state = 311, .external_lex_state = 5},
  [364] = {.lex_state = 497, .external_lex_state = 5},
  [365] = {.lex_state = 282},
  [366] = {.lex_state = 448, .external_lex_state = 5},
  [367] = {.lex_state = 448, .external_lex_state = 5},
  [368] = {.lex_state = 282},
  [369] = {.lex_state = 287},
  [370] = {.lex_state = 298},
  [371] = {.lex_state = 348, .external_lex_state = 2},
  [372] = {.lex_state = 351, .external_lex_state = 2},
  [373] = {.lex_state = 355, .external_lex_state = 2},
  [374] = {.lex_state = 334, .external_lex_state = 2},
  [375] = {.lex_state = 439, .external_lex_state = 2},
  [376] = {.lex_state = 282},
  [377] = {.lex_state = 274, .external_lex_state = 2},
  [378] = {.lex_state = 274, .external_lex_state = 2},
  [379] = {.lex_state = 290},
  [380] = {.lex_state = 282},
  [381] = {.lex_state = 364},
  [382] = {.lex_state = 282},
  [383] = {.lex_state = 282},
  [384] = {.lex_state = 442},
  [385] = {.lex_state = 282},
  [386] = {.lex_state = 262},
  [387] = {.lex_state = 501},
  [388] = {.lex_state = 262},
  [389] = {.lex_state = 364},
  [390] = {.lex_state = 501},
  [391] = {.lex_state = 501},
  [392] = {.lex_state = 290},
  [393] = {.lex_state = 262},
  [394] = {.lex_state = 287},
  [395] = {.lex_state = 282},
  [396] = {.lex_state = 262},
  [397] = {.lex_state = 298},
  [398] = {.lex_state = 301},
  [399] = {.lex_state = 262},
  [400] = {.lex_state = 262},
  [401] = {.lex_state = 262},
  [402] = {.lex_state = 282},
  [403] = {.lex_state = 360},
  [404] = {.lex_state = 364},
  [405] = {.lex_state = 282},
  [406] = {.lex_state = 370, .external_lex_state = 2},
  [407] = {.lex_state = 170},
  [408] = {.lex_state = 445, .external_lex_state = 2},
  [409] = {.lex_state = 282},
  [410] = {.lex_state = 274, .external_lex_state = 3},
  [411] = {.lex_state = 370},
  [412] = {.lex_state = 445},
  [413] = {.lex_state = 282},
  [414] = {.lex_state = 170},
  [415] = {.lex_state = 504},
  [416] = {.lex_state = 274, .external_lex_state = 2},
  [417] = {.lex_state = 170},
  [418] = {.lex_state = 274, .external_lex_state = 5},
  [419] = {.lex_state = 377, .external_lex_state = 5},
  [420] = {.lex_state = 274, .external_lex_state = 4},
  [421] = {.lex_state = 377, .external_lex_state = 5},
  [422] = {.lex_state = 274, .external_lex_state = 2},
  [423] = {.lex_state = 364},
  [424] = {.lex_state = 170, .external_lex_state = 4},
  [425] = {.lex_state = 373, .external_lex_state = 2},
  [426] = {.lex_state = 170, .external_lex_state = 5},
  [427] = {.lex_state = 262},
  [428] = {.lex_state = 274, .external_lex_state = 3},
  [429] = {.lex_state = 278},
  [430] = {.lex_state = 262},
  [431] = {.lex_state = 373, .external_lex_state = 2},
  [432] = {.lex_state = 377, .external_lex_state = 5},
  [433] = {.lex_state = 170, .external_lex_state = 5},
  [434] = {.lex_state = 262},
  [435] = {.lex_state = 170, .external_lex_state = 6},
  [436] = {.lex_state = 170, .external_lex_state = 5},
  [437] = {.lex_state = 170, .external_lex_state = 5},
  [438] = {.lex_state = 345},
  [439] = {.lex_state = 268},
  [440] = {.lex_state = 436},
  [441] = {.lex_state = 311, .external_lex_state = 5},
  [442] = {.lex_state = 311, .external_lex_state = 5},
  [443] = {.lex_state = 448, .external_lex_state = 5},
  [444] = {.lex_state = 282},
  [445] = {.lex_state = 262},
  [446] = {.lex_state = 509, .external_lex_state = 5},
  [447] = {.lex_state = 262},
  [448] = {.lex_state = 497, .external_lex_state = 5},
  [449] = {.lex_state = 509, .external_lex_state = 5},
  [450] = {.lex_state = 509, .external_lex_state = 5},
  [451] = {.lex_state = 290},
  [452] = {.lex_state = 262},
  [453] = {.lex_state = 497, .external_lex_state = 5},
  [454] = {.lex_state = 439, .external_lex_state = 2},
  [455] = {.lex_state = 282},
  [456] = {.lex_state = 442},
  [457] = {.lex_state = 364},
  [458] = {.lex_state = 501},
  [459] = {.lex_state = 282},
  [460] = {.lex_state = 287},
  [461] = {.lex_state = 282},
  [462] = {.lex_state = 364},
  [463] = {.lex_state = 282},
  [464] = {.lex_state = 301},
  [465] = {.lex_state = 445, .external_lex_state = 2},
  [466] = {.lex_state = 170},
  [467] = {.lex_state = 445},
  [468] = {.lex_state = 268},
  [469] = {.lex_state = 170},
  [470] = {.lex_state = 364},
  [471] = {.lex_state = 377, .external_lex_state = 5},
  [472] = {.lex_state = 274, .external_lex_state = 4},
  [473] = {.lex_state = 274, .external_lex_state = 2},
  [474] = {.lex_state = 170},
  [475] = {.lex_state = 274, .external_lex_state = 3},
  [476] = {.lex_state = 373, .external_lex_state = 2},
  [477] = {.lex_state = 170, .external_lex_state = 5},
  [478] = {.lex_state = 278},
  [479] = {.lex_state = 170, .external_lex_state = 6},
  [480] = {.lex_state = 170, .external_lex_state = 5},
  [481] = {.lex_state = 170, .external_lex_state = 5},
  [482] = {.lex_state = 274, .external_lex_state = 5},
  [483] = {.lex_state = 373, .external_lex_state = 2},
  [484] = {.lex_state = 170, .external_lex_state = 5},
  [485] = {.lex_state = 448, .external_lex_state = 5},
  [486] = {.lex_state = 311, .external_lex_state = 5},
  [487] = {.lex_state = 509, .external_lex_state = 5},
  [488] = {.lex_state = 282},
  [489] = {.lex_state = 501},
  [490] = {.lex_state = 301},
  [491] = {.lex_state = 274, .external_lex_state = 5},
  [492] = {.lex_state = 364},
  [493] = {.lex_state = 364},
  [494] = {.lex_state = 170, .external_lex_state = 5},
  [495] = {.lex_state = 274, .external_lex_state = 3},
  [496] = {.lex_state = 170, .external_lex_state = 5},
  [497] = {.lex_state = 170, .external_lex_state = 5},
  [498] = {.lex_state = 274, .external_lex_state = 5},
  [499] = {.lex_state = 170, .external_lex_state = 6},
  [500] = {.lex_state = 509, .external_lex_state = 5},
  [501] = {.lex_state = 377, .external_lex_state = 5},
  [502] = {.lex_state = 268},
  [503] = {.lex_state = 170, .external_lex_state = 5},
  [504] = {.lex_state = 170, .external_lex_state = 5},
  [505] = {.lex_state = 170, .external_lex_state = 5},
  [506] = {.lex_state = 274, .external_lex_state = 5},
  [507] = {.lex_state = 364},
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

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
  },
  [6] = {
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
    [sym__const_forall] = ACTIONS(1),
    [sym__const_right_arrow] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_Prop] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(3),
    [anon_sym_quoteTerm] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_codata] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_inductive] = ACTIONS(1),
    [anon_sym_coinductive] = ACTIONS(1),
    [anon_sym_eta_DASHequality] = ACTIONS(1),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_overlap] = ACTIONS(1),
    [sym_pragma] = ACTIONS(1),
    [anon_sym_infix] = ACTIONS(3),
    [anon_sym_infixl] = ACTIONS(1),
    [anon_sym_infixr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(15),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(16),
    [sym_data_signature_only] = STATE(15),
    [sym_record] = STATE(16),
    [sym_record_signature_only] = STATE(15),
    [sym_field] = STATE(16),
    [sym__declaration] = STATE(15),
    [sym__declaration_block] = STATE(16),
    [sym_instance] = STATE(16),
    [sym__declarations1] = STATE(17),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(15),
    [anon_sym_codata] = ACTIONS(17),
    [anon_sym_record] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_field] = ACTIONS(23),
    [sym_pragma] = ACTIONS(25),
  },
  [2] = {
    [sym__newline] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_rewrite] = ACTIONS(29),
    [anon_sym_with] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(29),
  },
  [3] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(27),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [4] = {
    [sym_name] = ACTIONS(45),
    [sym_comment] = ACTIONS(13),
  },
  [5] = {
    [sym_name] = ACTIONS(47),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [sym_literal] = STATE(39),
    [sym__atom_no_curly] = STATE(39),
    [sym_string] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_qualified_name] = ACTIONS(51),
    [anon_sym__] = ACTIONS(51),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_Prop] = ACTIONS(51),
    [anon_sym_Set] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(51),
    [anon_sym_quoteTerm] = ACTIONS(51),
    [anon_sym_unquote] = ACTIONS(51),
  },
  [7] = {
    [sym__declarations0] = STATE(41),
    [sym__newline] = ACTIONS(53),
    [sym__indent] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [8] = {
    [sym__arg_type_signatures_block] = STATE(43),
    [sym__indent] = ACTIONS(59),
    [sym_comment] = ACTIONS(57),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(57),
  },
  [10] = {
    [sym_rewrite_equations] = STATE(46),
    [sym_with_expressions] = STATE(47),
    [sym__newline] = ACTIONS(63),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_rewrite] = ACTIONS(65),
    [anon_sym_with] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(63),
    [anon_sym_module] = ACTIONS(63),
  },
  [11] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [12] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_rewrite] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [13] = {
    [sym__newline] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_rewrite] = ACTIONS(79),
    [anon_sym_with] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [14] = {
    [sym_rhs] = STATE(52),
    [sym_where_clause] = STATE(53),
    [sym__newline] = ACTIONS(81),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(87),
  },
  [15] = {
    [sym__newline] = ACTIONS(89),
    [sym_comment] = ACTIONS(57),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_string] = ACTIONS(93),
    [sym_int] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_Prop] = ACTIONS(93),
    [anon_sym_Set] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(93),
    [anon_sym_quoteTerm] = ACTIONS(93),
    [anon_sym_unquote] = ACTIONS(93),
    [anon_sym_data] = ACTIONS(93),
    [anon_sym_codata] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_instance] = ACTIONS(93),
    [anon_sym_field] = ACTIONS(93),
    [sym_pragma] = ACTIONS(93),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(57),
  },
  [18] = {
    [sym_literal] = STATE(13),
    [sym__application] = STATE(55),
    [sym__expr2] = STATE(55),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(19),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
  },
  [19] = {
    [sym_literal] = STATE(13),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
  },
  [20] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(59),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(60),
    [sym_data_signature_only] = STATE(59),
    [sym_record] = STATE(60),
    [sym_record_signature_only] = STATE(59),
    [sym_field] = STATE(60),
    [sym__declaration] = STATE(59),
    [sym__declaration_block] = STATE(60),
    [sym_instance] = STATE(60),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(61),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(15),
    [anon_sym_codata] = ACTIONS(17),
    [anon_sym_record] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_field] = ACTIONS(23),
    [sym_pragma] = ACTIONS(99),
  },
  [21] = {
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [22] = {
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(103),
    [sym_comment] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(105),
  },
  [23] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(68),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [24] = {
    [sym__newline] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_rewrite] = ACTIONS(117),
    [anon_sym_with] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
    [anon_sym_module] = ACTIONS(117),
  },
  [25] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(75),
    [sym__expr2] = STATE(75),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [26] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(79),
    [sym__expr2] = STATE(79),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [27] = {
    [anon_sym_RBRACE] = ACTIONS(125),
    [sym_comment] = ACTIONS(57),
  },
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(129),
  },
  [29] = {
    [sym__const_right_arrow] = ACTIONS(129),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [30] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [31] = {
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [32] = {
    [sym__const_right_arrow] = ACTIONS(129),
    [sym_comment] = ACTIONS(57),
  },
  [33] = {
    [sym_literal] = STATE(86),
    [sym__application] = STATE(84),
    [sym__expr2] = STATE(84),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(87),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(133),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(133),
    [anon_sym_Prop] = ACTIONS(133),
    [anon_sym_Set] = ACTIONS(133),
    [anon_sym_quote] = ACTIONS(133),
    [anon_sym_quoteTerm] = ACTIONS(133),
    [anon_sym_unquote] = ACTIONS(133),
  },
  [34] = {
    [sym_literal] = STATE(31),
    [sym__expr2] = STATE(89),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
  },
  [35] = {
    [sym_typed_binding] = STATE(92),
    [aux_sym__typed_bindings1_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(145),
    [sym_comment] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(147),
  },
  [36] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(102),
    [sym_typed_binding] = STATE(102),
    [sym__typed_untyped_binding1] = STATE(101),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(102),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_where] = ACTIONS(161),
  },
  [37] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(102),
    [sym_typed_binding] = STATE(102),
    [sym__typed_untyped_binding1] = STATE(104),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(102),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_where] = ACTIONS(161),
  },
  [38] = {
    [sym_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
  },
  [39] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(102),
    [sym_typed_binding] = STATE(102),
    [sym__typed_untyped_binding1] = STATE(107),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(102),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(167),
  },
  [40] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(115),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_string] = ACTIONS(183),
    [sym_int] = ACTIONS(183),
    [sym_qualified_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_Prop] = ACTIONS(183),
    [anon_sym_Set] = ACTIONS(183),
    [anon_sym_quote] = ACTIONS(183),
    [anon_sym_quoteTerm] = ACTIONS(183),
    [anon_sym_unquote] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_codata] = ACTIONS(183),
    [anon_sym_record] = ACTIONS(183),
    [anon_sym_instance] = ACTIONS(183),
    [anon_sym_field] = ACTIONS(183),
    [sym_pragma] = ACTIONS(183),
  },
  [42] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym__arg_names] = STATE(123),
    [sym_arg_name] = STATE(125),
    [sym__arg_type_signatures1] = STATE(124),
    [sym_arg_type_signature] = STATE(126),
    [aux_sym__arg_names_repeat1] = STATE(125),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(126),
    [sym_name] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(193),
    [anon_sym_overlap] = ACTIONS(195),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_string] = ACTIONS(199),
    [sym_int] = ACTIONS(199),
    [sym_qualified_name] = ACTIONS(199),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(199),
    [anon_sym_Prop] = ACTIONS(199),
    [anon_sym_Set] = ACTIONS(199),
    [anon_sym_quote] = ACTIONS(199),
    [anon_sym_quoteTerm] = ACTIONS(199),
    [anon_sym_unquote] = ACTIONS(199),
    [anon_sym_data] = ACTIONS(199),
    [anon_sym_codata] = ACTIONS(199),
    [anon_sym_record] = ACTIONS(199),
    [anon_sym_instance] = ACTIONS(199),
    [anon_sym_field] = ACTIONS(199),
    [sym_pragma] = ACTIONS(199),
  },
  [44] = {
    [sym_literal] = STATE(131),
    [sym__expr1] = STATE(129),
    [sym__application] = STATE(129),
    [sym__expr2] = STATE(129),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(130),
    [sym__atom_curly] = STATE(131),
    [sym__atom_no_curly] = STATE(131),
    [aux_sym__expr1_repeat1] = STATE(132),
    [aux_sym__application_repeat1] = STATE(133),
    [sym_string] = ACTIONS(201),
    [sym_int] = ACTIONS(201),
    [sym_qualified_name] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_Prop] = ACTIONS(203),
    [anon_sym_Set] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_quoteTerm] = ACTIONS(203),
    [anon_sym_unquote] = ACTIONS(203),
  },
  [45] = {
    [sym_literal] = STATE(138),
    [sym__expr1] = STATE(136),
    [sym__application] = STATE(136),
    [sym__expr2] = STATE(136),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(137),
    [sym__atom_curly] = STATE(138),
    [sym__atom_no_curly] = STATE(138),
    [aux_sym__expr1_repeat1] = STATE(139),
    [aux_sym__application_repeat1] = STATE(140),
    [sym_string] = ACTIONS(207),
    [sym_int] = ACTIONS(207),
    [sym_qualified_name] = ACTIONS(209),
    [anon_sym__] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_Prop] = ACTIONS(209),
    [anon_sym_Set] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_quoteTerm] = ACTIONS(209),
    [anon_sym_unquote] = ACTIONS(209),
  },
  [46] = {
    [sym_with_expressions] = STATE(141),
    [sym__newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_with] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
  },
  [47] = {
    [sym__newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
  },
  [48] = {
    [sym_string] = ACTIONS(215),
    [sym_int] = ACTIONS(215),
    [sym_qualified_name] = ACTIONS(215),
    [anon_sym__] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_Prop] = ACTIONS(215),
    [anon_sym_Set] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_quoteTerm] = ACTIONS(215),
    [anon_sym_unquote] = ACTIONS(215),
  },
  [49] = {
    [sym_literal] = STATE(148),
    [sym_expr] = STATE(144),
    [sym__expr1] = STATE(145),
    [sym__application] = STATE(145),
    [sym__expr2] = STATE(145),
    [sym__atoms1] = STATE(146),
    [sym_atom] = STATE(147),
    [sym__atom_curly] = STATE(148),
    [sym__atom_no_curly] = STATE(148),
    [sym__typed_bindings1] = STATE(149),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(150),
    [aux_sym__application_repeat1] = STATE(151),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(217),
    [sym_int] = ACTIONS(217),
    [sym_qualified_name] = ACTIONS(219),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_Prop] = ACTIONS(219),
    [anon_sym_Set] = ACTIONS(219),
    [anon_sym_quote] = ACTIONS(219),
    [anon_sym_quoteTerm] = ACTIONS(219),
    [anon_sym_unquote] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [50] = {
    [sym__declarations0] = STATE(153),
    [sym__newline] = ACTIONS(223),
    [sym__indent] = ACTIONS(225),
    [sym_comment] = ACTIONS(57),
  },
  [51] = {
    [sym_anonymous_name] = STATE(154),
    [sym_name] = ACTIONS(227),
    [anon_sym__] = ACTIONS(229),
    [sym_comment] = ACTIONS(13),
  },
  [52] = {
    [sym_where_clause] = STATE(156),
    [sym__newline] = ACTIONS(231),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_module] = ACTIONS(87),
  },
  [53] = {
    [sym__newline] = ACTIONS(231),
    [sym_comment] = ACTIONS(57),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_string] = ACTIONS(235),
    [sym_int] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_Prop] = ACTIONS(235),
    [anon_sym_Set] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_quoteTerm] = ACTIONS(235),
    [anon_sym_unquote] = ACTIONS(235),
    [anon_sym_data] = ACTIONS(235),
    [anon_sym_codata] = ACTIONS(235),
    [anon_sym_record] = ACTIONS(235),
    [anon_sym_instance] = ACTIONS(235),
    [anon_sym_field] = ACTIONS(235),
    [sym_pragma] = ACTIONS(235),
  },
  [55] = {
    [sym__newline] = ACTIONS(237),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_rewrite] = ACTIONS(237),
    [anon_sym_with] = ACTIONS(237),
    [anon_sym_where] = ACTIONS(237),
    [anon_sym_module] = ACTIONS(237),
  },
  [56] = {
    [sym_literal] = STATE(159),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(160),
    [sym__atom_curly] = STATE(159),
    [sym__atom_no_curly] = STATE(159),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(160),
    [sym_string] = ACTIONS(239),
    [sym_int] = ACTIONS(239),
    [sym_qualified_name] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(245),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_Prop] = ACTIONS(242),
    [anon_sym_Set] = ACTIONS(242),
    [anon_sym_quote] = ACTIONS(242),
    [anon_sym_quoteTerm] = ACTIONS(242),
    [anon_sym_unquote] = ACTIONS(242),
  },
  [57] = {
    [sym__newline] = ACTIONS(248),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_rewrite] = ACTIONS(248),
    [anon_sym_with] = ACTIONS(248),
    [anon_sym_where] = ACTIONS(248),
    [anon_sym_module] = ACTIONS(248),
  },
  [58] = {
    [sym_literal] = STATE(159),
    [sym_atom] = STATE(58),
    [sym__atom_curly] = STATE(159),
    [sym__atom_no_curly] = STATE(159),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(250),
    [sym_int] = ACTIONS(250),
    [sym_qualified_name] = ACTIONS(253),
    [anon_sym__] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(256),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_Prop] = ACTIONS(253),
    [anon_sym_Set] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(253),
    [anon_sym_quoteTerm] = ACTIONS(253),
    [anon_sym_unquote] = ACTIONS(253),
  },
  [59] = {
    [sym__newline] = ACTIONS(261),
    [sym_comment] = ACTIONS(57),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_string] = ACTIONS(93),
    [sym_int] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_Prop] = ACTIONS(93),
    [anon_sym_Set] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(93),
    [anon_sym_quoteTerm] = ACTIONS(93),
    [anon_sym_unquote] = ACTIONS(93),
    [anon_sym_data] = ACTIONS(93),
    [anon_sym_codata] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_instance] = ACTIONS(93),
    [anon_sym_field] = ACTIONS(93),
    [sym_pragma] = ACTIONS(93),
  },
  [61] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(162),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(61),
    [sym_data_signature_only] = STATE(162),
    [sym_record] = STATE(61),
    [sym_record_signature_only] = STATE(162),
    [sym_field] = STATE(61),
    [sym__declaration] = STATE(162),
    [sym__declaration_block] = STATE(61),
    [sym_instance] = STATE(61),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(61),
    [sym_string] = ACTIONS(263),
    [sym_int] = ACTIONS(263),
    [sym_qualified_name] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(269),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_Prop] = ACTIONS(266),
    [anon_sym_Set] = ACTIONS(266),
    [anon_sym_quote] = ACTIONS(266),
    [anon_sym_quoteTerm] = ACTIONS(266),
    [anon_sym_unquote] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_codata] = ACTIONS(275),
    [anon_sym_record] = ACTIONS(278),
    [anon_sym_instance] = ACTIONS(281),
    [anon_sym_field] = ACTIONS(284),
    [sym_pragma] = ACTIONS(287),
  },
  [62] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(163),
    [sym__expr2] = STATE(163),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [63] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(164),
    [sym__expr2] = STATE(164),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [64] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(165),
    [sym__expr2] = STATE(165),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [65] = {
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
  },
  [66] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(167),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [67] = {
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
  },
  [68] = {
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(57),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(294),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(294),
    [anon_sym_COLON] = ACTIONS(296),
  },
  [70] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
  },
  [71] = {
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [72] = {
    [sym_literal] = STATE(71),
    [sym__expr2] = STATE(89),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [73] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
  },
  [74] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(172),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [75] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(302),
  },
  [76] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
  },
  [77] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [78] = {
    [sym_literal] = STATE(77),
    [sym__expr2] = STATE(89),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(174),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [79] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(304),
  },
  [80] = {
    [sym__newline] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_rewrite] = ACTIONS(308),
    [anon_sym_with] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
  },
  [81] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(176),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [82] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [83] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(178),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_where] = ACTIONS(237),
  },
  [85] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [86] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [87] = {
    [sym_literal] = STATE(86),
    [sym__expr2] = STATE(89),
    [sym_atom] = STATE(85),
    [sym__atom_curly] = STATE(86),
    [sym__atom_no_curly] = STATE(86),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(131),
    [sym_int] = ACTIONS(131),
    [sym_qualified_name] = ACTIONS(133),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(133),
    [anon_sym_Prop] = ACTIONS(133),
    [anon_sym_Set] = ACTIONS(133),
    [anon_sym_quote] = ACTIONS(133),
    [anon_sym_quoteTerm] = ACTIONS(133),
    [anon_sym_unquote] = ACTIONS(133),
  },
  [88] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(68),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(248),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_where] = ACTIONS(248),
  },
  [90] = {
    [sym_literal] = STATE(181),
    [sym_atom] = STATE(90),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(259),
    [sym_string] = ACTIONS(312),
    [sym_int] = ACTIONS(312),
    [sym_qualified_name] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(318),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_Prop] = ACTIONS(315),
    [anon_sym_Set] = ACTIONS(315),
    [anon_sym_quote] = ACTIONS(315),
    [anon_sym_quoteTerm] = ACTIONS(315),
    [anon_sym_unquote] = ACTIONS(315),
  },
  [91] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(182),
    [sym__expr2] = STATE(182),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [92] = {
    [sym_typed_binding] = STATE(92),
    [aux_sym__typed_bindings1_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_DOT_DOT] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(332),
    [sym_comment] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(335),
  },
  [93] = {
    [sym_name] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_DOT_DOT] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(338),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_where] = ACTIONS(338),
  },
  [94] = {
    [sym_binding_name] = STATE(186),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(342),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(344),
  },
  [95] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(187),
    [sym__expr2] = STATE(187),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [96] = {
    [sym_literal] = STATE(192),
    [sym__application] = STATE(190),
    [sym__expr2] = STATE(190),
    [sym_atom] = STATE(191),
    [sym__atom_curly] = STATE(192),
    [sym__atom_no_curly] = STATE(192),
    [aux_sym__application_repeat1] = STATE(193),
    [sym_string] = ACTIONS(346),
    [sym_int] = ACTIONS(346),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(350),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
  },
  [97] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(194),
    [sym__expr2] = STATE(194),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [98] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(197),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [99] = {
    [sym__declarations0] = STATE(205),
    [sym__newline] = ACTIONS(358),
    [sym__indent] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [100] = {
    [sym_name] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_DOT_DOT] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(360),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_where] = ACTIONS(360),
  },
  [101] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(362),
    [anon_sym_where] = ACTIONS(364),
  },
  [102] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(208),
    [sym_typed_binding] = STATE(208),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(208),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_where] = ACTIONS(366),
  },
  [103] = {
    [sym_literal] = STATE(215),
    [sym_expr] = STATE(211),
    [sym__expr1] = STATE(212),
    [sym__application] = STATE(212),
    [sym__expr2] = STATE(212),
    [sym__atoms1] = STATE(213),
    [sym_atom] = STATE(214),
    [sym__atom_curly] = STATE(215),
    [sym__atom_no_curly] = STATE(215),
    [sym__typed_bindings1] = STATE(216),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(217),
    [aux_sym__application_repeat1] = STATE(218),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(368),
    [sym_int] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [104] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(374),
    [anon_sym_where] = ACTIONS(364),
  },
  [105] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(220),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [106] = {
    [sym_record_declarations_block] = STATE(222),
    [sym__indent] = ACTIONS(376),
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym_string] = ACTIONS(380),
    [sym_int] = ACTIONS(380),
    [sym_qualified_name] = ACTIONS(380),
    [anon_sym__] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_Prop] = ACTIONS(380),
    [anon_sym_Set] = ACTIONS(380),
    [anon_sym_quote] = ACTIONS(380),
    [anon_sym_quoteTerm] = ACTIONS(380),
    [anon_sym_unquote] = ACTIONS(380),
    [anon_sym_data] = ACTIONS(380),
    [anon_sym_codata] = ACTIONS(380),
    [anon_sym_record] = ACTIONS(380),
    [anon_sym_instance] = ACTIONS(380),
    [anon_sym_field] = ACTIONS(380),
    [sym_pragma] = ACTIONS(380),
  },
  [107] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_where] = ACTIONS(384),
  },
  [108] = {
    [sym_name] = ACTIONS(386),
    [sym_comment] = ACTIONS(13),
  },
  [109] = {
    [sym_name] = ACTIONS(388),
    [sym_comment] = ACTIONS(13),
  },
  [110] = {
    [sym_literal] = STATE(227),
    [sym__atom_no_curly] = STATE(227),
    [sym_string] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_qualified_name] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_Prop] = ACTIONS(390),
    [anon_sym_Set] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_quoteTerm] = ACTIONS(390),
    [anon_sym_unquote] = ACTIONS(390),
  },
  [111] = {
    [sym__declarations0] = STATE(229),
    [sym__newline] = ACTIONS(392),
    [sym__indent] = ACTIONS(394),
    [sym_comment] = ACTIONS(57),
  },
  [112] = {
    [sym__arg_type_signatures_block] = STATE(231),
    [sym__indent] = ACTIONS(396),
    [sym_comment] = ACTIONS(57),
  },
  [113] = {
    [sym__newline] = ACTIONS(398),
    [sym_comment] = ACTIONS(57),
  },
  [114] = {
    [sym__dedent] = ACTIONS(91),
    [sym_string] = ACTIONS(93),
    [sym_int] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_Prop] = ACTIONS(93),
    [anon_sym_Set] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(93),
    [anon_sym_quoteTerm] = ACTIONS(93),
    [anon_sym_unquote] = ACTIONS(93),
    [anon_sym_data] = ACTIONS(93),
    [anon_sym_codata] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_instance] = ACTIONS(93),
    [anon_sym_field] = ACTIONS(93),
    [sym_pragma] = ACTIONS(93),
  },
  [115] = {
    [sym__dedent] = ACTIONS(400),
    [sym_comment] = ACTIONS(57),
  },
  [116] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(234),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(235),
    [sym_data_signature_only] = STATE(234),
    [sym_record] = STATE(235),
    [sym_record_signature_only] = STATE(234),
    [sym_field] = STATE(235),
    [sym__declaration] = STATE(234),
    [sym__declaration_block] = STATE(235),
    [sym_instance] = STATE(235),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(61),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(402),
  },
  [117] = {
    [sym_name] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(408),
    [sym_comment] = ACTIONS(13),
  },
  [118] = {
    [sym__maybe_dotted_names1] = STATE(240),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(241),
    [sym_name] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_DOT_DOT] = ACTIONS(412),
    [sym_comment] = ACTIONS(13),
  },
  [119] = {
    [sym__maybe_dotted_names1] = STATE(243),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(244),
    [sym_name] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_DOT_DOT] = ACTIONS(416),
    [sym_comment] = ACTIONS(13),
  },
  [120] = {
    [sym__arg_type_signatures_block] = STATE(246),
    [sym__indent] = ACTIONS(418),
    [sym_comment] = ACTIONS(57),
  },
  [121] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym__arg_names] = STATE(247),
    [sym_arg_name] = STATE(125),
    [aux_sym__arg_names_repeat1] = STATE(125),
    [sym_name] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
  },
  [122] = {
    [sym_name] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(420),
    [anon_sym_DOT_DOT] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(420),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(420),
  },
  [123] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(422),
  },
  [124] = {
    [sym__dedent] = ACTIONS(424),
    [sym_comment] = ACTIONS(57),
  },
  [125] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym_arg_name] = STATE(250),
    [aux_sym__arg_names_repeat1] = STATE(250),
    [sym_name] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(426),
  },
  [126] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym__arg_names] = STATE(123),
    [sym_arg_name] = STATE(125),
    [sym_arg_type_signature] = STATE(251),
    [aux_sym__arg_names_repeat1] = STATE(125),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(251),
    [sym__dedent] = ACTIONS(428),
    [sym_name] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(193),
    [anon_sym_overlap] = ACTIONS(195),
  },
  [127] = {
    [sym__newline] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_with] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(29),
  },
  [128] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(253),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(430),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [129] = {
    [sym__newline] = ACTIONS(432),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_with] = ACTIONS(432),
    [anon_sym_where] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(432),
  },
  [130] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [131] = {
    [sym__newline] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_with] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [132] = {
    [sym_literal] = STATE(131),
    [sym__application] = STATE(55),
    [sym__expr2] = STATE(55),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(130),
    [sym__atom_curly] = STATE(131),
    [sym__atom_no_curly] = STATE(131),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(133),
    [sym_string] = ACTIONS(201),
    [sym_int] = ACTIONS(201),
    [sym_qualified_name] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_Prop] = ACTIONS(203),
    [anon_sym_Set] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_quoteTerm] = ACTIONS(203),
    [anon_sym_unquote] = ACTIONS(203),
  },
  [133] = {
    [sym_literal] = STATE(131),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(130),
    [sym__atom_curly] = STATE(131),
    [sym__atom_no_curly] = STATE(131),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(201),
    [sym_int] = ACTIONS(201),
    [sym_qualified_name] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_Prop] = ACTIONS(203),
    [anon_sym_Set] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_quoteTerm] = ACTIONS(203),
    [anon_sym_unquote] = ACTIONS(203),
  },
  [134] = {
    [sym__newline] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(29),
  },
  [135] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(255),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [136] = {
    [sym__newline] = ACTIONS(436),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_COLON] = ACTIONS(436),
    [anon_sym_where] = ACTIONS(436),
    [anon_sym_module] = ACTIONS(436),
  },
  [137] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [138] = {
    [sym__newline] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [139] = {
    [sym_literal] = STATE(138),
    [sym__application] = STATE(55),
    [sym__expr2] = STATE(55),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(137),
    [sym__atom_curly] = STATE(138),
    [sym__atom_no_curly] = STATE(138),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(140),
    [sym_string] = ACTIONS(207),
    [sym_int] = ACTIONS(207),
    [sym_qualified_name] = ACTIONS(209),
    [anon_sym__] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_Prop] = ACTIONS(209),
    [anon_sym_Set] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_quoteTerm] = ACTIONS(209),
    [anon_sym_unquote] = ACTIONS(209),
  },
  [140] = {
    [sym_literal] = STATE(138),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(137),
    [sym__atom_curly] = STATE(138),
    [sym__atom_no_curly] = STATE(138),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(207),
    [sym_int] = ACTIONS(207),
    [sym_qualified_name] = ACTIONS(209),
    [anon_sym__] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_Prop] = ACTIONS(209),
    [anon_sym_Set] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_quoteTerm] = ACTIONS(209),
    [anon_sym_unquote] = ACTIONS(209),
  },
  [141] = {
    [sym__newline] = ACTIONS(438),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(438),
    [anon_sym_COLON] = ACTIONS(438),
    [anon_sym_where] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(438),
  },
  [142] = {
    [sym__newline] = ACTIONS(27),
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(29),
  },
  [143] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(257),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [144] = {
    [sym__newline] = ACTIONS(442),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(442),
    [anon_sym_module] = ACTIONS(442),
  },
  [145] = {
    [sym__newline] = ACTIONS(127),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_module] = ACTIONS(127),
  },
  [146] = {
    [sym__const_right_arrow] = ACTIONS(444),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [147] = {
    [sym__newline] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [148] = {
    [sym__newline] = ACTIONS(77),
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [149] = {
    [sym__const_right_arrow] = ACTIONS(444),
    [sym_comment] = ACTIONS(57),
  },
  [150] = {
    [sym_literal] = STATE(262),
    [sym__application] = STATE(55),
    [sym__expr2] = STATE(55),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(263),
    [sym_string] = ACTIONS(446),
    [sym_int] = ACTIONS(446),
    [sym_qualified_name] = ACTIONS(448),
    [anon_sym__] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(448),
    [anon_sym_Prop] = ACTIONS(448),
    [anon_sym_Set] = ACTIONS(448),
    [anon_sym_quote] = ACTIONS(448),
    [anon_sym_quoteTerm] = ACTIONS(448),
    [anon_sym_unquote] = ACTIONS(448),
  },
  [151] = {
    [sym_literal] = STATE(148),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(147),
    [sym__atom_curly] = STATE(148),
    [sym__atom_no_curly] = STATE(148),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(217),
    [sym_int] = ACTIONS(217),
    [sym_qualified_name] = ACTIONS(219),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(452),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_Prop] = ACTIONS(219),
    [anon_sym_Set] = ACTIONS(219),
    [anon_sym_quote] = ACTIONS(219),
    [anon_sym_quoteTerm] = ACTIONS(219),
    [anon_sym_unquote] = ACTIONS(219),
  },
  [152] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(265),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [153] = {
    [sym__newline] = ACTIONS(454),
    [sym_comment] = ACTIONS(57),
  },
  [154] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(456),
  },
  [155] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(458),
  },
  [156] = {
    [sym__newline] = ACTIONS(460),
    [sym_comment] = ACTIONS(57),
  },
  [157] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
  },
  [158] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(268),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(462),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [159] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
  },
  [160] = {
    [sym_literal] = STATE(159),
    [sym_atom] = STATE(58),
    [sym__atom_curly] = STATE(159),
    [sym__atom_no_curly] = STATE(159),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(464),
    [sym_int] = ACTIONS(464),
    [sym_qualified_name] = ACTIONS(466),
    [anon_sym__] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(468),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(466),
    [anon_sym_Prop] = ACTIONS(466),
    [anon_sym_Set] = ACTIONS(466),
    [anon_sym_quote] = ACTIONS(466),
    [anon_sym_quoteTerm] = ACTIONS(466),
    [anon_sym_unquote] = ACTIONS(466),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_string] = ACTIONS(235),
    [sym_int] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_Prop] = ACTIONS(235),
    [anon_sym_Set] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_quoteTerm] = ACTIONS(235),
    [anon_sym_unquote] = ACTIONS(235),
    [anon_sym_data] = ACTIONS(235),
    [anon_sym_codata] = ACTIONS(235),
    [anon_sym_record] = ACTIONS(235),
    [anon_sym_instance] = ACTIONS(235),
    [anon_sym_field] = ACTIONS(235),
    [sym_pragma] = ACTIONS(235),
  },
  [162] = {
    [sym__newline] = ACTIONS(472),
    [sym_comment] = ACTIONS(57),
  },
  [163] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(474),
  },
  [164] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(476),
  },
  [165] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(478),
  },
  [166] = {
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
  },
  [167] = {
    [anon_sym_RBRACE] = ACTIONS(480),
    [sym_comment] = ACTIONS(57),
  },
  [168] = {
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
  },
  [169] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(274),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [170] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(167),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [171] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(57),
  },
  [173] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(278),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(484),
    [sym_int] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [174] = {
    [sym_literal] = STATE(288),
    [sym_atom] = STATE(174),
    [sym__atom_curly] = STATE(288),
    [sym__atom_no_curly] = STATE(288),
    [aux_sym__application_repeat1] = STATE(174),
    [sym_string] = ACTIONS(490),
    [sym_int] = ACTIONS(490),
    [sym_qualified_name] = ACTIONS(493),
    [anon_sym__] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(496),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(493),
    [anon_sym_Prop] = ACTIONS(493),
    [anon_sym_Set] = ACTIONS(493),
    [anon_sym_quote] = ACTIONS(493),
    [anon_sym_quoteTerm] = ACTIONS(493),
    [anon_sym_unquote] = ACTIONS(493),
  },
  [175] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(289),
    [sym__expr1] = STATE(290),
    [sym__application] = STATE(290),
    [sym__expr2] = STATE(290),
    [sym__atoms1] = STATE(291),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(292),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [176] = {
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_comment] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_where] = ACTIONS(499),
  },
  [177] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
  },
  [178] = {
    [anon_sym_RBRACE] = ACTIONS(501),
    [sym_comment] = ACTIONS(57),
  },
  [179] = {
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
  },
  [180] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(295),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [181] = {
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
  },
  [182] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(296),
  },
  [183] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(296),
    [sym__expr2] = STATE(296),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [184] = {
    [sym_literal] = STATE(192),
    [sym__application] = STATE(297),
    [sym__expr2] = STATE(297),
    [sym_atom] = STATE(191),
    [sym__atom_curly] = STATE(192),
    [sym__atom_no_curly] = STATE(192),
    [aux_sym__application_repeat1] = STATE(193),
    [sym_string] = ACTIONS(346),
    [sym_int] = ACTIONS(346),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(350),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
  },
  [185] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(298),
    [sym__expr2] = STATE(298),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(78),
    [sym_string] = ACTIONS(119),
    [sym_int] = ACTIONS(119),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(123),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [186] = {
    [sym_name] = ACTIONS(505),
    [anon_sym__] = ACTIONS(505),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_DOT_DOT] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(505),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(505),
    [anon_sym_where] = ACTIONS(505),
  },
  [187] = {
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(509),
  },
  [188] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
  },
  [189] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(302),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [190] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(513),
  },
  [191] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
  },
  [192] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [193] = {
    [sym_literal] = STATE(192),
    [sym__expr2] = STATE(304),
    [sym_atom] = STATE(191),
    [sym__atom_curly] = STATE(192),
    [sym__atom_no_curly] = STATE(192),
    [aux_sym__application_repeat1] = STATE(174),
    [sym_string] = ACTIONS(346),
    [sym_int] = ACTIONS(346),
    [sym_qualified_name] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(350),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_Prop] = ACTIONS(348),
    [anon_sym_Set] = ACTIONS(348),
    [anon_sym_quote] = ACTIONS(348),
    [anon_sym_quoteTerm] = ACTIONS(348),
    [anon_sym_unquote] = ACTIONS(348),
  },
  [194] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(515),
  },
  [195] = {
    [sym__newline] = ACTIONS(27),
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
  },
  [196] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(307),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [197] = {
    [sym__newline] = ACTIONS(519),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(521),
  },
  [198] = {
    [sym__newline] = ACTIONS(127),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(523),
    [anon_sym_where] = ACTIONS(127),
  },
  [199] = {
    [sym__const_right_arrow] = ACTIONS(523),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [200] = {
    [sym__newline] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(75),
  },
  [201] = {
    [sym__newline] = ACTIONS(77),
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
  },
  [202] = {
    [sym__const_right_arrow] = ACTIONS(523),
    [sym_comment] = ACTIONS(57),
  },
  [203] = {
    [sym_literal] = STATE(313),
    [sym__application] = STATE(55),
    [sym__expr2] = STATE(55),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(312),
    [sym__atom_curly] = STATE(313),
    [sym__atom_no_curly] = STATE(313),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(314),
    [sym_string] = ACTIONS(525),
    [sym_int] = ACTIONS(525),
    [sym_qualified_name] = ACTIONS(527),
    [anon_sym__] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(527),
    [anon_sym_Prop] = ACTIONS(527),
    [anon_sym_Set] = ACTIONS(527),
    [anon_sym_quote] = ACTIONS(527),
    [anon_sym_quoteTerm] = ACTIONS(527),
    [anon_sym_unquote] = ACTIONS(527),
  },
  [204] = {
    [sym_literal] = STATE(201),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(531),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [sym_string] = ACTIONS(535),
    [sym_int] = ACTIONS(535),
    [sym_qualified_name] = ACTIONS(535),
    [anon_sym__] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_Prop] = ACTIONS(535),
    [anon_sym_Set] = ACTIONS(535),
    [anon_sym_quote] = ACTIONS(535),
    [anon_sym_quoteTerm] = ACTIONS(535),
    [anon_sym_unquote] = ACTIONS(535),
    [anon_sym_data] = ACTIONS(535),
    [anon_sym_codata] = ACTIONS(535),
    [anon_sym_record] = ACTIONS(535),
    [anon_sym_instance] = ACTIONS(535),
    [anon_sym_field] = ACTIONS(535),
    [sym_pragma] = ACTIONS(535),
  },
  [206] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(316),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [207] = {
    [sym__declarations0] = STATE(317),
    [sym__newline] = ACTIONS(537),
    [sym__indent] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [208] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(208),
    [sym_typed_binding] = STATE(208),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(208),
    [sym_name] = ACTIONS(539),
    [anon_sym__] = ACTIONS(539),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_DOT_DOT] = ACTIONS(542),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(554),
    [anon_sym_where] = ACTIONS(554),
  },
  [209] = {
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
  },
  [210] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(319),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [211] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(521),
  },
  [212] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_where] = ACTIONS(127),
  },
  [213] = {
    [sym__const_right_arrow] = ACTIONS(558),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [214] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(75),
  },
  [215] = {
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
  },
  [216] = {
    [sym__const_right_arrow] = ACTIONS(558),
    [sym_comment] = ACTIONS(57),
  },
  [217] = {
    [sym_literal] = STATE(324),
    [sym__application] = STATE(84),
    [sym__expr2] = STATE(84),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(323),
    [sym__atom_curly] = STATE(324),
    [sym__atom_no_curly] = STATE(324),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(325),
    [sym_string] = ACTIONS(560),
    [sym_int] = ACTIONS(560),
    [sym_qualified_name] = ACTIONS(562),
    [anon_sym__] = ACTIONS(562),
    [anon_sym_LBRACE] = ACTIONS(564),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_Prop] = ACTIONS(562),
    [anon_sym_Set] = ACTIONS(562),
    [anon_sym_quote] = ACTIONS(562),
    [anon_sym_quoteTerm] = ACTIONS(562),
    [anon_sym_unquote] = ACTIONS(562),
  },
  [218] = {
    [sym_literal] = STATE(215),
    [sym__expr2] = STATE(89),
    [sym_atom] = STATE(214),
    [sym__atom_curly] = STATE(215),
    [sym__atom_no_curly] = STATE(215),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(368),
    [sym_int] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(566),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
  },
  [219] = {
    [sym_literal] = STATE(215),
    [sym_expr] = STATE(327),
    [sym__expr1] = STATE(212),
    [sym__application] = STATE(212),
    [sym__expr2] = STATE(212),
    [sym__atoms1] = STATE(213),
    [sym_atom] = STATE(214),
    [sym__atom_curly] = STATE(215),
    [sym__atom_no_curly] = STATE(215),
    [sym__typed_bindings1] = STATE(216),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(217),
    [aux_sym__application_repeat1] = STATE(218),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(368),
    [sym_int] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [220] = {
    [sym__newline] = ACTIONS(568),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(570),
  },
  [221] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym__record_directives1] = STATE(334),
    [sym_record_constructor_instance] = STATE(335),
    [sym_record_constructor] = STATE(336),
    [sym__record_directive] = STATE(336),
    [sym_record_induction] = STATE(336),
    [sym_record_eta] = STATE(336),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(337),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__record_directives1_repeat1] = STATE(338),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym__dedent] = ACTIONS(572),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(574),
    [anon_sym_constructor] = ACTIONS(576),
    [anon_sym_inductive] = ACTIONS(578),
    [anon_sym_coinductive] = ACTIONS(578),
    [anon_sym_eta_DASHequality] = ACTIONS(580),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(580),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym_string] = ACTIONS(584),
    [sym_int] = ACTIONS(584),
    [sym_qualified_name] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_Prop] = ACTIONS(584),
    [anon_sym_Set] = ACTIONS(584),
    [anon_sym_quote] = ACTIONS(584),
    [anon_sym_quoteTerm] = ACTIONS(584),
    [anon_sym_unquote] = ACTIONS(584),
    [anon_sym_data] = ACTIONS(584),
    [anon_sym_codata] = ACTIONS(584),
    [anon_sym_record] = ACTIONS(584),
    [anon_sym_instance] = ACTIONS(584),
    [anon_sym_field] = ACTIONS(584),
    [sym_pragma] = ACTIONS(584),
  },
  [223] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(339),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [224] = {
    [sym_record_declarations_block] = STATE(340),
    [sym__indent] = ACTIONS(376),
    [ts_builtin_sym_end] = ACTIONS(582),
    [sym_string] = ACTIONS(584),
    [sym_int] = ACTIONS(584),
    [sym_qualified_name] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_Prop] = ACTIONS(584),
    [anon_sym_Set] = ACTIONS(584),
    [anon_sym_quote] = ACTIONS(584),
    [anon_sym_quoteTerm] = ACTIONS(584),
    [anon_sym_unquote] = ACTIONS(584),
    [anon_sym_data] = ACTIONS(584),
    [anon_sym_codata] = ACTIONS(584),
    [anon_sym_record] = ACTIONS(584),
    [anon_sym_instance] = ACTIONS(584),
    [anon_sym_field] = ACTIONS(584),
    [sym_pragma] = ACTIONS(584),
  },
  [225] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(102),
    [sym_typed_binding] = STATE(102),
    [sym__typed_untyped_binding1] = STATE(343),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(102),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(586),
    [anon_sym_where] = ACTIONS(588),
  },
  [226] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(102),
    [sym_typed_binding] = STATE(102),
    [sym__typed_untyped_binding1] = STATE(345),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(102),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(590),
    [anon_sym_where] = ACTIONS(588),
  },
  [227] = {
    [sym_binding_name] = STATE(100),
    [sym_untyped_binding] = STATE(102),
    [sym_typed_binding] = STATE(102),
    [sym__typed_untyped_binding1] = STATE(348),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(102),
    [sym_name] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(155),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(592),
    [anon_sym_where] = ACTIONS(594),
  },
  [228] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(349),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [229] = {
    [sym__dedent] = ACTIONS(181),
    [sym_string] = ACTIONS(183),
    [sym_int] = ACTIONS(183),
    [sym_qualified_name] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_Prop] = ACTIONS(183),
    [anon_sym_Set] = ACTIONS(183),
    [anon_sym_quote] = ACTIONS(183),
    [anon_sym_quoteTerm] = ACTIONS(183),
    [anon_sym_unquote] = ACTIONS(183),
    [anon_sym_data] = ACTIONS(183),
    [anon_sym_codata] = ACTIONS(183),
    [anon_sym_record] = ACTIONS(183),
    [anon_sym_instance] = ACTIONS(183),
    [anon_sym_field] = ACTIONS(183),
    [sym_pragma] = ACTIONS(183),
  },
  [230] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym__arg_names] = STATE(123),
    [sym_arg_name] = STATE(125),
    [sym__arg_type_signatures1] = STATE(350),
    [sym_arg_type_signature] = STATE(126),
    [aux_sym__arg_names_repeat1] = STATE(125),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(126),
    [sym_name] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(193),
    [anon_sym_overlap] = ACTIONS(195),
  },
  [231] = {
    [sym__dedent] = ACTIONS(197),
    [sym_string] = ACTIONS(199),
    [sym_int] = ACTIONS(199),
    [sym_qualified_name] = ACTIONS(199),
    [anon_sym__] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(199),
    [anon_sym_Prop] = ACTIONS(199),
    [anon_sym_Set] = ACTIONS(199),
    [anon_sym_quote] = ACTIONS(199),
    [anon_sym_quoteTerm] = ACTIONS(199),
    [anon_sym_unquote] = ACTIONS(199),
    [anon_sym_data] = ACTIONS(199),
    [anon_sym_codata] = ACTIONS(199),
    [anon_sym_record] = ACTIONS(199),
    [anon_sym_instance] = ACTIONS(199),
    [anon_sym_field] = ACTIONS(199),
    [sym_pragma] = ACTIONS(199),
  },
  [232] = {
    [sym__dedent] = ACTIONS(233),
    [sym_string] = ACTIONS(235),
    [sym_int] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_Prop] = ACTIONS(235),
    [anon_sym_Set] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_quoteTerm] = ACTIONS(235),
    [anon_sym_unquote] = ACTIONS(235),
    [anon_sym_data] = ACTIONS(235),
    [anon_sym_codata] = ACTIONS(235),
    [anon_sym_record] = ACTIONS(235),
    [anon_sym_instance] = ACTIONS(235),
    [anon_sym_field] = ACTIONS(235),
    [sym_pragma] = ACTIONS(235),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [sym_string] = ACTIONS(598),
    [sym_int] = ACTIONS(598),
    [sym_qualified_name] = ACTIONS(598),
    [anon_sym__] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(598),
    [anon_sym_Prop] = ACTIONS(598),
    [anon_sym_Set] = ACTIONS(598),
    [anon_sym_quote] = ACTIONS(598),
    [anon_sym_quoteTerm] = ACTIONS(598),
    [anon_sym_unquote] = ACTIONS(598),
    [anon_sym_data] = ACTIONS(598),
    [anon_sym_codata] = ACTIONS(598),
    [anon_sym_record] = ACTIONS(598),
    [anon_sym_instance] = ACTIONS(598),
    [anon_sym_field] = ACTIONS(598),
    [sym_pragma] = ACTIONS(598),
  },
  [234] = {
    [sym__newline] = ACTIONS(600),
    [sym_comment] = ACTIONS(57),
  },
  [235] = {
    [sym__dedent] = ACTIONS(233),
    [sym_string] = ACTIONS(93),
    [sym_int] = ACTIONS(93),
    [sym_qualified_name] = ACTIONS(93),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_Prop] = ACTIONS(93),
    [anon_sym_Set] = ACTIONS(93),
    [anon_sym_quote] = ACTIONS(93),
    [anon_sym_quoteTerm] = ACTIONS(93),
    [anon_sym_unquote] = ACTIONS(93),
    [anon_sym_data] = ACTIONS(93),
    [anon_sym_codata] = ACTIONS(93),
    [anon_sym_record] = ACTIONS(93),
    [anon_sym_instance] = ACTIONS(93),
    [anon_sym_field] = ACTIONS(93),
    [sym_pragma] = ACTIONS(93),
  },
  [236] = {
    [sym_name] = ACTIONS(602),
    [anon_sym_DOT] = ACTIONS(602),
    [anon_sym_DOT_DOT] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(602),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(602),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(602),
  },
  [237] = {
    [aux_sym_arg_name_repeat1] = STATE(352),
    [sym_name] = ACTIONS(604),
    [sym_comment] = ACTIONS(13),
  },
  [238] = {
    [aux_sym_arg_name_repeat1] = STATE(353),
    [sym_name] = ACTIONS(606),
    [sym_comment] = ACTIONS(13),
  },
  [239] = {
    [sym_name] = ACTIONS(608),
    [sym_comment] = ACTIONS(13),
  },
  [240] = {
    [anon_sym_RBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(57),
  },
  [241] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(356),
    [sym_name] = ACTIONS(612),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_DOT_DOT] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(614),
    [sym_comment] = ACTIONS(13),
  },
  [242] = {
    [sym_name] = ACTIONS(616),
    [sym_comment] = ACTIONS(13),
  },
  [243] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(610),
    [sym_comment] = ACTIONS(57),
  },
  [244] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(358),
    [sym_name] = ACTIONS(618),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_DOT_DOT] = ACTIONS(416),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(614),
    [sym_comment] = ACTIONS(13),
  },
  [245] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym__arg_names] = STATE(123),
    [sym_arg_name] = STATE(125),
    [sym__arg_type_signatures1] = STATE(359),
    [sym_arg_type_signature] = STATE(126),
    [aux_sym__arg_names_repeat1] = STATE(125),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(126),
    [sym_name] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_DOT_DOT] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(193),
    [anon_sym_overlap] = ACTIONS(195),
  },
  [246] = {
    [sym__dedent] = ACTIONS(620),
    [sym_name] = ACTIONS(622),
    [anon_sym_DOT] = ACTIONS(622),
    [anon_sym_DOT_DOT] = ACTIONS(622),
    [anon_sym_LBRACE] = ACTIONS(622),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(622),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(622),
    [anon_sym_overlap] = ACTIONS(622),
  },
  [247] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(624),
  },
  [248] = {
    [sym_literal] = STATE(367),
    [sym_expr] = STATE(363),
    [sym__expr1] = STATE(364),
    [sym__application] = STATE(364),
    [sym__expr2] = STATE(364),
    [sym__atoms1] = STATE(365),
    [sym_atom] = STATE(366),
    [sym__atom_curly] = STATE(367),
    [sym__atom_no_curly] = STATE(367),
    [sym__typed_bindings1] = STATE(368),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(369),
    [aux_sym__application_repeat1] = STATE(370),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(626),
    [sym_int] = ACTIONS(626),
    [sym_qualified_name] = ACTIONS(628),
    [anon_sym__] = ACTIONS(628),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(628),
    [anon_sym_Prop] = ACTIONS(628),
    [anon_sym_Set] = ACTIONS(628),
    [anon_sym_quote] = ACTIONS(628),
    [anon_sym_quoteTerm] = ACTIONS(628),
    [anon_sym_unquote] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [sym_string] = ACTIONS(634),
    [sym_int] = ACTIONS(634),
    [sym_qualified_name] = ACTIONS(634),
    [anon_sym__] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(634),
    [anon_sym_Prop] = ACTIONS(634),
    [anon_sym_Set] = ACTIONS(634),
    [anon_sym_quote] = ACTIONS(634),
    [anon_sym_quoteTerm] = ACTIONS(634),
    [anon_sym_unquote] = ACTIONS(634),
    [anon_sym_data] = ACTIONS(634),
    [anon_sym_codata] = ACTIONS(634),
    [anon_sym_record] = ACTIONS(634),
    [anon_sym_instance] = ACTIONS(634),
    [anon_sym_field] = ACTIONS(634),
    [sym_pragma] = ACTIONS(634),
  },
  [250] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym_arg_name] = STATE(250),
    [aux_sym__arg_names_repeat1] = STATE(250),
    [sym_name] = ACTIONS(636),
    [anon_sym_DOT] = ACTIONS(639),
    [anon_sym_DOT_DOT] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(642),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(645),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(648),
  },
  [251] = {
    [sym__maybe_dotted_name] = STATE(122),
    [sym__arg_names] = STATE(123),
    [sym_arg_name] = STATE(125),
    [sym_arg_type_signature] = STATE(251),
    [aux_sym__arg_names_repeat1] = STATE(125),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(251),
    [sym__dedent] = ACTIONS(650),
    [sym_name] = ACTIONS(652),
    [anon_sym_DOT] = ACTIONS(655),
    [anon_sym_DOT_DOT] = ACTIONS(655),
    [anon_sym_LBRACE] = ACTIONS(658),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(661),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(664),
    [anon_sym_overlap] = ACTIONS(667),
  },
  [252] = {
    [sym__newline] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_with] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
    [anon_sym_module] = ACTIONS(117),
  },
  [253] = {
    [anon_sym_RBRACE] = ACTIONS(670),
    [sym_comment] = ACTIONS(57),
  },
  [254] = {
    [sym__newline] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
    [anon_sym_module] = ACTIONS(117),
  },
  [255] = {
    [anon_sym_RBRACE] = ACTIONS(672),
    [sym_comment] = ACTIONS(57),
  },
  [256] = {
    [sym__newline] = ACTIONS(115),
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
    [anon_sym_module] = ACTIONS(117),
  },
  [257] = {
    [anon_sym_RBRACE] = ACTIONS(674),
    [sym_comment] = ACTIONS(57),
  },
  [258] = {
    [sym_literal] = STATE(148),
    [sym_expr] = STATE(374),
    [sym__expr1] = STATE(145),
    [sym__application] = STATE(145),
    [sym__expr2] = STATE(145),
    [sym__atoms1] = STATE(146),
    [sym_atom] = STATE(147),
    [sym__atom_curly] = STATE(148),
    [sym__atom_no_curly] = STATE(148),
    [sym__typed_bindings1] = STATE(149),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(150),
    [aux_sym__application_repeat1] = STATE(151),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(217),
    [sym_int] = ACTIONS(217),
    [sym_qualified_name] = ACTIONS(219),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(219),
    [anon_sym_Prop] = ACTIONS(219),
    [anon_sym_Set] = ACTIONS(219),
    [anon_sym_quote] = ACTIONS(219),
    [anon_sym_quoteTerm] = ACTIONS(219),
    [anon_sym_unquote] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [259] = {
    [sym__newline] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(29),
  },
  [260] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(376),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(676),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [261] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [262] = {
    [sym__newline] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [263] = {
    [sym_literal] = STATE(262),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(261),
    [sym__atom_curly] = STATE(262),
    [sym__atom_no_curly] = STATE(262),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(446),
    [sym_int] = ACTIONS(446),
    [sym_qualified_name] = ACTIONS(448),
    [anon_sym__] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(450),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(448),
    [anon_sym_Prop] = ACTIONS(448),
    [anon_sym_Set] = ACTIONS(448),
    [anon_sym_quote] = ACTIONS(448),
    [anon_sym_quoteTerm] = ACTIONS(448),
    [anon_sym_unquote] = ACTIONS(448),
  },
  [264] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(257),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [265] = {
    [sym__dedent] = ACTIONS(678),
    [sym_comment] = ACTIONS(57),
  },
  [266] = {
    [sym__declarations0] = STATE(378),
    [sym__newline] = ACTIONS(680),
    [sym__indent] = ACTIONS(225),
    [sym_comment] = ACTIONS(57),
  },
  [267] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(682),
    [sym_comment] = ACTIONS(57),
  },
  [269] = {
    [sym_string] = ACTIONS(235),
    [sym_int] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_Prop] = ACTIONS(235),
    [anon_sym_Set] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_quoteTerm] = ACTIONS(235),
    [anon_sym_unquote] = ACTIONS(235),
    [anon_sym_data] = ACTIONS(235),
    [anon_sym_codata] = ACTIONS(235),
    [anon_sym_record] = ACTIONS(235),
    [anon_sym_instance] = ACTIONS(235),
    [anon_sym_field] = ACTIONS(235),
    [sym_pragma] = ACTIONS(235),
  },
  [270] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(380),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [271] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(381),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(484),
    [sym_int] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [272] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(382),
    [sym__expr1] = STATE(290),
    [sym__application] = STATE(290),
    [sym__expr2] = STATE(290),
    [sym__atoms1] = STATE(291),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(292),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [273] = {
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(684),
    [sym_comment] = ACTIONS(57),
  },
  [275] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
  },
  [276] = {
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
  },
  [277] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(385),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(686),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [278] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(684),
    [sym_comment] = ACTIONS(57),
  },
  [279] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(688),
  },
  [280] = {
    [sym__const_right_arrow] = ACTIONS(688),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [281] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [282] = {
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
  },
  [283] = {
    [sym__const_right_arrow] = ACTIONS(688),
    [sym_comment] = ACTIONS(57),
  },
  [284] = {
    [sym_literal] = STATE(391),
    [sym__application] = STATE(389),
    [sym__expr2] = STATE(389),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(390),
    [sym__atom_curly] = STATE(391),
    [sym__atom_no_curly] = STATE(391),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(392),
    [sym_string] = ACTIONS(690),
    [sym_int] = ACTIONS(690),
    [sym_qualified_name] = ACTIONS(692),
    [anon_sym__] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(694),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(692),
    [anon_sym_Prop] = ACTIONS(692),
    [anon_sym_Set] = ACTIONS(692),
    [anon_sym_quote] = ACTIONS(692),
    [anon_sym_quoteTerm] = ACTIONS(692),
    [anon_sym_unquote] = ACTIONS(692),
  },
  [285] = {
    [sym_literal] = STATE(282),
    [sym__expr2] = STATE(304),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(484),
    [sym_int] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(696),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
  },
  [286] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
  },
  [287] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(395),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(698),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [288] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
  },
  [289] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(684),
  },
  [290] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(127),
  },
  [291] = {
    [sym__const_right_arrow] = ACTIONS(700),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [292] = {
    [sym__const_right_arrow] = ACTIONS(700),
    [sym_comment] = ACTIONS(57),
  },
  [293] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
  },
  [294] = {
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
  },
  [295] = {
    [anon_sym_RBRACE] = ACTIONS(702),
    [sym_comment] = ACTIONS(57),
  },
  [296] = {
    [anon_sym_RBRACE] = ACTIONS(704),
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(706),
  },
  [297] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(704),
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(708),
  },
  [298] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(710),
  },
  [299] = {
    [sym_name] = ACTIONS(712),
    [anon_sym__] = ACTIONS(712),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_DOT_DOT] = ACTIONS(712),
    [anon_sym_LBRACE] = ACTIONS(712),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_COLON] = ACTIONS(712),
    [anon_sym_where] = ACTIONS(712),
  },
  [300] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(402),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [301] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
  },
  [302] = {
    [anon_sym_RBRACE] = ACTIONS(714),
    [sym_comment] = ACTIONS(57),
  },
  [303] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(404),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(484),
    [sym_int] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [304] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(248),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
  },
  [305] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(405),
    [sym__expr1] = STATE(290),
    [sym__application] = STATE(290),
    [sym__expr2] = STATE(290),
    [sym__atoms1] = STATE(291),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(292),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [306] = {
    [sym__newline] = ACTIONS(115),
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(716),
    [sym_comment] = ACTIONS(57),
  },
  [308] = {
    [sym__declarations0] = STATE(407),
    [sym__newline] = ACTIONS(718),
    [sym__indent] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [309] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(374),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [310] = {
    [sym__newline] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
  },
  [311] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(409),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(720),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [312] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(75),
  },
  [313] = {
    [sym__newline] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
  },
  [314] = {
    [sym_literal] = STATE(313),
    [sym__expr2] = STATE(57),
    [sym_atom] = STATE(312),
    [sym__atom_curly] = STATE(313),
    [sym__atom_no_curly] = STATE(313),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(525),
    [sym_int] = ACTIONS(525),
    [sym_qualified_name] = ACTIONS(527),
    [anon_sym__] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(527),
    [anon_sym_Prop] = ACTIONS(527),
    [anon_sym_Set] = ACTIONS(527),
    [anon_sym_quote] = ACTIONS(527),
    [anon_sym_quoteTerm] = ACTIONS(527),
    [anon_sym_unquote] = ACTIONS(527),
  },
  [315] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(307),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [316] = {
    [sym__newline] = ACTIONS(722),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(724),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(726),
    [sym_string] = ACTIONS(728),
    [sym_int] = ACTIONS(728),
    [sym_qualified_name] = ACTIONS(728),
    [anon_sym__] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(728),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(728),
    [anon_sym_Prop] = ACTIONS(728),
    [anon_sym_Set] = ACTIONS(728),
    [anon_sym_quote] = ACTIONS(728),
    [anon_sym_quoteTerm] = ACTIONS(728),
    [anon_sym_unquote] = ACTIONS(728),
    [anon_sym_data] = ACTIONS(728),
    [anon_sym_codata] = ACTIONS(728),
    [anon_sym_record] = ACTIONS(728),
    [anon_sym_instance] = ACTIONS(728),
    [anon_sym_field] = ACTIONS(728),
    [sym_pragma] = ACTIONS(728),
  },
  [318] = {
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
  },
  [319] = {
    [anon_sym_RBRACE] = ACTIONS(730),
    [sym_comment] = ACTIONS(57),
  },
  [320] = {
    [sym_literal] = STATE(215),
    [sym_expr] = STATE(176),
    [sym__expr1] = STATE(212),
    [sym__application] = STATE(212),
    [sym__expr2] = STATE(212),
    [sym__atoms1] = STATE(213),
    [sym_atom] = STATE(214),
    [sym__atom_curly] = STATE(215),
    [sym__atom_no_curly] = STATE(215),
    [sym__typed_bindings1] = STATE(216),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(217),
    [aux_sym__application_repeat1] = STATE(218),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(368),
    [sym_int] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [321] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_where] = ACTIONS(29),
  },
  [322] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(413),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(732),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [323] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(75),
  },
  [324] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
  },
  [325] = {
    [sym_literal] = STATE(324),
    [sym__expr2] = STATE(89),
    [sym_atom] = STATE(323),
    [sym__atom_curly] = STATE(324),
    [sym__atom_no_curly] = STATE(324),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(560),
    [sym_int] = ACTIONS(560),
    [sym_qualified_name] = ACTIONS(562),
    [anon_sym__] = ACTIONS(562),
    [anon_sym_LBRACE] = ACTIONS(564),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(562),
    [anon_sym_Prop] = ACTIONS(562),
    [anon_sym_Set] = ACTIONS(562),
    [anon_sym_quote] = ACTIONS(562),
    [anon_sym_quoteTerm] = ACTIONS(562),
    [anon_sym_unquote] = ACTIONS(562),
  },
  [326] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(319),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(556),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [327] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(724),
  },
  [328] = {
    [sym_record_declarations_block] = STATE(414),
    [sym__indent] = ACTIONS(376),
    [ts_builtin_sym_end] = ACTIONS(734),
    [sym_string] = ACTIONS(736),
    [sym_int] = ACTIONS(736),
    [sym_qualified_name] = ACTIONS(736),
    [anon_sym__] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(736),
    [anon_sym_Prop] = ACTIONS(736),
    [anon_sym_Set] = ACTIONS(736),
    [anon_sym_quote] = ACTIONS(736),
    [anon_sym_quoteTerm] = ACTIONS(736),
    [anon_sym_unquote] = ACTIONS(736),
    [anon_sym_data] = ACTIONS(736),
    [anon_sym_codata] = ACTIONS(736),
    [anon_sym_record] = ACTIONS(736),
    [anon_sym_instance] = ACTIONS(736),
    [anon_sym_field] = ACTIONS(736),
    [sym_pragma] = ACTIONS(736),
  },
  [329] = {
    [ts_builtin_sym_end] = ACTIONS(738),
    [sym_string] = ACTIONS(740),
    [sym_int] = ACTIONS(740),
    [sym_qualified_name] = ACTIONS(740),
    [anon_sym__] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(740),
    [anon_sym_Prop] = ACTIONS(740),
    [anon_sym_Set] = ACTIONS(740),
    [anon_sym_quote] = ACTIONS(740),
    [anon_sym_quoteTerm] = ACTIONS(740),
    [anon_sym_unquote] = ACTIONS(740),
    [anon_sym_data] = ACTIONS(740),
    [anon_sym_codata] = ACTIONS(740),
    [anon_sym_record] = ACTIONS(740),
    [anon_sym_instance] = ACTIONS(740),
    [anon_sym_field] = ACTIONS(740),
    [sym_pragma] = ACTIONS(740),
  },
  [330] = {
    [sym__declarations0] = STATE(229),
    [sym__newline] = ACTIONS(392),
    [sym__indent] = ACTIONS(742),
    [sym_comment] = ACTIONS(57),
  },
  [331] = {
    [sym_name] = ACTIONS(744),
    [sym_comment] = ACTIONS(13),
  },
  [332] = {
    [sym__newline] = ACTIONS(746),
    [sym_comment] = ACTIONS(57),
  },
  [333] = {
    [sym__newline] = ACTIONS(748),
    [sym_comment] = ACTIONS(57),
  },
  [334] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(418),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym__dedent] = ACTIONS(750),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [335] = {
    [sym__dedent] = ACTIONS(752),
    [sym_string] = ACTIONS(754),
    [sym_int] = ACTIONS(754),
    [sym_qualified_name] = ACTIONS(754),
    [anon_sym__] = ACTIONS(754),
    [anon_sym_LBRACE] = ACTIONS(754),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(754),
    [anon_sym_Prop] = ACTIONS(754),
    [anon_sym_Set] = ACTIONS(754),
    [anon_sym_quote] = ACTIONS(754),
    [anon_sym_quoteTerm] = ACTIONS(754),
    [anon_sym_unquote] = ACTIONS(754),
    [anon_sym_data] = ACTIONS(754),
    [anon_sym_codata] = ACTIONS(754),
    [anon_sym_record] = ACTIONS(754),
    [anon_sym_instance] = ACTIONS(756),
    [anon_sym_constructor] = ACTIONS(759),
    [anon_sym_inductive] = ACTIONS(759),
    [anon_sym_coinductive] = ACTIONS(759),
    [anon_sym_eta_DASHequality] = ACTIONS(759),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(759),
    [anon_sym_field] = ACTIONS(754),
    [sym_pragma] = ACTIONS(754),
  },
  [336] = {
    [sym__newline] = ACTIONS(761),
    [sym_comment] = ACTIONS(57),
  },
  [337] = {
    [sym__dedent] = ACTIONS(750),
    [sym_comment] = ACTIONS(57),
  },
  [338] = {
    [sym_record_constructor_instance] = STATE(421),
    [sym_record_constructor] = STATE(422),
    [sym__record_directive] = STATE(422),
    [sym_record_induction] = STATE(422),
    [sym_record_eta] = STATE(422),
    [aux_sym__record_directives1_repeat1] = STATE(423),
    [sym_comment] = ACTIONS(57),
    [anon_sym_instance] = ACTIONS(763),
    [anon_sym_constructor] = ACTIONS(765),
    [anon_sym_inductive] = ACTIONS(767),
    [anon_sym_coinductive] = ACTIONS(767),
    [anon_sym_eta_DASHequality] = ACTIONS(769),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(769),
  },
  [339] = {
    [sym__newline] = ACTIONS(771),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(773),
  },
  [340] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [sym_string] = ACTIONS(736),
    [sym_int] = ACTIONS(736),
    [sym_qualified_name] = ACTIONS(736),
    [anon_sym__] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(736),
    [anon_sym_Prop] = ACTIONS(736),
    [anon_sym_Set] = ACTIONS(736),
    [anon_sym_quote] = ACTIONS(736),
    [anon_sym_quoteTerm] = ACTIONS(736),
    [anon_sym_unquote] = ACTIONS(736),
    [anon_sym_data] = ACTIONS(736),
    [anon_sym_codata] = ACTIONS(736),
    [anon_sym_record] = ACTIONS(736),
    [anon_sym_instance] = ACTIONS(736),
    [anon_sym_field] = ACTIONS(736),
    [sym_pragma] = ACTIONS(736),
  },
  [341] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(425),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [342] = {
    [sym__declarations0] = STATE(426),
    [sym__newline] = ACTIONS(775),
    [sym__indent] = ACTIONS(394),
    [sym_comment] = ACTIONS(57),
  },
  [343] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(779),
  },
  [344] = {
    [sym_literal] = STATE(215),
    [sym_expr] = STATE(429),
    [sym__expr1] = STATE(212),
    [sym__application] = STATE(212),
    [sym__expr2] = STATE(212),
    [sym__atoms1] = STATE(213),
    [sym_atom] = STATE(214),
    [sym__atom_curly] = STATE(215),
    [sym__atom_no_curly] = STATE(215),
    [sym__typed_bindings1] = STATE(216),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(217),
    [aux_sym__application_repeat1] = STATE(218),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(368),
    [sym_int] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [345] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(781),
    [anon_sym_where] = ACTIONS(779),
  },
  [346] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(431),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [347] = {
    [sym_record_declarations_block] = STATE(433),
    [sym__indent] = ACTIONS(783),
    [sym__dedent] = ACTIONS(378),
    [sym_string] = ACTIONS(380),
    [sym_int] = ACTIONS(380),
    [sym_qualified_name] = ACTIONS(380),
    [anon_sym__] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(380),
    [anon_sym_Prop] = ACTIONS(380),
    [anon_sym_Set] = ACTIONS(380),
    [anon_sym_quote] = ACTIONS(380),
    [anon_sym_quoteTerm] = ACTIONS(380),
    [anon_sym_unquote] = ACTIONS(380),
    [anon_sym_data] = ACTIONS(380),
    [anon_sym_codata] = ACTIONS(380),
    [anon_sym_record] = ACTIONS(380),
    [anon_sym_instance] = ACTIONS(380),
    [anon_sym_field] = ACTIONS(380),
    [sym_pragma] = ACTIONS(380),
  },
  [348] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(785),
    [anon_sym_where] = ACTIONS(787),
  },
  [349] = {
    [sym__dedent] = ACTIONS(789),
    [sym_comment] = ACTIONS(57),
  },
  [350] = {
    [sym__dedent] = ACTIONS(791),
    [sym_comment] = ACTIONS(57),
  },
  [351] = {
    [sym__dedent] = ACTIONS(470),
    [sym_string] = ACTIONS(235),
    [sym_int] = ACTIONS(235),
    [sym_qualified_name] = ACTIONS(235),
    [anon_sym__] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(235),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(235),
    [anon_sym_Prop] = ACTIONS(235),
    [anon_sym_Set] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_quoteTerm] = ACTIONS(235),
    [anon_sym_unquote] = ACTIONS(235),
    [anon_sym_data] = ACTIONS(235),
    [anon_sym_codata] = ACTIONS(235),
    [anon_sym_record] = ACTIONS(235),
    [anon_sym_instance] = ACTIONS(235),
    [anon_sym_field] = ACTIONS(235),
    [sym_pragma] = ACTIONS(235),
  },
  [352] = {
    [aux_sym_arg_name_repeat1] = STATE(439),
    [sym_name] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(795),
    [sym_comment] = ACTIONS(13),
  },
  [353] = {
    [aux_sym_arg_name_repeat1] = STATE(440),
    [sym_name] = ACTIONS(797),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(795),
    [sym_comment] = ACTIONS(13),
  },
  [354] = {
    [sym_name] = ACTIONS(799),
    [anon_sym_DOT] = ACTIONS(799),
    [anon_sym_DOT_DOT] = ACTIONS(799),
    [anon_sym_RBRACE] = ACTIONS(799),
    [sym_comment] = ACTIONS(13),
  },
  [355] = {
    [sym_name] = ACTIONS(801),
    [anon_sym_DOT] = ACTIONS(801),
    [anon_sym_DOT_DOT] = ACTIONS(801),
    [anon_sym_LBRACE] = ACTIONS(801),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(801),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(801),
  },
  [356] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(356),
    [sym_name] = ACTIONS(803),
    [anon_sym_DOT] = ACTIONS(806),
    [anon_sym_DOT_DOT] = ACTIONS(806),
    [anon_sym_RBRACE] = ACTIONS(799),
    [sym_comment] = ACTIONS(13),
  },
  [357] = {
    [sym_name] = ACTIONS(799),
    [anon_sym_DOT] = ACTIONS(799),
    [anon_sym_DOT_DOT] = ACTIONS(799),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(799),
    [sym_comment] = ACTIONS(13),
  },
  [358] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(358),
    [sym_name] = ACTIONS(809),
    [anon_sym_DOT] = ACTIONS(812),
    [anon_sym_DOT_DOT] = ACTIONS(812),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(799),
    [sym_comment] = ACTIONS(13),
  },
  [359] = {
    [sym__dedent] = ACTIONS(815),
    [sym_comment] = ACTIONS(57),
  },
  [360] = {
    [sym_literal] = STATE(367),
    [sym_expr] = STATE(442),
    [sym__expr1] = STATE(364),
    [sym__application] = STATE(364),
    [sym__expr2] = STATE(364),
    [sym__atoms1] = STATE(365),
    [sym_atom] = STATE(366),
    [sym__atom_curly] = STATE(367),
    [sym__atom_no_curly] = STATE(367),
    [sym__typed_bindings1] = STATE(368),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(369),
    [aux_sym__application_repeat1] = STATE(370),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(626),
    [sym_int] = ACTIONS(626),
    [sym_qualified_name] = ACTIONS(628),
    [anon_sym__] = ACTIONS(628),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(628),
    [anon_sym_Prop] = ACTIONS(628),
    [anon_sym_Set] = ACTIONS(628),
    [anon_sym_quote] = ACTIONS(628),
    [anon_sym_quoteTerm] = ACTIONS(628),
    [anon_sym_unquote] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [361] = {
    [sym__dedent] = ACTIONS(27),
    [sym__const_right_arrow] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_instance] = ACTIONS(29),
    [anon_sym_overlap] = ACTIONS(29),
  },
  [362] = {
    [sym_literal] = STATE(71),
    [sym_expr] = STATE(444),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(69),
    [sym__expr2] = STATE(69),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(70),
    [sym__atom_curly] = STATE(71),
    [sym__atom_no_curly] = STATE(71),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(72),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(107),
    [sym_int] = ACTIONS(107),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [363] = {
    [sym__dedent] = ACTIONS(819),
    [sym_name] = ACTIONS(821),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_DOT_DOT] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(821),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(821),
    [anon_sym_overlap] = ACTIONS(821),
  },
  [364] = {
    [sym__dedent] = ACTIONS(127),
    [sym_name] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_DOT_DOT] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(825),
    [anon_sym_instance] = ACTIONS(823),
    [anon_sym_overlap] = ACTIONS(823),
  },
  [365] = {
    [sym__const_right_arrow] = ACTIONS(827),
    [sym_comment] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(69),
  },
  [366] = {
    [sym__dedent] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_name] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_overlap] = ACTIONS(75),
  },
  [367] = {
    [sym__dedent] = ACTIONS(77),
    [sym__const_right_arrow] = ACTIONS(79),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_name] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_instance] = ACTIONS(79),
    [anon_sym_overlap] = ACTIONS(79),
  },
  [368] = {
    [sym__const_right_arrow] = ACTIONS(827),
    [sym_comment] = ACTIONS(57),
  },
  [369] = {
    [sym_literal] = STATE(450),
    [sym__application] = STATE(448),
    [sym__expr2] = STATE(448),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(449),
    [sym__atom_curly] = STATE(450),
    [sym__atom_no_curly] = STATE(450),
    [aux_sym__expr1_repeat1] = STATE(56),
    [aux_sym__application_repeat1] = STATE(451),
    [sym_string] = ACTIONS(829),
    [sym_int] = ACTIONS(829),
    [sym_qualified_name] = ACTIONS(831),
    [anon_sym__] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(833),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(831),
    [anon_sym_Prop] = ACTIONS(831),
    [anon_sym_Set] = ACTIONS(831),
    [anon_sym_quote] = ACTIONS(831),
    [anon_sym_quoteTerm] = ACTIONS(831),
    [anon_sym_unquote] = ACTIONS(831),
  },
  [370] = {
    [sym_literal] = STATE(367),
    [sym__expr2] = STATE(453),
    [sym_atom] = STATE(366),
    [sym__atom_curly] = STATE(367),
    [sym__atom_no_curly] = STATE(367),
    [aux_sym__application_repeat1] = STATE(90),
    [sym__const_right_arrow] = ACTIONS(97),
    [sym_string] = ACTIONS(626),
    [sym_int] = ACTIONS(626),
    [sym_qualified_name] = ACTIONS(628),
    [anon_sym__] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(835),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(628),
    [anon_sym_Prop] = ACTIONS(628),
    [anon_sym_Set] = ACTIONS(628),
    [anon_sym_quote] = ACTIONS(628),
    [anon_sym_quoteTerm] = ACTIONS(628),
    [anon_sym_unquote] = ACTIONS(628),
  },
  [371] = {
    [sym__newline] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_with] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
  },
  [372] = {
    [sym__newline] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
  },
  [373] = {
    [sym__newline] = ACTIONS(306),
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
  },
  [374] = {
    [sym__newline] = ACTIONS(499),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(499),
    [anon_sym_module] = ACTIONS(499),
  },
  [375] = {
    [sym__newline] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
    [anon_sym_module] = ACTIONS(117),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(57),
  },
  [377] = {
    [sym__newline] = ACTIONS(596),
    [sym_comment] = ACTIONS(57),
  },
  [378] = {
    [sym__newline] = ACTIONS(839),
    [sym_comment] = ACTIONS(57),
  },
  [379] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
  },
  [380] = {
    [anon_sym_RBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(57),
  },
  [381] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(57),
  },
  [382] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(841),
  },
  [383] = {
    [sym__const_right_arrow] = ACTIONS(843),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT] = ACTIONS(843),
    [anon_sym_LBRACE] = ACTIONS(845),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(843),
    [sym_comment] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(843),
  },
  [384] = {
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(57),
  },
  [386] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(457),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(484),
    [sym_int] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [387] = {
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
  },
  [388] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(459),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(849),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [389] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(237),
    [sym_comment] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(237),
  },
  [390] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [391] = {
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
  },
  [392] = {
    [sym_literal] = STATE(391),
    [sym__expr2] = STATE(304),
    [sym_atom] = STATE(390),
    [sym__atom_curly] = STATE(391),
    [sym__atom_no_curly] = STATE(391),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(690),
    [sym_int] = ACTIONS(690),
    [sym_qualified_name] = ACTIONS(692),
    [anon_sym__] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(694),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(692),
    [anon_sym_Prop] = ACTIONS(692),
    [anon_sym_Set] = ACTIONS(692),
    [anon_sym_quote] = ACTIONS(692),
    [anon_sym_quoteTerm] = ACTIONS(692),
    [anon_sym_unquote] = ACTIONS(692),
  },
  [393] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(385),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(686),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [394] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
  },
  [395] = {
    [anon_sym_RBRACE] = ACTIONS(851),
    [sym_comment] = ACTIONS(57),
  },
  [396] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(176),
    [sym__expr1] = STATE(290),
    [sym__application] = STATE(290),
    [sym__expr2] = STATE(290),
    [sym__atoms1] = STATE(291),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(292),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [397] = {
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
  },
  [398] = {
    [sym_name] = ACTIONS(853),
    [anon_sym__] = ACTIONS(853),
    [anon_sym_DOT] = ACTIONS(853),
    [anon_sym_DOT_DOT] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(853),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(853),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(853),
    [anon_sym_COLON] = ACTIONS(853),
    [anon_sym_where] = ACTIONS(853),
  },
  [399] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(461),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [400] = {
    [sym_literal] = STATE(282),
    [sym_expr] = STATE(462),
    [sym__expr1] = STATE(279),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym__atoms1] = STATE(280),
    [sym_atom] = STATE(281),
    [sym__atom_curly] = STATE(282),
    [sym__atom_no_curly] = STATE(282),
    [sym__typed_bindings1] = STATE(283),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(284),
    [aux_sym__application_repeat1] = STATE(285),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(484),
    [sym_int] = ACTIONS(484),
    [sym_qualified_name] = ACTIONS(486),
    [anon_sym__] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(486),
    [anon_sym_Prop] = ACTIONS(486),
    [anon_sym_Set] = ACTIONS(486),
    [anon_sym_quote] = ACTIONS(486),
    [anon_sym_quoteTerm] = ACTIONS(486),
    [anon_sym_unquote] = ACTIONS(486),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [401] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(463),
    [sym__expr1] = STATE(290),
    [sym__application] = STATE(290),
    [sym__expr2] = STATE(290),
    [sym__atoms1] = STATE(291),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(292),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [402] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(57),
  },
  [403] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
  },
  [404] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(57),
  },
  [405] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(855),
  },
  [406] = {
    [sym__newline] = ACTIONS(306),
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
  },
  [407] = {
    [ts_builtin_sym_end] = ACTIONS(857),
    [sym_string] = ACTIONS(859),
    [sym_int] = ACTIONS(859),
    [sym_qualified_name] = ACTIONS(859),
    [anon_sym__] = ACTIONS(859),
    [anon_sym_LBRACE] = ACTIONS(859),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(859),
    [anon_sym_Prop] = ACTIONS(859),
    [anon_sym_Set] = ACTIONS(859),
    [anon_sym_quote] = ACTIONS(859),
    [anon_sym_quoteTerm] = ACTIONS(859),
    [anon_sym_unquote] = ACTIONS(859),
    [anon_sym_data] = ACTIONS(859),
    [anon_sym_codata] = ACTIONS(859),
    [anon_sym_record] = ACTIONS(859),
    [anon_sym_instance] = ACTIONS(859),
    [anon_sym_field] = ACTIONS(859),
    [sym_pragma] = ACTIONS(859),
  },
  [408] = {
    [sym__newline] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
  },
  [409] = {
    [anon_sym_RBRACE] = ACTIONS(861),
    [sym_comment] = ACTIONS(57),
  },
  [410] = {
    [sym__declarations0] = STATE(466),
    [sym__newline] = ACTIONS(863),
    [sym__indent] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [411] = {
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
  },
  [412] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_where] = ACTIONS(117),
  },
  [413] = {
    [anon_sym_RBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(57),
  },
  [414] = {
    [ts_builtin_sym_end] = ACTIONS(867),
    [sym_string] = ACTIONS(869),
    [sym_int] = ACTIONS(869),
    [sym_qualified_name] = ACTIONS(869),
    [anon_sym__] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(869),
    [anon_sym_Prop] = ACTIONS(869),
    [anon_sym_Set] = ACTIONS(869),
    [anon_sym_quote] = ACTIONS(869),
    [anon_sym_quoteTerm] = ACTIONS(869),
    [anon_sym_unquote] = ACTIONS(869),
    [anon_sym_data] = ACTIONS(869),
    [anon_sym_codata] = ACTIONS(869),
    [anon_sym_record] = ACTIONS(869),
    [anon_sym_instance] = ACTIONS(869),
    [anon_sym_field] = ACTIONS(869),
    [sym_pragma] = ACTIONS(869),
  },
  [415] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(349),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_constructor] = ACTIONS(871),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [416] = {
    [sym__newline] = ACTIONS(873),
    [sym_comment] = ACTIONS(57),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(875),
    [sym_string] = ACTIONS(877),
    [sym_int] = ACTIONS(877),
    [sym_qualified_name] = ACTIONS(877),
    [anon_sym__] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(877),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(877),
    [anon_sym_Prop] = ACTIONS(877),
    [anon_sym_Set] = ACTIONS(877),
    [anon_sym_quote] = ACTIONS(877),
    [anon_sym_quoteTerm] = ACTIONS(877),
    [anon_sym_unquote] = ACTIONS(877),
    [anon_sym_data] = ACTIONS(877),
    [anon_sym_codata] = ACTIONS(877),
    [anon_sym_record] = ACTIONS(877),
    [anon_sym_instance] = ACTIONS(877),
    [anon_sym_field] = ACTIONS(877),
    [sym_pragma] = ACTIONS(877),
  },
  [418] = {
    [sym__dedent] = ACTIONS(879),
    [sym_comment] = ACTIONS(57),
  },
  [419] = {
    [sym__dedent] = ACTIONS(881),
    [sym_string] = ACTIONS(883),
    [sym_int] = ACTIONS(883),
    [sym_qualified_name] = ACTIONS(883),
    [anon_sym__] = ACTIONS(883),
    [anon_sym_LBRACE] = ACTIONS(883),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(883),
    [anon_sym_Prop] = ACTIONS(883),
    [anon_sym_Set] = ACTIONS(883),
    [anon_sym_quote] = ACTIONS(883),
    [anon_sym_quoteTerm] = ACTIONS(883),
    [anon_sym_unquote] = ACTIONS(883),
    [anon_sym_data] = ACTIONS(883),
    [anon_sym_codata] = ACTIONS(883),
    [anon_sym_record] = ACTIONS(883),
    [anon_sym_instance] = ACTIONS(885),
    [anon_sym_constructor] = ACTIONS(888),
    [anon_sym_inductive] = ACTIONS(888),
    [anon_sym_coinductive] = ACTIONS(888),
    [anon_sym_eta_DASHequality] = ACTIONS(888),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(888),
    [anon_sym_field] = ACTIONS(883),
    [sym_pragma] = ACTIONS(883),
  },
  [420] = {
    [sym__indent] = ACTIONS(890),
    [sym_comment] = ACTIONS(57),
  },
  [421] = {
    [sym__dedent] = ACTIONS(881),
    [sym_string] = ACTIONS(883),
    [sym_int] = ACTIONS(883),
    [sym_qualified_name] = ACTIONS(883),
    [anon_sym__] = ACTIONS(883),
    [anon_sym_LBRACE] = ACTIONS(883),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(883),
    [anon_sym_Prop] = ACTIONS(883),
    [anon_sym_Set] = ACTIONS(883),
    [anon_sym_quote] = ACTIONS(883),
    [anon_sym_quoteTerm] = ACTIONS(883),
    [anon_sym_unquote] = ACTIONS(883),
    [anon_sym_data] = ACTIONS(883),
    [anon_sym_codata] = ACTIONS(883),
    [anon_sym_record] = ACTIONS(883),
    [anon_sym_instance] = ACTIONS(892),
    [anon_sym_constructor] = ACTIONS(759),
    [anon_sym_inductive] = ACTIONS(759),
    [anon_sym_coinductive] = ACTIONS(759),
    [anon_sym_eta_DASHequality] = ACTIONS(759),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(759),
    [anon_sym_field] = ACTIONS(883),
    [sym_pragma] = ACTIONS(883),
  },
  [422] = {
    [sym__newline] = ACTIONS(895),
    [sym_comment] = ACTIONS(57),
  },
  [423] = {
    [sym_record_constructor_instance] = STATE(423),
    [sym_record_constructor] = STATE(473),
    [sym__record_directive] = STATE(473),
    [sym_record_induction] = STATE(473),
    [sym_record_eta] = STATE(473),
    [aux_sym__record_directives1_repeat1] = STATE(423),
    [sym_comment] = ACTIONS(57),
    [anon_sym_instance] = ACTIONS(897),
    [anon_sym_constructor] = ACTIONS(900),
    [anon_sym_inductive] = ACTIONS(903),
    [anon_sym_coinductive] = ACTIONS(903),
    [anon_sym_eta_DASHequality] = ACTIONS(906),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(906),
  },
  [424] = {
    [sym_record_declarations_block] = STATE(474),
    [sym__indent] = ACTIONS(376),
    [ts_builtin_sym_end] = ACTIONS(867),
    [sym_string] = ACTIONS(869),
    [sym_int] = ACTIONS(869),
    [sym_qualified_name] = ACTIONS(869),
    [anon_sym__] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(869),
    [anon_sym_Prop] = ACTIONS(869),
    [anon_sym_Set] = ACTIONS(869),
    [anon_sym_quote] = ACTIONS(869),
    [anon_sym_quoteTerm] = ACTIONS(869),
    [anon_sym_unquote] = ACTIONS(869),
    [anon_sym_data] = ACTIONS(869),
    [anon_sym_codata] = ACTIONS(869),
    [anon_sym_record] = ACTIONS(869),
    [anon_sym_instance] = ACTIONS(869),
    [anon_sym_field] = ACTIONS(869),
    [sym_pragma] = ACTIONS(869),
  },
  [425] = {
    [sym__newline] = ACTIONS(519),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(909),
  },
  [426] = {
    [sym__dedent] = ACTIONS(533),
    [sym_string] = ACTIONS(535),
    [sym_int] = ACTIONS(535),
    [sym_qualified_name] = ACTIONS(535),
    [anon_sym__] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_Prop] = ACTIONS(535),
    [anon_sym_Set] = ACTIONS(535),
    [anon_sym_quote] = ACTIONS(535),
    [anon_sym_quoteTerm] = ACTIONS(535),
    [anon_sym_unquote] = ACTIONS(535),
    [anon_sym_data] = ACTIONS(535),
    [anon_sym_codata] = ACTIONS(535),
    [anon_sym_record] = ACTIONS(535),
    [anon_sym_instance] = ACTIONS(535),
    [anon_sym_field] = ACTIONS(535),
    [sym_pragma] = ACTIONS(535),
  },
  [427] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(476),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [428] = {
    [sym__declarations0] = STATE(477),
    [sym__newline] = ACTIONS(911),
    [sym__indent] = ACTIONS(394),
    [sym_comment] = ACTIONS(57),
  },
  [429] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(909),
  },
  [430] = {
    [sym_literal] = STATE(215),
    [sym_expr] = STATE(478),
    [sym__expr1] = STATE(212),
    [sym__application] = STATE(212),
    [sym__expr2] = STATE(212),
    [sym__atoms1] = STATE(213),
    [sym_atom] = STATE(214),
    [sym__atom_curly] = STATE(215),
    [sym__atom_no_curly] = STATE(215),
    [sym__typed_bindings1] = STATE(216),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(217),
    [aux_sym__application_repeat1] = STATE(218),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(368),
    [sym_int] = ACTIONS(368),
    [sym_qualified_name] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_Prop] = ACTIONS(370),
    [anon_sym_Set] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_quoteTerm] = ACTIONS(370),
    [anon_sym_unquote] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [431] = {
    [sym__newline] = ACTIONS(568),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(913),
  },
  [432] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym__record_directives1] = STATE(481),
    [sym_record_constructor_instance] = STATE(335),
    [sym_record_constructor] = STATE(336),
    [sym__record_directive] = STATE(336),
    [sym_record_induction] = STATE(336),
    [sym_record_eta] = STATE(336),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(482),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__record_directives1_repeat1] = STATE(338),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym__dedent] = ACTIONS(915),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(574),
    [anon_sym_constructor] = ACTIONS(576),
    [anon_sym_inductive] = ACTIONS(578),
    [anon_sym_coinductive] = ACTIONS(578),
    [anon_sym_eta_DASHequality] = ACTIONS(580),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(580),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [433] = {
    [sym__dedent] = ACTIONS(582),
    [sym_string] = ACTIONS(584),
    [sym_int] = ACTIONS(584),
    [sym_qualified_name] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_Prop] = ACTIONS(584),
    [anon_sym_Set] = ACTIONS(584),
    [anon_sym_quote] = ACTIONS(584),
    [anon_sym_quoteTerm] = ACTIONS(584),
    [anon_sym_unquote] = ACTIONS(584),
    [anon_sym_data] = ACTIONS(584),
    [anon_sym_codata] = ACTIONS(584),
    [anon_sym_record] = ACTIONS(584),
    [anon_sym_instance] = ACTIONS(584),
    [anon_sym_field] = ACTIONS(584),
    [sym_pragma] = ACTIONS(584),
  },
  [434] = {
    [sym_literal] = STATE(201),
    [sym_expr] = STATE(483),
    [sym__expr1] = STATE(198),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym__atoms1] = STATE(199),
    [sym_atom] = STATE(200),
    [sym__atom_curly] = STATE(201),
    [sym__atom_no_curly] = STATE(201),
    [sym__typed_bindings1] = STATE(202),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(203),
    [aux_sym__application_repeat1] = STATE(204),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(352),
    [sym_int] = ACTIONS(352),
    [sym_qualified_name] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_Prop] = ACTIONS(354),
    [anon_sym_Set] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_quoteTerm] = ACTIONS(354),
    [anon_sym_unquote] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [435] = {
    [sym_record_declarations_block] = STATE(484),
    [sym__indent] = ACTIONS(783),
    [sym__dedent] = ACTIONS(582),
    [sym_string] = ACTIONS(584),
    [sym_int] = ACTIONS(584),
    [sym_qualified_name] = ACTIONS(584),
    [anon_sym__] = ACTIONS(584),
    [anon_sym_LBRACE] = ACTIONS(584),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(584),
    [anon_sym_Prop] = ACTIONS(584),
    [anon_sym_Set] = ACTIONS(584),
    [anon_sym_quote] = ACTIONS(584),
    [anon_sym_quoteTerm] = ACTIONS(584),
    [anon_sym_unquote] = ACTIONS(584),
    [anon_sym_data] = ACTIONS(584),
    [anon_sym_codata] = ACTIONS(584),
    [anon_sym_record] = ACTIONS(584),
    [anon_sym_instance] = ACTIONS(584),
    [anon_sym_field] = ACTIONS(584),
    [sym_pragma] = ACTIONS(584),
  },
  [436] = {
    [sym__dedent] = ACTIONS(596),
    [sym_string] = ACTIONS(598),
    [sym_int] = ACTIONS(598),
    [sym_qualified_name] = ACTIONS(598),
    [anon_sym__] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(598),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(598),
    [anon_sym_Prop] = ACTIONS(598),
    [anon_sym_Set] = ACTIONS(598),
    [anon_sym_quote] = ACTIONS(598),
    [anon_sym_quoteTerm] = ACTIONS(598),
    [anon_sym_unquote] = ACTIONS(598),
    [anon_sym_data] = ACTIONS(598),
    [anon_sym_codata] = ACTIONS(598),
    [anon_sym_record] = ACTIONS(598),
    [anon_sym_instance] = ACTIONS(598),
    [anon_sym_field] = ACTIONS(598),
    [sym_pragma] = ACTIONS(598),
  },
  [437] = {
    [sym__dedent] = ACTIONS(632),
    [sym_string] = ACTIONS(634),
    [sym_int] = ACTIONS(634),
    [sym_qualified_name] = ACTIONS(634),
    [anon_sym__] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(634),
    [anon_sym_Prop] = ACTIONS(634),
    [anon_sym_Set] = ACTIONS(634),
    [anon_sym_quote] = ACTIONS(634),
    [anon_sym_quoteTerm] = ACTIONS(634),
    [anon_sym_unquote] = ACTIONS(634),
    [anon_sym_data] = ACTIONS(634),
    [anon_sym_codata] = ACTIONS(634),
    [anon_sym_record] = ACTIONS(634),
    [anon_sym_instance] = ACTIONS(634),
    [anon_sym_field] = ACTIONS(634),
    [sym_pragma] = ACTIONS(634),
  },
  [438] = {
    [sym_name] = ACTIONS(917),
    [anon_sym_DOT] = ACTIONS(917),
    [anon_sym_DOT_DOT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(917),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(917),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(917),
  },
  [439] = {
    [aux_sym_arg_name_repeat1] = STATE(439),
    [sym_name] = ACTIONS(919),
    [anon_sym_RBRACE] = ACTIONS(922),
    [sym_comment] = ACTIONS(13),
  },
  [440] = {
    [aux_sym_arg_name_repeat1] = STATE(440),
    [sym_name] = ACTIONS(924),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(922),
    [sym_comment] = ACTIONS(13),
  },
  [441] = {
    [sym__dedent] = ACTIONS(632),
    [sym_name] = ACTIONS(634),
    [anon_sym_DOT] = ACTIONS(634),
    [anon_sym_DOT_DOT] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(634),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(634),
    [anon_sym_overlap] = ACTIONS(634),
  },
  [442] = {
    [sym__dedent] = ACTIONS(927),
    [sym_name] = ACTIONS(929),
    [anon_sym_DOT] = ACTIONS(929),
    [anon_sym_DOT_DOT] = ACTIONS(929),
    [anon_sym_LBRACE] = ACTIONS(929),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(929),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(929),
    [anon_sym_overlap] = ACTIONS(929),
  },
  [443] = {
    [sym__dedent] = ACTIONS(115),
    [sym__const_right_arrow] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_name] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_instance] = ACTIONS(117),
    [anon_sym_overlap] = ACTIONS(117),
  },
  [444] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [sym_comment] = ACTIONS(57),
  },
  [445] = {
    [sym_literal] = STATE(367),
    [sym_expr] = STATE(486),
    [sym__expr1] = STATE(364),
    [sym__application] = STATE(364),
    [sym__expr2] = STATE(364),
    [sym__atoms1] = STATE(365),
    [sym_atom] = STATE(366),
    [sym__atom_curly] = STATE(367),
    [sym__atom_no_curly] = STATE(367),
    [sym__typed_bindings1] = STATE(368),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(369),
    [aux_sym__application_repeat1] = STATE(370),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(626),
    [sym_int] = ACTIONS(626),
    [sym_qualified_name] = ACTIONS(628),
    [anon_sym__] = ACTIONS(628),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(630),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(628),
    [anon_sym_Prop] = ACTIONS(628),
    [anon_sym_Set] = ACTIONS(628),
    [anon_sym_quote] = ACTIONS(628),
    [anon_sym_quoteTerm] = ACTIONS(628),
    [anon_sym_unquote] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [446] = {
    [sym__dedent] = ACTIONS(27),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(29),
    [anon_sym__] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(29),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_QMARK] = ACTIONS(29),
    [anon_sym_Prop] = ACTIONS(29),
    [anon_sym_Set] = ACTIONS(29),
    [anon_sym_quote] = ACTIONS(29),
    [anon_sym_quoteTerm] = ACTIONS(29),
    [anon_sym_unquote] = ACTIONS(29),
    [anon_sym_instance] = ACTIONS(29),
    [anon_sym_overlap] = ACTIONS(29),
  },
  [447] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(488),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [448] = {
    [sym__dedent] = ACTIONS(237),
    [sym_name] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(935),
    [anon_sym_DOT_DOT] = ACTIONS(935),
    [anon_sym_LBRACE] = ACTIONS(935),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(935),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(935),
    [anon_sym_instance] = ACTIONS(935),
    [anon_sym_overlap] = ACTIONS(935),
  },
  [449] = {
    [sym__dedent] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_name] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_overlap] = ACTIONS(75),
  },
  [450] = {
    [sym__dedent] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_name] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_instance] = ACTIONS(79),
    [anon_sym_overlap] = ACTIONS(79),
  },
  [451] = {
    [sym_literal] = STATE(450),
    [sym__expr2] = STATE(453),
    [sym_atom] = STATE(449),
    [sym__atom_curly] = STATE(450),
    [sym__atom_no_curly] = STATE(450),
    [aux_sym__application_repeat1] = STATE(58),
    [sym_string] = ACTIONS(829),
    [sym_int] = ACTIONS(829),
    [sym_qualified_name] = ACTIONS(831),
    [anon_sym__] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(833),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_QMARK] = ACTIONS(831),
    [anon_sym_Prop] = ACTIONS(831),
    [anon_sym_Set] = ACTIONS(831),
    [anon_sym_quote] = ACTIONS(831),
    [anon_sym_quoteTerm] = ACTIONS(831),
    [anon_sym_unquote] = ACTIONS(831),
  },
  [452] = {
    [sym_literal] = STATE(31),
    [sym_expr] = STATE(444),
    [sym__expr1] = STATE(28),
    [sym__application] = STATE(28),
    [sym__expr2] = STATE(28),
    [sym__atoms1] = STATE(29),
    [sym_atom] = STATE(30),
    [sym__atom_curly] = STATE(31),
    [sym__atom_no_curly] = STATE(31),
    [sym__typed_bindings1] = STATE(32),
    [sym_typed_binding] = STATE(35),
    [aux_sym__expr1_repeat1] = STATE(33),
    [aux_sym__application_repeat1] = STATE(34),
    [aux_sym__typed_bindings1_repeat1] = STATE(35),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(33),
    [anon_sym__] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [anon_sym_DOT_DOT] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(33),
    [anon_sym_Prop] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_quote] = ACTIONS(33),
    [anon_sym_quoteTerm] = ACTIONS(33),
    [anon_sym_unquote] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(43),
  },
  [453] = {
    [sym__dedent] = ACTIONS(248),
    [sym_name] = ACTIONS(937),
    [anon_sym_DOT] = ACTIONS(937),
    [anon_sym_DOT_DOT] = ACTIONS(937),
    [anon_sym_LBRACE] = ACTIONS(937),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(937),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(937),
    [anon_sym_instance] = ACTIONS(937),
    [anon_sym_overlap] = ACTIONS(937),
  },
  [454] = {
    [sym__newline] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(308),
  },
  [455] = {
    [sym__const_right_arrow] = ACTIONS(939),
    [anon_sym_DOT] = ACTIONS(941),
    [anon_sym_DOT_DOT] = ACTIONS(939),
    [anon_sym_LBRACE] = ACTIONS(941),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(939),
    [sym_comment] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(939),
  },
  [456] = {
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
  },
  [457] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(499),
    [sym_comment] = ACTIONS(57),
  },
  [458] = {
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
  },
  [459] = {
    [anon_sym_RBRACE] = ACTIONS(943),
    [sym_comment] = ACTIONS(57),
  },
  [460] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(945),
    [sym_comment] = ACTIONS(57),
  },
  [462] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(945),
    [sym_comment] = ACTIONS(57),
  },
  [463] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(945),
  },
  [464] = {
    [sym_name] = ACTIONS(845),
    [anon_sym__] = ACTIONS(845),
    [anon_sym_DOT] = ACTIONS(845),
    [anon_sym_DOT_DOT] = ACTIONS(845),
    [anon_sym_LBRACE] = ACTIONS(845),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(845),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(845),
    [anon_sym_COLON] = ACTIONS(845),
    [anon_sym_where] = ACTIONS(845),
  },
  [465] = {
    [sym__newline] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
  },
  [466] = {
    [ts_builtin_sym_end] = ACTIONS(947),
    [sym_string] = ACTIONS(949),
    [sym_int] = ACTIONS(949),
    [sym_qualified_name] = ACTIONS(949),
    [anon_sym__] = ACTIONS(949),
    [anon_sym_LBRACE] = ACTIONS(949),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(949),
    [anon_sym_Prop] = ACTIONS(949),
    [anon_sym_Set] = ACTIONS(949),
    [anon_sym_quote] = ACTIONS(949),
    [anon_sym_quoteTerm] = ACTIONS(949),
    [anon_sym_unquote] = ACTIONS(949),
    [anon_sym_data] = ACTIONS(949),
    [anon_sym_codata] = ACTIONS(949),
    [anon_sym_record] = ACTIONS(949),
    [anon_sym_instance] = ACTIONS(949),
    [anon_sym_field] = ACTIONS(949),
    [sym_pragma] = ACTIONS(949),
  },
  [467] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
  },
  [468] = {
    [sym_name] = ACTIONS(951),
    [sym_comment] = ACTIONS(13),
  },
  [469] = {
    [ts_builtin_sym_end] = ACTIONS(953),
    [sym_string] = ACTIONS(955),
    [sym_int] = ACTIONS(955),
    [sym_qualified_name] = ACTIONS(955),
    [anon_sym__] = ACTIONS(955),
    [anon_sym_LBRACE] = ACTIONS(955),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(955),
    [anon_sym_Prop] = ACTIONS(955),
    [anon_sym_Set] = ACTIONS(955),
    [anon_sym_quote] = ACTIONS(955),
    [anon_sym_quoteTerm] = ACTIONS(955),
    [anon_sym_unquote] = ACTIONS(955),
    [anon_sym_data] = ACTIONS(955),
    [anon_sym_codata] = ACTIONS(955),
    [anon_sym_record] = ACTIONS(955),
    [anon_sym_instance] = ACTIONS(955),
    [anon_sym_field] = ACTIONS(955),
    [sym_pragma] = ACTIONS(955),
  },
  [470] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_constructor] = ACTIONS(957),
  },
  [471] = {
    [sym__dedent] = ACTIONS(959),
    [sym_string] = ACTIONS(961),
    [sym_int] = ACTIONS(961),
    [sym_qualified_name] = ACTIONS(961),
    [anon_sym__] = ACTIONS(961),
    [anon_sym_LBRACE] = ACTIONS(961),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(961),
    [anon_sym_Prop] = ACTIONS(961),
    [anon_sym_Set] = ACTIONS(961),
    [anon_sym_quote] = ACTIONS(961),
    [anon_sym_quoteTerm] = ACTIONS(961),
    [anon_sym_unquote] = ACTIONS(961),
    [anon_sym_data] = ACTIONS(961),
    [anon_sym_codata] = ACTIONS(961),
    [anon_sym_record] = ACTIONS(961),
    [anon_sym_instance] = ACTIONS(963),
    [anon_sym_constructor] = ACTIONS(888),
    [anon_sym_inductive] = ACTIONS(888),
    [anon_sym_coinductive] = ACTIONS(888),
    [anon_sym_eta_DASHequality] = ACTIONS(888),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(888),
    [anon_sym_field] = ACTIONS(961),
    [sym_pragma] = ACTIONS(961),
  },
  [472] = {
    [sym__indent] = ACTIONS(966),
    [sym_comment] = ACTIONS(57),
  },
  [473] = {
    [sym__newline] = ACTIONS(968),
    [sym_comment] = ACTIONS(57),
  },
  [474] = {
    [ts_builtin_sym_end] = ACTIONS(970),
    [sym_string] = ACTIONS(972),
    [sym_int] = ACTIONS(972),
    [sym_qualified_name] = ACTIONS(972),
    [anon_sym__] = ACTIONS(972),
    [anon_sym_LBRACE] = ACTIONS(972),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(972),
    [anon_sym_Prop] = ACTIONS(972),
    [anon_sym_Set] = ACTIONS(972),
    [anon_sym_quote] = ACTIONS(972),
    [anon_sym_quoteTerm] = ACTIONS(972),
    [anon_sym_unquote] = ACTIONS(972),
    [anon_sym_data] = ACTIONS(972),
    [anon_sym_codata] = ACTIONS(972),
    [anon_sym_record] = ACTIONS(972),
    [anon_sym_instance] = ACTIONS(972),
    [anon_sym_field] = ACTIONS(972),
    [sym_pragma] = ACTIONS(972),
  },
  [475] = {
    [sym__declarations0] = STATE(494),
    [sym__newline] = ACTIONS(974),
    [sym__indent] = ACTIONS(394),
    [sym_comment] = ACTIONS(57),
  },
  [476] = {
    [sym__newline] = ACTIONS(722),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(976),
  },
  [477] = {
    [sym__dedent] = ACTIONS(726),
    [sym_string] = ACTIONS(728),
    [sym_int] = ACTIONS(728),
    [sym_qualified_name] = ACTIONS(728),
    [anon_sym__] = ACTIONS(728),
    [anon_sym_LBRACE] = ACTIONS(728),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(728),
    [anon_sym_Prop] = ACTIONS(728),
    [anon_sym_Set] = ACTIONS(728),
    [anon_sym_quote] = ACTIONS(728),
    [anon_sym_quoteTerm] = ACTIONS(728),
    [anon_sym_unquote] = ACTIONS(728),
    [anon_sym_data] = ACTIONS(728),
    [anon_sym_codata] = ACTIONS(728),
    [anon_sym_record] = ACTIONS(728),
    [anon_sym_instance] = ACTIONS(728),
    [anon_sym_field] = ACTIONS(728),
    [sym_pragma] = ACTIONS(728),
  },
  [478] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(976),
  },
  [479] = {
    [sym_record_declarations_block] = STATE(496),
    [sym__indent] = ACTIONS(783),
    [sym__dedent] = ACTIONS(734),
    [sym_string] = ACTIONS(736),
    [sym_int] = ACTIONS(736),
    [sym_qualified_name] = ACTIONS(736),
    [anon_sym__] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(736),
    [anon_sym_Prop] = ACTIONS(736),
    [anon_sym_Set] = ACTIONS(736),
    [anon_sym_quote] = ACTIONS(736),
    [anon_sym_quoteTerm] = ACTIONS(736),
    [anon_sym_unquote] = ACTIONS(736),
    [anon_sym_data] = ACTIONS(736),
    [anon_sym_codata] = ACTIONS(736),
    [anon_sym_record] = ACTIONS(736),
    [anon_sym_instance] = ACTIONS(736),
    [anon_sym_field] = ACTIONS(736),
    [sym_pragma] = ACTIONS(736),
  },
  [480] = {
    [sym__dedent] = ACTIONS(738),
    [sym_string] = ACTIONS(740),
    [sym_int] = ACTIONS(740),
    [sym_qualified_name] = ACTIONS(740),
    [anon_sym__] = ACTIONS(740),
    [anon_sym_LBRACE] = ACTIONS(740),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(740),
    [anon_sym_Prop] = ACTIONS(740),
    [anon_sym_Set] = ACTIONS(740),
    [anon_sym_quote] = ACTIONS(740),
    [anon_sym_quoteTerm] = ACTIONS(740),
    [anon_sym_unquote] = ACTIONS(740),
    [anon_sym_data] = ACTIONS(740),
    [anon_sym_codata] = ACTIONS(740),
    [anon_sym_record] = ACTIONS(740),
    [anon_sym_instance] = ACTIONS(740),
    [anon_sym_field] = ACTIONS(740),
    [sym_pragma] = ACTIONS(740),
  },
  [481] = {
    [sym_literal] = STATE(13),
    [sym__expr1] = STATE(10),
    [sym__application] = STATE(10),
    [sym__expr2] = STATE(10),
    [sym__atoms1] = STATE(11),
    [sym_atom] = STATE(12),
    [sym__atom_curly] = STATE(13),
    [sym__atom_no_curly] = STATE(13),
    [sym_function_clause] = STATE(113),
    [sym_lhs] = STATE(14),
    [sym_data] = STATE(114),
    [sym_data_signature_only] = STATE(113),
    [sym_record] = STATE(114),
    [sym_record_signature_only] = STATE(113),
    [sym_field] = STATE(114),
    [sym__declaration] = STATE(113),
    [sym__declaration_block] = STATE(114),
    [sym_instance] = STATE(114),
    [sym__declarations1] = STATE(498),
    [aux_sym__expr1_repeat1] = STATE(18),
    [aux_sym__application_repeat1] = STATE(19),
    [aux_sym__declarations1_repeat1] = STATE(116),
    [sym__dedent] = ACTIONS(978),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
    [anon_sym_data] = ACTIONS(169),
    [anon_sym_codata] = ACTIONS(171),
    [anon_sym_record] = ACTIONS(173),
    [anon_sym_instance] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(177),
    [sym_pragma] = ACTIONS(179),
  },
  [482] = {
    [sym__dedent] = ACTIONS(978),
    [sym_comment] = ACTIONS(57),
  },
  [483] = {
    [sym__newline] = ACTIONS(771),
    [sym_comment] = ACTIONS(57),
    [anon_sym_where] = ACTIONS(980),
  },
  [484] = {
    [sym__dedent] = ACTIONS(734),
    [sym_string] = ACTIONS(736),
    [sym_int] = ACTIONS(736),
    [sym_qualified_name] = ACTIONS(736),
    [anon_sym__] = ACTIONS(736),
    [anon_sym_LBRACE] = ACTIONS(736),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(736),
    [anon_sym_Prop] = ACTIONS(736),
    [anon_sym_Set] = ACTIONS(736),
    [anon_sym_quote] = ACTIONS(736),
    [anon_sym_quoteTerm] = ACTIONS(736),
    [anon_sym_unquote] = ACTIONS(736),
    [anon_sym_data] = ACTIONS(736),
    [anon_sym_codata] = ACTIONS(736),
    [anon_sym_record] = ACTIONS(736),
    [anon_sym_instance] = ACTIONS(736),
    [anon_sym_field] = ACTIONS(736),
    [sym_pragma] = ACTIONS(736),
  },
  [485] = {
    [sym__dedent] = ACTIONS(306),
    [sym__const_right_arrow] = ACTIONS(308),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_name] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_DOT_DOT] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_instance] = ACTIONS(308),
    [anon_sym_overlap] = ACTIONS(308),
  },
  [486] = {
    [sym__dedent] = ACTIONS(499),
    [sym_name] = ACTIONS(982),
    [anon_sym_DOT] = ACTIONS(982),
    [anon_sym_DOT_DOT] = ACTIONS(982),
    [anon_sym_LBRACE] = ACTIONS(982),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(982),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(982),
    [anon_sym_overlap] = ACTIONS(982),
  },
  [487] = {
    [sym__dedent] = ACTIONS(115),
    [sym_string] = ACTIONS(117),
    [sym_int] = ACTIONS(117),
    [sym_name] = ACTIONS(117),
    [sym_qualified_name] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_Prop] = ACTIONS(117),
    [anon_sym_Set] = ACTIONS(117),
    [anon_sym_quote] = ACTIONS(117),
    [anon_sym_quoteTerm] = ACTIONS(117),
    [anon_sym_unquote] = ACTIONS(117),
    [anon_sym_instance] = ACTIONS(117),
    [anon_sym_overlap] = ACTIONS(117),
  },
  [488] = {
    [anon_sym_RBRACE] = ACTIONS(984),
    [sym_comment] = ACTIONS(57),
  },
  [489] = {
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
  },
  [490] = {
    [sym_name] = ACTIONS(941),
    [anon_sym__] = ACTIONS(941),
    [anon_sym_DOT] = ACTIONS(941),
    [anon_sym_DOT_DOT] = ACTIONS(941),
    [anon_sym_LBRACE] = ACTIONS(941),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(941),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(941),
    [anon_sym_COLON] = ACTIONS(941),
    [anon_sym_where] = ACTIONS(941),
  },
  [491] = {
    [sym__dedent] = ACTIONS(986),
    [sym_comment] = ACTIONS(57),
  },
  [492] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_constructor] = ACTIONS(988),
  },
  [493] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_instance] = ACTIONS(990),
    [anon_sym_constructor] = ACTIONS(990),
    [anon_sym_inductive] = ACTIONS(990),
    [anon_sym_coinductive] = ACTIONS(990),
    [anon_sym_eta_DASHequality] = ACTIONS(990),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(990),
  },
  [494] = {
    [sym__dedent] = ACTIONS(857),
    [sym_string] = ACTIONS(859),
    [sym_int] = ACTIONS(859),
    [sym_qualified_name] = ACTIONS(859),
    [anon_sym__] = ACTIONS(859),
    [anon_sym_LBRACE] = ACTIONS(859),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(859),
    [anon_sym_Prop] = ACTIONS(859),
    [anon_sym_Set] = ACTIONS(859),
    [anon_sym_quote] = ACTIONS(859),
    [anon_sym_quoteTerm] = ACTIONS(859),
    [anon_sym_unquote] = ACTIONS(859),
    [anon_sym_data] = ACTIONS(859),
    [anon_sym_codata] = ACTIONS(859),
    [anon_sym_record] = ACTIONS(859),
    [anon_sym_instance] = ACTIONS(859),
    [anon_sym_field] = ACTIONS(859),
    [sym_pragma] = ACTIONS(859),
  },
  [495] = {
    [sym__declarations0] = STATE(503),
    [sym__newline] = ACTIONS(992),
    [sym__indent] = ACTIONS(394),
    [sym_comment] = ACTIONS(57),
  },
  [496] = {
    [sym__dedent] = ACTIONS(867),
    [sym_string] = ACTIONS(869),
    [sym_int] = ACTIONS(869),
    [sym_qualified_name] = ACTIONS(869),
    [anon_sym__] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(869),
    [anon_sym_Prop] = ACTIONS(869),
    [anon_sym_Set] = ACTIONS(869),
    [anon_sym_quote] = ACTIONS(869),
    [anon_sym_quoteTerm] = ACTIONS(869),
    [anon_sym_unquote] = ACTIONS(869),
    [anon_sym_data] = ACTIONS(869),
    [anon_sym_codata] = ACTIONS(869),
    [anon_sym_record] = ACTIONS(869),
    [anon_sym_instance] = ACTIONS(869),
    [anon_sym_field] = ACTIONS(869),
    [sym_pragma] = ACTIONS(869),
  },
  [497] = {
    [sym__dedent] = ACTIONS(875),
    [sym_string] = ACTIONS(877),
    [sym_int] = ACTIONS(877),
    [sym_qualified_name] = ACTIONS(877),
    [anon_sym__] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(877),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(877),
    [anon_sym_Prop] = ACTIONS(877),
    [anon_sym_Set] = ACTIONS(877),
    [anon_sym_quote] = ACTIONS(877),
    [anon_sym_quoteTerm] = ACTIONS(877),
    [anon_sym_unquote] = ACTIONS(877),
    [anon_sym_data] = ACTIONS(877),
    [anon_sym_codata] = ACTIONS(877),
    [anon_sym_record] = ACTIONS(877),
    [anon_sym_instance] = ACTIONS(877),
    [anon_sym_field] = ACTIONS(877),
    [sym_pragma] = ACTIONS(877),
  },
  [498] = {
    [sym__dedent] = ACTIONS(994),
    [sym_comment] = ACTIONS(57),
  },
  [499] = {
    [sym_record_declarations_block] = STATE(505),
    [sym__indent] = ACTIONS(783),
    [sym__dedent] = ACTIONS(867),
    [sym_string] = ACTIONS(869),
    [sym_int] = ACTIONS(869),
    [sym_qualified_name] = ACTIONS(869),
    [anon_sym__] = ACTIONS(869),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(869),
    [anon_sym_Prop] = ACTIONS(869),
    [anon_sym_Set] = ACTIONS(869),
    [anon_sym_quote] = ACTIONS(869),
    [anon_sym_quoteTerm] = ACTIONS(869),
    [anon_sym_unquote] = ACTIONS(869),
    [anon_sym_data] = ACTIONS(869),
    [anon_sym_codata] = ACTIONS(869),
    [anon_sym_record] = ACTIONS(869),
    [anon_sym_instance] = ACTIONS(869),
    [anon_sym_field] = ACTIONS(869),
    [sym_pragma] = ACTIONS(869),
  },
  [500] = {
    [sym__dedent] = ACTIONS(306),
    [sym_string] = ACTIONS(308),
    [sym_int] = ACTIONS(308),
    [sym_name] = ACTIONS(308),
    [sym_qualified_name] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_DOT_DOT] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(308),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_Prop] = ACTIONS(308),
    [anon_sym_Set] = ACTIONS(308),
    [anon_sym_quote] = ACTIONS(308),
    [anon_sym_quoteTerm] = ACTIONS(308),
    [anon_sym_unquote] = ACTIONS(308),
    [anon_sym_instance] = ACTIONS(308),
    [anon_sym_overlap] = ACTIONS(308),
  },
  [501] = {
    [sym__dedent] = ACTIONS(996),
    [sym_string] = ACTIONS(998),
    [sym_int] = ACTIONS(998),
    [sym_qualified_name] = ACTIONS(998),
    [anon_sym__] = ACTIONS(998),
    [anon_sym_LBRACE] = ACTIONS(998),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(998),
    [anon_sym_Prop] = ACTIONS(998),
    [anon_sym_Set] = ACTIONS(998),
    [anon_sym_quote] = ACTIONS(998),
    [anon_sym_quoteTerm] = ACTIONS(998),
    [anon_sym_unquote] = ACTIONS(998),
    [anon_sym_data] = ACTIONS(998),
    [anon_sym_codata] = ACTIONS(998),
    [anon_sym_record] = ACTIONS(998),
    [anon_sym_instance] = ACTIONS(998),
    [anon_sym_constructor] = ACTIONS(998),
    [anon_sym_inductive] = ACTIONS(998),
    [anon_sym_coinductive] = ACTIONS(998),
    [anon_sym_eta_DASHequality] = ACTIONS(998),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(998),
    [anon_sym_field] = ACTIONS(998),
    [sym_pragma] = ACTIONS(998),
  },
  [502] = {
    [sym_name] = ACTIONS(1000),
    [sym_comment] = ACTIONS(13),
  },
  [503] = {
    [sym__dedent] = ACTIONS(947),
    [sym_string] = ACTIONS(949),
    [sym_int] = ACTIONS(949),
    [sym_qualified_name] = ACTIONS(949),
    [anon_sym__] = ACTIONS(949),
    [anon_sym_LBRACE] = ACTIONS(949),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(949),
    [anon_sym_Prop] = ACTIONS(949),
    [anon_sym_Set] = ACTIONS(949),
    [anon_sym_quote] = ACTIONS(949),
    [anon_sym_quoteTerm] = ACTIONS(949),
    [anon_sym_unquote] = ACTIONS(949),
    [anon_sym_data] = ACTIONS(949),
    [anon_sym_codata] = ACTIONS(949),
    [anon_sym_record] = ACTIONS(949),
    [anon_sym_instance] = ACTIONS(949),
    [anon_sym_field] = ACTIONS(949),
    [sym_pragma] = ACTIONS(949),
  },
  [504] = {
    [sym__dedent] = ACTIONS(953),
    [sym_string] = ACTIONS(955),
    [sym_int] = ACTIONS(955),
    [sym_qualified_name] = ACTIONS(955),
    [anon_sym__] = ACTIONS(955),
    [anon_sym_LBRACE] = ACTIONS(955),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(955),
    [anon_sym_Prop] = ACTIONS(955),
    [anon_sym_Set] = ACTIONS(955),
    [anon_sym_quote] = ACTIONS(955),
    [anon_sym_quoteTerm] = ACTIONS(955),
    [anon_sym_unquote] = ACTIONS(955),
    [anon_sym_data] = ACTIONS(955),
    [anon_sym_codata] = ACTIONS(955),
    [anon_sym_record] = ACTIONS(955),
    [anon_sym_instance] = ACTIONS(955),
    [anon_sym_field] = ACTIONS(955),
    [sym_pragma] = ACTIONS(955),
  },
  [505] = {
    [sym__dedent] = ACTIONS(970),
    [sym_string] = ACTIONS(972),
    [sym_int] = ACTIONS(972),
    [sym_qualified_name] = ACTIONS(972),
    [anon_sym__] = ACTIONS(972),
    [anon_sym_LBRACE] = ACTIONS(972),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(972),
    [anon_sym_Prop] = ACTIONS(972),
    [anon_sym_Set] = ACTIONS(972),
    [anon_sym_quote] = ACTIONS(972),
    [anon_sym_quoteTerm] = ACTIONS(972),
    [anon_sym_unquote] = ACTIONS(972),
    [anon_sym_data] = ACTIONS(972),
    [anon_sym_codata] = ACTIONS(972),
    [anon_sym_record] = ACTIONS(972),
    [anon_sym_instance] = ACTIONS(972),
    [anon_sym_field] = ACTIONS(972),
    [sym_pragma] = ACTIONS(972),
  },
  [506] = {
    [sym__dedent] = ACTIONS(1002),
    [sym_comment] = ACTIONS(57),
  },
  [507] = {
    [sym_comment] = ACTIONS(57),
    [anon_sym_instance] = ACTIONS(996),
    [anon_sym_constructor] = ACTIONS(996),
    [anon_sym_inductive] = ACTIONS(996),
    [anon_sym_coinductive] = ACTIONS(996),
    [anon_sym_eta_DASHequality] = ACTIONS(996),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(996),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(13),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(21),
  [33] = {.count = 1, .reusable = false}, SHIFT(31),
  [35] = {.count = 1, .reusable = false}, SHIFT(22),
  [37] = {.count = 1, .reusable = false}, SHIFT(23),
  [39] = {.count = 1, .reusable = false}, SHIFT(24),
  [41] = {.count = 1, .reusable = false}, SHIFT(25),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(36),
  [47] = {.count = 1, .reusable = false}, SHIFT(37),
  [49] = {.count = 1, .reusable = false}, SHIFT(38),
  [51] = {.count = 1, .reusable = false}, SHIFT(39),
  [53] = {.count = 1, .reusable = true}, SHIFT(41),
  [55] = {.count = 1, .reusable = true}, SHIFT(40),
  [57] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [59] = {.count = 1, .reusable = true}, SHIFT(42),
  [61] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(44),
  [67] = {.count = 1, .reusable = true}, SHIFT(45),
  [69] = {.count = 1, .reusable = true}, SHIFT(48),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__expr2, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__expr2, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(49),
  [85] = {.count = 1, .reusable = true}, SHIFT(50),
  [87] = {.count = 1, .reusable = true}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(54),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__atoms1, 1),
  [99] = {.count = 1, .reusable = false}, SHIFT(59),
  [101] = {.count = 1, .reusable = false}, SHIFT(62),
  [103] = {.count = 1, .reusable = true}, SHIFT(63),
  [105] = {.count = 1, .reusable = true}, SHIFT(64),
  [107] = {.count = 1, .reusable = false}, SHIFT(65),
  [109] = {.count = 1, .reusable = false}, SHIFT(71),
  [111] = {.count = 1, .reusable = false}, SHIFT(66),
  [113] = {.count = 1, .reusable = false}, SHIFT(67),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 2),
  [119] = {.count = 1, .reusable = false}, SHIFT(73),
  [121] = {.count = 1, .reusable = false}, SHIFT(77),
  [123] = {.count = 1, .reusable = false}, SHIFT(74),
  [125] = {.count = 1, .reusable = true}, SHIFT(80),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(81),
  [131] = {.count = 1, .reusable = false}, SHIFT(82),
  [133] = {.count = 1, .reusable = false}, SHIFT(86),
  [135] = {.count = 1, .reusable = false}, SHIFT(83),
  [137] = {.count = 1, .reusable = false}, SHIFT(88),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__typed_bindings1, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(22),
  [143] = {.count = 1, .reusable = false}, SHIFT(91),
  [145] = {.count = 1, .reusable = true}, SHIFT(25),
  [147] = {.count = 1, .reusable = true}, SHIFT(26),
  [149] = {.count = 1, .reusable = false}, SHIFT(93),
  [151] = {.count = 1, .reusable = false}, SHIFT(94),
  [153] = {.count = 1, .reusable = false}, SHIFT(95),
  [155] = {.count = 1, .reusable = false}, SHIFT(96),
  [157] = {.count = 1, .reusable = false}, SHIFT(97),
  [159] = {.count = 1, .reusable = false}, SHIFT(98),
  [161] = {.count = 1, .reusable = false}, SHIFT(99),
  [163] = {.count = 1, .reusable = false}, SHIFT(103),
  [165] = {.count = 1, .reusable = false}, SHIFT(105),
  [167] = {.count = 1, .reusable = false}, SHIFT(106),
  [169] = {.count = 1, .reusable = false}, SHIFT(108),
  [171] = {.count = 1, .reusable = false}, SHIFT(109),
  [173] = {.count = 1, .reusable = false}, SHIFT(110),
  [175] = {.count = 1, .reusable = false}, SHIFT(111),
  [177] = {.count = 1, .reusable = false}, SHIFT(112),
  [179] = {.count = 1, .reusable = false}, SHIFT(113),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_instance, 2),
  [185] = {.count = 1, .reusable = false}, SHIFT(122),
  [187] = {.count = 1, .reusable = false}, SHIFT(117),
  [189] = {.count = 1, .reusable = false}, SHIFT(118),
  [191] = {.count = 1, .reusable = false}, SHIFT(119),
  [193] = {.count = 1, .reusable = false}, SHIFT(120),
  [195] = {.count = 1, .reusable = false}, SHIFT(121),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [201] = {.count = 1, .reusable = false}, SHIFT(127),
  [203] = {.count = 1, .reusable = false}, SHIFT(131),
  [205] = {.count = 1, .reusable = false}, SHIFT(128),
  [207] = {.count = 1, .reusable = false}, SHIFT(134),
  [209] = {.count = 1, .reusable = false}, SHIFT(138),
  [211] = {.count = 1, .reusable = false}, SHIFT(135),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [217] = {.count = 1, .reusable = false}, SHIFT(142),
  [219] = {.count = 1, .reusable = false}, SHIFT(148),
  [221] = {.count = 1, .reusable = false}, SHIFT(143),
  [223] = {.count = 1, .reusable = true}, SHIFT(153),
  [225] = {.count = 1, .reusable = true}, SHIFT(152),
  [227] = {.count = 1, .reusable = false}, SHIFT(154),
  [229] = {.count = 1, .reusable = false}, SHIFT(155),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 2),
  [235] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 2),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(157),
  [242] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(159),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(158),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [250] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(157),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(159),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(158),
  [259] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2),
  [261] = {.count = 1, .reusable = true}, SHIFT(161),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(2),
  [266] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(13),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(3),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(4),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(5),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(6),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(7),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(8),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(162),
  [290] = {.count = 1, .reusable = false}, SHIFT(166),
  [292] = {.count = 1, .reusable = true}, SHIFT(168),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(169),
  [298] = {.count = 1, .reusable = false}, SHIFT(170),
  [300] = {.count = 1, .reusable = false}, SHIFT(171),
  [302] = {.count = 1, .reusable = true}, SHIFT(173),
  [304] = {.count = 1, .reusable = true}, SHIFT(175),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 3),
  [310] = {.count = 1, .reusable = false}, SHIFT(177),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(179),
  [315] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(181),
  [318] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(180),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2),
  [323] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(22),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(22),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(91),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(25),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(26),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_binding_name, 1),
  [340] = {.count = 1, .reusable = false}, SHIFT(183),
  [342] = {.count = 1, .reusable = false}, SHIFT(184),
  [344] = {.count = 1, .reusable = false}, SHIFT(185),
  [346] = {.count = 1, .reusable = false}, SHIFT(188),
  [348] = {.count = 1, .reusable = false}, SHIFT(192),
  [350] = {.count = 1, .reusable = false}, SHIFT(189),
  [352] = {.count = 1, .reusable = false}, SHIFT(195),
  [354] = {.count = 1, .reusable = false}, SHIFT(201),
  [356] = {.count = 1, .reusable = false}, SHIFT(196),
  [358] = {.count = 1, .reusable = true}, SHIFT(205),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 1),
  [362] = {.count = 1, .reusable = true}, SHIFT(206),
  [364] = {.count = 1, .reusable = true}, SHIFT(207),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym__typed_untyped_binding1, 1),
  [368] = {.count = 1, .reusable = false}, SHIFT(209),
  [370] = {.count = 1, .reusable = false}, SHIFT(215),
  [372] = {.count = 1, .reusable = false}, SHIFT(210),
  [374] = {.count = 1, .reusable = true}, SHIFT(219),
  [376] = {.count = 1, .reusable = true}, SHIFT(221),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_record, 3),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_record, 3),
  [382] = {.count = 1, .reusable = true}, SHIFT(223),
  [384] = {.count = 1, .reusable = true}, SHIFT(224),
  [386] = {.count = 1, .reusable = false}, SHIFT(225),
  [388] = {.count = 1, .reusable = false}, SHIFT(226),
  [390] = {.count = 1, .reusable = false}, SHIFT(227),
  [392] = {.count = 1, .reusable = true}, SHIFT(229),
  [394] = {.count = 1, .reusable = true}, SHIFT(228),
  [396] = {.count = 1, .reusable = true}, SHIFT(230),
  [398] = {.count = 1, .reusable = true}, SHIFT(232),
  [400] = {.count = 1, .reusable = true}, SHIFT(233),
  [402] = {.count = 1, .reusable = false}, SHIFT(234),
  [404] = {.count = 1, .reusable = false}, SHIFT(236),
  [406] = {.count = 1, .reusable = false}, SHIFT(237),
  [408] = {.count = 1, .reusable = false}, SHIFT(238),
  [410] = {.count = 1, .reusable = false}, SHIFT(241),
  [412] = {.count = 1, .reusable = false}, SHIFT(239),
  [414] = {.count = 1, .reusable = false}, SHIFT(244),
  [416] = {.count = 1, .reusable = false}, SHIFT(242),
  [418] = {.count = 1, .reusable = true}, SHIFT(245),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 1),
  [422] = {.count = 1, .reusable = true}, SHIFT(248),
  [424] = {.count = 1, .reusable = true}, SHIFT(249),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym__arg_names, 1),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures1, 1),
  [430] = {.count = 1, .reusable = false}, SHIFT(252),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_rewrite_equations, 2),
  [434] = {.count = 1, .reusable = false}, SHIFT(254),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_with_expressions, 2),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 3),
  [440] = {.count = 1, .reusable = false}, SHIFT(256),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_rhs, 2),
  [444] = {.count = 1, .reusable = true}, SHIFT(258),
  [446] = {.count = 1, .reusable = false}, SHIFT(259),
  [448] = {.count = 1, .reusable = false}, SHIFT(262),
  [450] = {.count = 1, .reusable = false}, SHIFT(260),
  [452] = {.count = 1, .reusable = false}, SHIFT(264),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [456] = {.count = 1, .reusable = true}, SHIFT(266),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_name, 1),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 3),
  [462] = {.count = 1, .reusable = false}, SHIFT(267),
  [464] = {.count = 1, .reusable = false}, SHIFT(157),
  [466] = {.count = 1, .reusable = false}, SHIFT(159),
  [468] = {.count = 1, .reusable = false}, SHIFT(158),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 3),
  [472] = {.count = 1, .reusable = true}, SHIFT(269),
  [474] = {.count = 1, .reusable = true}, SHIFT(270),
  [476] = {.count = 1, .reusable = true}, SHIFT(271),
  [478] = {.count = 1, .reusable = true}, SHIFT(272),
  [480] = {.count = 1, .reusable = true}, SHIFT(273),
  [482] = {.count = 1, .reusable = true}, SHIFT(275),
  [484] = {.count = 1, .reusable = false}, SHIFT(276),
  [486] = {.count = 1, .reusable = false}, SHIFT(282),
  [488] = {.count = 1, .reusable = false}, SHIFT(277),
  [490] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(286),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(288),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(287),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(293),
  [503] = {.count = 1, .reusable = false}, SHIFT(294),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 2),
  [507] = {.count = 1, .reusable = true}, SHIFT(299),
  [509] = {.count = 1, .reusable = true}, SHIFT(300),
  [511] = {.count = 1, .reusable = false}, SHIFT(301),
  [513] = {.count = 1, .reusable = true}, SHIFT(303),
  [515] = {.count = 1, .reusable = true}, SHIFT(305),
  [517] = {.count = 1, .reusable = false}, SHIFT(306),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 4),
  [521] = {.count = 1, .reusable = true}, SHIFT(308),
  [523] = {.count = 1, .reusable = true}, SHIFT(309),
  [525] = {.count = 1, .reusable = false}, SHIFT(310),
  [527] = {.count = 1, .reusable = false}, SHIFT(313),
  [529] = {.count = 1, .reusable = false}, SHIFT(311),
  [531] = {.count = 1, .reusable = false}, SHIFT(315),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_data, 4),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_data, 4),
  [537] = {.count = 1, .reusable = true}, SHIFT(317),
  [539] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(93),
  [542] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(94),
  [545] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(95),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(96),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(97),
  [554] = {.count = 1, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2),
  [556] = {.count = 1, .reusable = false}, SHIFT(318),
  [558] = {.count = 1, .reusable = true}, SHIFT(320),
  [560] = {.count = 1, .reusable = false}, SHIFT(321),
  [562] = {.count = 1, .reusable = false}, SHIFT(324),
  [564] = {.count = 1, .reusable = false}, SHIFT(322),
  [566] = {.count = 1, .reusable = false}, SHIFT(326),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 4),
  [570] = {.count = 1, .reusable = true}, SHIFT(328),
  [572] = {.count = 1, .reusable = true}, SHIFT(329),
  [574] = {.count = 1, .reusable = false}, SHIFT(330),
  [576] = {.count = 1, .reusable = false}, SHIFT(331),
  [578] = {.count = 1, .reusable = false}, SHIFT(332),
  [580] = {.count = 1, .reusable = false}, SHIFT(333),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_record, 4),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_record, 4),
  [586] = {.count = 1, .reusable = false}, SHIFT(341),
  [588] = {.count = 1, .reusable = false}, SHIFT(342),
  [590] = {.count = 1, .reusable = false}, SHIFT(344),
  [592] = {.count = 1, .reusable = false}, SHIFT(346),
  [594] = {.count = 1, .reusable = false}, SHIFT(347),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym__declarations0, 3),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym__declarations0, 3),
  [600] = {.count = 1, .reusable = true}, SHIFT(351),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_name, 2),
  [604] = {.count = 1, .reusable = false}, SHIFT(352),
  [606] = {.count = 1, .reusable = false}, SHIFT(353),
  [608] = {.count = 1, .reusable = false}, SHIFT(354),
  [610] = {.count = 1, .reusable = true}, SHIFT(355),
  [612] = {.count = 1, .reusable = false}, SHIFT(356),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_names1, 1),
  [616] = {.count = 1, .reusable = false}, SHIFT(357),
  [618] = {.count = 1, .reusable = false}, SHIFT(358),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 2),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 2),
  [624] = {.count = 1, .reusable = true}, SHIFT(360),
  [626] = {.count = 1, .reusable = false}, SHIFT(361),
  [628] = {.count = 1, .reusable = false}, SHIFT(367),
  [630] = {.count = 1, .reusable = false}, SHIFT(362),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures_block, 3),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym__arg_type_signatures_block, 3),
  [636] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(122),
  [639] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(117),
  [642] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(118),
  [645] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(119),
  [648] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2),
  [650] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(122),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(117),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(118),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(119),
  [664] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(120),
  [667] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(121),
  [670] = {.count = 1, .reusable = true}, SHIFT(371),
  [672] = {.count = 1, .reusable = true}, SHIFT(372),
  [674] = {.count = 1, .reusable = true}, SHIFT(373),
  [676] = {.count = 1, .reusable = false}, SHIFT(375),
  [678] = {.count = 1, .reusable = true}, SHIFT(377),
  [680] = {.count = 1, .reusable = true}, SHIFT(378),
  [682] = {.count = 1, .reusable = true}, SHIFT(379),
  [684] = {.count = 1, .reusable = true}, SHIFT(383),
  [686] = {.count = 1, .reusable = false}, SHIFT(384),
  [688] = {.count = 1, .reusable = true}, SHIFT(386),
  [690] = {.count = 1, .reusable = false}, SHIFT(387),
  [692] = {.count = 1, .reusable = false}, SHIFT(391),
  [694] = {.count = 1, .reusable = false}, SHIFT(388),
  [696] = {.count = 1, .reusable = false}, SHIFT(393),
  [698] = {.count = 1, .reusable = false}, SHIFT(394),
  [700] = {.count = 1, .reusable = true}, SHIFT(396),
  [702] = {.count = 1, .reusable = true}, SHIFT(397),
  [704] = {.count = 1, .reusable = true}, SHIFT(398),
  [706] = {.count = 1, .reusable = true}, SHIFT(399),
  [708] = {.count = 1, .reusable = true}, SHIFT(400),
  [710] = {.count = 1, .reusable = true}, SHIFT(401),
  [712] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 3),
  [714] = {.count = 1, .reusable = true}, SHIFT(403),
  [716] = {.count = 1, .reusable = true}, SHIFT(406),
  [718] = {.count = 1, .reusable = true}, SHIFT(407),
  [720] = {.count = 1, .reusable = false}, SHIFT(408),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 5),
  [724] = {.count = 1, .reusable = true}, SHIFT(410),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_data, 5),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_data, 5),
  [730] = {.count = 1, .reusable = true}, SHIFT(411),
  [732] = {.count = 1, .reusable = false}, SHIFT(412),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_record, 5),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym_record, 5),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 2),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 2),
  [742] = {.count = 1, .reusable = true}, SHIFT(415),
  [744] = {.count = 1, .reusable = false}, SHIFT(416),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_record_induction, 1),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_record_eta, 1),
  [750] = {.count = 1, .reusable = true}, SHIFT(417),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 1),
  [754] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 1),
  [756] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 1), REDUCE(aux_sym__record_directives1_repeat1, 1),
  [759] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1),
  [761] = {.count = 1, .reusable = true}, SHIFT(419),
  [763] = {.count = 1, .reusable = true}, SHIFT(420),
  [765] = {.count = 1, .reusable = true}, SHIFT(331),
  [767] = {.count = 1, .reusable = true}, SHIFT(332),
  [769] = {.count = 1, .reusable = true}, SHIFT(333),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 5),
  [773] = {.count = 1, .reusable = true}, SHIFT(424),
  [775] = {.count = 1, .reusable = true}, SHIFT(426),
  [777] = {.count = 1, .reusable = true}, SHIFT(427),
  [779] = {.count = 1, .reusable = true}, SHIFT(428),
  [781] = {.count = 1, .reusable = true}, SHIFT(430),
  [783] = {.count = 1, .reusable = true}, SHIFT(432),
  [785] = {.count = 1, .reusable = true}, SHIFT(434),
  [787] = {.count = 1, .reusable = true}, SHIFT(435),
  [789] = {.count = 1, .reusable = true}, SHIFT(436),
  [791] = {.count = 1, .reusable = true}, SHIFT(437),
  [793] = {.count = 1, .reusable = false}, SHIFT(439),
  [795] = {.count = 1, .reusable = false}, SHIFT(438),
  [797] = {.count = 1, .reusable = false}, SHIFT(440),
  [799] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 3),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(356),
  [806] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(239),
  [809] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(358),
  [812] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(242),
  [815] = {.count = 1, .reusable = true}, SHIFT(441),
  [817] = {.count = 1, .reusable = false}, SHIFT(443),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 3),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 3),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [825] = {.count = 1, .reusable = false}, SHIFT(445),
  [827] = {.count = 1, .reusable = true}, SHIFT(445),
  [829] = {.count = 1, .reusable = false}, SHIFT(446),
  [831] = {.count = 1, .reusable = false}, SHIFT(450),
  [833] = {.count = 1, .reusable = false}, SHIFT(447),
  [835] = {.count = 1, .reusable = false}, SHIFT(452),
  [837] = {.count = 1, .reusable = true}, SHIFT(454),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 4),
  [841] = {.count = 1, .reusable = true}, SHIFT(455),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [845] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [847] = {.count = 1, .reusable = true}, SHIFT(456),
  [849] = {.count = 1, .reusable = false}, SHIFT(458),
  [851] = {.count = 1, .reusable = true}, SHIFT(460),
  [853] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 4),
  [855] = {.count = 1, .reusable = true}, SHIFT(464),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_data, 6),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_data, 6),
  [861] = {.count = 1, .reusable = true}, SHIFT(465),
  [863] = {.count = 1, .reusable = true}, SHIFT(466),
  [865] = {.count = 1, .reusable = true}, SHIFT(467),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_record, 6),
  [869] = {.count = 1, .reusable = false}, REDUCE(sym_record, 6),
  [871] = {.count = 1, .reusable = false}, SHIFT(468),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor, 2),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 3),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 3),
  [879] = {.count = 1, .reusable = true}, SHIFT(469),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 2),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 2),
  [885] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 2), REDUCE(aux_sym__record_directives1_repeat1, 2),
  [888] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [890] = {.count = 1, .reusable = true}, SHIFT(470),
  [892] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1), REDUCE(sym__record_directives1, 2),
  [895] = {.count = 1, .reusable = true}, SHIFT(471),
  [897] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(472),
  [900] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(331),
  [903] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(332),
  [906] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(333),
  [909] = {.count = 1, .reusable = true}, SHIFT(475),
  [911] = {.count = 1, .reusable = true}, SHIFT(477),
  [913] = {.count = 1, .reusable = true}, SHIFT(479),
  [915] = {.count = 1, .reusable = true}, SHIFT(480),
  [917] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 4),
  [919] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(439),
  [922] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2),
  [924] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(440),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 4),
  [929] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 4),
  [931] = {.count = 1, .reusable = true}, SHIFT(485),
  [933] = {.count = 1, .reusable = false}, SHIFT(487),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym__expr1, 2),
  [937] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [941] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [943] = {.count = 1, .reusable = true}, SHIFT(489),
  [945] = {.count = 1, .reusable = true}, SHIFT(490),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_data, 7),
  [949] = {.count = 1, .reusable = false}, REDUCE(sym_data, 7),
  [951] = {.count = 1, .reusable = false}, SHIFT(491),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 4),
  [955] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 4),
  [957] = {.count = 1, .reusable = true}, SHIFT(468),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 3),
  [961] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 3),
  [963] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2), REDUCE(sym__record_directives1, 3),
  [966] = {.count = 1, .reusable = true}, SHIFT(492),
  [968] = {.count = 1, .reusable = true}, SHIFT(493),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_record, 7),
  [972] = {.count = 1, .reusable = false}, REDUCE(sym_record, 7),
  [974] = {.count = 1, .reusable = true}, SHIFT(494),
  [976] = {.count = 1, .reusable = true}, SHIFT(495),
  [978] = {.count = 1, .reusable = true}, SHIFT(497),
  [980] = {.count = 1, .reusable = true}, SHIFT(499),
  [982] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [984] = {.count = 1, .reusable = true}, SHIFT(500),
  [986] = {.count = 1, .reusable = true}, SHIFT(501),
  [988] = {.count = 1, .reusable = true}, SHIFT(502),
  [990] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [992] = {.count = 1, .reusable = true}, SHIFT(503),
  [994] = {.count = 1, .reusable = true}, SHIFT(504),
  [996] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor_instance, 5),
  [998] = {.count = 1, .reusable = false}, REDUCE(sym_record_constructor_instance, 5),
  [1000] = {.count = 1, .reusable = false}, SHIFT(506),
  [1002] = {.count = 1, .reusable = true}, SHIFT(507),
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
