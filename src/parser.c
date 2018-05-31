#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 517
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
  sym__declarations0 = 91,
  sym__declarations1 = 92,
  aux_sym_source_file_repeat1 = 93,
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
  [sym__declarations0] = "_declarations0",
  [sym__declarations1] = "_declarations1",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym__declarations0] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
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
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
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
      if (lookahead == 'u')
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
      if (lookahead == 'o')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'm')
        ADVANCE(209);
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
    case 210:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == 'c')
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
      if (lookahead == 'o')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
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
      if (lookahead == 'd')
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
    case 216:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
        ADVANCE(218);
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
      if (lookahead == 'u')
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
      if (lookahead == 'o')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
    case 223:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
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
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(157);
      END_STATE();
    case 225:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(228);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(236);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 226:
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
    case 227:
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
    case 228:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(228);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(236);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 230:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
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
    case 231:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(232);
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(233);
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
    case 233:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(234);
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
    case 234:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(235);
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
    case 236:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'w')
        ADVANCE(238);
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
    case 238:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
    case 243:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
        ADVANCE(244);
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 'h')
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
    case 251:
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
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(162);
      END_STATE();
    case 254:
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
        ADVANCE(255);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
    case 256:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(255);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 257:
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
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(253);
      if (lookahead == '{')
        ADVANCE(165);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 260:
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(264);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(262);
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
        ADVANCE(263);
      END_STATE();
    case 262:
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
        ADVANCE(262);
      END_STATE();
    case 263:
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
        ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(265);
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
        ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '\\')
        ADVANCE(264);
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
        ADVANCE(263);
      END_STATE();
    case 266:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(268);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      END_STATE();
    case 267:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 268:
      if (lookahead == 'n')
        SKIP(266);
      END_STATE();
    case 269:
      if (lookahead == '-')
        ADVANCE(253);
      END_STATE();
    case 270:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'r')
        ADVANCE(272);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        SKIP(270);
      END_STATE();
    case 272:
      if (lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'w')
        ADVANCE(136);
      END_STATE();
    case 274:
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
        SKIP(275);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '|')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == 'n')
        SKIP(274);
      END_STATE();
    case 276:
      if (lookahead == 'h')
        ADVANCE(149);
      END_STATE();
    case 277:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(278);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      END_STATE();
    case 278:
      if (lookahead == 'n')
        SKIP(277);
      END_STATE();
    case 279:
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
        ADVANCE(280);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 280:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(281);
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
    case 281:
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
        ADVANCE(280);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 282:
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
        ADVANCE(283);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 283:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(284);
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
    case 284:
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
        ADVANCE(283);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 285:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '=')
        ADVANCE(227);
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
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 286:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(287);
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
    case 287:
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
        ADVANCE(286);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(288);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 290:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(286);
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
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
        ADVANCE(286);
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
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 293:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(294);
      if (lookahead == '\\')
        ADVANCE(295);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(293);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(263);
      END_STATE();
    case 294:
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
        ADVANCE(263);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(296);
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
        ADVANCE(263);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(294);
      if (lookahead == '\\')
        ADVANCE(295);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == 'w')
        ADVANCE(298);
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
        ADVANCE(263);
      END_STATE();
    case 297:
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
        ADVANCE(263);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(299);
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
        ADVANCE(263);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(300);
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
        ADVANCE(263);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(301);
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
        ADVANCE(263);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(302);
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
        ADVANCE(263);
      END_STATE();
    case 302:
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
        ADVANCE(263);
      END_STATE();
    case 303:
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'o')
        ADVANCE(314);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(263);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(305);
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
        ADVANCE(263);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'o')
        ADVANCE(314);
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
        ADVANCE(263);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(263);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
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
        ADVANCE(263);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
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
        ADVANCE(263);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
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
        ADVANCE(263);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(311);
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
        ADVANCE(263);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(312);
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
        ADVANCE(263);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(263);
      END_STATE();
    case 313:
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
        ADVANCE(263);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v')
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
        ADVANCE(263);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(263);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
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
        ADVANCE(263);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
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
        ADVANCE(263);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
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
        ADVANCE(263);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
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
        ADVANCE(263);
      END_STATE();
    case 320:
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
        ADVANCE(263);
      END_STATE();
    case 321:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(322);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      END_STATE();
    case 322:
      if (lookahead == 'n')
        SKIP(321);
      END_STATE();
    case 323:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '\\')
        ADVANCE(324);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(323);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(263);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(263);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '\\')
        ADVANCE(324);
      if (lookahead == '_')
        ADVANCE(297);
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
        ADVANCE(263);
      END_STATE();
    case 326:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(327);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      END_STATE();
    case 327:
      if (lookahead == 'n')
        SKIP(326);
      END_STATE();
    case 328:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 329:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(330);
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
    case 330:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 331:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(332);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(331);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 332:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(332);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 334:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 335:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(336);
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
    case 336:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 337:
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(294);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(263);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(339);
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
        ADVANCE(263);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(294);
      if (lookahead == '\\')
        ADVANCE(338);
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
        ADVANCE(263);
      END_STATE();
    case 340:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(341);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 341:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(342);
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
    case 342:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(341);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 343:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(343);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 344:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(345);
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
    case 345:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 346:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
        ADVANCE(244);
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
    case 347:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(348);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 348:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(349);
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
    case 349:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(348);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 350:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(351);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      END_STATE();
    case 351:
      if (lookahead == 'n')
        SKIP(350);
      END_STATE();
    case 352:
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
        ADVANCE(353);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(352);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 353:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(354);
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
    case 354:
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
        ADVANCE(353);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
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
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(226);
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
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(226);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(356);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 358:
      if (lookahead == '}')
        ADVANCE(168);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(360);
      if (lookahead == 'c')
        ADVANCE(361);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'i')
        ADVANCE(363);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(359);
      END_STATE();
    case 360:
      if (lookahead == 'n')
        SKIP(359);
      END_STATE();
    case 361:
      if (lookahead == 'o')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 363:
      if (lookahead == 'n')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 365:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(366);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 366:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(367);
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
    case 367:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(366);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '\\')
        SKIP(369);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(368);
      END_STATE();
    case 369:
      if (lookahead == 'n')
        SKIP(368);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(371);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(370);
      END_STATE();
    case 371:
      if (lookahead == 'n')
        SKIP(370);
      END_STATE();
    case 372:
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
        ADVANCE(373);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 373:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(374);
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
    case 374:
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
        ADVANCE(373);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(407);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(376);
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
    case 376:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(377);
      if (lookahead == 'n')
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
    case 377:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(378);
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
    case 378:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(380);
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
    case 380:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
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
      if (lookahead == 't')
        ADVANCE(382);
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
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
      if (lookahead == 'e')
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
    case 386:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 's')
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
      if (lookahead == 't')
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
      if (lookahead == 'r')
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
      if (lookahead == 'u')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
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
    case 391:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
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
      if (lookahead == 'o')
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
    case 395:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
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
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(398);
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
    case 398:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
        ADVANCE(400);
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
      if (lookahead == 'u')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(403);
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
      if (lookahead == 'i')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
    case 407:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      if (lookahead == 'd')
        ADVANCE(409);
      if (lookahead == 's')
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
    case 409:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
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
      if (lookahead == 'c')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(412);
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
      if (lookahead == 'i')
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
      if (lookahead == 'v')
        ADVANCE(414);
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
      if (lookahead == 'e')
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
      if (lookahead == 'a')
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
      if (lookahead == 'n')
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
      if (lookahead == 'c')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(421);
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
    case 422:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(423);
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
      if (lookahead == '-')
        ADVANCE(424);
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
    case 424:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == 't')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(427);
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
      if (lookahead == '-')
        ADVANCE(428);
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
    case 428:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == 'q')
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
      if (lookahead == 'u')
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'y')
        ADVANCE(436);
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
    case 437:
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(437);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(263);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(439);
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
        ADVANCE(263);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '\\')
        ADVANCE(438);
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
        ADVANCE(263);
      END_STATE();
    case 440:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(441);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 441:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(442);
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
    case 442:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(441);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 443:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(444);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(443);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 444:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(445);
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
    case 445:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(444);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 446:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(447);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(446);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 447:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(448);
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
    case 448:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(447);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(346);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 449:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(450);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(454);
      if (lookahead == '?')
        ADVANCE(455);
      if (lookahead == 'P')
        ADVANCE(456);
      if (lookahead == 'S')
        ADVANCE(460);
      if (lookahead == '\\')
        ADVANCE(463);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(465);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 'q')
        ADVANCE(480);
      if (lookahead == 'u')
        ADVANCE(489);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '|')
        ADVANCE(496);
      if (lookahead == 8594)
        ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(449);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(453);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(451);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(452);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(173);
      if (lookahead == '_')
        ADVANCE(262);
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
        ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'r')
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
        ADVANCE(453);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'o')
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
        ADVANCE(453);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'p')
        ADVANCE(459);
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
        ADVANCE(453);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'e')
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
        ADVANCE(453);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 't')
        ADVANCE(462);
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
        ADVANCE(453);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'n')
        ADVANCE(464);
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
        ADVANCE(453);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(450);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(454);
      if (lookahead == '?')
        ADVANCE(455);
      if (lookahead == 'P')
        ADVANCE(456);
      if (lookahead == 'S')
        ADVANCE(460);
      if (lookahead == '\\')
        ADVANCE(463);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(465);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 'q')
        ADVANCE(480);
      if (lookahead == 'u')
        ADVANCE(489);
      if (lookahead == '|')
        ADVANCE(496);
      if (lookahead == 8594)
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
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
        ADVANCE(453);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'n')
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
        ADVANCE(453);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 's')
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
        ADVANCE(453);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 't')
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
        ADVANCE(453);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'a')
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
        ADVANCE(453);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'n')
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
        ADVANCE(453);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'c')
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
        ADVANCE(453);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'e')
        ADVANCE(472);
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
        ADVANCE(453);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'v')
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
        ADVANCE(453);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'e')
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
        ADVANCE(453);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'r')
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
        ADVANCE(453);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'l')
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
        ADVANCE(453);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'a')
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
        ADVANCE(453);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'p')
        ADVANCE(479);
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
        ADVANCE(453);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'u')
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
        ADVANCE(453);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'o')
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
        ADVANCE(453);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 't')
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
        ADVANCE(453);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'e')
        ADVANCE(484);
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
        ADVANCE(453);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
        ADVANCE(485);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'e')
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
        ADVANCE(453);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'r')
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
        ADVANCE(453);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'm')
        ADVANCE(488);
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
        ADVANCE(453);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'n')
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
        ADVANCE(453);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'q')
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
        ADVANCE(453);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'u')
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
        ADVANCE(453);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'o')
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
        ADVANCE(453);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 't')
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
        ADVANCE(453);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'e')
        ADVANCE(495);
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
        ADVANCE(453);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
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
        ADVANCE(453);
      END_STATE();
    case 498:
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'o')
        ADVANCE(314);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(498);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(263);
      END_STATE();
    case 499:
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
        ADVANCE(263);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(501);
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
        ADVANCE(263);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '=')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'o')
        ADVANCE(314);
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
        ADVANCE(263);
      END_STATE();
    case 502:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(294);
      if (lookahead == '\\')
        ADVANCE(503);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(502);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(263);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(504);
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
        ADVANCE(263);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(294);
      if (lookahead == '\\')
        ADVANCE(503);
      if (lookahead == '_')
        ADVANCE(297);
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
        ADVANCE(263);
      END_STATE();
    case 505:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(505);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 506:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(507);
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
    case 507:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 508:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(509);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(454);
      if (lookahead == '?')
        ADVANCE(455);
      if (lookahead == 'P')
        ADVANCE(456);
      if (lookahead == 'S')
        ADVANCE(460);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(465);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 'q')
        ADVANCE(480);
      if (lookahead == 'u')
        ADVANCE(489);
      if (lookahead == '{')
        ADVANCE(258);
      if (lookahead == '|')
        ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(508);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(453);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(451);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
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
        ADVANCE(453);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(263);
      if (lookahead == 'n')
        ADVANCE(511);
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
        ADVANCE(453);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(509);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(454);
      if (lookahead == '?')
        ADVANCE(455);
      if (lookahead == 'P')
        ADVANCE(456);
      if (lookahead == 'S')
        ADVANCE(460);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == '_')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(465);
      if (lookahead == 'o')
        ADVANCE(473);
      if (lookahead == 'q')
        ADVANCE(480);
      if (lookahead == 'u')
        ADVANCE(489);
      if (lookahead == '|')
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(497);
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
        ADVANCE(453);
      END_STATE();
    case 512:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(513);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(512);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 513:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(514);
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
    case 514:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(286);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(513);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 515:
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(516);
      if (lookahead == '{')
        ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(515);
      END_STATE();
    case 516:
      if (lookahead == 'n')
        SKIP(515);
      END_STATE();
    case 517:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(518);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(252);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(517);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
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
    case 518:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(519);
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
    case 519:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(518);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '_' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 170},
  [2] = {.lex_state = 225, .external_lex_state = 2},
  [3] = {.lex_state = 254},
  [4] = {.lex_state = 260},
  [5] = {.lex_state = 260},
  [6] = {.lex_state = 254},
  [7] = {.lex_state = 266, .external_lex_state = 3},
  [8] = {.lex_state = 266},
  [9] = {.lex_state = 270, .external_lex_state = 2},
  [10] = {.lex_state = 274},
  [11] = {.lex_state = 225, .external_lex_state = 2},
  [12] = {.lex_state = 225, .external_lex_state = 2},
  [13] = {.lex_state = 277, .external_lex_state = 2},
  [14] = {.lex_state = 266, .external_lex_state = 2},
  [15] = {.lex_state = 170},
  [16] = {.lex_state = 170},
  [17] = {.lex_state = 279},
  [18] = {.lex_state = 282},
  [19] = {.lex_state = 285},
  [20] = {.lex_state = 274},
  [21] = {.lex_state = 254},
  [22] = {.lex_state = 225, .external_lex_state = 2},
  [23] = {.lex_state = 279},
  [24] = {.lex_state = 279},
  [25] = {.lex_state = 274},
  [26] = {.lex_state = 274},
  [27] = {.lex_state = 274},
  [28] = {.lex_state = 285},
  [29] = {.lex_state = 285},
  [30] = {.lex_state = 274},
  [31] = {.lex_state = 279},
  [32] = {.lex_state = 290},
  [33] = {.lex_state = 274},
  [34] = {.lex_state = 293},
  [35] = {.lex_state = 293},
  [36] = {.lex_state = 293},
  [37] = {.lex_state = 293},
  [38] = {.lex_state = 303},
  [39] = {.lex_state = 170},
  [40] = {.lex_state = 279},
  [41] = {.lex_state = 279},
  [42] = {.lex_state = 321, .external_lex_state = 2},
  [43] = {.lex_state = 277, .external_lex_state = 2},
  [44] = {.lex_state = 279},
  [45] = {.lex_state = 254},
  [46] = {.lex_state = 266, .external_lex_state = 4},
  [47] = {.lex_state = 323},
  [48] = {.lex_state = 326, .external_lex_state = 2},
  [49] = {.lex_state = 266, .external_lex_state = 2},
  [50] = {.lex_state = 170},
  [51] = {.lex_state = 266, .external_lex_state = 2},
  [52] = {.lex_state = 170},
  [53] = {.lex_state = 170},
  [54] = {.lex_state = 270, .external_lex_state = 2},
  [55] = {.lex_state = 279},
  [56] = {.lex_state = 270, .external_lex_state = 2},
  [57] = {.lex_state = 282},
  [58] = {.lex_state = 279},
  [59] = {.lex_state = 279},
  [60] = {.lex_state = 279},
  [61] = {.lex_state = 328},
  [62] = {.lex_state = 254},
  [63] = {.lex_state = 285},
  [64] = {.lex_state = 274},
  [65] = {.lex_state = 274},
  [66] = {.lex_state = 328},
  [67] = {.lex_state = 328},
  [68] = {.lex_state = 290},
  [69] = {.lex_state = 331},
  [70] = {.lex_state = 254},
  [71] = {.lex_state = 270},
  [72] = {.lex_state = 331},
  [73] = {.lex_state = 331},
  [74] = {.lex_state = 279},
  [75] = {.lex_state = 270},
  [76] = {.lex_state = 225, .external_lex_state = 2},
  [77] = {.lex_state = 254},
  [78] = {.lex_state = 334},
  [79] = {.lex_state = 254},
  [80] = {.lex_state = 274},
  [81] = {.lex_state = 334},
  [82] = {.lex_state = 334},
  [83] = {.lex_state = 282},
  [84] = {.lex_state = 254},
  [85] = {.lex_state = 274},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 279},
  [88] = {.lex_state = 274},
  [89] = {.lex_state = 293},
  [90] = {.lex_state = 323},
  [91] = {.lex_state = 279},
  [92] = {.lex_state = 279},
  [93] = {.lex_state = 279},
  [94] = {.lex_state = 254},
  [95] = {.lex_state = 266, .external_lex_state = 4},
  [96] = {.lex_state = 293},
  [97] = {.lex_state = 270},
  [98] = {.lex_state = 293},
  [99] = {.lex_state = 254},
  [100] = {.lex_state = 270},
  [101] = {.lex_state = 254},
  [102] = {.lex_state = 170, .external_lex_state = 3},
  [103] = {.lex_state = 270},
  [104] = {.lex_state = 260},
  [105] = {.lex_state = 260},
  [106] = {.lex_state = 260},
  [107] = {.lex_state = 266, .external_lex_state = 3},
  [108] = {.lex_state = 260},
  [109] = {.lex_state = 337},
  [110] = {.lex_state = 270},
  [111] = {.lex_state = 266, .external_lex_state = 5},
  [112] = {.lex_state = 337},
  [113] = {.lex_state = 303, .external_lex_state = 5},
  [114] = {.lex_state = 340, .external_lex_state = 2},
  [115] = {.lex_state = 254},
  [116] = {.lex_state = 321, .external_lex_state = 2},
  [117] = {.lex_state = 340, .external_lex_state = 2},
  [118] = {.lex_state = 340, .external_lex_state = 2},
  [119] = {.lex_state = 279},
  [120] = {.lex_state = 282},
  [121] = {.lex_state = 343, .external_lex_state = 2},
  [122] = {.lex_state = 254},
  [123] = {.lex_state = 277, .external_lex_state = 2},
  [124] = {.lex_state = 343, .external_lex_state = 2},
  [125] = {.lex_state = 343, .external_lex_state = 2},
  [126] = {.lex_state = 279},
  [127] = {.lex_state = 282},
  [128] = {.lex_state = 277, .external_lex_state = 2},
  [129] = {.lex_state = 347, .external_lex_state = 2},
  [130] = {.lex_state = 254},
  [131] = {.lex_state = 326, .external_lex_state = 2},
  [132] = {.lex_state = 350, .external_lex_state = 2},
  [133] = {.lex_state = 274},
  [134] = {.lex_state = 347, .external_lex_state = 2},
  [135] = {.lex_state = 347, .external_lex_state = 2},
  [136] = {.lex_state = 274},
  [137] = {.lex_state = 279},
  [138] = {.lex_state = 290},
  [139] = {.lex_state = 352},
  [140] = {.lex_state = 266, .external_lex_state = 2},
  [141] = {.lex_state = 270},
  [142] = {.lex_state = 270},
  [143] = {.lex_state = 266, .external_lex_state = 2},
  [144] = {.lex_state = 170},
  [145] = {.lex_state = 266, .external_lex_state = 2},
  [146] = {.lex_state = 282},
  [147] = {.lex_state = 254},
  [148] = {.lex_state = 282},
  [149] = {.lex_state = 282},
  [150] = {.lex_state = 270},
  [151] = {.lex_state = 270},
  [152] = {.lex_state = 270},
  [153] = {.lex_state = 328},
  [154] = {.lex_state = 274},
  [155] = {.lex_state = 285},
  [156] = {.lex_state = 254},
  [157] = {.lex_state = 254},
  [158] = {.lex_state = 331},
  [159] = {.lex_state = 274},
  [160] = {.lex_state = 254},
  [161] = {.lex_state = 279},
  [162] = {.lex_state = 254},
  [163] = {.lex_state = 274},
  [164] = {.lex_state = 334},
  [165] = {.lex_state = 274},
  [166] = {.lex_state = 290},
  [167] = {.lex_state = 254},
  [168] = {.lex_state = 290},
  [169] = {.lex_state = 270},
  [170] = {.lex_state = 279},
  [171] = {.lex_state = 279},
  [172] = {.lex_state = 279},
  [173] = {.lex_state = 293},
  [174] = {.lex_state = 274},
  [175] = {.lex_state = 355},
  [176] = {.lex_state = 254},
  [177] = {.lex_state = 359},
  [178] = {.lex_state = 355},
  [179] = {.lex_state = 355},
  [180] = {.lex_state = 279},
  [181] = {.lex_state = 270},
  [182] = {.lex_state = 365, .external_lex_state = 2},
  [183] = {.lex_state = 254},
  [184] = {.lex_state = 368, .external_lex_state = 2},
  [185] = {.lex_state = 370, .external_lex_state = 2},
  [186] = {.lex_state = 274},
  [187] = {.lex_state = 365, .external_lex_state = 2},
  [188] = {.lex_state = 365, .external_lex_state = 2},
  [189] = {.lex_state = 274},
  [190] = {.lex_state = 279},
  [191] = {.lex_state = 290},
  [192] = {.lex_state = 352},
  [193] = {.lex_state = 170},
  [194] = {.lex_state = 254},
  [195] = {.lex_state = 266, .external_lex_state = 4},
  [196] = {.lex_state = 293},
  [197] = {.lex_state = 365},
  [198] = {.lex_state = 254},
  [199] = {.lex_state = 270},
  [200] = {.lex_state = 270},
  [201] = {.lex_state = 274},
  [202] = {.lex_state = 365},
  [203] = {.lex_state = 365},
  [204] = {.lex_state = 274},
  [205] = {.lex_state = 279},
  [206] = {.lex_state = 290},
  [207] = {.lex_state = 254},
  [208] = {.lex_state = 368, .external_lex_state = 2},
  [209] = {.lex_state = 372, .external_lex_state = 5},
  [210] = {.lex_state = 170},
  [211] = {.lex_state = 254},
  [212] = {.lex_state = 170, .external_lex_state = 3},
  [213] = {.lex_state = 337},
  [214] = {.lex_state = 260},
  [215] = {.lex_state = 260},
  [216] = {.lex_state = 260},
  [217] = {.lex_state = 274},
  [218] = {.lex_state = 260},
  [219] = {.lex_state = 260},
  [220] = {.lex_state = 359},
  [221] = {.lex_state = 437},
  [222] = {.lex_state = 303},
  [223] = {.lex_state = 303, .external_lex_state = 5},
  [224] = {.lex_state = 270},
  [225] = {.lex_state = 254},
  [226] = {.lex_state = 170},
  [227] = {.lex_state = 337},
  [228] = {.lex_state = 303, .external_lex_state = 5},
  [229] = {.lex_state = 340, .external_lex_state = 2},
  [230] = {.lex_state = 274},
  [231] = {.lex_state = 343, .external_lex_state = 2},
  [232] = {.lex_state = 274},
  [233] = {.lex_state = 347, .external_lex_state = 2},
  [234] = {.lex_state = 274},
  [235] = {.lex_state = 254},
  [236] = {.lex_state = 440, .external_lex_state = 2},
  [237] = {.lex_state = 254},
  [238] = {.lex_state = 440, .external_lex_state = 2},
  [239] = {.lex_state = 440, .external_lex_state = 2},
  [240] = {.lex_state = 282},
  [241] = {.lex_state = 254},
  [242] = {.lex_state = 260},
  [243] = {.lex_state = 254},
  [244] = {.lex_state = 266, .external_lex_state = 2},
  [245] = {.lex_state = 266, .external_lex_state = 5},
  [246] = {.lex_state = 352, .external_lex_state = 5},
  [247] = {.lex_state = 266, .external_lex_state = 4},
  [248] = {.lex_state = 170},
  [249] = {.lex_state = 282},
  [250] = {.lex_state = 274},
  [251] = {.lex_state = 254},
  [252] = {.lex_state = 254},
  [253] = {.lex_state = 254},
  [254] = {.lex_state = 328},
  [255] = {.lex_state = 274},
  [256] = {.lex_state = 331},
  [257] = {.lex_state = 443},
  [258] = {.lex_state = 254},
  [259] = {.lex_state = 359},
  [260] = {.lex_state = 359},
  [261] = {.lex_state = 274},
  [262] = {.lex_state = 443},
  [263] = {.lex_state = 443},
  [264] = {.lex_state = 274},
  [265] = {.lex_state = 279},
  [266] = {.lex_state = 290},
  [267] = {.lex_state = 279},
  [268] = {.lex_state = 254},
  [269] = {.lex_state = 279},
  [270] = {.lex_state = 274},
  [271] = {.lex_state = 274},
  [272] = {.lex_state = 274},
  [273] = {.lex_state = 274},
  [274] = {.lex_state = 334},
  [275] = {.lex_state = 290},
  [276] = {.lex_state = 274},
  [277] = {.lex_state = 274},
  [278] = {.lex_state = 359},
  [279] = {.lex_state = 270},
  [280] = {.lex_state = 293},
  [281] = {.lex_state = 254},
  [282] = {.lex_state = 355},
  [283] = {.lex_state = 274},
  [284] = {.lex_state = 254},
  [285] = {.lex_state = 359},
  [286] = {.lex_state = 254},
  [287] = {.lex_state = 365, .external_lex_state = 2},
  [288] = {.lex_state = 274},
  [289] = {.lex_state = 266, .external_lex_state = 4},
  [290] = {.lex_state = 254},
  [291] = {.lex_state = 446, .external_lex_state = 2},
  [292] = {.lex_state = 254},
  [293] = {.lex_state = 446, .external_lex_state = 2},
  [294] = {.lex_state = 446, .external_lex_state = 2},
  [295] = {.lex_state = 282},
  [296] = {.lex_state = 254},
  [297] = {.lex_state = 266, .external_lex_state = 5},
  [298] = {.lex_state = 368, .external_lex_state = 2},
  [299] = {.lex_state = 170},
  [300] = {.lex_state = 365},
  [301] = {.lex_state = 274},
  [302] = {.lex_state = 254},
  [303] = {.lex_state = 446},
  [304] = {.lex_state = 254},
  [305] = {.lex_state = 446},
  [306] = {.lex_state = 446},
  [307] = {.lex_state = 282},
  [308] = {.lex_state = 254},
  [309] = {.lex_state = 270},
  [310] = {.lex_state = 170, .external_lex_state = 3},
  [311] = {.lex_state = 170},
  [312] = {.lex_state = 266, .external_lex_state = 3},
  [313] = {.lex_state = 260},
  [314] = {.lex_state = 266, .external_lex_state = 2},
  [315] = {.lex_state = 266, .external_lex_state = 2},
  [316] = {.lex_state = 352, .external_lex_state = 5},
  [317] = {.lex_state = 372, .external_lex_state = 5},
  [318] = {.lex_state = 266, .external_lex_state = 2},
  [319] = {.lex_state = 266, .external_lex_state = 5},
  [320] = {.lex_state = 359},
  [321] = {.lex_state = 368, .external_lex_state = 2},
  [322] = {.lex_state = 170},
  [323] = {.lex_state = 260},
  [324] = {.lex_state = 437},
  [325] = {.lex_state = 260},
  [326] = {.lex_state = 337},
  [327] = {.lex_state = 260},
  [328] = {.lex_state = 437},
  [329] = {.lex_state = 437},
  [330] = {.lex_state = 266, .external_lex_state = 5},
  [331] = {.lex_state = 254},
  [332] = {.lex_state = 449, .external_lex_state = 5},
  [333] = {.lex_state = 254},
  [334] = {.lex_state = 303, .external_lex_state = 5},
  [335] = {.lex_state = 498, .external_lex_state = 5},
  [336] = {.lex_state = 274},
  [337] = {.lex_state = 449, .external_lex_state = 5},
  [338] = {.lex_state = 449, .external_lex_state = 5},
  [339] = {.lex_state = 274},
  [340] = {.lex_state = 279},
  [341] = {.lex_state = 290},
  [342] = {.lex_state = 340, .external_lex_state = 2},
  [343] = {.lex_state = 343, .external_lex_state = 2},
  [344] = {.lex_state = 347, .external_lex_state = 2},
  [345] = {.lex_state = 326, .external_lex_state = 2},
  [346] = {.lex_state = 440, .external_lex_state = 2},
  [347] = {.lex_state = 274},
  [348] = {.lex_state = 502},
  [349] = {.lex_state = 502},
  [350] = {.lex_state = 502},
  [351] = {.lex_state = 352, .external_lex_state = 5},
  [352] = {.lex_state = 266, .external_lex_state = 2},
  [353] = {.lex_state = 352, .external_lex_state = 5},
  [354] = {.lex_state = 266, .external_lex_state = 2},
  [355] = {.lex_state = 282},
  [356] = {.lex_state = 274},
  [357] = {.lex_state = 359},
  [358] = {.lex_state = 274},
  [359] = {.lex_state = 274},
  [360] = {.lex_state = 443},
  [361] = {.lex_state = 274},
  [362] = {.lex_state = 254},
  [363] = {.lex_state = 505},
  [364] = {.lex_state = 254},
  [365] = {.lex_state = 359},
  [366] = {.lex_state = 505},
  [367] = {.lex_state = 505},
  [368] = {.lex_state = 282},
  [369] = {.lex_state = 254},
  [370] = {.lex_state = 279},
  [371] = {.lex_state = 274},
  [372] = {.lex_state = 254},
  [373] = {.lex_state = 290},
  [374] = {.lex_state = 293},
  [375] = {.lex_state = 254},
  [376] = {.lex_state = 254},
  [377] = {.lex_state = 254},
  [378] = {.lex_state = 274},
  [379] = {.lex_state = 355},
  [380] = {.lex_state = 359},
  [381] = {.lex_state = 274},
  [382] = {.lex_state = 365, .external_lex_state = 2},
  [383] = {.lex_state = 170},
  [384] = {.lex_state = 446, .external_lex_state = 2},
  [385] = {.lex_state = 274},
  [386] = {.lex_state = 170},
  [387] = {.lex_state = 266, .external_lex_state = 4},
  [388] = {.lex_state = 365},
  [389] = {.lex_state = 446},
  [390] = {.lex_state = 274},
  [391] = {.lex_state = 170},
  [392] = {.lex_state = 359},
  [393] = {.lex_state = 266, .external_lex_state = 2},
  [394] = {.lex_state = 170},
  [395] = {.lex_state = 266, .external_lex_state = 5},
  [396] = {.lex_state = 372, .external_lex_state = 5},
  [397] = {.lex_state = 372, .external_lex_state = 5},
  [398] = {.lex_state = 266, .external_lex_state = 2},
  [399] = {.lex_state = 359},
  [400] = {.lex_state = 170, .external_lex_state = 3},
  [401] = {.lex_state = 337},
  [402] = {.lex_state = 260},
  [403] = {.lex_state = 437},
  [404] = {.lex_state = 303, .external_lex_state = 5},
  [405] = {.lex_state = 303, .external_lex_state = 5},
  [406] = {.lex_state = 449, .external_lex_state = 5},
  [407] = {.lex_state = 274},
  [408] = {.lex_state = 254},
  [409] = {.lex_state = 508, .external_lex_state = 5},
  [410] = {.lex_state = 254},
  [411] = {.lex_state = 498, .external_lex_state = 5},
  [412] = {.lex_state = 508, .external_lex_state = 5},
  [413] = {.lex_state = 508, .external_lex_state = 5},
  [414] = {.lex_state = 282},
  [415] = {.lex_state = 254},
  [416] = {.lex_state = 498, .external_lex_state = 5},
  [417] = {.lex_state = 440, .external_lex_state = 2},
  [418] = {.lex_state = 502},
  [419] = {.lex_state = 323},
  [420] = {.lex_state = 279},
  [421] = {.lex_state = 279},
  [422] = {.lex_state = 279},
  [423] = {.lex_state = 254},
  [424] = {.lex_state = 502},
  [425] = {.lex_state = 270},
  [426] = {.lex_state = 502},
  [427] = {.lex_state = 254},
  [428] = {.lex_state = 270},
  [429] = {.lex_state = 274},
  [430] = {.lex_state = 443},
  [431] = {.lex_state = 359},
  [432] = {.lex_state = 505},
  [433] = {.lex_state = 274},
  [434] = {.lex_state = 279},
  [435] = {.lex_state = 274},
  [436] = {.lex_state = 359},
  [437] = {.lex_state = 274},
  [438] = {.lex_state = 293},
  [439] = {.lex_state = 446, .external_lex_state = 2},
  [440] = {.lex_state = 170},
  [441] = {.lex_state = 446},
  [442] = {.lex_state = 260},
  [443] = {.lex_state = 170},
  [444] = {.lex_state = 372, .external_lex_state = 5},
  [445] = {.lex_state = 266, .external_lex_state = 3},
  [446] = {.lex_state = 266, .external_lex_state = 2},
  [447] = {.lex_state = 170},
  [448] = {.lex_state = 449, .external_lex_state = 5},
  [449] = {.lex_state = 303, .external_lex_state = 5},
  [450] = {.lex_state = 508, .external_lex_state = 5},
  [451] = {.lex_state = 274},
  [452] = {.lex_state = 279},
  [453] = {.lex_state = 279},
  [454] = {.lex_state = 279},
  [455] = {.lex_state = 502},
  [456] = {.lex_state = 274},
  [457] = {.lex_state = 359},
  [458] = {.lex_state = 270},
  [459] = {.lex_state = 512, .external_lex_state = 2},
  [460] = {.lex_state = 254},
  [461] = {.lex_state = 266, .external_lex_state = 2},
  [462] = {.lex_state = 515, .external_lex_state = 2},
  [463] = {.lex_state = 274},
  [464] = {.lex_state = 512, .external_lex_state = 2},
  [465] = {.lex_state = 512, .external_lex_state = 2},
  [466] = {.lex_state = 274},
  [467] = {.lex_state = 279},
  [468] = {.lex_state = 290},
  [469] = {.lex_state = 254},
  [470] = {.lex_state = 502},
  [471] = {.lex_state = 266, .external_lex_state = 2},
  [472] = {.lex_state = 254},
  [473] = {.lex_state = 505},
  [474] = {.lex_state = 293},
  [475] = {.lex_state = 266, .external_lex_state = 5},
  [476] = {.lex_state = 359},
  [477] = {.lex_state = 359},
  [478] = {.lex_state = 508, .external_lex_state = 5},
  [479] = {.lex_state = 274},
  [480] = {.lex_state = 359},
  [481] = {.lex_state = 270},
  [482] = {.lex_state = 502},
  [483] = {.lex_state = 254},
  [484] = {.lex_state = 254},
  [485] = {.lex_state = 254},
  [486] = {.lex_state = 512, .external_lex_state = 2},
  [487] = {.lex_state = 274},
  [488] = {.lex_state = 254},
  [489] = {.lex_state = 517, .external_lex_state = 2},
  [490] = {.lex_state = 254},
  [491] = {.lex_state = 517, .external_lex_state = 2},
  [492] = {.lex_state = 517, .external_lex_state = 2},
  [493] = {.lex_state = 282},
  [494] = {.lex_state = 254},
  [495] = {.lex_state = 266, .external_lex_state = 2},
  [496] = {.lex_state = 266, .external_lex_state = 2},
  [497] = {.lex_state = 372, .external_lex_state = 5},
  [498] = {.lex_state = 260},
  [499] = {.lex_state = 502},
  [500] = {.lex_state = 254},
  [501] = {.lex_state = 254},
  [502] = {.lex_state = 254},
  [503] = {.lex_state = 274},
  [504] = {.lex_state = 359},
  [505] = {.lex_state = 274},
  [506] = {.lex_state = 512, .external_lex_state = 2},
  [507] = {.lex_state = 517, .external_lex_state = 2},
  [508] = {.lex_state = 274},
  [509] = {.lex_state = 266, .external_lex_state = 5},
  [510] = {.lex_state = 274},
  [511] = {.lex_state = 359},
  [512] = {.lex_state = 274},
  [513] = {.lex_state = 502},
  [514] = {.lex_state = 517, .external_lex_state = 2},
  [515] = {.lex_state = 359},
  [516] = {.lex_state = 502},
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

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
  [5] = {
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
    [sym_source_file] = STATE(8),
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(14),
    [sym_lhs] = STATE(13),
    [sym_data] = STATE(15),
    [sym_data_signature_only] = STATE(14),
    [sym_record] = STATE(15),
    [sym_record_signature_only] = STATE(14),
    [sym_field] = STATE(15),
    [sym__declaration] = STATE(14),
    [sym__declaration_block] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
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
    [anon_sym_field] = ACTIONS(21),
    [sym_pragma] = ACTIONS(23),
  },
  [2] = {
    [sym__newline] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_rewrite] = ACTIONS(27),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(27),
  },
  [3] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(25),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [4] = {
    [sym_name] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
  },
  [5] = {
    [sym_name] = ACTIONS(45),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [sym_literal] = STATE(37),
    [sym__atom_no_curly] = STATE(37),
    [sym_string] = ACTIONS(47),
    [sym_int] = ACTIONS(47),
    [sym_qualified_name] = ACTIONS(49),
    [anon_sym__] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(49),
    [anon_sym_Prop] = ACTIONS(49),
    [anon_sym_Set] = ACTIONS(49),
    [anon_sym_quote] = ACTIONS(49),
    [anon_sym_quoteTerm] = ACTIONS(49),
    [anon_sym_unquote] = ACTIONS(49),
  },
  [7] = {
    [sym__arg_type_signatures_block] = STATE(39),
    [sym__indent] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(53),
  },
  [9] = {
    [sym_rewrite_equations] = STATE(42),
    [sym_with_expressions] = STATE(43),
    [sym__newline] = ACTIONS(57),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_rewrite] = ACTIONS(59),
    [anon_sym_with] = ACTIONS(61),
    [anon_sym_where] = ACTIONS(57),
    [anon_sym_module] = ACTIONS(57),
  },
  [10] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [11] = {
    [sym__newline] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_rewrite] = ACTIONS(69),
    [anon_sym_with] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(69),
    [anon_sym_module] = ACTIONS(69),
  },
  [12] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_rewrite] = ACTIONS(73),
    [anon_sym_with] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
  },
  [13] = {
    [sym_rhs] = STATE(48),
    [sym_where_clause] = STATE(49),
    [sym__newline] = ACTIONS(75),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(81),
  },
  [14] = {
    [sym__newline] = ACTIONS(83),
    [sym_comment] = ACTIONS(53),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_string] = ACTIONS(87),
    [sym_int] = ACTIONS(87),
    [sym_qualified_name] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(87),
    [anon_sym_Prop] = ACTIONS(87),
    [anon_sym_Set] = ACTIONS(87),
    [anon_sym_quote] = ACTIONS(87),
    [anon_sym_quoteTerm] = ACTIONS(87),
    [anon_sym_unquote] = ACTIONS(87),
    [anon_sym_data] = ACTIONS(87),
    [anon_sym_codata] = ACTIONS(87),
    [anon_sym_record] = ACTIONS(87),
    [anon_sym_field] = ACTIONS(87),
    [sym_pragma] = ACTIONS(87),
  },
  [16] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(51),
    [sym_lhs] = STATE(13),
    [sym_data] = STATE(52),
    [sym_data_signature_only] = STATE(51),
    [sym_record] = STATE(52),
    [sym_record_signature_only] = STATE(51),
    [sym_field] = STATE(52),
    [sym__declaration] = STATE(51),
    [sym__declaration_block] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(53),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
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
    [anon_sym_field] = ACTIONS(21),
    [sym_pragma] = ACTIONS(89),
  },
  [17] = {
    [sym_literal] = STATE(12),
    [sym__application] = STATE(54),
    [sym__expr2] = STATE(54),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(18),
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
  [18] = {
    [sym_literal] = STATE(12),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
  },
  [19] = {
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(97),
  },
  [21] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(64),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [22] = {
    [sym__newline] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_rewrite] = ACTIONS(109),
    [anon_sym_with] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(109),
  },
  [23] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [24] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(75),
    [sym__expr2] = STATE(75),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [25] = {
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(53),
  },
  [26] = {
    [anon_sym_RBRACE] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(121),
  },
  [27] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [28] = {
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [29] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [30] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_comment] = ACTIONS(53),
  },
  [31] = {
    [sym_literal] = STATE(82),
    [sym__application] = STATE(80),
    [sym__expr2] = STATE(80),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(81),
    [sym__atom_curly] = STATE(82),
    [sym__atom_no_curly] = STATE(82),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(83),
    [sym_string] = ACTIONS(123),
    [sym_int] = ACTIONS(123),
    [sym_qualified_name] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(125),
    [anon_sym_Prop] = ACTIONS(125),
    [anon_sym_Set] = ACTIONS(125),
    [anon_sym_quote] = ACTIONS(125),
    [anon_sym_quoteTerm] = ACTIONS(125),
    [anon_sym_unquote] = ACTIONS(125),
  },
  [32] = {
    [sym_literal] = STATE(29),
    [sym__expr2] = STATE(85),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(129),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
  },
  [33] = {
    [sym_typed_binding] = STATE(88),
    [aux_sym__typed_bindings1_repeat1] = STATE(88),
    [sym__const_right_arrow] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(139),
  },
  [34] = {
    [sym_binding_name] = STATE(96),
    [sym_untyped_binding] = STATE(98),
    [sym_typed_binding] = STATE(98),
    [sym__typed_untyped_binding1] = STATE(97),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(98),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(153),
  },
  [35] = {
    [sym_binding_name] = STATE(96),
    [sym_untyped_binding] = STATE(98),
    [sym_typed_binding] = STATE(98),
    [sym__typed_untyped_binding1] = STATE(100),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(98),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_where] = ACTIONS(153),
  },
  [36] = {
    [sym_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
  },
  [37] = {
    [sym_binding_name] = STATE(96),
    [sym_untyped_binding] = STATE(98),
    [sym_typed_binding] = STATE(98),
    [sym__typed_untyped_binding1] = STATE(103),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(98),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_where] = ACTIONS(159),
  },
  [38] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym__arg_names] = STATE(110),
    [sym_arg_name] = STATE(112),
    [sym__arg_type_signatures1] = STATE(111),
    [sym_arg_type_signature] = STATE(113),
    [aux_sym__arg_names_repeat1] = STATE(112),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(113),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_string] = ACTIONS(175),
    [sym_int] = ACTIONS(175),
    [sym_qualified_name] = ACTIONS(175),
    [anon_sym__] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(175),
    [anon_sym_Prop] = ACTIONS(175),
    [anon_sym_Set] = ACTIONS(175),
    [anon_sym_quote] = ACTIONS(175),
    [anon_sym_quoteTerm] = ACTIONS(175),
    [anon_sym_unquote] = ACTIONS(175),
    [anon_sym_data] = ACTIONS(175),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(175),
    [anon_sym_field] = ACTIONS(175),
    [sym_pragma] = ACTIONS(175),
  },
  [40] = {
    [sym_literal] = STATE(118),
    [sym__expr1] = STATE(116),
    [sym__application] = STATE(116),
    [sym__expr2] = STATE(116),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(117),
    [sym__atom_curly] = STATE(118),
    [sym__atom_no_curly] = STATE(118),
    [aux_sym__expr1_repeat1] = STATE(119),
    [aux_sym__application_repeat1] = STATE(120),
    [sym_string] = ACTIONS(177),
    [sym_int] = ACTIONS(177),
    [sym_qualified_name] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_Prop] = ACTIONS(179),
    [anon_sym_Set] = ACTIONS(179),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_quoteTerm] = ACTIONS(179),
    [anon_sym_unquote] = ACTIONS(179),
  },
  [41] = {
    [sym_literal] = STATE(125),
    [sym__expr1] = STATE(123),
    [sym__application] = STATE(123),
    [sym__expr2] = STATE(123),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(124),
    [sym__atom_curly] = STATE(125),
    [sym__atom_no_curly] = STATE(125),
    [aux_sym__expr1_repeat1] = STATE(126),
    [aux_sym__application_repeat1] = STATE(127),
    [sym_string] = ACTIONS(183),
    [sym_int] = ACTIONS(183),
    [sym_qualified_name] = ACTIONS(185),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_Prop] = ACTIONS(185),
    [anon_sym_Set] = ACTIONS(185),
    [anon_sym_quote] = ACTIONS(185),
    [anon_sym_quoteTerm] = ACTIONS(185),
    [anon_sym_unquote] = ACTIONS(185),
  },
  [42] = {
    [sym_with_expressions] = STATE(128),
    [sym__newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_with] = ACTIONS(61),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
  },
  [43] = {
    [sym__newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
  },
  [44] = {
    [sym_string] = ACTIONS(191),
    [sym_int] = ACTIONS(191),
    [sym_qualified_name] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_Prop] = ACTIONS(191),
    [anon_sym_Set] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_quoteTerm] = ACTIONS(191),
    [anon_sym_unquote] = ACTIONS(191),
  },
  [45] = {
    [sym_literal] = STATE(135),
    [sym_expr] = STATE(131),
    [sym__expr1] = STATE(132),
    [sym__application] = STATE(132),
    [sym__expr2] = STATE(132),
    [sym__atoms1] = STATE(133),
    [sym_atom] = STATE(134),
    [sym__atom_curly] = STATE(135),
    [sym__atom_no_curly] = STATE(135),
    [sym__typed_bindings1] = STATE(136),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(137),
    [aux_sym__application_repeat1] = STATE(138),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(193),
    [sym_int] = ACTIONS(193),
    [sym_qualified_name] = ACTIONS(195),
    [anon_sym__] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_Prop] = ACTIONS(195),
    [anon_sym_Set] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_quoteTerm] = ACTIONS(195),
    [anon_sym_unquote] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [46] = {
    [sym__declarations0] = STATE(140),
    [sym__newline] = ACTIONS(199),
    [sym__indent] = ACTIONS(201),
    [sym_comment] = ACTIONS(53),
  },
  [47] = {
    [sym_anonymous_name] = STATE(141),
    [sym_name] = ACTIONS(203),
    [anon_sym__] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
  },
  [48] = {
    [sym_where_clause] = STATE(143),
    [sym__newline] = ACTIONS(207),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(81),
  },
  [49] = {
    [sym__newline] = ACTIONS(207),
    [sym_comment] = ACTIONS(53),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_string] = ACTIONS(211),
    [sym_int] = ACTIONS(211),
    [sym_qualified_name] = ACTIONS(211),
    [anon_sym__] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(211),
    [anon_sym_Prop] = ACTIONS(211),
    [anon_sym_Set] = ACTIONS(211),
    [anon_sym_quote] = ACTIONS(211),
    [anon_sym_quoteTerm] = ACTIONS(211),
    [anon_sym_unquote] = ACTIONS(211),
    [anon_sym_data] = ACTIONS(211),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_record] = ACTIONS(211),
    [anon_sym_field] = ACTIONS(211),
    [sym_pragma] = ACTIONS(211),
  },
  [51] = {
    [sym__newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(53),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_string] = ACTIONS(87),
    [sym_int] = ACTIONS(87),
    [sym_qualified_name] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(87),
    [anon_sym_Prop] = ACTIONS(87),
    [anon_sym_Set] = ACTIONS(87),
    [anon_sym_quote] = ACTIONS(87),
    [anon_sym_quoteTerm] = ACTIONS(87),
    [anon_sym_unquote] = ACTIONS(87),
    [anon_sym_data] = ACTIONS(87),
    [anon_sym_codata] = ACTIONS(87),
    [anon_sym_record] = ACTIONS(87),
    [anon_sym_field] = ACTIONS(87),
    [sym_pragma] = ACTIONS(87),
  },
  [53] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(145),
    [sym_lhs] = STATE(13),
    [sym_data] = STATE(53),
    [sym_data_signature_only] = STATE(145),
    [sym_record] = STATE(53),
    [sym_record_signature_only] = STATE(145),
    [sym_field] = STATE(53),
    [sym__declaration] = STATE(145),
    [sym__declaration_block] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(53),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [sym_string] = ACTIONS(215),
    [sym_int] = ACTIONS(215),
    [sym_qualified_name] = ACTIONS(218),
    [anon_sym__] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(221),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(218),
    [anon_sym_Prop] = ACTIONS(218),
    [anon_sym_Set] = ACTIONS(218),
    [anon_sym_quote] = ACTIONS(218),
    [anon_sym_quoteTerm] = ACTIONS(218),
    [anon_sym_unquote] = ACTIONS(218),
    [anon_sym_data] = ACTIONS(224),
    [anon_sym_codata] = ACTIONS(227),
    [anon_sym_record] = ACTIONS(230),
    [anon_sym_field] = ACTIONS(233),
    [sym_pragma] = ACTIONS(236),
  },
  [54] = {
    [sym__newline] = ACTIONS(239),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_rewrite] = ACTIONS(239),
    [anon_sym_with] = ACTIONS(239),
    [anon_sym_where] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(239),
  },
  [55] = {
    [sym_literal] = STATE(148),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(149),
    [sym__atom_curly] = STATE(148),
    [sym__atom_no_curly] = STATE(148),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(149),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(244),
    [anon_sym__] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(247),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(244),
    [anon_sym_Prop] = ACTIONS(244),
    [anon_sym_Set] = ACTIONS(244),
    [anon_sym_quote] = ACTIONS(244),
    [anon_sym_quoteTerm] = ACTIONS(244),
    [anon_sym_unquote] = ACTIONS(244),
  },
  [56] = {
    [sym__newline] = ACTIONS(250),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(250),
    [anon_sym_rewrite] = ACTIONS(250),
    [anon_sym_with] = ACTIONS(250),
    [anon_sym_where] = ACTIONS(250),
    [anon_sym_module] = ACTIONS(250),
  },
  [57] = {
    [sym_literal] = STATE(148),
    [sym_atom] = STATE(57),
    [sym__atom_curly] = STATE(148),
    [sym__atom_no_curly] = STATE(148),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(252),
    [sym_int] = ACTIONS(252),
    [sym_qualified_name] = ACTIONS(255),
    [anon_sym__] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(258),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(255),
    [anon_sym_Prop] = ACTIONS(255),
    [anon_sym_Set] = ACTIONS(255),
    [anon_sym_quote] = ACTIONS(255),
    [anon_sym_quoteTerm] = ACTIONS(255),
    [anon_sym_unquote] = ACTIONS(255),
  },
  [58] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(150),
    [sym__expr2] = STATE(150),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [59] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(151),
    [sym__expr2] = STATE(151),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [60] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(152),
    [sym__expr2] = STATE(152),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [61] = {
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
  },
  [62] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(154),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [63] = {
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym_comment] = ACTIONS(53),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(267),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(269),
  },
  [66] = {
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
  },
  [67] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
  },
  [68] = {
    [sym_literal] = STATE(67),
    [sym__expr2] = STATE(85),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(271),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
  },
  [69] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
  },
  [70] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(159),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [71] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(275),
  },
  [72] = {
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
  },
  [73] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
  },
  [74] = {
    [sym_literal] = STATE(73),
    [sym__expr2] = STATE(85),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(161),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [75] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(277),
  },
  [76] = {
    [sym__newline] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_rewrite] = ACTIONS(281),
    [anon_sym_with] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
  },
  [77] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(163),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [78] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
  },
  [79] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(165),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(239),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_where] = ACTIONS(239),
  },
  [81] = {
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [82] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [83] = {
    [sym_literal] = STATE(82),
    [sym__expr2] = STATE(85),
    [sym_atom] = STATE(81),
    [sym__atom_curly] = STATE(82),
    [sym__atom_no_curly] = STATE(82),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(123),
    [sym_int] = ACTIONS(123),
    [sym_qualified_name] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(125),
    [anon_sym_Prop] = ACTIONS(125),
    [anon_sym_Set] = ACTIONS(125),
    [anon_sym_quote] = ACTIONS(125),
    [anon_sym_quoteTerm] = ACTIONS(125),
    [anon_sym_unquote] = ACTIONS(125),
  },
  [84] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(64),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [85] = {
    [anon_sym_RBRACE] = ACTIONS(250),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_where] = ACTIONS(250),
  },
  [86] = {
    [sym_literal] = STATE(168),
    [sym_atom] = STATE(86),
    [sym__atom_curly] = STATE(168),
    [sym__atom_no_curly] = STATE(168),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(261),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(288),
    [anon_sym__] = ACTIONS(288),
    [anon_sym_LBRACE] = ACTIONS(291),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(288),
    [anon_sym_Prop] = ACTIONS(288),
    [anon_sym_Set] = ACTIONS(288),
    [anon_sym_quote] = ACTIONS(288),
    [anon_sym_quoteTerm] = ACTIONS(288),
    [anon_sym_unquote] = ACTIONS(288),
  },
  [87] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(169),
    [sym__expr2] = STATE(169),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [88] = {
    [sym_typed_binding] = STATE(88),
    [aux_sym__typed_bindings1_repeat1] = STATE(88),
    [sym__const_right_arrow] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_DOT_DOT] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(308),
  },
  [89] = {
    [sym_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_where] = ACTIONS(311),
  },
  [90] = {
    [sym_binding_name] = STATE(173),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(315),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(317),
  },
  [91] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(174),
    [sym__expr2] = STATE(174),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [92] = {
    [sym_literal] = STATE(179),
    [sym__application] = STATE(177),
    [sym__expr2] = STATE(177),
    [sym_atom] = STATE(178),
    [sym__atom_curly] = STATE(179),
    [sym__atom_no_curly] = STATE(179),
    [aux_sym__application_repeat1] = STATE(180),
    [sym_string] = ACTIONS(319),
    [sym_int] = ACTIONS(319),
    [sym_qualified_name] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_Prop] = ACTIONS(321),
    [anon_sym_Set] = ACTIONS(321),
    [anon_sym_quote] = ACTIONS(321),
    [anon_sym_quoteTerm] = ACTIONS(321),
    [anon_sym_unquote] = ACTIONS(321),
  },
  [93] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(181),
    [sym__expr2] = STATE(181),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [94] = {
    [sym_literal] = STATE(188),
    [sym_expr] = STATE(184),
    [sym__expr1] = STATE(185),
    [sym__application] = STATE(185),
    [sym__expr2] = STATE(185),
    [sym__atoms1] = STATE(186),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(188),
    [sym__atom_no_curly] = STATE(188),
    [sym__typed_bindings1] = STATE(189),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(190),
    [aux_sym__application_repeat1] = STATE(191),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(325),
    [sym_int] = ACTIONS(325),
    [sym_qualified_name] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_Prop] = ACTIONS(327),
    [anon_sym_Set] = ACTIONS(327),
    [anon_sym_quote] = ACTIONS(327),
    [anon_sym_quoteTerm] = ACTIONS(327),
    [anon_sym_unquote] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [95] = {
    [sym__declarations0] = STATE(193),
    [sym__newline] = ACTIONS(331),
    [sym__indent] = ACTIONS(333),
    [sym_comment] = ACTIONS(53),
  },
  [96] = {
    [sym_name] = ACTIONS(335),
    [anon_sym__] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_DOT_DOT] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(335),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_where] = ACTIONS(335),
  },
  [97] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_where] = ACTIONS(339),
  },
  [98] = {
    [sym_binding_name] = STATE(96),
    [sym_untyped_binding] = STATE(196),
    [sym_typed_binding] = STATE(196),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(196),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_where] = ACTIONS(341),
  },
  [99] = {
    [sym_literal] = STATE(203),
    [sym_expr] = STATE(199),
    [sym__expr1] = STATE(200),
    [sym__application] = STATE(200),
    [sym__expr2] = STATE(200),
    [sym__atoms1] = STATE(201),
    [sym_atom] = STATE(202),
    [sym__atom_curly] = STATE(203),
    [sym__atom_no_curly] = STATE(203),
    [sym__typed_bindings1] = STATE(204),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(205),
    [aux_sym__application_repeat1] = STATE(206),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(343),
    [sym_int] = ACTIONS(343),
    [sym_qualified_name] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_Prop] = ACTIONS(345),
    [anon_sym_Set] = ACTIONS(345),
    [anon_sym_quote] = ACTIONS(345),
    [anon_sym_quoteTerm] = ACTIONS(345),
    [anon_sym_unquote] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [100] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_where] = ACTIONS(339),
  },
  [101] = {
    [sym_literal] = STATE(188),
    [sym_expr] = STATE(208),
    [sym__expr1] = STATE(185),
    [sym__application] = STATE(185),
    [sym__expr2] = STATE(185),
    [sym__atoms1] = STATE(186),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(188),
    [sym__atom_no_curly] = STATE(188),
    [sym__typed_bindings1] = STATE(189),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(190),
    [aux_sym__application_repeat1] = STATE(191),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(325),
    [sym_int] = ACTIONS(325),
    [sym_qualified_name] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_Prop] = ACTIONS(327),
    [anon_sym_Set] = ACTIONS(327),
    [anon_sym_quote] = ACTIONS(327),
    [anon_sym_quoteTerm] = ACTIONS(327),
    [anon_sym_unquote] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [102] = {
    [sym_record_declarations_block] = STATE(210),
    [sym__indent] = ACTIONS(351),
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_string] = ACTIONS(355),
    [sym_int] = ACTIONS(355),
    [sym_qualified_name] = ACTIONS(355),
    [anon_sym__] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(355),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(355),
    [anon_sym_Prop] = ACTIONS(355),
    [anon_sym_Set] = ACTIONS(355),
    [anon_sym_quote] = ACTIONS(355),
    [anon_sym_quoteTerm] = ACTIONS(355),
    [anon_sym_unquote] = ACTIONS(355),
    [anon_sym_data] = ACTIONS(355),
    [anon_sym_codata] = ACTIONS(355),
    [anon_sym_record] = ACTIONS(355),
    [anon_sym_field] = ACTIONS(355),
    [sym_pragma] = ACTIONS(355),
  },
  [103] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_where] = ACTIONS(359),
  },
  [104] = {
    [sym_name] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(363),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(13),
  },
  [105] = {
    [sym__maybe_dotted_names1] = STATE(217),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(218),
    [sym_name] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(369),
    [sym_comment] = ACTIONS(13),
  },
  [106] = {
    [sym__maybe_dotted_names1] = STATE(220),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(221),
    [sym_name] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_DOT_DOT] = ACTIONS(373),
    [sym_comment] = ACTIONS(13),
  },
  [107] = {
    [sym__arg_type_signatures_block] = STATE(223),
    [sym__indent] = ACTIONS(375),
    [sym_comment] = ACTIONS(53),
  },
  [108] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym__arg_names] = STATE(224),
    [sym_arg_name] = STATE(112),
    [aux_sym__arg_names_repeat1] = STATE(112),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
  },
  [109] = {
    [sym_name] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_DOT_DOT] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(377),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(377),
  },
  [110] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(379),
  },
  [111] = {
    [sym__dedent] = ACTIONS(381),
    [sym_comment] = ACTIONS(53),
  },
  [112] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym_arg_name] = STATE(227),
    [aux_sym__arg_names_repeat1] = STATE(227),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(383),
  },
  [113] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym__arg_names] = STATE(110),
    [sym_arg_name] = STATE(112),
    [sym_arg_type_signature] = STATE(228),
    [aux_sym__arg_names_repeat1] = STATE(112),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(228),
    [sym__dedent] = ACTIONS(385),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [114] = {
    [sym__newline] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(27),
  },
  [115] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(230),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [116] = {
    [sym__newline] = ACTIONS(389),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(389),
    [anon_sym_with] = ACTIONS(389),
    [anon_sym_where] = ACTIONS(389),
    [anon_sym_module] = ACTIONS(389),
  },
  [117] = {
    [sym__newline] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_with] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(69),
    [anon_sym_module] = ACTIONS(69),
  },
  [118] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_with] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
  },
  [119] = {
    [sym_literal] = STATE(118),
    [sym__application] = STATE(54),
    [sym__expr2] = STATE(54),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(117),
    [sym__atom_curly] = STATE(118),
    [sym__atom_no_curly] = STATE(118),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(120),
    [sym_string] = ACTIONS(177),
    [sym_int] = ACTIONS(177),
    [sym_qualified_name] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_Prop] = ACTIONS(179),
    [anon_sym_Set] = ACTIONS(179),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_quoteTerm] = ACTIONS(179),
    [anon_sym_unquote] = ACTIONS(179),
  },
  [120] = {
    [sym_literal] = STATE(118),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(117),
    [sym__atom_curly] = STATE(118),
    [sym__atom_no_curly] = STATE(118),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(177),
    [sym_int] = ACTIONS(177),
    [sym_qualified_name] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_Prop] = ACTIONS(179),
    [anon_sym_Set] = ACTIONS(179),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_quoteTerm] = ACTIONS(179),
    [anon_sym_unquote] = ACTIONS(179),
  },
  [121] = {
    [sym__newline] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(27),
  },
  [122] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(232),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [123] = {
    [sym__newline] = ACTIONS(393),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_where] = ACTIONS(393),
    [anon_sym_module] = ACTIONS(393),
  },
  [124] = {
    [sym__newline] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(69),
    [anon_sym_module] = ACTIONS(69),
  },
  [125] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
  },
  [126] = {
    [sym_literal] = STATE(125),
    [sym__application] = STATE(54),
    [sym__expr2] = STATE(54),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(124),
    [sym__atom_curly] = STATE(125),
    [sym__atom_no_curly] = STATE(125),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(127),
    [sym_string] = ACTIONS(183),
    [sym_int] = ACTIONS(183),
    [sym_qualified_name] = ACTIONS(185),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_Prop] = ACTIONS(185),
    [anon_sym_Set] = ACTIONS(185),
    [anon_sym_quote] = ACTIONS(185),
    [anon_sym_quoteTerm] = ACTIONS(185),
    [anon_sym_unquote] = ACTIONS(185),
  },
  [127] = {
    [sym_literal] = STATE(125),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(124),
    [sym__atom_curly] = STATE(125),
    [sym__atom_no_curly] = STATE(125),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(183),
    [sym_int] = ACTIONS(183),
    [sym_qualified_name] = ACTIONS(185),
    [anon_sym__] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_Prop] = ACTIONS(185),
    [anon_sym_Set] = ACTIONS(185),
    [anon_sym_quote] = ACTIONS(185),
    [anon_sym_quoteTerm] = ACTIONS(185),
    [anon_sym_unquote] = ACTIONS(185),
  },
  [128] = {
    [sym__newline] = ACTIONS(395),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_where] = ACTIONS(395),
    [anon_sym_module] = ACTIONS(395),
  },
  [129] = {
    [sym__newline] = ACTIONS(25),
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(27),
  },
  [130] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(234),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [131] = {
    [sym__newline] = ACTIONS(399),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(399),
    [anon_sym_module] = ACTIONS(399),
  },
  [132] = {
    [sym__newline] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_where] = ACTIONS(119),
    [anon_sym_module] = ACTIONS(119),
  },
  [133] = {
    [sym__const_right_arrow] = ACTIONS(401),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [134] = {
    [sym__newline] = ACTIONS(65),
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(69),
    [anon_sym_module] = ACTIONS(69),
  },
  [135] = {
    [sym__newline] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
  },
  [136] = {
    [sym__const_right_arrow] = ACTIONS(401),
    [sym_comment] = ACTIONS(53),
  },
  [137] = {
    [sym_literal] = STATE(239),
    [sym__application] = STATE(54),
    [sym__expr2] = STATE(54),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(238),
    [sym__atom_curly] = STATE(239),
    [sym__atom_no_curly] = STATE(239),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(240),
    [sym_string] = ACTIONS(403),
    [sym_int] = ACTIONS(403),
    [sym_qualified_name] = ACTIONS(405),
    [anon_sym__] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(405),
    [anon_sym_Prop] = ACTIONS(405),
    [anon_sym_Set] = ACTIONS(405),
    [anon_sym_quote] = ACTIONS(405),
    [anon_sym_quoteTerm] = ACTIONS(405),
    [anon_sym_unquote] = ACTIONS(405),
  },
  [138] = {
    [sym_literal] = STATE(135),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(134),
    [sym__atom_curly] = STATE(135),
    [sym__atom_no_curly] = STATE(135),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(193),
    [sym_int] = ACTIONS(193),
    [sym_qualified_name] = ACTIONS(195),
    [anon_sym__] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_Prop] = ACTIONS(195),
    [anon_sym_Set] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_quoteTerm] = ACTIONS(195),
    [anon_sym_unquote] = ACTIONS(195),
  },
  [139] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(244),
    [sym_lhs] = STATE(13),
    [sym_data_signature_only] = STATE(244),
    [sym_record_signature_only] = STATE(244),
    [sym__declaration] = STATE(244),
    [sym__declarations1] = STATE(245),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [aux_sym__declarations1_repeat1] = STATE(246),
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
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(413),
    [sym_pragma] = ACTIONS(415),
  },
  [140] = {
    [sym__newline] = ACTIONS(417),
    [sym_comment] = ACTIONS(53),
  },
  [141] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(419),
  },
  [142] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(421),
  },
  [143] = {
    [sym__newline] = ACTIONS(423),
    [sym_comment] = ACTIONS(53),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym_string] = ACTIONS(211),
    [sym_int] = ACTIONS(211),
    [sym_qualified_name] = ACTIONS(211),
    [anon_sym__] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(211),
    [anon_sym_Prop] = ACTIONS(211),
    [anon_sym_Set] = ACTIONS(211),
    [anon_sym_quote] = ACTIONS(211),
    [anon_sym_quoteTerm] = ACTIONS(211),
    [anon_sym_unquote] = ACTIONS(211),
    [anon_sym_data] = ACTIONS(211),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_record] = ACTIONS(211),
    [anon_sym_field] = ACTIONS(211),
    [sym_pragma] = ACTIONS(211),
  },
  [145] = {
    [sym__newline] = ACTIONS(427),
    [sym_comment] = ACTIONS(53),
  },
  [146] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [147] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(250),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [148] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [149] = {
    [sym_literal] = STATE(148),
    [sym_atom] = STATE(57),
    [sym__atom_curly] = STATE(148),
    [sym__atom_no_curly] = STATE(148),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(431),
    [sym_int] = ACTIONS(431),
    [sym_qualified_name] = ACTIONS(433),
    [anon_sym__] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(435),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(433),
    [anon_sym_Prop] = ACTIONS(433),
    [anon_sym_Set] = ACTIONS(433),
    [anon_sym_quote] = ACTIONS(433),
    [anon_sym_quoteTerm] = ACTIONS(433),
    [anon_sym_unquote] = ACTIONS(433),
  },
  [150] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(437),
  },
  [151] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(439),
  },
  [152] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(441),
  },
  [153] = {
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(443),
    [sym_comment] = ACTIONS(53),
  },
  [155] = {
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [156] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(255),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [157] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(154),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [158] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
  },
  [159] = {
    [anon_sym_RBRACE] = ACTIONS(445),
    [sym_comment] = ACTIONS(53),
  },
  [160] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(259),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [161] = {
    [sym_literal] = STATE(269),
    [sym_atom] = STATE(161),
    [sym__atom_curly] = STATE(269),
    [sym__atom_no_curly] = STATE(269),
    [aux_sym__application_repeat1] = STATE(161),
    [sym_string] = ACTIONS(453),
    [sym_int] = ACTIONS(453),
    [sym_qualified_name] = ACTIONS(456),
    [anon_sym__] = ACTIONS(456),
    [anon_sym_LBRACE] = ACTIONS(459),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(456),
    [anon_sym_Prop] = ACTIONS(456),
    [anon_sym_Set] = ACTIONS(456),
    [anon_sym_quote] = ACTIONS(456),
    [anon_sym_quoteTerm] = ACTIONS(456),
    [anon_sym_unquote] = ACTIONS(456),
  },
  [162] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(270),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [163] = {
    [anon_sym_RBRACE] = ACTIONS(462),
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_where] = ACTIONS(462),
  },
  [164] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
  },
  [165] = {
    [anon_sym_RBRACE] = ACTIONS(464),
    [sym_comment] = ACTIONS(53),
  },
  [166] = {
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [167] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(276),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [168] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [169] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(269),
  },
  [170] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(277),
    [sym__expr2] = STATE(277),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [171] = {
    [sym_literal] = STATE(179),
    [sym__application] = STATE(278),
    [sym__expr2] = STATE(278),
    [sym_atom] = STATE(178),
    [sym__atom_curly] = STATE(179),
    [sym__atom_no_curly] = STATE(179),
    [aux_sym__application_repeat1] = STATE(180),
    [sym_string] = ACTIONS(319),
    [sym_int] = ACTIONS(319),
    [sym_qualified_name] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_Prop] = ACTIONS(321),
    [anon_sym_Set] = ACTIONS(321),
    [anon_sym_quote] = ACTIONS(321),
    [anon_sym_quoteTerm] = ACTIONS(321),
    [anon_sym_unquote] = ACTIONS(321),
  },
  [172] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(279),
    [sym__expr2] = STATE(279),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [173] = {
    [sym_name] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(468),
    [anon_sym_DOT_DOT] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(468),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(468),
    [anon_sym_where] = ACTIONS(468),
  },
  [174] = {
    [anon_sym_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(472),
  },
  [175] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
  },
  [176] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(283),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [177] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(476),
  },
  [178] = {
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
  },
  [179] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
  },
  [180] = {
    [sym_literal] = STATE(179),
    [sym__expr2] = STATE(285),
    [sym_atom] = STATE(178),
    [sym__atom_curly] = STATE(179),
    [sym__atom_no_curly] = STATE(179),
    [aux_sym__application_repeat1] = STATE(161),
    [sym_string] = ACTIONS(319),
    [sym_int] = ACTIONS(319),
    [sym_qualified_name] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_Prop] = ACTIONS(321),
    [anon_sym_Set] = ACTIONS(321),
    [anon_sym_quote] = ACTIONS(321),
    [anon_sym_quoteTerm] = ACTIONS(321),
    [anon_sym_unquote] = ACTIONS(321),
  },
  [181] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(478),
  },
  [182] = {
    [sym__newline] = ACTIONS(25),
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
  },
  [183] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(288),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [184] = {
    [sym__newline] = ACTIONS(482),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(484),
  },
  [185] = {
    [sym__newline] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(486),
    [anon_sym_where] = ACTIONS(119),
  },
  [186] = {
    [sym__const_right_arrow] = ACTIONS(486),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [187] = {
    [sym__newline] = ACTIONS(65),
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(69),
  },
  [188] = {
    [sym__newline] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
  },
  [189] = {
    [sym__const_right_arrow] = ACTIONS(486),
    [sym_comment] = ACTIONS(53),
  },
  [190] = {
    [sym_literal] = STATE(294),
    [sym__application] = STATE(54),
    [sym__expr2] = STATE(54),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(293),
    [sym__atom_curly] = STATE(294),
    [sym__atom_no_curly] = STATE(294),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(295),
    [sym_string] = ACTIONS(488),
    [sym_int] = ACTIONS(488),
    [sym_qualified_name] = ACTIONS(490),
    [anon_sym__] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(492),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(490),
    [anon_sym_Prop] = ACTIONS(490),
    [anon_sym_Set] = ACTIONS(490),
    [anon_sym_quote] = ACTIONS(490),
    [anon_sym_quoteTerm] = ACTIONS(490),
    [anon_sym_unquote] = ACTIONS(490),
  },
  [191] = {
    [sym_literal] = STATE(188),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(188),
    [sym__atom_no_curly] = STATE(188),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(325),
    [sym_int] = ACTIONS(325),
    [sym_qualified_name] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_Prop] = ACTIONS(327),
    [anon_sym_Set] = ACTIONS(327),
    [anon_sym_quote] = ACTIONS(327),
    [anon_sym_quoteTerm] = ACTIONS(327),
    [anon_sym_unquote] = ACTIONS(327),
  },
  [192] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(244),
    [sym_lhs] = STATE(13),
    [sym_data_signature_only] = STATE(244),
    [sym_record_signature_only] = STATE(244),
    [sym__declaration] = STATE(244),
    [sym__declarations1] = STATE(297),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [aux_sym__declarations1_repeat1] = STATE(246),
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
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(413),
    [sym_pragma] = ACTIONS(415),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [sym_string] = ACTIONS(498),
    [sym_int] = ACTIONS(498),
    [sym_qualified_name] = ACTIONS(498),
    [anon_sym__] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_Prop] = ACTIONS(498),
    [anon_sym_Set] = ACTIONS(498),
    [anon_sym_quote] = ACTIONS(498),
    [anon_sym_quoteTerm] = ACTIONS(498),
    [anon_sym_unquote] = ACTIONS(498),
    [anon_sym_data] = ACTIONS(498),
    [anon_sym_codata] = ACTIONS(498),
    [anon_sym_record] = ACTIONS(498),
    [anon_sym_field] = ACTIONS(498),
    [sym_pragma] = ACTIONS(498),
  },
  [194] = {
    [sym_literal] = STATE(188),
    [sym_expr] = STATE(298),
    [sym__expr1] = STATE(185),
    [sym__application] = STATE(185),
    [sym__expr2] = STATE(185),
    [sym__atoms1] = STATE(186),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(188),
    [sym__atom_no_curly] = STATE(188),
    [sym__typed_bindings1] = STATE(189),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(190),
    [aux_sym__application_repeat1] = STATE(191),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(325),
    [sym_int] = ACTIONS(325),
    [sym_qualified_name] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_Prop] = ACTIONS(327),
    [anon_sym_Set] = ACTIONS(327),
    [anon_sym_quote] = ACTIONS(327),
    [anon_sym_quoteTerm] = ACTIONS(327),
    [anon_sym_unquote] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [195] = {
    [sym__declarations0] = STATE(299),
    [sym__newline] = ACTIONS(500),
    [sym__indent] = ACTIONS(333),
    [sym_comment] = ACTIONS(53),
  },
  [196] = {
    [sym_binding_name] = STATE(96),
    [sym_untyped_binding] = STATE(196),
    [sym_typed_binding] = STATE(196),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(196),
    [sym_name] = ACTIONS(502),
    [anon_sym__] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(505),
    [anon_sym_DOT_DOT] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(508),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(511),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
  },
  [197] = {
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
  },
  [198] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(301),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [199] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(484),
  },
  [200] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(521),
    [anon_sym_where] = ACTIONS(119),
  },
  [201] = {
    [sym__const_right_arrow] = ACTIONS(521),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [202] = {
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(69),
  },
  [203] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
  },
  [204] = {
    [sym__const_right_arrow] = ACTIONS(521),
    [sym_comment] = ACTIONS(53),
  },
  [205] = {
    [sym_literal] = STATE(306),
    [sym__application] = STATE(80),
    [sym__expr2] = STATE(80),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(305),
    [sym__atom_curly] = STATE(306),
    [sym__atom_no_curly] = STATE(306),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(307),
    [sym_string] = ACTIONS(523),
    [sym_int] = ACTIONS(523),
    [sym_qualified_name] = ACTIONS(525),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(527),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(525),
    [anon_sym_Prop] = ACTIONS(525),
    [anon_sym_Set] = ACTIONS(525),
    [anon_sym_quote] = ACTIONS(525),
    [anon_sym_quoteTerm] = ACTIONS(525),
    [anon_sym_unquote] = ACTIONS(525),
  },
  [206] = {
    [sym_literal] = STATE(203),
    [sym__expr2] = STATE(85),
    [sym_atom] = STATE(202),
    [sym__atom_curly] = STATE(203),
    [sym__atom_no_curly] = STATE(203),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(343),
    [sym_int] = ACTIONS(343),
    [sym_qualified_name] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_Prop] = ACTIONS(345),
    [anon_sym_Set] = ACTIONS(345),
    [anon_sym_quote] = ACTIONS(345),
    [anon_sym_quoteTerm] = ACTIONS(345),
    [anon_sym_unquote] = ACTIONS(345),
  },
  [207] = {
    [sym_literal] = STATE(203),
    [sym_expr] = STATE(309),
    [sym__expr1] = STATE(200),
    [sym__application] = STATE(200),
    [sym__expr2] = STATE(200),
    [sym__atoms1] = STATE(201),
    [sym_atom] = STATE(202),
    [sym__atom_curly] = STATE(203),
    [sym__atom_no_curly] = STATE(203),
    [sym__typed_bindings1] = STATE(204),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(205),
    [aux_sym__application_repeat1] = STATE(206),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(343),
    [sym_int] = ACTIONS(343),
    [sym_qualified_name] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_Prop] = ACTIONS(345),
    [anon_sym_Set] = ACTIONS(345),
    [anon_sym_quote] = ACTIONS(345),
    [anon_sym_quoteTerm] = ACTIONS(345),
    [anon_sym_unquote] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [208] = {
    [sym__newline] = ACTIONS(531),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(533),
  },
  [209] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(244),
    [sym_lhs] = STATE(13),
    [sym_data_signature_only] = STATE(244),
    [sym_record_signature_only] = STATE(244),
    [sym__record_directives1] = STATE(316),
    [sym_record_constructor_instance] = STATE(317),
    [sym_record_constructor] = STATE(318),
    [sym__record_directive] = STATE(318),
    [sym_record_induction] = STATE(318),
    [sym_record_eta] = STATE(318),
    [sym__declaration] = STATE(244),
    [sym__declarations1] = STATE(319),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [aux_sym__record_directives1_repeat1] = STATE(320),
    [aux_sym__declarations1_repeat1] = STATE(246),
    [sym__dedent] = ACTIONS(535),
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
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(413),
    [anon_sym_instance] = ACTIONS(537),
    [anon_sym_constructor] = ACTIONS(539),
    [anon_sym_inductive] = ACTIONS(541),
    [anon_sym_coinductive] = ACTIONS(541),
    [anon_sym_eta_DASHequality] = ACTIONS(543),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(543),
    [sym_pragma] = ACTIONS(415),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_string] = ACTIONS(547),
    [sym_int] = ACTIONS(547),
    [sym_qualified_name] = ACTIONS(547),
    [anon_sym__] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(547),
    [anon_sym_Prop] = ACTIONS(547),
    [anon_sym_Set] = ACTIONS(547),
    [anon_sym_quote] = ACTIONS(547),
    [anon_sym_quoteTerm] = ACTIONS(547),
    [anon_sym_unquote] = ACTIONS(547),
    [anon_sym_data] = ACTIONS(547),
    [anon_sym_codata] = ACTIONS(547),
    [anon_sym_record] = ACTIONS(547),
    [anon_sym_field] = ACTIONS(547),
    [sym_pragma] = ACTIONS(547),
  },
  [211] = {
    [sym_literal] = STATE(188),
    [sym_expr] = STATE(321),
    [sym__expr1] = STATE(185),
    [sym__application] = STATE(185),
    [sym__expr2] = STATE(185),
    [sym__atoms1] = STATE(186),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(188),
    [sym__atom_no_curly] = STATE(188),
    [sym__typed_bindings1] = STATE(189),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(190),
    [aux_sym__application_repeat1] = STATE(191),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(325),
    [sym_int] = ACTIONS(325),
    [sym_qualified_name] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_Prop] = ACTIONS(327),
    [anon_sym_Set] = ACTIONS(327),
    [anon_sym_quote] = ACTIONS(327),
    [anon_sym_quoteTerm] = ACTIONS(327),
    [anon_sym_unquote] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [212] = {
    [sym_record_declarations_block] = STATE(322),
    [sym__indent] = ACTIONS(351),
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_string] = ACTIONS(547),
    [sym_int] = ACTIONS(547),
    [sym_qualified_name] = ACTIONS(547),
    [anon_sym__] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(547),
    [anon_sym_Prop] = ACTIONS(547),
    [anon_sym_Set] = ACTIONS(547),
    [anon_sym_quote] = ACTIONS(547),
    [anon_sym_quoteTerm] = ACTIONS(547),
    [anon_sym_unquote] = ACTIONS(547),
    [anon_sym_data] = ACTIONS(547),
    [anon_sym_codata] = ACTIONS(547),
    [anon_sym_record] = ACTIONS(547),
    [anon_sym_field] = ACTIONS(547),
    [sym_pragma] = ACTIONS(547),
  },
  [213] = {
    [sym_name] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(549),
    [anon_sym_DOT_DOT] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(549),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(549),
  },
  [214] = {
    [aux_sym_arg_name_repeat1] = STATE(323),
    [sym_name] = ACTIONS(551),
    [sym_comment] = ACTIONS(13),
  },
  [215] = {
    [aux_sym_arg_name_repeat1] = STATE(324),
    [sym_name] = ACTIONS(553),
    [sym_comment] = ACTIONS(13),
  },
  [216] = {
    [sym_name] = ACTIONS(555),
    [sym_comment] = ACTIONS(13),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(53),
  },
  [218] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(327),
    [sym_name] = ACTIONS(559),
    [anon_sym_DOT] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(561),
    [sym_comment] = ACTIONS(13),
  },
  [219] = {
    [sym_name] = ACTIONS(563),
    [sym_comment] = ACTIONS(13),
  },
  [220] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(53),
  },
  [221] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(329),
    [sym_name] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_DOT_DOT] = ACTIONS(373),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(561),
    [sym_comment] = ACTIONS(13),
  },
  [222] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym__arg_names] = STATE(110),
    [sym_arg_name] = STATE(112),
    [sym__arg_type_signatures1] = STATE(330),
    [sym_arg_type_signature] = STATE(113),
    [aux_sym__arg_names_repeat1] = STATE(112),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(113),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [223] = {
    [sym__dedent] = ACTIONS(567),
    [sym_name] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(569),
    [anon_sym_DOT_DOT] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(569),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(569),
    [anon_sym_overlap] = ACTIONS(569),
  },
  [224] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(571),
  },
  [225] = {
    [sym_literal] = STATE(338),
    [sym_expr] = STATE(334),
    [sym__expr1] = STATE(335),
    [sym__application] = STATE(335),
    [sym__expr2] = STATE(335),
    [sym__atoms1] = STATE(336),
    [sym_atom] = STATE(337),
    [sym__atom_curly] = STATE(338),
    [sym__atom_no_curly] = STATE(338),
    [sym__typed_bindings1] = STATE(339),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(340),
    [aux_sym__application_repeat1] = STATE(341),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(573),
    [sym_int] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_Prop] = ACTIONS(575),
    [anon_sym_Set] = ACTIONS(575),
    [anon_sym_quote] = ACTIONS(575),
    [anon_sym_quoteTerm] = ACTIONS(575),
    [anon_sym_unquote] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [sym_string] = ACTIONS(581),
    [sym_int] = ACTIONS(581),
    [sym_qualified_name] = ACTIONS(581),
    [anon_sym__] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(581),
    [anon_sym_Prop] = ACTIONS(581),
    [anon_sym_Set] = ACTIONS(581),
    [anon_sym_quote] = ACTIONS(581),
    [anon_sym_quoteTerm] = ACTIONS(581),
    [anon_sym_unquote] = ACTIONS(581),
    [anon_sym_data] = ACTIONS(581),
    [anon_sym_codata] = ACTIONS(581),
    [anon_sym_record] = ACTIONS(581),
    [anon_sym_field] = ACTIONS(581),
    [sym_pragma] = ACTIONS(581),
  },
  [227] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym_arg_name] = STATE(227),
    [aux_sym__arg_names_repeat1] = STATE(227),
    [sym_name] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(586),
    [anon_sym_DOT_DOT] = ACTIONS(586),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(592),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(595),
  },
  [228] = {
    [sym__maybe_dotted_name] = STATE(109),
    [sym__arg_names] = STATE(110),
    [sym_arg_name] = STATE(112),
    [sym_arg_type_signature] = STATE(228),
    [aux_sym__arg_names_repeat1] = STATE(112),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(228),
    [sym__dedent] = ACTIONS(597),
    [sym_name] = ACTIONS(599),
    [anon_sym_DOT] = ACTIONS(602),
    [anon_sym_DOT_DOT] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(605),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(608),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(611),
    [anon_sym_overlap] = ACTIONS(614),
  },
  [229] = {
    [sym__newline] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_with] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(109),
  },
  [230] = {
    [anon_sym_RBRACE] = ACTIONS(617),
    [sym_comment] = ACTIONS(53),
  },
  [231] = {
    [sym__newline] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(109),
  },
  [232] = {
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym_comment] = ACTIONS(53),
  },
  [233] = {
    [sym__newline] = ACTIONS(107),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(109),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(621),
    [sym_comment] = ACTIONS(53),
  },
  [235] = {
    [sym_literal] = STATE(135),
    [sym_expr] = STATE(345),
    [sym__expr1] = STATE(132),
    [sym__application] = STATE(132),
    [sym__expr2] = STATE(132),
    [sym__atoms1] = STATE(133),
    [sym_atom] = STATE(134),
    [sym__atom_curly] = STATE(135),
    [sym__atom_no_curly] = STATE(135),
    [sym__typed_bindings1] = STATE(136),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(137),
    [aux_sym__application_repeat1] = STATE(138),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(193),
    [sym_int] = ACTIONS(193),
    [sym_qualified_name] = ACTIONS(195),
    [anon_sym__] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(195),
    [anon_sym_Prop] = ACTIONS(195),
    [anon_sym_Set] = ACTIONS(195),
    [anon_sym_quote] = ACTIONS(195),
    [anon_sym_quoteTerm] = ACTIONS(195),
    [anon_sym_unquote] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [236] = {
    [sym__newline] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(27),
  },
  [237] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(347),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [238] = {
    [sym__newline] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(69),
    [anon_sym_module] = ACTIONS(69),
  },
  [239] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_module] = ACTIONS(73),
  },
  [240] = {
    [sym_literal] = STATE(239),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(238),
    [sym__atom_curly] = STATE(239),
    [sym__atom_no_curly] = STATE(239),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(403),
    [sym_int] = ACTIONS(403),
    [sym_qualified_name] = ACTIONS(405),
    [anon_sym__] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(405),
    [anon_sym_Prop] = ACTIONS(405),
    [anon_sym_Set] = ACTIONS(405),
    [anon_sym_quote] = ACTIONS(405),
    [anon_sym_quoteTerm] = ACTIONS(405),
    [anon_sym_unquote] = ACTIONS(405),
  },
  [241] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(234),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [242] = {
    [sym_name] = ACTIONS(625),
    [sym_comment] = ACTIONS(13),
  },
  [243] = {
    [sym_literal] = STATE(350),
    [sym__atom_no_curly] = STATE(350),
    [sym_string] = ACTIONS(627),
    [sym_int] = ACTIONS(627),
    [sym_qualified_name] = ACTIONS(629),
    [anon_sym__] = ACTIONS(629),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(629),
    [anon_sym_Prop] = ACTIONS(629),
    [anon_sym_Set] = ACTIONS(629),
    [anon_sym_quote] = ACTIONS(629),
    [anon_sym_quoteTerm] = ACTIONS(629),
    [anon_sym_unquote] = ACTIONS(629),
  },
  [244] = {
    [sym__newline] = ACTIONS(631),
    [sym_comment] = ACTIONS(53),
  },
  [245] = {
    [sym__dedent] = ACTIONS(633),
    [sym_comment] = ACTIONS(53),
  },
  [246] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(244),
    [sym_lhs] = STATE(13),
    [sym_data_signature_only] = STATE(244),
    [sym_record_signature_only] = STATE(244),
    [sym__declaration] = STATE(244),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [aux_sym__declarations1_repeat1] = STATE(353),
    [sym__dedent] = ACTIONS(635),
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
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(413),
    [sym_pragma] = ACTIONS(415),
  },
  [247] = {
    [sym__declarations0] = STATE(354),
    [sym__newline] = ACTIONS(637),
    [sym__indent] = ACTIONS(201),
    [sym_comment] = ACTIONS(53),
  },
  [248] = {
    [sym_string] = ACTIONS(211),
    [sym_int] = ACTIONS(211),
    [sym_qualified_name] = ACTIONS(211),
    [anon_sym__] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(211),
    [anon_sym_Prop] = ACTIONS(211),
    [anon_sym_Set] = ACTIONS(211),
    [anon_sym_quote] = ACTIONS(211),
    [anon_sym_quoteTerm] = ACTIONS(211),
    [anon_sym_unquote] = ACTIONS(211),
    [anon_sym_data] = ACTIONS(211),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_record] = ACTIONS(211),
    [anon_sym_field] = ACTIONS(211),
    [sym_pragma] = ACTIONS(211),
  },
  [249] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [250] = {
    [anon_sym_RBRACE] = ACTIONS(639),
    [sym_comment] = ACTIONS(53),
  },
  [251] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(356),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [252] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(357),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [253] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(358),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [254] = {
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
  },
  [255] = {
    [anon_sym_RBRACE] = ACTIONS(641),
    [sym_comment] = ACTIONS(53),
  },
  [256] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
  },
  [257] = {
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [258] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(361),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [259] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(641),
    [sym_comment] = ACTIONS(53),
  },
  [260] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(645),
  },
  [261] = {
    [sym__const_right_arrow] = ACTIONS(645),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [262] = {
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
  },
  [263] = {
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [264] = {
    [sym__const_right_arrow] = ACTIONS(645),
    [sym_comment] = ACTIONS(53),
  },
  [265] = {
    [sym_literal] = STATE(367),
    [sym__application] = STATE(365),
    [sym__expr2] = STATE(365),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(366),
    [sym__atom_curly] = STATE(367),
    [sym__atom_no_curly] = STATE(367),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(368),
    [sym_string] = ACTIONS(647),
    [sym_int] = ACTIONS(647),
    [sym_qualified_name] = ACTIONS(649),
    [anon_sym__] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(651),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_Prop] = ACTIONS(649),
    [anon_sym_Set] = ACTIONS(649),
    [anon_sym_quote] = ACTIONS(649),
    [anon_sym_quoteTerm] = ACTIONS(649),
    [anon_sym_unquote] = ACTIONS(649),
  },
  [266] = {
    [sym_literal] = STATE(263),
    [sym__expr2] = STATE(285),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(653),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
  },
  [267] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [268] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(371),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(655),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [269] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [270] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(641),
  },
  [271] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(119),
  },
  [272] = {
    [sym__const_right_arrow] = ACTIONS(657),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [273] = {
    [sym__const_right_arrow] = ACTIONS(657),
    [sym_comment] = ACTIONS(53),
  },
  [274] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
  },
  [275] = {
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [276] = {
    [anon_sym_RBRACE] = ACTIONS(659),
    [sym_comment] = ACTIONS(53),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(661),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(663),
  },
  [278] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(661),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(665),
  },
  [279] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(667),
  },
  [280] = {
    [sym_name] = ACTIONS(669),
    [anon_sym__] = ACTIONS(669),
    [anon_sym_DOT] = ACTIONS(669),
    [anon_sym_DOT_DOT] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(669),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(669),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [anon_sym_where] = ACTIONS(669),
  },
  [281] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(378),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [282] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(671),
    [sym_comment] = ACTIONS(53),
  },
  [284] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(380),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [285] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(250),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(250),
  },
  [286] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(381),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [287] = {
    [sym__newline] = ACTIONS(107),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
  },
  [288] = {
    [anon_sym_RBRACE] = ACTIONS(673),
    [sym_comment] = ACTIONS(53),
  },
  [289] = {
    [sym__declarations0] = STATE(383),
    [sym__newline] = ACTIONS(675),
    [sym__indent] = ACTIONS(333),
    [sym_comment] = ACTIONS(53),
  },
  [290] = {
    [sym_literal] = STATE(188),
    [sym_expr] = STATE(345),
    [sym__expr1] = STATE(185),
    [sym__application] = STATE(185),
    [sym__expr2] = STATE(185),
    [sym__atoms1] = STATE(186),
    [sym_atom] = STATE(187),
    [sym__atom_curly] = STATE(188),
    [sym__atom_no_curly] = STATE(188),
    [sym__typed_bindings1] = STATE(189),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(190),
    [aux_sym__application_repeat1] = STATE(191),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(325),
    [sym_int] = ACTIONS(325),
    [sym_qualified_name] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(327),
    [anon_sym_Prop] = ACTIONS(327),
    [anon_sym_Set] = ACTIONS(327),
    [anon_sym_quote] = ACTIONS(327),
    [anon_sym_quoteTerm] = ACTIONS(327),
    [anon_sym_unquote] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [291] = {
    [sym__newline] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
  },
  [292] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(385),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(677),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [293] = {
    [sym__newline] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(69),
  },
  [294] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
  },
  [295] = {
    [sym_literal] = STATE(294),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(293),
    [sym__atom_curly] = STATE(294),
    [sym__atom_no_curly] = STATE(294),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(488),
    [sym_int] = ACTIONS(488),
    [sym_qualified_name] = ACTIONS(490),
    [anon_sym__] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(492),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(490),
    [anon_sym_Prop] = ACTIONS(490),
    [anon_sym_Set] = ACTIONS(490),
    [anon_sym_quote] = ACTIONS(490),
    [anon_sym_quoteTerm] = ACTIONS(490),
    [anon_sym_unquote] = ACTIONS(490),
  },
  [296] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(288),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [297] = {
    [sym__dedent] = ACTIONS(679),
    [sym_comment] = ACTIONS(53),
  },
  [298] = {
    [sym__newline] = ACTIONS(681),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(683),
  },
  [299] = {
    [ts_builtin_sym_end] = ACTIONS(685),
    [sym_string] = ACTIONS(687),
    [sym_int] = ACTIONS(687),
    [sym_qualified_name] = ACTIONS(687),
    [anon_sym__] = ACTIONS(687),
    [anon_sym_LBRACE] = ACTIONS(687),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(687),
    [anon_sym_Prop] = ACTIONS(687),
    [anon_sym_Set] = ACTIONS(687),
    [anon_sym_quote] = ACTIONS(687),
    [anon_sym_quoteTerm] = ACTIONS(687),
    [anon_sym_unquote] = ACTIONS(687),
    [anon_sym_data] = ACTIONS(687),
    [anon_sym_codata] = ACTIONS(687),
    [anon_sym_record] = ACTIONS(687),
    [anon_sym_field] = ACTIONS(687),
    [sym_pragma] = ACTIONS(687),
  },
  [300] = {
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
  },
  [301] = {
    [anon_sym_RBRACE] = ACTIONS(689),
    [sym_comment] = ACTIONS(53),
  },
  [302] = {
    [sym_literal] = STATE(203),
    [sym_expr] = STATE(163),
    [sym__expr1] = STATE(200),
    [sym__application] = STATE(200),
    [sym__expr2] = STATE(200),
    [sym__atoms1] = STATE(201),
    [sym_atom] = STATE(202),
    [sym__atom_curly] = STATE(203),
    [sym__atom_no_curly] = STATE(203),
    [sym__typed_bindings1] = STATE(204),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(205),
    [aux_sym__application_repeat1] = STATE(206),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(343),
    [sym_int] = ACTIONS(343),
    [sym_qualified_name] = ACTIONS(345),
    [anon_sym__] = ACTIONS(345),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(345),
    [anon_sym_Prop] = ACTIONS(345),
    [anon_sym_Set] = ACTIONS(345),
    [anon_sym_quote] = ACTIONS(345),
    [anon_sym_quoteTerm] = ACTIONS(345),
    [anon_sym_unquote] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [303] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_where] = ACTIONS(27),
  },
  [304] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(390),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [305] = {
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_where] = ACTIONS(69),
  },
  [306] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
  },
  [307] = {
    [sym_literal] = STATE(306),
    [sym__expr2] = STATE(85),
    [sym_atom] = STATE(305),
    [sym__atom_curly] = STATE(306),
    [sym__atom_no_curly] = STATE(306),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(523),
    [sym_int] = ACTIONS(523),
    [sym_qualified_name] = ACTIONS(525),
    [anon_sym__] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(527),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(525),
    [anon_sym_Prop] = ACTIONS(525),
    [anon_sym_Set] = ACTIONS(525),
    [anon_sym_quote] = ACTIONS(525),
    [anon_sym_quoteTerm] = ACTIONS(525),
    [anon_sym_unquote] = ACTIONS(525),
  },
  [308] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(301),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [309] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(683),
  },
  [310] = {
    [sym_record_declarations_block] = STATE(391),
    [sym__indent] = ACTIONS(351),
    [ts_builtin_sym_end] = ACTIONS(693),
    [sym_string] = ACTIONS(695),
    [sym_int] = ACTIONS(695),
    [sym_qualified_name] = ACTIONS(695),
    [anon_sym__] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(695),
    [anon_sym_Prop] = ACTIONS(695),
    [anon_sym_Set] = ACTIONS(695),
    [anon_sym_quote] = ACTIONS(695),
    [anon_sym_quoteTerm] = ACTIONS(695),
    [anon_sym_unquote] = ACTIONS(695),
    [anon_sym_data] = ACTIONS(695),
    [anon_sym_codata] = ACTIONS(695),
    [anon_sym_record] = ACTIONS(695),
    [anon_sym_field] = ACTIONS(695),
    [sym_pragma] = ACTIONS(695),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(697),
    [sym_string] = ACTIONS(699),
    [sym_int] = ACTIONS(699),
    [sym_qualified_name] = ACTIONS(699),
    [anon_sym__] = ACTIONS(699),
    [anon_sym_LBRACE] = ACTIONS(699),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(699),
    [anon_sym_Prop] = ACTIONS(699),
    [anon_sym_Set] = ACTIONS(699),
    [anon_sym_quote] = ACTIONS(699),
    [anon_sym_quoteTerm] = ACTIONS(699),
    [anon_sym_unquote] = ACTIONS(699),
    [anon_sym_data] = ACTIONS(699),
    [anon_sym_codata] = ACTIONS(699),
    [anon_sym_record] = ACTIONS(699),
    [anon_sym_field] = ACTIONS(699),
    [sym_pragma] = ACTIONS(699),
  },
  [312] = {
    [sym__indent] = ACTIONS(701),
    [sym_comment] = ACTIONS(53),
  },
  [313] = {
    [sym_name] = ACTIONS(703),
    [sym_comment] = ACTIONS(13),
  },
  [314] = {
    [sym__newline] = ACTIONS(705),
    [sym_comment] = ACTIONS(53),
  },
  [315] = {
    [sym__newline] = ACTIONS(707),
    [sym_comment] = ACTIONS(53),
  },
  [316] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(244),
    [sym_lhs] = STATE(13),
    [sym_data_signature_only] = STATE(244),
    [sym_record_signature_only] = STATE(244),
    [sym__declaration] = STATE(244),
    [sym__declarations1] = STATE(395),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [aux_sym__declarations1_repeat1] = STATE(246),
    [sym__dedent] = ACTIONS(709),
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
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(413),
    [sym_pragma] = ACTIONS(415),
  },
  [317] = {
    [sym__dedent] = ACTIONS(711),
    [sym_string] = ACTIONS(713),
    [sym_int] = ACTIONS(713),
    [sym_qualified_name] = ACTIONS(713),
    [anon_sym__] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(713),
    [anon_sym_Prop] = ACTIONS(713),
    [anon_sym_Set] = ACTIONS(713),
    [anon_sym_quote] = ACTIONS(713),
    [anon_sym_quoteTerm] = ACTIONS(713),
    [anon_sym_unquote] = ACTIONS(713),
    [anon_sym_data] = ACTIONS(713),
    [anon_sym_record] = ACTIONS(713),
    [anon_sym_instance] = ACTIONS(715),
    [anon_sym_constructor] = ACTIONS(715),
    [anon_sym_inductive] = ACTIONS(715),
    [anon_sym_coinductive] = ACTIONS(715),
    [anon_sym_eta_DASHequality] = ACTIONS(715),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(715),
    [sym_pragma] = ACTIONS(713),
  },
  [318] = {
    [sym__newline] = ACTIONS(717),
    [sym_comment] = ACTIONS(53),
  },
  [319] = {
    [sym__dedent] = ACTIONS(709),
    [sym_comment] = ACTIONS(53),
  },
  [320] = {
    [sym_record_constructor_instance] = STATE(397),
    [sym_record_constructor] = STATE(398),
    [sym__record_directive] = STATE(398),
    [sym_record_induction] = STATE(398),
    [sym_record_eta] = STATE(398),
    [aux_sym__record_directives1_repeat1] = STATE(399),
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(719),
    [anon_sym_constructor] = ACTIONS(721),
    [anon_sym_inductive] = ACTIONS(723),
    [anon_sym_coinductive] = ACTIONS(723),
    [anon_sym_eta_DASHequality] = ACTIONS(725),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(725),
  },
  [321] = {
    [sym__newline] = ACTIONS(727),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(729),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(693),
    [sym_string] = ACTIONS(695),
    [sym_int] = ACTIONS(695),
    [sym_qualified_name] = ACTIONS(695),
    [anon_sym__] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(695),
    [anon_sym_Prop] = ACTIONS(695),
    [anon_sym_Set] = ACTIONS(695),
    [anon_sym_quote] = ACTIONS(695),
    [anon_sym_quoteTerm] = ACTIONS(695),
    [anon_sym_unquote] = ACTIONS(695),
    [anon_sym_data] = ACTIONS(695),
    [anon_sym_codata] = ACTIONS(695),
    [anon_sym_record] = ACTIONS(695),
    [anon_sym_field] = ACTIONS(695),
    [sym_pragma] = ACTIONS(695),
  },
  [323] = {
    [aux_sym_arg_name_repeat1] = STATE(402),
    [sym_name] = ACTIONS(731),
    [anon_sym_RBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(13),
  },
  [324] = {
    [aux_sym_arg_name_repeat1] = STATE(403),
    [sym_name] = ACTIONS(735),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(13),
  },
  [325] = {
    [sym_name] = ACTIONS(737),
    [anon_sym_DOT] = ACTIONS(737),
    [anon_sym_DOT_DOT] = ACTIONS(737),
    [anon_sym_RBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(13),
  },
  [326] = {
    [sym_name] = ACTIONS(739),
    [anon_sym_DOT] = ACTIONS(739),
    [anon_sym_DOT_DOT] = ACTIONS(739),
    [anon_sym_LBRACE] = ACTIONS(739),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(739),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(739),
  },
  [327] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(327),
    [sym_name] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(744),
    [anon_sym_DOT_DOT] = ACTIONS(744),
    [anon_sym_RBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(13),
  },
  [328] = {
    [sym_name] = ACTIONS(737),
    [anon_sym_DOT] = ACTIONS(737),
    [anon_sym_DOT_DOT] = ACTIONS(737),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(13),
  },
  [329] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(329),
    [sym_name] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(750),
    [anon_sym_DOT_DOT] = ACTIONS(750),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(13),
  },
  [330] = {
    [sym__dedent] = ACTIONS(753),
    [sym_comment] = ACTIONS(53),
  },
  [331] = {
    [sym_literal] = STATE(338),
    [sym_expr] = STATE(405),
    [sym__expr1] = STATE(335),
    [sym__application] = STATE(335),
    [sym__expr2] = STATE(335),
    [sym__atoms1] = STATE(336),
    [sym_atom] = STATE(337),
    [sym__atom_curly] = STATE(338),
    [sym__atom_no_curly] = STATE(338),
    [sym__typed_bindings1] = STATE(339),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(340),
    [aux_sym__application_repeat1] = STATE(341),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(573),
    [sym_int] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_Prop] = ACTIONS(575),
    [anon_sym_Set] = ACTIONS(575),
    [anon_sym_quote] = ACTIONS(575),
    [anon_sym_quoteTerm] = ACTIONS(575),
    [anon_sym_unquote] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [332] = {
    [sym__dedent] = ACTIONS(25),
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_name] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_instance] = ACTIONS(27),
    [anon_sym_overlap] = ACTIONS(27),
  },
  [333] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(407),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [334] = {
    [sym__dedent] = ACTIONS(757),
    [sym_name] = ACTIONS(759),
    [anon_sym_DOT] = ACTIONS(759),
    [anon_sym_DOT_DOT] = ACTIONS(759),
    [anon_sym_LBRACE] = ACTIONS(759),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(759),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(759),
    [anon_sym_overlap] = ACTIONS(759),
  },
  [335] = {
    [sym__dedent] = ACTIONS(119),
    [sym_name] = ACTIONS(761),
    [anon_sym_DOT] = ACTIONS(761),
    [anon_sym_DOT_DOT] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(763),
    [anon_sym_instance] = ACTIONS(761),
    [anon_sym_overlap] = ACTIONS(761),
  },
  [336] = {
    [sym__const_right_arrow] = ACTIONS(765),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [337] = {
    [sym__dedent] = ACTIONS(65),
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_name] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_instance] = ACTIONS(69),
    [anon_sym_overlap] = ACTIONS(69),
  },
  [338] = {
    [sym__dedent] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_name] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(73),
    [anon_sym_DOT_DOT] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(73),
    [anon_sym_overlap] = ACTIONS(73),
  },
  [339] = {
    [sym__const_right_arrow] = ACTIONS(765),
    [sym_comment] = ACTIONS(53),
  },
  [340] = {
    [sym_literal] = STATE(413),
    [sym__application] = STATE(411),
    [sym__expr2] = STATE(411),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(412),
    [sym__atom_curly] = STATE(413),
    [sym__atom_no_curly] = STATE(413),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(414),
    [sym_string] = ACTIONS(767),
    [sym_int] = ACTIONS(767),
    [sym_qualified_name] = ACTIONS(769),
    [anon_sym__] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(769),
    [anon_sym_Prop] = ACTIONS(769),
    [anon_sym_Set] = ACTIONS(769),
    [anon_sym_quote] = ACTIONS(769),
    [anon_sym_quoteTerm] = ACTIONS(769),
    [anon_sym_unquote] = ACTIONS(769),
  },
  [341] = {
    [sym_literal] = STATE(338),
    [sym__expr2] = STATE(416),
    [sym_atom] = STATE(337),
    [sym__atom_curly] = STATE(338),
    [sym__atom_no_curly] = STATE(338),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(573),
    [sym_int] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(773),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_Prop] = ACTIONS(575),
    [anon_sym_Set] = ACTIONS(575),
    [anon_sym_quote] = ACTIONS(575),
    [anon_sym_quoteTerm] = ACTIONS(575),
    [anon_sym_unquote] = ACTIONS(575),
  },
  [342] = {
    [sym__newline] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_with] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
  },
  [343] = {
    [sym__newline] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
  },
  [344] = {
    [sym__newline] = ACTIONS(279),
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
  },
  [345] = {
    [sym__newline] = ACTIONS(462),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(462),
    [anon_sym_module] = ACTIONS(462),
  },
  [346] = {
    [sym__newline] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
    [anon_sym_module] = ACTIONS(109),
  },
  [347] = {
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_comment] = ACTIONS(53),
  },
  [348] = {
    [sym_binding_name] = STATE(424),
    [sym_untyped_binding] = STATE(426),
    [sym_typed_binding] = STATE(426),
    [sym__typed_untyped_binding1] = STATE(425),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(426),
    [sym_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(779),
    [anon_sym_DOT_DOT] = ACTIONS(779),
    [anon_sym_LBRACE] = ACTIONS(781),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(783),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(787),
  },
  [349] = {
    [sym_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
  },
  [350] = {
    [sym_binding_name] = STATE(424),
    [sym_untyped_binding] = STATE(426),
    [sym_typed_binding] = STATE(426),
    [sym__typed_untyped_binding1] = STATE(428),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(426),
    [sym_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(779),
    [anon_sym_DOT_DOT] = ACTIONS(779),
    [anon_sym_LBRACE] = ACTIONS(781),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(783),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(789),
  },
  [351] = {
    [sym__dedent] = ACTIONS(791),
    [sym_string] = ACTIONS(793),
    [sym_int] = ACTIONS(793),
    [sym_qualified_name] = ACTIONS(793),
    [anon_sym__] = ACTIONS(793),
    [anon_sym_LBRACE] = ACTIONS(793),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(793),
    [anon_sym_Prop] = ACTIONS(793),
    [anon_sym_Set] = ACTIONS(793),
    [anon_sym_quote] = ACTIONS(793),
    [anon_sym_quoteTerm] = ACTIONS(793),
    [anon_sym_unquote] = ACTIONS(793),
    [anon_sym_data] = ACTIONS(793),
    [anon_sym_record] = ACTIONS(793),
    [sym_pragma] = ACTIONS(793),
  },
  [352] = {
    [sym__newline] = ACTIONS(795),
    [sym_comment] = ACTIONS(53),
  },
  [353] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(244),
    [sym_lhs] = STATE(13),
    [sym_data_signature_only] = STATE(244),
    [sym_record_signature_only] = STATE(244),
    [sym__declaration] = STATE(244),
    [aux_sym__expr1_repeat1] = STATE(17),
    [aux_sym__application_repeat1] = STATE(18),
    [aux_sym__declarations1_repeat1] = STATE(353),
    [sym__dedent] = ACTIONS(791),
    [sym_string] = ACTIONS(797),
    [sym_int] = ACTIONS(797),
    [sym_qualified_name] = ACTIONS(800),
    [anon_sym__] = ACTIONS(800),
    [anon_sym_LBRACE] = ACTIONS(803),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(800),
    [anon_sym_Prop] = ACTIONS(800),
    [anon_sym_Set] = ACTIONS(800),
    [anon_sym_quote] = ACTIONS(800),
    [anon_sym_quoteTerm] = ACTIONS(800),
    [anon_sym_unquote] = ACTIONS(800),
    [anon_sym_data] = ACTIONS(806),
    [anon_sym_record] = ACTIONS(809),
    [sym_pragma] = ACTIONS(812),
  },
  [354] = {
    [sym__newline] = ACTIONS(815),
    [sym_comment] = ACTIONS(53),
  },
  [355] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [356] = {
    [anon_sym_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(53),
  },
  [357] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(53),
  },
  [358] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(817),
  },
  [359] = {
    [sym__const_right_arrow] = ACTIONS(819),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_DOT_DOT] = ACTIONS(819),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(819),
  },
  [360] = {
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [361] = {
    [anon_sym_RBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(53),
  },
  [362] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(431),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [363] = {
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [364] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(433),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [365] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(239),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(239),
  },
  [366] = {
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
  },
  [367] = {
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [368] = {
    [sym_literal] = STATE(367),
    [sym__expr2] = STATE(285),
    [sym_atom] = STATE(366),
    [sym__atom_curly] = STATE(367),
    [sym__atom_no_curly] = STATE(367),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(647),
    [sym_int] = ACTIONS(647),
    [sym_qualified_name] = ACTIONS(649),
    [anon_sym__] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(651),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(649),
    [anon_sym_Prop] = ACTIONS(649),
    [anon_sym_Set] = ACTIONS(649),
    [anon_sym_quote] = ACTIONS(649),
    [anon_sym_quoteTerm] = ACTIONS(649),
    [anon_sym_unquote] = ACTIONS(649),
  },
  [369] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(361),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [370] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(827),
    [sym_comment] = ACTIONS(53),
  },
  [372] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(163),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [373] = {
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [374] = {
    [sym_name] = ACTIONS(829),
    [anon_sym__] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(829),
    [anon_sym_DOT_DOT] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
    [anon_sym_where] = ACTIONS(829),
  },
  [375] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(435),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [376] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(436),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [377] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(437),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [378] = {
    [anon_sym_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(53),
  },
  [379] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_COLON] = ACTIONS(281),
  },
  [380] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(53),
  },
  [381] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [382] = {
    [sym__newline] = ACTIONS(279),
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
  },
  [383] = {
    [ts_builtin_sym_end] = ACTIONS(833),
    [sym_string] = ACTIONS(835),
    [sym_int] = ACTIONS(835),
    [sym_qualified_name] = ACTIONS(835),
    [anon_sym__] = ACTIONS(835),
    [anon_sym_LBRACE] = ACTIONS(835),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(835),
    [anon_sym_Prop] = ACTIONS(835),
    [anon_sym_Set] = ACTIONS(835),
    [anon_sym_quote] = ACTIONS(835),
    [anon_sym_quoteTerm] = ACTIONS(835),
    [anon_sym_unquote] = ACTIONS(835),
    [anon_sym_data] = ACTIONS(835),
    [anon_sym_codata] = ACTIONS(835),
    [anon_sym_record] = ACTIONS(835),
    [anon_sym_field] = ACTIONS(835),
    [sym_pragma] = ACTIONS(835),
  },
  [384] = {
    [sym__newline] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(53),
  },
  [386] = {
    [ts_builtin_sym_end] = ACTIONS(795),
    [sym_string] = ACTIONS(839),
    [sym_int] = ACTIONS(839),
    [sym_qualified_name] = ACTIONS(839),
    [anon_sym__] = ACTIONS(839),
    [anon_sym_LBRACE] = ACTIONS(839),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(839),
    [anon_sym_Prop] = ACTIONS(839),
    [anon_sym_Set] = ACTIONS(839),
    [anon_sym_quote] = ACTIONS(839),
    [anon_sym_quoteTerm] = ACTIONS(839),
    [anon_sym_unquote] = ACTIONS(839),
    [anon_sym_data] = ACTIONS(839),
    [anon_sym_codata] = ACTIONS(839),
    [anon_sym_record] = ACTIONS(839),
    [anon_sym_field] = ACTIONS(839),
    [sym_pragma] = ACTIONS(839),
  },
  [387] = {
    [sym__declarations0] = STATE(440),
    [sym__newline] = ACTIONS(841),
    [sym__indent] = ACTIONS(333),
    [sym_comment] = ACTIONS(53),
  },
  [388] = {
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
  },
  [389] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_where] = ACTIONS(109),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(843),
    [sym_comment] = ACTIONS(53),
  },
  [391] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [sym_string] = ACTIONS(847),
    [sym_int] = ACTIONS(847),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_codata] = ACTIONS(847),
    [anon_sym_record] = ACTIONS(847),
    [anon_sym_field] = ACTIONS(847),
    [sym_pragma] = ACTIONS(847),
  },
  [392] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_constructor] = ACTIONS(849),
  },
  [393] = {
    [sym__newline] = ACTIONS(851),
    [sym_comment] = ACTIONS(53),
  },
  [394] = {
    [ts_builtin_sym_end] = ACTIONS(853),
    [sym_string] = ACTIONS(855),
    [sym_int] = ACTIONS(855),
    [sym_qualified_name] = ACTIONS(855),
    [anon_sym__] = ACTIONS(855),
    [anon_sym_LBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(855),
    [anon_sym_Prop] = ACTIONS(855),
    [anon_sym_Set] = ACTIONS(855),
    [anon_sym_quote] = ACTIONS(855),
    [anon_sym_quoteTerm] = ACTIONS(855),
    [anon_sym_unquote] = ACTIONS(855),
    [anon_sym_data] = ACTIONS(855),
    [anon_sym_codata] = ACTIONS(855),
    [anon_sym_record] = ACTIONS(855),
    [anon_sym_field] = ACTIONS(855),
    [sym_pragma] = ACTIONS(855),
  },
  [395] = {
    [sym__dedent] = ACTIONS(857),
    [sym_comment] = ACTIONS(53),
  },
  [396] = {
    [sym__dedent] = ACTIONS(859),
    [sym_string] = ACTIONS(861),
    [sym_int] = ACTIONS(861),
    [sym_qualified_name] = ACTIONS(861),
    [anon_sym__] = ACTIONS(861),
    [anon_sym_LBRACE] = ACTIONS(861),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(861),
    [anon_sym_Prop] = ACTIONS(861),
    [anon_sym_Set] = ACTIONS(861),
    [anon_sym_quote] = ACTIONS(861),
    [anon_sym_quoteTerm] = ACTIONS(861),
    [anon_sym_unquote] = ACTIONS(861),
    [anon_sym_data] = ACTIONS(861),
    [anon_sym_record] = ACTIONS(861),
    [anon_sym_instance] = ACTIONS(863),
    [anon_sym_constructor] = ACTIONS(863),
    [anon_sym_inductive] = ACTIONS(863),
    [anon_sym_coinductive] = ACTIONS(863),
    [anon_sym_eta_DASHequality] = ACTIONS(863),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(863),
    [sym_pragma] = ACTIONS(861),
  },
  [397] = {
    [sym__dedent] = ACTIONS(859),
    [sym_string] = ACTIONS(861),
    [sym_int] = ACTIONS(861),
    [sym_qualified_name] = ACTIONS(861),
    [anon_sym__] = ACTIONS(861),
    [anon_sym_LBRACE] = ACTIONS(861),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(861),
    [anon_sym_Prop] = ACTIONS(861),
    [anon_sym_Set] = ACTIONS(861),
    [anon_sym_quote] = ACTIONS(861),
    [anon_sym_quoteTerm] = ACTIONS(861),
    [anon_sym_unquote] = ACTIONS(861),
    [anon_sym_data] = ACTIONS(861),
    [anon_sym_record] = ACTIONS(861),
    [anon_sym_instance] = ACTIONS(715),
    [anon_sym_constructor] = ACTIONS(715),
    [anon_sym_inductive] = ACTIONS(715),
    [anon_sym_coinductive] = ACTIONS(715),
    [anon_sym_eta_DASHequality] = ACTIONS(715),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(715),
    [sym_pragma] = ACTIONS(861),
  },
  [398] = {
    [sym__newline] = ACTIONS(865),
    [sym_comment] = ACTIONS(53),
  },
  [399] = {
    [sym_record_constructor_instance] = STATE(399),
    [sym_record_constructor] = STATE(446),
    [sym__record_directive] = STATE(446),
    [sym_record_induction] = STATE(446),
    [sym_record_eta] = STATE(446),
    [aux_sym__record_directives1_repeat1] = STATE(399),
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(867),
    [anon_sym_constructor] = ACTIONS(870),
    [anon_sym_inductive] = ACTIONS(873),
    [anon_sym_coinductive] = ACTIONS(873),
    [anon_sym_eta_DASHequality] = ACTIONS(876),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(876),
  },
  [400] = {
    [sym_record_declarations_block] = STATE(447),
    [sym__indent] = ACTIONS(351),
    [ts_builtin_sym_end] = ACTIONS(845),
    [sym_string] = ACTIONS(847),
    [sym_int] = ACTIONS(847),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
    [anon_sym_data] = ACTIONS(847),
    [anon_sym_codata] = ACTIONS(847),
    [anon_sym_record] = ACTIONS(847),
    [anon_sym_field] = ACTIONS(847),
    [sym_pragma] = ACTIONS(847),
  },
  [401] = {
    [sym_name] = ACTIONS(879),
    [anon_sym_DOT] = ACTIONS(879),
    [anon_sym_DOT_DOT] = ACTIONS(879),
    [anon_sym_LBRACE] = ACTIONS(879),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(879),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(879),
  },
  [402] = {
    [aux_sym_arg_name_repeat1] = STATE(402),
    [sym_name] = ACTIONS(881),
    [anon_sym_RBRACE] = ACTIONS(884),
    [sym_comment] = ACTIONS(13),
  },
  [403] = {
    [aux_sym_arg_name_repeat1] = STATE(403),
    [sym_name] = ACTIONS(886),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(884),
    [sym_comment] = ACTIONS(13),
  },
  [404] = {
    [sym__dedent] = ACTIONS(579),
    [sym_name] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [anon_sym_DOT_DOT] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(581),
    [anon_sym_overlap] = ACTIONS(581),
  },
  [405] = {
    [sym__dedent] = ACTIONS(889),
    [sym_name] = ACTIONS(891),
    [anon_sym_DOT] = ACTIONS(891),
    [anon_sym_DOT_DOT] = ACTIONS(891),
    [anon_sym_LBRACE] = ACTIONS(891),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(891),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(891),
    [anon_sym_overlap] = ACTIONS(891),
  },
  [406] = {
    [sym__dedent] = ACTIONS(107),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_name] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_DOT_DOT] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_instance] = ACTIONS(109),
    [anon_sym_overlap] = ACTIONS(109),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(893),
    [sym_comment] = ACTIONS(53),
  },
  [408] = {
    [sym_literal] = STATE(338),
    [sym_expr] = STATE(449),
    [sym__expr1] = STATE(335),
    [sym__application] = STATE(335),
    [sym__expr2] = STATE(335),
    [sym__atoms1] = STATE(336),
    [sym_atom] = STATE(337),
    [sym__atom_curly] = STATE(338),
    [sym__atom_no_curly] = STATE(338),
    [sym__typed_bindings1] = STATE(339),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(340),
    [aux_sym__application_repeat1] = STATE(341),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(573),
    [sym_int] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_Prop] = ACTIONS(575),
    [anon_sym_Set] = ACTIONS(575),
    [anon_sym_quote] = ACTIONS(575),
    [anon_sym_quoteTerm] = ACTIONS(575),
    [anon_sym_unquote] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [409] = {
    [sym__dedent] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_name] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_DOT_DOT] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
    [anon_sym_instance] = ACTIONS(27),
    [anon_sym_overlap] = ACTIONS(27),
  },
  [410] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(451),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [411] = {
    [sym__dedent] = ACTIONS(239),
    [sym_name] = ACTIONS(897),
    [anon_sym_DOT] = ACTIONS(897),
    [anon_sym_DOT_DOT] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(897),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(897),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(897),
    [anon_sym_instance] = ACTIONS(897),
    [anon_sym_overlap] = ACTIONS(897),
  },
  [412] = {
    [sym__dedent] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_name] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
    [anon_sym_instance] = ACTIONS(69),
    [anon_sym_overlap] = ACTIONS(69),
  },
  [413] = {
    [sym__dedent] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_name] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(73),
    [anon_sym_DOT_DOT] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
    [anon_sym_instance] = ACTIONS(73),
    [anon_sym_overlap] = ACTIONS(73),
  },
  [414] = {
    [sym_literal] = STATE(413),
    [sym__expr2] = STATE(416),
    [sym_atom] = STATE(412),
    [sym__atom_curly] = STATE(413),
    [sym__atom_no_curly] = STATE(413),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(767),
    [sym_int] = ACTIONS(767),
    [sym_qualified_name] = ACTIONS(769),
    [anon_sym__] = ACTIONS(769),
    [anon_sym_LBRACE] = ACTIONS(771),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(769),
    [anon_sym_Prop] = ACTIONS(769),
    [anon_sym_Set] = ACTIONS(769),
    [anon_sym_quote] = ACTIONS(769),
    [anon_sym_quoteTerm] = ACTIONS(769),
    [anon_sym_unquote] = ACTIONS(769),
  },
  [415] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(407),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [416] = {
    [sym__dedent] = ACTIONS(250),
    [sym_name] = ACTIONS(899),
    [anon_sym_DOT] = ACTIONS(899),
    [anon_sym_DOT_DOT] = ACTIONS(899),
    [anon_sym_LBRACE] = ACTIONS(899),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(899),
    [anon_sym_instance] = ACTIONS(899),
    [anon_sym_overlap] = ACTIONS(899),
  },
  [417] = {
    [sym__newline] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
  },
  [418] = {
    [sym_name] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [anon_sym_DOT_DOT] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
  },
  [419] = {
    [sym_binding_name] = STATE(455),
    [sym_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(901),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(903),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(905),
  },
  [420] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(456),
    [sym__expr2] = STATE(456),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [421] = {
    [sym_literal] = STATE(179),
    [sym__application] = STATE(457),
    [sym__expr2] = STATE(457),
    [sym_atom] = STATE(178),
    [sym__atom_curly] = STATE(179),
    [sym__atom_no_curly] = STATE(179),
    [aux_sym__application_repeat1] = STATE(180),
    [sym_string] = ACTIONS(319),
    [sym_int] = ACTIONS(319),
    [sym_qualified_name] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_Prop] = ACTIONS(321),
    [anon_sym_Set] = ACTIONS(321),
    [anon_sym_quote] = ACTIONS(321),
    [anon_sym_quoteTerm] = ACTIONS(321),
    [anon_sym_unquote] = ACTIONS(321),
  },
  [422] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(458),
    [sym__expr2] = STATE(458),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [423] = {
    [sym_literal] = STATE(465),
    [sym_expr] = STATE(461),
    [sym__expr1] = STATE(462),
    [sym__application] = STATE(462),
    [sym__expr2] = STATE(462),
    [sym__atoms1] = STATE(463),
    [sym_atom] = STATE(464),
    [sym__atom_curly] = STATE(465),
    [sym__atom_no_curly] = STATE(465),
    [sym__typed_bindings1] = STATE(466),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(467),
    [aux_sym__application_repeat1] = STATE(468),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(907),
    [sym_int] = ACTIONS(907),
    [sym_qualified_name] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(909),
    [anon_sym_Prop] = ACTIONS(909),
    [anon_sym_Set] = ACTIONS(909),
    [anon_sym_quote] = ACTIONS(909),
    [anon_sym_quoteTerm] = ACTIONS(909),
    [anon_sym_unquote] = ACTIONS(909),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [424] = {
    [sym_name] = ACTIONS(335),
    [anon_sym__] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(335),
    [anon_sym_DOT_DOT] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(335),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
  },
  [425] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(913),
  },
  [426] = {
    [sym_binding_name] = STATE(424),
    [sym_untyped_binding] = STATE(470),
    [sym_typed_binding] = STATE(470),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(470),
    [sym_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_DOT] = ACTIONS(779),
    [anon_sym_DOT_DOT] = ACTIONS(779),
    [anon_sym_LBRACE] = ACTIONS(781),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(783),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(785),
    [anon_sym_COLON] = ACTIONS(341),
  },
  [427] = {
    [sym_literal] = STATE(465),
    [sym_expr] = STATE(471),
    [sym__expr1] = STATE(462),
    [sym__application] = STATE(462),
    [sym__expr2] = STATE(462),
    [sym__atoms1] = STATE(463),
    [sym_atom] = STATE(464),
    [sym__atom_curly] = STATE(465),
    [sym__atom_no_curly] = STATE(465),
    [sym__typed_bindings1] = STATE(466),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(467),
    [aux_sym__application_repeat1] = STATE(468),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(907),
    [sym_int] = ACTIONS(907),
    [sym_qualified_name] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(909),
    [anon_sym_Prop] = ACTIONS(909),
    [anon_sym_Set] = ACTIONS(909),
    [anon_sym_quote] = ACTIONS(909),
    [anon_sym_quoteTerm] = ACTIONS(909),
    [anon_sym_unquote] = ACTIONS(909),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [428] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(915),
  },
  [429] = {
    [sym__const_right_arrow] = ACTIONS(917),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_DOT_DOT] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(919),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(917),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(917),
  },
  [430] = {
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [431] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(462),
    [sym_comment] = ACTIONS(53),
  },
  [432] = {
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [433] = {
    [anon_sym_RBRACE] = ACTIONS(921),
    [sym_comment] = ACTIONS(53),
  },
  [434] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [435] = {
    [anon_sym_RBRACE] = ACTIONS(923),
    [sym_comment] = ACTIONS(53),
  },
  [436] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(923),
    [sym_comment] = ACTIONS(53),
  },
  [437] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(923),
  },
  [438] = {
    [sym_name] = ACTIONS(821),
    [anon_sym__] = ACTIONS(821),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_DOT_DOT] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(821),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_COLON] = ACTIONS(821),
    [anon_sym_where] = ACTIONS(821),
  },
  [439] = {
    [sym__newline] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
  },
  [440] = {
    [ts_builtin_sym_end] = ACTIONS(925),
    [sym_string] = ACTIONS(927),
    [sym_int] = ACTIONS(927),
    [sym_qualified_name] = ACTIONS(927),
    [anon_sym__] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(927),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(927),
    [anon_sym_Prop] = ACTIONS(927),
    [anon_sym_Set] = ACTIONS(927),
    [anon_sym_quote] = ACTIONS(927),
    [anon_sym_quoteTerm] = ACTIONS(927),
    [anon_sym_unquote] = ACTIONS(927),
    [anon_sym_data] = ACTIONS(927),
    [anon_sym_codata] = ACTIONS(927),
    [anon_sym_record] = ACTIONS(927),
    [anon_sym_field] = ACTIONS(927),
    [sym_pragma] = ACTIONS(927),
  },
  [441] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_where] = ACTIONS(281),
  },
  [442] = {
    [sym_name] = ACTIONS(929),
    [sym_comment] = ACTIONS(13),
  },
  [443] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [sym_string] = ACTIONS(933),
    [sym_int] = ACTIONS(933),
    [sym_qualified_name] = ACTIONS(933),
    [anon_sym__] = ACTIONS(933),
    [anon_sym_LBRACE] = ACTIONS(933),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(933),
    [anon_sym_Prop] = ACTIONS(933),
    [anon_sym_Set] = ACTIONS(933),
    [anon_sym_quote] = ACTIONS(933),
    [anon_sym_quoteTerm] = ACTIONS(933),
    [anon_sym_unquote] = ACTIONS(933),
    [anon_sym_data] = ACTIONS(933),
    [anon_sym_codata] = ACTIONS(933),
    [anon_sym_record] = ACTIONS(933),
    [anon_sym_field] = ACTIONS(933),
    [sym_pragma] = ACTIONS(933),
  },
  [444] = {
    [sym__dedent] = ACTIONS(935),
    [sym_string] = ACTIONS(937),
    [sym_int] = ACTIONS(937),
    [sym_qualified_name] = ACTIONS(937),
    [anon_sym__] = ACTIONS(937),
    [anon_sym_LBRACE] = ACTIONS(937),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(937),
    [anon_sym_Prop] = ACTIONS(937),
    [anon_sym_Set] = ACTIONS(937),
    [anon_sym_quote] = ACTIONS(937),
    [anon_sym_quoteTerm] = ACTIONS(937),
    [anon_sym_unquote] = ACTIONS(937),
    [anon_sym_data] = ACTIONS(937),
    [anon_sym_record] = ACTIONS(937),
    [anon_sym_instance] = ACTIONS(863),
    [anon_sym_constructor] = ACTIONS(863),
    [anon_sym_inductive] = ACTIONS(863),
    [anon_sym_coinductive] = ACTIONS(863),
    [anon_sym_eta_DASHequality] = ACTIONS(863),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(863),
    [sym_pragma] = ACTIONS(937),
  },
  [445] = {
    [sym__indent] = ACTIONS(939),
    [sym_comment] = ACTIONS(53),
  },
  [446] = {
    [sym__newline] = ACTIONS(941),
    [sym_comment] = ACTIONS(53),
  },
  [447] = {
    [ts_builtin_sym_end] = ACTIONS(943),
    [sym_string] = ACTIONS(945),
    [sym_int] = ACTIONS(945),
    [sym_qualified_name] = ACTIONS(945),
    [anon_sym__] = ACTIONS(945),
    [anon_sym_LBRACE] = ACTIONS(945),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(945),
    [anon_sym_Prop] = ACTIONS(945),
    [anon_sym_Set] = ACTIONS(945),
    [anon_sym_quote] = ACTIONS(945),
    [anon_sym_quoteTerm] = ACTIONS(945),
    [anon_sym_unquote] = ACTIONS(945),
    [anon_sym_data] = ACTIONS(945),
    [anon_sym_codata] = ACTIONS(945),
    [anon_sym_record] = ACTIONS(945),
    [anon_sym_field] = ACTIONS(945),
    [sym_pragma] = ACTIONS(945),
  },
  [448] = {
    [sym__dedent] = ACTIONS(279),
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_name] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_instance] = ACTIONS(281),
    [anon_sym_overlap] = ACTIONS(281),
  },
  [449] = {
    [sym__dedent] = ACTIONS(462),
    [sym_name] = ACTIONS(947),
    [anon_sym_DOT] = ACTIONS(947),
    [anon_sym_DOT_DOT] = ACTIONS(947),
    [anon_sym_LBRACE] = ACTIONS(947),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(947),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(947),
    [anon_sym_overlap] = ACTIONS(947),
  },
  [450] = {
    [sym__dedent] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_name] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_DOT_DOT] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
    [anon_sym_instance] = ACTIONS(109),
    [anon_sym_overlap] = ACTIONS(109),
  },
  [451] = {
    [anon_sym_RBRACE] = ACTIONS(949),
    [sym_comment] = ACTIONS(53),
  },
  [452] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(479),
    [sym__expr2] = STATE(479),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [453] = {
    [sym_literal] = STATE(179),
    [sym__application] = STATE(480),
    [sym__expr2] = STATE(480),
    [sym_atom] = STATE(178),
    [sym__atom_curly] = STATE(179),
    [sym__atom_no_curly] = STATE(179),
    [aux_sym__application_repeat1] = STATE(180),
    [sym_string] = ACTIONS(319),
    [sym_int] = ACTIONS(319),
    [sym_qualified_name] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(323),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(321),
    [anon_sym_Prop] = ACTIONS(321),
    [anon_sym_Set] = ACTIONS(321),
    [anon_sym_quote] = ACTIONS(321),
    [anon_sym_quoteTerm] = ACTIONS(321),
    [anon_sym_unquote] = ACTIONS(321),
  },
  [454] = {
    [sym_literal] = STATE(73),
    [sym__application] = STATE(481),
    [sym__expr2] = STATE(481),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(74),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [455] = {
    [sym_name] = ACTIONS(468),
    [anon_sym__] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(468),
    [anon_sym_DOT_DOT] = ACTIONS(468),
    [anon_sym_LBRACE] = ACTIONS(468),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(468),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_COLON] = ACTIONS(468),
  },
  [456] = {
    [anon_sym_RBRACE] = ACTIONS(951),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(953),
  },
  [457] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(951),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(955),
  },
  [458] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(957),
  },
  [459] = {
    [sym__newline] = ACTIONS(25),
    [sym__const_right_arrow] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [460] = {
    [sym_literal] = STATE(67),
    [sym_expr] = STATE(487),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(65),
    [sym__expr2] = STATE(65),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(66),
    [sym__atom_curly] = STATE(67),
    [sym__atom_no_curly] = STATE(67),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(68),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(959),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [461] = {
    [sym__newline] = ACTIONS(482),
    [sym_comment] = ACTIONS(53),
  },
  [462] = {
    [sym__newline] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(961),
  },
  [463] = {
    [sym__const_right_arrow] = ACTIONS(961),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(63),
  },
  [464] = {
    [sym__newline] = ACTIONS(65),
    [sym__const_right_arrow] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
  },
  [465] = {
    [sym__newline] = ACTIONS(71),
    [sym__const_right_arrow] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [466] = {
    [sym__const_right_arrow] = ACTIONS(961),
    [sym_comment] = ACTIONS(53),
  },
  [467] = {
    [sym_literal] = STATE(492),
    [sym__application] = STATE(54),
    [sym__expr2] = STATE(54),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(491),
    [sym__atom_curly] = STATE(492),
    [sym__atom_no_curly] = STATE(492),
    [aux_sym__expr1_repeat1] = STATE(55),
    [aux_sym__application_repeat1] = STATE(493),
    [sym_string] = ACTIONS(963),
    [sym_int] = ACTIONS(963),
    [sym_qualified_name] = ACTIONS(965),
    [anon_sym__] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(967),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(965),
    [anon_sym_Prop] = ACTIONS(965),
    [anon_sym_Set] = ACTIONS(965),
    [anon_sym_quote] = ACTIONS(965),
    [anon_sym_quoteTerm] = ACTIONS(965),
    [anon_sym_unquote] = ACTIONS(965),
  },
  [468] = {
    [sym_literal] = STATE(465),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(464),
    [sym__atom_curly] = STATE(465),
    [sym__atom_no_curly] = STATE(465),
    [aux_sym__application_repeat1] = STATE(86),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(907),
    [sym_int] = ACTIONS(907),
    [sym_qualified_name] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [anon_sym_LBRACE] = ACTIONS(969),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(909),
    [anon_sym_Prop] = ACTIONS(909),
    [anon_sym_Set] = ACTIONS(909),
    [anon_sym_quote] = ACTIONS(909),
    [anon_sym_quoteTerm] = ACTIONS(909),
    [anon_sym_unquote] = ACTIONS(909),
  },
  [469] = {
    [sym_literal] = STATE(465),
    [sym_expr] = STATE(495),
    [sym__expr1] = STATE(462),
    [sym__application] = STATE(462),
    [sym__expr2] = STATE(462),
    [sym__atoms1] = STATE(463),
    [sym_atom] = STATE(464),
    [sym__atom_curly] = STATE(465),
    [sym__atom_no_curly] = STATE(465),
    [sym__typed_bindings1] = STATE(466),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(467),
    [aux_sym__application_repeat1] = STATE(468),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(907),
    [sym_int] = ACTIONS(907),
    [sym_qualified_name] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(909),
    [anon_sym_Prop] = ACTIONS(909),
    [anon_sym_Set] = ACTIONS(909),
    [anon_sym_quote] = ACTIONS(909),
    [anon_sym_quoteTerm] = ACTIONS(909),
    [anon_sym_unquote] = ACTIONS(909),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [470] = {
    [sym_binding_name] = STATE(424),
    [sym_untyped_binding] = STATE(470),
    [sym_typed_binding] = STATE(470),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(470),
    [sym_name] = ACTIONS(971),
    [anon_sym__] = ACTIONS(971),
    [anon_sym_DOT] = ACTIONS(974),
    [anon_sym_DOT_DOT] = ACTIONS(974),
    [anon_sym_LBRACE] = ACTIONS(977),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(980),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(983),
    [anon_sym_COLON] = ACTIONS(517),
  },
  [471] = {
    [sym__newline] = ACTIONS(531),
    [sym_comment] = ACTIONS(53),
  },
  [472] = {
    [sym_literal] = STATE(465),
    [sym_expr] = STATE(496),
    [sym__expr1] = STATE(462),
    [sym__application] = STATE(462),
    [sym__expr2] = STATE(462),
    [sym__atoms1] = STATE(463),
    [sym_atom] = STATE(464),
    [sym__atom_curly] = STATE(465),
    [sym__atom_no_curly] = STATE(465),
    [sym__typed_bindings1] = STATE(466),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(467),
    [aux_sym__application_repeat1] = STATE(468),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(907),
    [sym_int] = ACTIONS(907),
    [sym_qualified_name] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(909),
    [anon_sym_Prop] = ACTIONS(909),
    [anon_sym_Set] = ACTIONS(909),
    [anon_sym_quote] = ACTIONS(909),
    [anon_sym_quoteTerm] = ACTIONS(909),
    [anon_sym_unquote] = ACTIONS(909),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [473] = {
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [474] = {
    [sym_name] = ACTIONS(919),
    [anon_sym__] = ACTIONS(919),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_DOT_DOT] = ACTIONS(919),
    [anon_sym_LBRACE] = ACTIONS(919),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(919),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(919),
    [anon_sym_COLON] = ACTIONS(919),
    [anon_sym_where] = ACTIONS(919),
  },
  [475] = {
    [sym__dedent] = ACTIONS(986),
    [sym_comment] = ACTIONS(53),
  },
  [476] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_constructor] = ACTIONS(988),
  },
  [477] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(990),
    [anon_sym_constructor] = ACTIONS(990),
    [anon_sym_inductive] = ACTIONS(990),
    [anon_sym_coinductive] = ACTIONS(990),
    [anon_sym_eta_DASHequality] = ACTIONS(990),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(990),
  },
  [478] = {
    [sym__dedent] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_name] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_DOT_DOT] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
    [anon_sym_instance] = ACTIONS(281),
    [anon_sym_overlap] = ACTIONS(281),
  },
  [479] = {
    [anon_sym_RBRACE] = ACTIONS(992),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(994),
  },
  [480] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(992),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(996),
  },
  [481] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(998),
  },
  [482] = {
    [sym_name] = ACTIONS(669),
    [anon_sym__] = ACTIONS(669),
    [anon_sym_DOT] = ACTIONS(669),
    [anon_sym_DOT_DOT] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(669),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(669),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
  },
  [483] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(503),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [484] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(504),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [485] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(505),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [486] = {
    [sym__newline] = ACTIONS(107),
    [sym__const_right_arrow] = ACTIONS(109),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [487] = {
    [anon_sym_RBRACE] = ACTIONS(1000),
    [sym_comment] = ACTIONS(53),
  },
  [488] = {
    [sym_literal] = STATE(465),
    [sym_expr] = STATE(345),
    [sym__expr1] = STATE(462),
    [sym__application] = STATE(462),
    [sym__expr2] = STATE(462),
    [sym__atoms1] = STATE(463),
    [sym_atom] = STATE(464),
    [sym__atom_curly] = STATE(465),
    [sym__atom_no_curly] = STATE(465),
    [sym__typed_bindings1] = STATE(466),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(467),
    [aux_sym__application_repeat1] = STATE(468),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(907),
    [sym_int] = ACTIONS(907),
    [sym_qualified_name] = ACTIONS(909),
    [anon_sym__] = ACTIONS(909),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(909),
    [anon_sym_Prop] = ACTIONS(909),
    [anon_sym_Set] = ACTIONS(909),
    [anon_sym_quote] = ACTIONS(909),
    [anon_sym_quoteTerm] = ACTIONS(909),
    [anon_sym_unquote] = ACTIONS(909),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [489] = {
    [sym__newline] = ACTIONS(25),
    [sym_string] = ACTIONS(27),
    [sym_int] = ACTIONS(27),
    [sym_qualified_name] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_Prop] = ACTIONS(27),
    [anon_sym_Set] = ACTIONS(27),
    [anon_sym_quote] = ACTIONS(27),
    [anon_sym_quoteTerm] = ACTIONS(27),
    [anon_sym_unquote] = ACTIONS(27),
  },
  [490] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(508),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(1002),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [491] = {
    [sym__newline] = ACTIONS(65),
    [sym_string] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_qualified_name] = ACTIONS(67),
    [anon_sym__] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_Prop] = ACTIONS(67),
    [anon_sym_Set] = ACTIONS(67),
    [anon_sym_quote] = ACTIONS(67),
    [anon_sym_quoteTerm] = ACTIONS(67),
    [anon_sym_unquote] = ACTIONS(67),
  },
  [492] = {
    [sym__newline] = ACTIONS(71),
    [sym_string] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_qualified_name] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_Prop] = ACTIONS(73),
    [anon_sym_Set] = ACTIONS(73),
    [anon_sym_quote] = ACTIONS(73),
    [anon_sym_quoteTerm] = ACTIONS(73),
    [anon_sym_unquote] = ACTIONS(73),
  },
  [493] = {
    [sym_literal] = STATE(492),
    [sym__expr2] = STATE(56),
    [sym_atom] = STATE(491),
    [sym__atom_curly] = STATE(492),
    [sym__atom_no_curly] = STATE(492),
    [aux_sym__application_repeat1] = STATE(57),
    [sym_string] = ACTIONS(963),
    [sym_int] = ACTIONS(963),
    [sym_qualified_name] = ACTIONS(965),
    [anon_sym__] = ACTIONS(965),
    [anon_sym_LBRACE] = ACTIONS(967),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(965),
    [anon_sym_Prop] = ACTIONS(965),
    [anon_sym_Set] = ACTIONS(965),
    [anon_sym_quote] = ACTIONS(965),
    [anon_sym_quoteTerm] = ACTIONS(965),
    [anon_sym_unquote] = ACTIONS(965),
  },
  [494] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(487),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(959),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [495] = {
    [sym__newline] = ACTIONS(681),
    [sym_comment] = ACTIONS(53),
  },
  [496] = {
    [sym__newline] = ACTIONS(727),
    [sym_comment] = ACTIONS(53),
  },
  [497] = {
    [sym__dedent] = ACTIONS(1004),
    [sym_string] = ACTIONS(1006),
    [sym_int] = ACTIONS(1006),
    [sym_qualified_name] = ACTIONS(1006),
    [anon_sym__] = ACTIONS(1006),
    [anon_sym_LBRACE] = ACTIONS(1006),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1006),
    [anon_sym_Prop] = ACTIONS(1006),
    [anon_sym_Set] = ACTIONS(1006),
    [anon_sym_quote] = ACTIONS(1006),
    [anon_sym_quoteTerm] = ACTIONS(1006),
    [anon_sym_unquote] = ACTIONS(1006),
    [anon_sym_data] = ACTIONS(1006),
    [anon_sym_record] = ACTIONS(1006),
    [anon_sym_instance] = ACTIONS(1006),
    [anon_sym_constructor] = ACTIONS(1006),
    [anon_sym_inductive] = ACTIONS(1006),
    [anon_sym_coinductive] = ACTIONS(1006),
    [anon_sym_eta_DASHequality] = ACTIONS(1006),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1006),
    [sym_pragma] = ACTIONS(1006),
  },
  [498] = {
    [sym_name] = ACTIONS(1008),
    [sym_comment] = ACTIONS(13),
  },
  [499] = {
    [sym_name] = ACTIONS(829),
    [anon_sym__] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(829),
    [anon_sym_DOT_DOT] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
  },
  [500] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(510),
    [sym__expr1] = STATE(26),
    [sym__application] = STATE(26),
    [sym__expr2] = STATE(26),
    [sym__atoms1] = STATE(27),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(30),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [501] = {
    [sym_literal] = STATE(263),
    [sym_expr] = STATE(511),
    [sym__expr1] = STATE(260),
    [sym__application] = STATE(260),
    [sym__expr2] = STATE(260),
    [sym__atoms1] = STATE(261),
    [sym_atom] = STATE(262),
    [sym__atom_curly] = STATE(263),
    [sym__atom_no_curly] = STATE(263),
    [sym__typed_bindings1] = STATE(264),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(265),
    [aux_sym__application_repeat1] = STATE(266),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(447),
    [sym_int] = ACTIONS(447),
    [sym_qualified_name] = ACTIONS(449),
    [anon_sym__] = ACTIONS(449),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(449),
    [anon_sym_Prop] = ACTIONS(449),
    [anon_sym_Set] = ACTIONS(449),
    [anon_sym_quote] = ACTIONS(449),
    [anon_sym_quoteTerm] = ACTIONS(449),
    [anon_sym_unquote] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [502] = {
    [sym_literal] = STATE(29),
    [sym_expr] = STATE(512),
    [sym__expr1] = STATE(271),
    [sym__application] = STATE(271),
    [sym__expr2] = STATE(271),
    [sym__atoms1] = STATE(272),
    [sym_atom] = STATE(28),
    [sym__atom_curly] = STATE(29),
    [sym__atom_no_curly] = STATE(29),
    [sym__typed_bindings1] = STATE(273),
    [sym_typed_binding] = STATE(33),
    [aux_sym__expr1_repeat1] = STATE(31),
    [aux_sym__application_repeat1] = STATE(32),
    [aux_sym__typed_bindings1_repeat1] = STATE(33),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [503] = {
    [anon_sym_RBRACE] = ACTIONS(1010),
    [sym_comment] = ACTIONS(53),
  },
  [504] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1010),
    [sym_comment] = ACTIONS(53),
  },
  [505] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(1010),
  },
  [506] = {
    [sym__newline] = ACTIONS(279),
    [sym__const_right_arrow] = ACTIONS(281),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [507] = {
    [sym__newline] = ACTIONS(107),
    [sym_string] = ACTIONS(109),
    [sym_int] = ACTIONS(109),
    [sym_qualified_name] = ACTIONS(109),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_Prop] = ACTIONS(109),
    [anon_sym_Set] = ACTIONS(109),
    [anon_sym_quote] = ACTIONS(109),
    [anon_sym_quoteTerm] = ACTIONS(109),
    [anon_sym_unquote] = ACTIONS(109),
  },
  [508] = {
    [anon_sym_RBRACE] = ACTIONS(1012),
    [sym_comment] = ACTIONS(53),
  },
  [509] = {
    [sym__dedent] = ACTIONS(1014),
    [sym_comment] = ACTIONS(53),
  },
  [510] = {
    [anon_sym_RBRACE] = ACTIONS(1016),
    [sym_comment] = ACTIONS(53),
  },
  [511] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1016),
    [sym_comment] = ACTIONS(53),
  },
  [512] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(1016),
  },
  [513] = {
    [sym_name] = ACTIONS(821),
    [anon_sym__] = ACTIONS(821),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_DOT_DOT] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(821),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_COLON] = ACTIONS(821),
  },
  [514] = {
    [sym__newline] = ACTIONS(279),
    [sym_string] = ACTIONS(281),
    [sym_int] = ACTIONS(281),
    [sym_qualified_name] = ACTIONS(281),
    [anon_sym__] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_QMARK] = ACTIONS(281),
    [anon_sym_Prop] = ACTIONS(281),
    [anon_sym_Set] = ACTIONS(281),
    [anon_sym_quote] = ACTIONS(281),
    [anon_sym_quoteTerm] = ACTIONS(281),
    [anon_sym_unquote] = ACTIONS(281),
  },
  [515] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(1004),
    [anon_sym_constructor] = ACTIONS(1004),
    [anon_sym_inductive] = ACTIONS(1004),
    [anon_sym_coinductive] = ACTIONS(1004),
    [anon_sym_eta_DASHequality] = ACTIONS(1004),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1004),
  },
  [516] = {
    [sym_name] = ACTIONS(919),
    [anon_sym__] = ACTIONS(919),
    [anon_sym_DOT] = ACTIONS(919),
    [anon_sym_DOT_DOT] = ACTIONS(919),
    [anon_sym_LBRACE] = ACTIONS(919),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(919),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(919),
    [anon_sym_COLON] = ACTIONS(919),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(12),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(19),
  [31] = {.count = 1, .reusable = false}, SHIFT(29),
  [33] = {.count = 1, .reusable = false}, SHIFT(20),
  [35] = {.count = 1, .reusable = false}, SHIFT(21),
  [37] = {.count = 1, .reusable = false}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(23),
  [41] = {.count = 1, .reusable = false}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, SHIFT(34),
  [45] = {.count = 1, .reusable = false}, SHIFT(35),
  [47] = {.count = 1, .reusable = false}, SHIFT(36),
  [49] = {.count = 1, .reusable = false}, SHIFT(37),
  [51] = {.count = 1, .reusable = true}, SHIFT(38),
  [53] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [55] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(40),
  [61] = {.count = 1, .reusable = true}, SHIFT(41),
  [63] = {.count = 1, .reusable = true}, SHIFT(44),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__expr2, 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__expr2, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(45),
  [79] = {.count = 1, .reusable = true}, SHIFT(46),
  [81] = {.count = 1, .reusable = true}, SHIFT(47),
  [83] = {.count = 1, .reusable = true}, SHIFT(50),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(51),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__atoms1, 1),
  [93] = {.count = 1, .reusable = false}, SHIFT(58),
  [95] = {.count = 1, .reusable = true}, SHIFT(59),
  [97] = {.count = 1, .reusable = true}, SHIFT(60),
  [99] = {.count = 1, .reusable = false}, SHIFT(61),
  [101] = {.count = 1, .reusable = false}, SHIFT(67),
  [103] = {.count = 1, .reusable = false}, SHIFT(62),
  [105] = {.count = 1, .reusable = false}, SHIFT(63),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 2),
  [111] = {.count = 1, .reusable = false}, SHIFT(69),
  [113] = {.count = 1, .reusable = false}, SHIFT(73),
  [115] = {.count = 1, .reusable = false}, SHIFT(70),
  [117] = {.count = 1, .reusable = true}, SHIFT(76),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(77),
  [123] = {.count = 1, .reusable = false}, SHIFT(78),
  [125] = {.count = 1, .reusable = false}, SHIFT(82),
  [127] = {.count = 1, .reusable = false}, SHIFT(79),
  [129] = {.count = 1, .reusable = false}, SHIFT(84),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__typed_bindings1, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(20),
  [135] = {.count = 1, .reusable = false}, SHIFT(87),
  [137] = {.count = 1, .reusable = true}, SHIFT(23),
  [139] = {.count = 1, .reusable = true}, SHIFT(24),
  [141] = {.count = 1, .reusable = false}, SHIFT(89),
  [143] = {.count = 1, .reusable = false}, SHIFT(90),
  [145] = {.count = 1, .reusable = false}, SHIFT(91),
  [147] = {.count = 1, .reusable = false}, SHIFT(92),
  [149] = {.count = 1, .reusable = false}, SHIFT(93),
  [151] = {.count = 1, .reusable = false}, SHIFT(94),
  [153] = {.count = 1, .reusable = false}, SHIFT(95),
  [155] = {.count = 1, .reusable = false}, SHIFT(99),
  [157] = {.count = 1, .reusable = false}, SHIFT(101),
  [159] = {.count = 1, .reusable = false}, SHIFT(102),
  [161] = {.count = 1, .reusable = false}, SHIFT(109),
  [163] = {.count = 1, .reusable = false}, SHIFT(104),
  [165] = {.count = 1, .reusable = false}, SHIFT(105),
  [167] = {.count = 1, .reusable = false}, SHIFT(106),
  [169] = {.count = 1, .reusable = false}, SHIFT(107),
  [171] = {.count = 1, .reusable = false}, SHIFT(108),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [177] = {.count = 1, .reusable = false}, SHIFT(114),
  [179] = {.count = 1, .reusable = false}, SHIFT(118),
  [181] = {.count = 1, .reusable = false}, SHIFT(115),
  [183] = {.count = 1, .reusable = false}, SHIFT(121),
  [185] = {.count = 1, .reusable = false}, SHIFT(125),
  [187] = {.count = 1, .reusable = false}, SHIFT(122),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [193] = {.count = 1, .reusable = false}, SHIFT(129),
  [195] = {.count = 1, .reusable = false}, SHIFT(135),
  [197] = {.count = 1, .reusable = false}, SHIFT(130),
  [199] = {.count = 1, .reusable = true}, SHIFT(140),
  [201] = {.count = 1, .reusable = true}, SHIFT(139),
  [203] = {.count = 1, .reusable = false}, SHIFT(141),
  [205] = {.count = 1, .reusable = false}, SHIFT(142),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(144),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 2),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(146),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(148),
  [247] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(147),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(146),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(148),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(147),
  [261] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2),
  [263] = {.count = 1, .reusable = false}, SHIFT(153),
  [265] = {.count = 1, .reusable = true}, SHIFT(155),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 1),
  [269] = {.count = 1, .reusable = true}, SHIFT(156),
  [271] = {.count = 1, .reusable = false}, SHIFT(157),
  [273] = {.count = 1, .reusable = false}, SHIFT(158),
  [275] = {.count = 1, .reusable = true}, SHIFT(160),
  [277] = {.count = 1, .reusable = true}, SHIFT(162),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 3),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 3),
  [283] = {.count = 1, .reusable = false}, SHIFT(164),
  [285] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(166),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(168),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(167),
  [294] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2),
  [296] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(20),
  [299] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(20),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(87),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(24),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_binding_name, 1),
  [313] = {.count = 1, .reusable = false}, SHIFT(170),
  [315] = {.count = 1, .reusable = false}, SHIFT(171),
  [317] = {.count = 1, .reusable = false}, SHIFT(172),
  [319] = {.count = 1, .reusable = false}, SHIFT(175),
  [321] = {.count = 1, .reusable = false}, SHIFT(179),
  [323] = {.count = 1, .reusable = false}, SHIFT(176),
  [325] = {.count = 1, .reusable = false}, SHIFT(182),
  [327] = {.count = 1, .reusable = false}, SHIFT(188),
  [329] = {.count = 1, .reusable = false}, SHIFT(183),
  [331] = {.count = 1, .reusable = true}, SHIFT(193),
  [333] = {.count = 1, .reusable = true}, SHIFT(192),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 1),
  [337] = {.count = 1, .reusable = true}, SHIFT(194),
  [339] = {.count = 1, .reusable = true}, SHIFT(195),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__typed_untyped_binding1, 1),
  [343] = {.count = 1, .reusable = false}, SHIFT(197),
  [345] = {.count = 1, .reusable = false}, SHIFT(203),
  [347] = {.count = 1, .reusable = false}, SHIFT(198),
  [349] = {.count = 1, .reusable = true}, SHIFT(207),
  [351] = {.count = 1, .reusable = true}, SHIFT(209),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_record, 3),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_record, 3),
  [357] = {.count = 1, .reusable = true}, SHIFT(211),
  [359] = {.count = 1, .reusable = true}, SHIFT(212),
  [361] = {.count = 1, .reusable = false}, SHIFT(213),
  [363] = {.count = 1, .reusable = false}, SHIFT(214),
  [365] = {.count = 1, .reusable = false}, SHIFT(215),
  [367] = {.count = 1, .reusable = false}, SHIFT(218),
  [369] = {.count = 1, .reusable = false}, SHIFT(216),
  [371] = {.count = 1, .reusable = false}, SHIFT(221),
  [373] = {.count = 1, .reusable = false}, SHIFT(219),
  [375] = {.count = 1, .reusable = true}, SHIFT(222),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 1),
  [379] = {.count = 1, .reusable = true}, SHIFT(225),
  [381] = {.count = 1, .reusable = true}, SHIFT(226),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__arg_names, 1),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures1, 1),
  [387] = {.count = 1, .reusable = false}, SHIFT(229),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_rewrite_equations, 2),
  [391] = {.count = 1, .reusable = false}, SHIFT(231),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_with_expressions, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 3),
  [397] = {.count = 1, .reusable = false}, SHIFT(233),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_rhs, 2),
  [401] = {.count = 1, .reusable = true}, SHIFT(235),
  [403] = {.count = 1, .reusable = false}, SHIFT(236),
  [405] = {.count = 1, .reusable = false}, SHIFT(239),
  [407] = {.count = 1, .reusable = false}, SHIFT(237),
  [409] = {.count = 1, .reusable = false}, SHIFT(241),
  [411] = {.count = 1, .reusable = false}, SHIFT(242),
  [413] = {.count = 1, .reusable = false}, SHIFT(243),
  [415] = {.count = 1, .reusable = false}, SHIFT(244),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [419] = {.count = 1, .reusable = true}, SHIFT(247),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_name, 1),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [427] = {.count = 1, .reusable = true}, SHIFT(248),
  [429] = {.count = 1, .reusable = false}, SHIFT(249),
  [431] = {.count = 1, .reusable = false}, SHIFT(146),
  [433] = {.count = 1, .reusable = false}, SHIFT(148),
  [435] = {.count = 1, .reusable = false}, SHIFT(147),
  [437] = {.count = 1, .reusable = true}, SHIFT(251),
  [439] = {.count = 1, .reusable = true}, SHIFT(252),
  [441] = {.count = 1, .reusable = true}, SHIFT(253),
  [443] = {.count = 1, .reusable = true}, SHIFT(254),
  [445] = {.count = 1, .reusable = true}, SHIFT(256),
  [447] = {.count = 1, .reusable = false}, SHIFT(257),
  [449] = {.count = 1, .reusable = false}, SHIFT(263),
  [451] = {.count = 1, .reusable = false}, SHIFT(258),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(267),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(269),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(268),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [464] = {.count = 1, .reusable = true}, SHIFT(274),
  [466] = {.count = 1, .reusable = false}, SHIFT(275),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 2),
  [470] = {.count = 1, .reusable = true}, SHIFT(280),
  [472] = {.count = 1, .reusable = true}, SHIFT(281),
  [474] = {.count = 1, .reusable = false}, SHIFT(282),
  [476] = {.count = 1, .reusable = true}, SHIFT(284),
  [478] = {.count = 1, .reusable = true}, SHIFT(286),
  [480] = {.count = 1, .reusable = false}, SHIFT(287),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 4),
  [484] = {.count = 1, .reusable = true}, SHIFT(289),
  [486] = {.count = 1, .reusable = true}, SHIFT(290),
  [488] = {.count = 1, .reusable = false}, SHIFT(291),
  [490] = {.count = 1, .reusable = false}, SHIFT(294),
  [492] = {.count = 1, .reusable = false}, SHIFT(292),
  [494] = {.count = 1, .reusable = false}, SHIFT(296),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_data, 4),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_data, 4),
  [500] = {.count = 1, .reusable = true}, SHIFT(299),
  [502] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(89),
  [505] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(90),
  [508] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(91),
  [511] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(92),
  [514] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(93),
  [517] = {.count = 1, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2),
  [519] = {.count = 1, .reusable = false}, SHIFT(300),
  [521] = {.count = 1, .reusable = true}, SHIFT(302),
  [523] = {.count = 1, .reusable = false}, SHIFT(303),
  [525] = {.count = 1, .reusable = false}, SHIFT(306),
  [527] = {.count = 1, .reusable = false}, SHIFT(304),
  [529] = {.count = 1, .reusable = false}, SHIFT(308),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 4),
  [533] = {.count = 1, .reusable = true}, SHIFT(310),
  [535] = {.count = 1, .reusable = true}, SHIFT(311),
  [537] = {.count = 1, .reusable = false}, SHIFT(312),
  [539] = {.count = 1, .reusable = false}, SHIFT(313),
  [541] = {.count = 1, .reusable = false}, SHIFT(314),
  [543] = {.count = 1, .reusable = false}, SHIFT(315),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_record, 4),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_record, 4),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_name, 2),
  [551] = {.count = 1, .reusable = false}, SHIFT(323),
  [553] = {.count = 1, .reusable = false}, SHIFT(324),
  [555] = {.count = 1, .reusable = false}, SHIFT(325),
  [557] = {.count = 1, .reusable = true}, SHIFT(326),
  [559] = {.count = 1, .reusable = false}, SHIFT(327),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_names1, 1),
  [563] = {.count = 1, .reusable = false}, SHIFT(328),
  [565] = {.count = 1, .reusable = false}, SHIFT(329),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 2),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 2),
  [571] = {.count = 1, .reusable = true}, SHIFT(331),
  [573] = {.count = 1, .reusable = false}, SHIFT(332),
  [575] = {.count = 1, .reusable = false}, SHIFT(338),
  [577] = {.count = 1, .reusable = false}, SHIFT(333),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures_block, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym__arg_type_signatures_block, 3),
  [583] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(109),
  [586] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(104),
  [589] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(105),
  [592] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(106),
  [595] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2),
  [597] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2),
  [599] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(109),
  [602] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(104),
  [605] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(105),
  [608] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(106),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(107),
  [614] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(108),
  [617] = {.count = 1, .reusable = true}, SHIFT(342),
  [619] = {.count = 1, .reusable = true}, SHIFT(343),
  [621] = {.count = 1, .reusable = true}, SHIFT(344),
  [623] = {.count = 1, .reusable = false}, SHIFT(346),
  [625] = {.count = 1, .reusable = false}, SHIFT(348),
  [627] = {.count = 1, .reusable = false}, SHIFT(349),
  [629] = {.count = 1, .reusable = false}, SHIFT(350),
  [631] = {.count = 1, .reusable = true}, SHIFT(351),
  [633] = {.count = 1, .reusable = true}, SHIFT(352),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 1),
  [637] = {.count = 1, .reusable = true}, SHIFT(354),
  [639] = {.count = 1, .reusable = true}, SHIFT(355),
  [641] = {.count = 1, .reusable = true}, SHIFT(359),
  [643] = {.count = 1, .reusable = false}, SHIFT(360),
  [645] = {.count = 1, .reusable = true}, SHIFT(362),
  [647] = {.count = 1, .reusable = false}, SHIFT(363),
  [649] = {.count = 1, .reusable = false}, SHIFT(367),
  [651] = {.count = 1, .reusable = false}, SHIFT(364),
  [653] = {.count = 1, .reusable = false}, SHIFT(369),
  [655] = {.count = 1, .reusable = false}, SHIFT(370),
  [657] = {.count = 1, .reusable = true}, SHIFT(372),
  [659] = {.count = 1, .reusable = true}, SHIFT(373),
  [661] = {.count = 1, .reusable = true}, SHIFT(374),
  [663] = {.count = 1, .reusable = true}, SHIFT(375),
  [665] = {.count = 1, .reusable = true}, SHIFT(376),
  [667] = {.count = 1, .reusable = true}, SHIFT(377),
  [669] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 3),
  [671] = {.count = 1, .reusable = true}, SHIFT(379),
  [673] = {.count = 1, .reusable = true}, SHIFT(382),
  [675] = {.count = 1, .reusable = true}, SHIFT(383),
  [677] = {.count = 1, .reusable = false}, SHIFT(384),
  [679] = {.count = 1, .reusable = true}, SHIFT(386),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 5),
  [683] = {.count = 1, .reusable = true}, SHIFT(387),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_data, 5),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_data, 5),
  [689] = {.count = 1, .reusable = true}, SHIFT(388),
  [691] = {.count = 1, .reusable = false}, SHIFT(389),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_record, 5),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_record, 5),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 2),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 2),
  [701] = {.count = 1, .reusable = true}, SHIFT(392),
  [703] = {.count = 1, .reusable = false}, SHIFT(393),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_record_induction, 1),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_record_eta, 1),
  [709] = {.count = 1, .reusable = true}, SHIFT(394),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 1),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 1),
  [715] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1),
  [717] = {.count = 1, .reusable = true}, SHIFT(396),
  [719] = {.count = 1, .reusable = true}, SHIFT(312),
  [721] = {.count = 1, .reusable = true}, SHIFT(313),
  [723] = {.count = 1, .reusable = true}, SHIFT(314),
  [725] = {.count = 1, .reusable = true}, SHIFT(315),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 5),
  [729] = {.count = 1, .reusable = true}, SHIFT(400),
  [731] = {.count = 1, .reusable = false}, SHIFT(402),
  [733] = {.count = 1, .reusable = false}, SHIFT(401),
  [735] = {.count = 1, .reusable = false}, SHIFT(403),
  [737] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [739] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 3),
  [741] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(327),
  [744] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(216),
  [747] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(329),
  [750] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(219),
  [753] = {.count = 1, .reusable = true}, SHIFT(404),
  [755] = {.count = 1, .reusable = false}, SHIFT(406),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 3),
  [759] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 3),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [763] = {.count = 1, .reusable = false}, SHIFT(408),
  [765] = {.count = 1, .reusable = true}, SHIFT(408),
  [767] = {.count = 1, .reusable = false}, SHIFT(409),
  [769] = {.count = 1, .reusable = false}, SHIFT(413),
  [771] = {.count = 1, .reusable = false}, SHIFT(410),
  [773] = {.count = 1, .reusable = false}, SHIFT(415),
  [775] = {.count = 1, .reusable = true}, SHIFT(417),
  [777] = {.count = 1, .reusable = false}, SHIFT(418),
  [779] = {.count = 1, .reusable = false}, SHIFT(419),
  [781] = {.count = 1, .reusable = false}, SHIFT(420),
  [783] = {.count = 1, .reusable = false}, SHIFT(421),
  [785] = {.count = 1, .reusable = false}, SHIFT(422),
  [787] = {.count = 1, .reusable = false}, SHIFT(423),
  [789] = {.count = 1, .reusable = false}, SHIFT(427),
  [791] = {.count = 1, .reusable = true}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [793] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym__declarations0, 3),
  [797] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(2),
  [800] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(12),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(3),
  [806] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(242),
  [809] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(243),
  [812] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(244),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 4),
  [817] = {.count = 1, .reusable = true}, SHIFT(429),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [823] = {.count = 1, .reusable = true}, SHIFT(430),
  [825] = {.count = 1, .reusable = false}, SHIFT(432),
  [827] = {.count = 1, .reusable = true}, SHIFT(434),
  [829] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 4),
  [831] = {.count = 1, .reusable = true}, SHIFT(438),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_data, 6),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_data, 6),
  [837] = {.count = 1, .reusable = true}, SHIFT(439),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym__declarations0, 3),
  [841] = {.count = 1, .reusable = true}, SHIFT(440),
  [843] = {.count = 1, .reusable = true}, SHIFT(441),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_record, 6),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_record, 6),
  [849] = {.count = 1, .reusable = true}, SHIFT(442),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor, 2),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 3),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 3),
  [857] = {.count = 1, .reusable = true}, SHIFT(443),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 2),
  [861] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 2),
  [863] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [865] = {.count = 1, .reusable = true}, SHIFT(444),
  [867] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(445),
  [870] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(313),
  [873] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(314),
  [876] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(315),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 4),
  [881] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(402),
  [884] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2),
  [886] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(403),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 4),
  [891] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 4),
  [893] = {.count = 1, .reusable = true}, SHIFT(448),
  [895] = {.count = 1, .reusable = false}, SHIFT(450),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym__expr1, 2),
  [899] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [901] = {.count = 1, .reusable = false}, SHIFT(452),
  [903] = {.count = 1, .reusable = false}, SHIFT(453),
  [905] = {.count = 1, .reusable = false}, SHIFT(454),
  [907] = {.count = 1, .reusable = false}, SHIFT(459),
  [909] = {.count = 1, .reusable = false}, SHIFT(465),
  [911] = {.count = 1, .reusable = false}, SHIFT(460),
  [913] = {.count = 1, .reusable = true}, SHIFT(469),
  [915] = {.count = 1, .reusable = true}, SHIFT(472),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [919] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [921] = {.count = 1, .reusable = true}, SHIFT(473),
  [923] = {.count = 1, .reusable = true}, SHIFT(474),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_data, 7),
  [927] = {.count = 1, .reusable = false}, REDUCE(sym_data, 7),
  [929] = {.count = 1, .reusable = false}, SHIFT(475),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 4),
  [933] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 4),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 3),
  [937] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 3),
  [939] = {.count = 1, .reusable = true}, SHIFT(476),
  [941] = {.count = 1, .reusable = true}, SHIFT(477),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_record, 7),
  [945] = {.count = 1, .reusable = false}, REDUCE(sym_record, 7),
  [947] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [949] = {.count = 1, .reusable = true}, SHIFT(478),
  [951] = {.count = 1, .reusable = true}, SHIFT(482),
  [953] = {.count = 1, .reusable = true}, SHIFT(483),
  [955] = {.count = 1, .reusable = true}, SHIFT(484),
  [957] = {.count = 1, .reusable = true}, SHIFT(485),
  [959] = {.count = 1, .reusable = false}, SHIFT(486),
  [961] = {.count = 1, .reusable = true}, SHIFT(488),
  [963] = {.count = 1, .reusable = false}, SHIFT(489),
  [965] = {.count = 1, .reusable = false}, SHIFT(492),
  [967] = {.count = 1, .reusable = false}, SHIFT(490),
  [969] = {.count = 1, .reusable = false}, SHIFT(494),
  [971] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(418),
  [974] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(419),
  [977] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(420),
  [980] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(421),
  [983] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(422),
  [986] = {.count = 1, .reusable = true}, SHIFT(497),
  [988] = {.count = 1, .reusable = true}, SHIFT(498),
  [990] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [992] = {.count = 1, .reusable = true}, SHIFT(499),
  [994] = {.count = 1, .reusable = true}, SHIFT(500),
  [996] = {.count = 1, .reusable = true}, SHIFT(501),
  [998] = {.count = 1, .reusable = true}, SHIFT(502),
  [1000] = {.count = 1, .reusable = true}, SHIFT(506),
  [1002] = {.count = 1, .reusable = false}, SHIFT(507),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor_instance, 5),
  [1006] = {.count = 1, .reusable = false}, REDUCE(sym_record_constructor_instance, 5),
  [1008] = {.count = 1, .reusable = false}, SHIFT(509),
  [1010] = {.count = 1, .reusable = true}, SHIFT(513),
  [1012] = {.count = 1, .reusable = true}, SHIFT(514),
  [1014] = {.count = 1, .reusable = true}, SHIFT(515),
  [1016] = {.count = 1, .reusable = true}, SHIFT(516),
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
