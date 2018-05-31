#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 513
#define SYMBOL_COUNT 106
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
  sym_infix = 91,
  sym_instance = 92,
  sym__declarations0 = 93,
  sym__declarations1 = 94,
  aux_sym__maybe_dotted_names1_repeat1 = 95,
  aux_sym__arg_names_repeat1 = 96,
  aux_sym_arg_name_repeat1 = 97,
  aux_sym__expr1_repeat1 = 98,
  aux_sym__application_repeat1 = 99,
  aux_sym__typed_bindings1_repeat1 = 100,
  aux_sym__typed_untyped_binding1_repeat1 = 101,
  aux_sym__record_directives1_repeat1 = 102,
  aux_sym__arg_type_signatures1_repeat1 = 103,
  aux_sym_infix_repeat1 = 104,
  aux_sym__declarations1_repeat1 = 105,
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
  [sym_infix] = "infix",
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
  [aux_sym_infix_repeat1] = "infix_repeat1",
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
  [sym_infix] = {
    .visible = true,
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
  [aux_sym_infix_repeat1] = {
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
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
      if (lookahead == 'f')
        ADVANCE(203);
      if (lookahead == 's')
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
    case 203:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
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
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(206);
      if (lookahead == 'r')
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
    case 206:
      ACCEPT_TOKEN(anon_sym_infixl);
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
    case 207:
      ACCEPT_TOKEN(anon_sym_infixr);
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
    case 208:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
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
      if (lookahead == 'n')
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
    case 214:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
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
      if (lookahead == 'o')
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
      if (lookahead == 't')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'm')
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
    case 223:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
      if (lookahead == 'c')
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 'd')
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
    case 229:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
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
      if (lookahead == 'u')
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
      if (lookahead == 'o')
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
      if (lookahead == 't')
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
    case 236:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(157);
      END_STATE();
    case 238:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(241);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(256);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 239:
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
    case 240:
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
    case 241:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(241);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(256);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 243:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
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
    case 244:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'w')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
      if (lookahead == 'r')
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
    case 252:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
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
      if (lookahead == 't')
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
    case 256:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
    case 261:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 263:
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
    case 264:
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
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(162);
      END_STATE();
    case 267:
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
        ADVANCE(268);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@')
        ADVANCE(175);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(270);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(268);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 270:
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
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '{')
        ADVANCE(165);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 273:
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(277);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(276);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(275);
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
        ADVANCE(276);
      END_STATE();
    case 275:
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
        ADVANCE(275);
      END_STATE();
    case 276:
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
        ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(278);
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
        ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(277);
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
        ADVANCE(276);
      END_STATE();
    case 279:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == '\\')
        SKIP(281);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      END_STATE();
    case 280:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 281:
      if (lookahead == 'n')
        SKIP(279);
      END_STATE();
    case 282:
      if (lookahead == '-')
        ADVANCE(266);
      END_STATE();
    case 283:
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
        SKIP(284);
      if (lookahead == 'w')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '|')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 284:
      if (lookahead == 'n')
        SKIP(283);
      END_STATE();
    case 285:
      if (lookahead == 'h')
        ADVANCE(149);
      END_STATE();
    case 286:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(287);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'r')
        ADVANCE(288);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      END_STATE();
    case 287:
      if (lookahead == 'n')
        SKIP(286);
      END_STATE();
    case 288:
      if (lookahead == 'e')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'w')
        ADVANCE(136);
      END_STATE();
    case 290:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(291);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      END_STATE();
    case 291:
      if (lookahead == 'n')
        SKIP(290);
      END_STATE();
    case 292:
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
        ADVANCE(293);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(292);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 293:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 294:
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
        ADVANCE(293);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 295:
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
        ADVANCE(296);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(295);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
        ADVANCE(296);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(301);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == 8594)
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(298);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 299:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
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
    case 301:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(301);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 303:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(303);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 304:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 306:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(307);
      if (lookahead == '\\')
        ADVANCE(308);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == 'w')
        ADVANCE(311);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(306);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 307:
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
        ADVANCE(276);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(276);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == ':')
        ADVANCE(307);
      if (lookahead == '\\')
        ADVANCE(308);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == 'w')
        ADVANCE(311);
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
        ADVANCE(276);
      END_STATE();
    case 310:
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
        ADVANCE(276);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
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
        ADVANCE(276);
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
        ADVANCE(276);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(314);
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
        ADVANCE(276);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(276);
      END_STATE();
    case 315:
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
        ADVANCE(276);
      END_STATE();
    case 316:
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(317);
      if (lookahead == 'i')
        ADVANCE(319);
      if (lookahead == 'o')
        ADVANCE(327);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(276);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(317);
      if (lookahead == 'i')
        ADVANCE(319);
      if (lookahead == 'o')
        ADVANCE(327);
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
        ADVANCE(276);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(276);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
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
        ADVANCE(276);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(322);
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
        ADVANCE(276);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
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
        ADVANCE(276);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(276);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
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
        ADVANCE(276);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(276);
      END_STATE();
    case 326:
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
        ADVANCE(276);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v')
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
        ADVANCE(276);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(329);
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
        ADVANCE(276);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(330);
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
        ADVANCE(276);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(331);
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
        ADVANCE(276);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(332);
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
        ADVANCE(276);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
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
        ADVANCE(276);
      END_STATE();
    case 333:
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
        ADVANCE(276);
      END_STATE();
    case 334:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == '_')
        ADVANCE(310);
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
        ADVANCE(276);
      END_STATE();
    case 337:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        SKIP(337);
      END_STATE();
    case 339:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(339);
      END_STATE();
    case 340:
      if (lookahead == 'n')
        SKIP(339);
      END_STATE();
    case 341:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(342);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == 8594)
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(341);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 342:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(342);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 344:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(345);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(344);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 345:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(345);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 347:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(240);
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
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '}')
        ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(348);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(307);
      if (lookahead == '\\')
        ADVANCE(351);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(352);
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
        ADVANCE(276);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == ':')
        ADVANCE(307);
      if (lookahead == '\\')
        ADVANCE(351);
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
        ADVANCE(276);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(353);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(355);
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
        ADVANCE(276);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '_')
        ADVANCE(310);
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
        ADVANCE(276);
      END_STATE();
    case 356:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(357);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(256);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(356);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 357:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(357);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(256);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 359:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(360);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(359);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 360:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(360);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 362:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'h')
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
    case 363:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(364);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 364:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(364);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 366:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(367);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      END_STATE();
    case 367:
      if (lookahead == 'n')
        SKIP(366);
      END_STATE();
    case 368:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(369);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '}')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(368);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 369:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == ':')
        ADVANCE(239);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(369);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 371:
      if (lookahead == '}')
        ADVANCE(168);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(373);
      if (lookahead == 'c')
        ADVANCE(374);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'i')
        ADVANCE(376);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '}')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 373:
      if (lookahead == 'n')
        SKIP(372);
      END_STATE();
    case 374:
      if (lookahead == 'o')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 'n')
        ADVANCE(38);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'd')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(87);
      END_STATE();
    case 378:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 379:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 381:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == '\\')
        SKIP(382);
      if (lookahead == 'w')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(381);
      END_STATE();
    case 382:
      if (lookahead == 'n')
        SKIP(381);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(280);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(384);
      if (lookahead == 'w')
        ADVANCE(285);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(383);
      END_STATE();
    case 384:
      if (lookahead == 'n')
        SKIP(383);
      END_STATE();
    case 385:
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
        ADVANCE(386);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(388);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(408);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(420);
      if (lookahead == 'n')
        ADVANCE(429);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(385);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 386:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
        ADVANCE(386);
      if (lookahead == 'c')
        ADVANCE(388);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(408);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(420);
      if (lookahead == 'n')
        ADVANCE(429);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 388:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 'i')
        ADVANCE(390);
      if (lookahead == 'n')
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
    case 390:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
    case 391:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'c')
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
      if (lookahead == 't')
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
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
      if (lookahead == 'e')
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
    case 399:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 's')
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
      if (lookahead == 'r')
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
      if (lookahead == 'u')
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
      if (lookahead == 'c')
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
    case 408:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
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
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(411);
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
    case 411:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == 'q')
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
      if (lookahead == 'u')
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
    case 420:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(422);
      if (lookahead == 'f')
        ADVANCE(203);
      if (lookahead == 's')
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
    case 422:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'c')
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
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
    case 429:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
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
      if (lookahead == '-')
        ADVANCE(431);
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
    case 431:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == 't')
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
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(435);
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
    case 435:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'q')
        ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'i')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 't')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'y')
        ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 443:
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
    case 444:
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(445);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '}')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(444);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(276);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(446);
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
        ADVANCE(276);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '\\')
        ADVANCE(445);
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
        ADVANCE(276);
      END_STATE();
    case 447:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(448);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(447);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 448:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(448);
      if (lookahead == 'm')
        ADVANCE(243);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 450:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(451);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '}')
        ADVANCE(371);
      if (lookahead == 8594)
        ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(450);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 451:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(299);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(451);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == 8594)
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 453:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(454);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 454:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(454);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(362);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 456:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(457);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(461);
      if (lookahead == '?')
        ADVANCE(462);
      if (lookahead == 'P')
        ADVANCE(463);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead == '\\')
        ADVANCE(470);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == 'i')
        ADVANCE(472);
      if (lookahead == 'o')
        ADVANCE(480);
      if (lookahead == 'q')
        ADVANCE(487);
      if (lookahead == 'u')
        ADVANCE(496);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '|')
        ADVANCE(503);
      if (lookahead == 8594)
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(456);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(460);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(458);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(459);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(173);
      if (lookahead == '_')
        ADVANCE(275);
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
        ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'r')
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
        ADVANCE(460);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'o')
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
        ADVANCE(460);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'p')
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
        ADVANCE(460);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'e')
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
        ADVANCE(460);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 't')
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
        ADVANCE(460);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'n')
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
        ADVANCE(460);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(457);
      if (lookahead == '.')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(461);
      if (lookahead == '?')
        ADVANCE(462);
      if (lookahead == 'P')
        ADVANCE(463);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead == '\\')
        ADVANCE(470);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == 'i')
        ADVANCE(472);
      if (lookahead == 'o')
        ADVANCE(480);
      if (lookahead == 'q')
        ADVANCE(487);
      if (lookahead == 'u')
        ADVANCE(496);
      if (lookahead == '|')
        ADVANCE(503);
      if (lookahead == 8594)
        ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(504);
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
        ADVANCE(460);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'n')
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
        ADVANCE(460);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 's')
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
        ADVANCE(460);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 't')
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
        ADVANCE(460);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'a')
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
        ADVANCE(460);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'n')
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
        ADVANCE(460);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'c')
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
        ADVANCE(460);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'e')
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
        ADVANCE(460);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'v')
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
        ADVANCE(460);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'e')
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
        ADVANCE(460);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'r')
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
        ADVANCE(460);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'l')
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
        ADVANCE(460);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'a')
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
        ADVANCE(460);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'p')
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
        ADVANCE(460);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'u')
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
        ADVANCE(460);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'o')
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
        ADVANCE(460);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 't')
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
        ADVANCE(460);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'e')
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
        ADVANCE(460);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
        ADVANCE(492);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'e')
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
        ADVANCE(460);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'r')
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
        ADVANCE(460);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'm')
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
        ADVANCE(460);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'n')
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
        ADVANCE(460);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'q')
        ADVANCE(498);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'u')
        ADVANCE(499);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'o')
        ADVANCE(500);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 't')
        ADVANCE(501);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(504);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 505:
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == 'i')
        ADVANCE(319);
      if (lookahead == 'o')
        ADVANCE(327);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(505);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(276);
      END_STATE();
    case 506:
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
        ADVANCE(276);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(508);
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
        ADVANCE(276);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '=')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == 'i')
        ADVANCE(319);
      if (lookahead == 'o')
        ADVANCE(327);
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
        ADVANCE(276);
      END_STATE();
    case 509:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(265);
      if (lookahead == '|')
        ADVANCE(264);
      if (lookahead == '}')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(509);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 510:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '=')
        ADVANCE(240);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '|')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 512:
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
        ADVANCE(513);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(515);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '{')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(512);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
        ADVANCE(513);
      if (lookahead == 'c')
        ADVANCE(515);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'q')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(223);
      if (lookahead == 'u')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
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
    case 515:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 'n')
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
    case 517:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(518);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(461);
      if (lookahead == '?')
        ADVANCE(462);
      if (lookahead == 'P')
        ADVANCE(463);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead == '\\')
        ADVANCE(519);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == 'i')
        ADVANCE(472);
      if (lookahead == 'o')
        ADVANCE(480);
      if (lookahead == 'q')
        ADVANCE(487);
      if (lookahead == 'u')
        ADVANCE(496);
      if (lookahead == '{')
        ADVANCE(271);
      if (lookahead == '|')
        ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(517);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(460);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(458);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(520);
      if (lookahead != 0 &&
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
        ADVANCE(460);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(518);
      if (lookahead == '.')
        ADVANCE(270);
      if (lookahead == '=')
        ADVANCE(461);
      if (lookahead == '?')
        ADVANCE(462);
      if (lookahead == 'P')
        ADVANCE(463);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead == '\\')
        ADVANCE(519);
      if (lookahead == '_')
        ADVANCE(310);
      if (lookahead == 'i')
        ADVANCE(472);
      if (lookahead == 'o')
        ADVANCE(480);
      if (lookahead == 'q')
        ADVANCE(487);
      if (lookahead == 'u')
        ADVANCE(496);
      if (lookahead == '|')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(504);
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
        ADVANCE(460);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 170},
  [2] = {.lex_state = 238, .external_lex_state = 2},
  [3] = {.lex_state = 267},
  [4] = {.lex_state = 273},
  [5] = {.lex_state = 273},
  [6] = {.lex_state = 267},
  [7] = {.lex_state = 279, .external_lex_state = 3},
  [8] = {.lex_state = 279, .external_lex_state = 4},
  [9] = {.lex_state = 283},
  [10] = {.lex_state = 279},
  [11] = {.lex_state = 286, .external_lex_state = 2},
  [12] = {.lex_state = 283},
  [13] = {.lex_state = 238, .external_lex_state = 2},
  [14] = {.lex_state = 238, .external_lex_state = 2},
  [15] = {.lex_state = 290, .external_lex_state = 2},
  [16] = {.lex_state = 279, .external_lex_state = 2},
  [17] = {.lex_state = 170},
  [18] = {.lex_state = 279},
  [19] = {.lex_state = 292},
  [20] = {.lex_state = 295},
  [21] = {.lex_state = 170},
  [22] = {.lex_state = 298},
  [23] = {.lex_state = 283},
  [24] = {.lex_state = 267},
  [25] = {.lex_state = 238, .external_lex_state = 2},
  [26] = {.lex_state = 292},
  [27] = {.lex_state = 292},
  [28] = {.lex_state = 283},
  [29] = {.lex_state = 283},
  [30] = {.lex_state = 283},
  [31] = {.lex_state = 298},
  [32] = {.lex_state = 298},
  [33] = {.lex_state = 283},
  [34] = {.lex_state = 292},
  [35] = {.lex_state = 303},
  [36] = {.lex_state = 283},
  [37] = {.lex_state = 306},
  [38] = {.lex_state = 306},
  [39] = {.lex_state = 306},
  [40] = {.lex_state = 306},
  [41] = {.lex_state = 170},
  [42] = {.lex_state = 170},
  [43] = {.lex_state = 316},
  [44] = {.lex_state = 170},
  [45] = {.lex_state = 334},
  [46] = {.lex_state = 292},
  [47] = {.lex_state = 292},
  [48] = {.lex_state = 337, .external_lex_state = 2},
  [49] = {.lex_state = 290, .external_lex_state = 2},
  [50] = {.lex_state = 292},
  [51] = {.lex_state = 267},
  [52] = {.lex_state = 279, .external_lex_state = 3},
  [53] = {.lex_state = 334},
  [54] = {.lex_state = 339, .external_lex_state = 2},
  [55] = {.lex_state = 279, .external_lex_state = 2},
  [56] = {.lex_state = 170},
  [57] = {.lex_state = 286, .external_lex_state = 2},
  [58] = {.lex_state = 292},
  [59] = {.lex_state = 286, .external_lex_state = 2},
  [60] = {.lex_state = 295},
  [61] = {.lex_state = 279, .external_lex_state = 2},
  [62] = {.lex_state = 170},
  [63] = {.lex_state = 170},
  [64] = {.lex_state = 292},
  [65] = {.lex_state = 292},
  [66] = {.lex_state = 292},
  [67] = {.lex_state = 341},
  [68] = {.lex_state = 267},
  [69] = {.lex_state = 298},
  [70] = {.lex_state = 283},
  [71] = {.lex_state = 283},
  [72] = {.lex_state = 341},
  [73] = {.lex_state = 341},
  [74] = {.lex_state = 303},
  [75] = {.lex_state = 344},
  [76] = {.lex_state = 267},
  [77] = {.lex_state = 283},
  [78] = {.lex_state = 344},
  [79] = {.lex_state = 344},
  [80] = {.lex_state = 292},
  [81] = {.lex_state = 283},
  [82] = {.lex_state = 238, .external_lex_state = 2},
  [83] = {.lex_state = 267},
  [84] = {.lex_state = 347},
  [85] = {.lex_state = 267},
  [86] = {.lex_state = 283},
  [87] = {.lex_state = 347},
  [88] = {.lex_state = 347},
  [89] = {.lex_state = 295},
  [90] = {.lex_state = 267},
  [91] = {.lex_state = 283},
  [92] = {.lex_state = 303},
  [93] = {.lex_state = 292},
  [94] = {.lex_state = 283},
  [95] = {.lex_state = 306},
  [96] = {.lex_state = 334},
  [97] = {.lex_state = 292},
  [98] = {.lex_state = 292},
  [99] = {.lex_state = 292},
  [100] = {.lex_state = 267},
  [101] = {.lex_state = 279, .external_lex_state = 3},
  [102] = {.lex_state = 306},
  [103] = {.lex_state = 283},
  [104] = {.lex_state = 306},
  [105] = {.lex_state = 267},
  [106] = {.lex_state = 283},
  [107] = {.lex_state = 267},
  [108] = {.lex_state = 170, .external_lex_state = 4},
  [109] = {.lex_state = 283},
  [110] = {.lex_state = 273},
  [111] = {.lex_state = 273},
  [112] = {.lex_state = 267},
  [113] = {.lex_state = 279, .external_lex_state = 3},
  [114] = {.lex_state = 279, .external_lex_state = 4},
  [115] = {.lex_state = 279, .external_lex_state = 2},
  [116] = {.lex_state = 170, .external_lex_state = 5},
  [117] = {.lex_state = 279, .external_lex_state = 5},
  [118] = {.lex_state = 170},
  [119] = {.lex_state = 273},
  [120] = {.lex_state = 273},
  [121] = {.lex_state = 273},
  [122] = {.lex_state = 279, .external_lex_state = 4},
  [123] = {.lex_state = 273},
  [124] = {.lex_state = 350},
  [125] = {.lex_state = 283},
  [126] = {.lex_state = 279, .external_lex_state = 5},
  [127] = {.lex_state = 350},
  [128] = {.lex_state = 316, .external_lex_state = 5},
  [129] = {.lex_state = 353, .external_lex_state = 2},
  [130] = {.lex_state = 353, .external_lex_state = 2},
  [131] = {.lex_state = 356, .external_lex_state = 2},
  [132] = {.lex_state = 267},
  [133] = {.lex_state = 337, .external_lex_state = 2},
  [134] = {.lex_state = 356, .external_lex_state = 2},
  [135] = {.lex_state = 356, .external_lex_state = 2},
  [136] = {.lex_state = 292},
  [137] = {.lex_state = 295},
  [138] = {.lex_state = 359, .external_lex_state = 2},
  [139] = {.lex_state = 267},
  [140] = {.lex_state = 290, .external_lex_state = 2},
  [141] = {.lex_state = 359, .external_lex_state = 2},
  [142] = {.lex_state = 359, .external_lex_state = 2},
  [143] = {.lex_state = 292},
  [144] = {.lex_state = 295},
  [145] = {.lex_state = 290, .external_lex_state = 2},
  [146] = {.lex_state = 363, .external_lex_state = 2},
  [147] = {.lex_state = 267},
  [148] = {.lex_state = 339, .external_lex_state = 2},
  [149] = {.lex_state = 366, .external_lex_state = 2},
  [150] = {.lex_state = 283},
  [151] = {.lex_state = 363, .external_lex_state = 2},
  [152] = {.lex_state = 363, .external_lex_state = 2},
  [153] = {.lex_state = 283},
  [154] = {.lex_state = 292},
  [155] = {.lex_state = 303},
  [156] = {.lex_state = 170},
  [157] = {.lex_state = 279, .external_lex_state = 2},
  [158] = {.lex_state = 283},
  [159] = {.lex_state = 283},
  [160] = {.lex_state = 279, .external_lex_state = 2},
  [161] = {.lex_state = 295},
  [162] = {.lex_state = 267},
  [163] = {.lex_state = 295},
  [164] = {.lex_state = 295},
  [165] = {.lex_state = 170},
  [166] = {.lex_state = 279, .external_lex_state = 2},
  [167] = {.lex_state = 283},
  [168] = {.lex_state = 283},
  [169] = {.lex_state = 283},
  [170] = {.lex_state = 341},
  [171] = {.lex_state = 283},
  [172] = {.lex_state = 298},
  [173] = {.lex_state = 267},
  [174] = {.lex_state = 267},
  [175] = {.lex_state = 344},
  [176] = {.lex_state = 283},
  [177] = {.lex_state = 267},
  [178] = {.lex_state = 292},
  [179] = {.lex_state = 267},
  [180] = {.lex_state = 283},
  [181] = {.lex_state = 347},
  [182] = {.lex_state = 283},
  [183] = {.lex_state = 303},
  [184] = {.lex_state = 267},
  [185] = {.lex_state = 303},
  [186] = {.lex_state = 283},
  [187] = {.lex_state = 292},
  [188] = {.lex_state = 292},
  [189] = {.lex_state = 292},
  [190] = {.lex_state = 306},
  [191] = {.lex_state = 283},
  [192] = {.lex_state = 368},
  [193] = {.lex_state = 267},
  [194] = {.lex_state = 372},
  [195] = {.lex_state = 368},
  [196] = {.lex_state = 368},
  [197] = {.lex_state = 292},
  [198] = {.lex_state = 283},
  [199] = {.lex_state = 378, .external_lex_state = 2},
  [200] = {.lex_state = 267},
  [201] = {.lex_state = 381, .external_lex_state = 2},
  [202] = {.lex_state = 383, .external_lex_state = 2},
  [203] = {.lex_state = 283},
  [204] = {.lex_state = 378, .external_lex_state = 2},
  [205] = {.lex_state = 378, .external_lex_state = 2},
  [206] = {.lex_state = 283},
  [207] = {.lex_state = 292},
  [208] = {.lex_state = 303},
  [209] = {.lex_state = 170},
  [210] = {.lex_state = 267},
  [211] = {.lex_state = 279, .external_lex_state = 3},
  [212] = {.lex_state = 306},
  [213] = {.lex_state = 378},
  [214] = {.lex_state = 267},
  [215] = {.lex_state = 283},
  [216] = {.lex_state = 283},
  [217] = {.lex_state = 283},
  [218] = {.lex_state = 378},
  [219] = {.lex_state = 378},
  [220] = {.lex_state = 283},
  [221] = {.lex_state = 292},
  [222] = {.lex_state = 303},
  [223] = {.lex_state = 267},
  [224] = {.lex_state = 381, .external_lex_state = 2},
  [225] = {.lex_state = 385, .external_lex_state = 5},
  [226] = {.lex_state = 170},
  [227] = {.lex_state = 267},
  [228] = {.lex_state = 170, .external_lex_state = 4},
  [229] = {.lex_state = 306},
  [230] = {.lex_state = 306},
  [231] = {.lex_state = 306},
  [232] = {.lex_state = 170},
  [233] = {.lex_state = 170, .external_lex_state = 5},
  [234] = {.lex_state = 316},
  [235] = {.lex_state = 170, .external_lex_state = 5},
  [236] = {.lex_state = 170, .external_lex_state = 5},
  [237] = {.lex_state = 170},
  [238] = {.lex_state = 279, .external_lex_state = 2},
  [239] = {.lex_state = 170, .external_lex_state = 5},
  [240] = {.lex_state = 350},
  [241] = {.lex_state = 273},
  [242] = {.lex_state = 273},
  [243] = {.lex_state = 273},
  [244] = {.lex_state = 283},
  [245] = {.lex_state = 273},
  [246] = {.lex_state = 273},
  [247] = {.lex_state = 372},
  [248] = {.lex_state = 444},
  [249] = {.lex_state = 316},
  [250] = {.lex_state = 316, .external_lex_state = 5},
  [251] = {.lex_state = 283},
  [252] = {.lex_state = 267},
  [253] = {.lex_state = 170},
  [254] = {.lex_state = 350},
  [255] = {.lex_state = 316, .external_lex_state = 5},
  [256] = {.lex_state = 353, .external_lex_state = 2},
  [257] = {.lex_state = 356, .external_lex_state = 2},
  [258] = {.lex_state = 283},
  [259] = {.lex_state = 359, .external_lex_state = 2},
  [260] = {.lex_state = 283},
  [261] = {.lex_state = 363, .external_lex_state = 2},
  [262] = {.lex_state = 283},
  [263] = {.lex_state = 267},
  [264] = {.lex_state = 447, .external_lex_state = 2},
  [265] = {.lex_state = 267},
  [266] = {.lex_state = 447, .external_lex_state = 2},
  [267] = {.lex_state = 447, .external_lex_state = 2},
  [268] = {.lex_state = 295},
  [269] = {.lex_state = 267},
  [270] = {.lex_state = 279, .external_lex_state = 5},
  [271] = {.lex_state = 279, .external_lex_state = 3},
  [272] = {.lex_state = 295},
  [273] = {.lex_state = 283},
  [274] = {.lex_state = 170},
  [275] = {.lex_state = 267},
  [276] = {.lex_state = 267},
  [277] = {.lex_state = 267},
  [278] = {.lex_state = 341},
  [279] = {.lex_state = 283},
  [280] = {.lex_state = 344},
  [281] = {.lex_state = 450},
  [282] = {.lex_state = 267},
  [283] = {.lex_state = 372},
  [284] = {.lex_state = 372},
  [285] = {.lex_state = 283},
  [286] = {.lex_state = 450},
  [287] = {.lex_state = 450},
  [288] = {.lex_state = 283},
  [289] = {.lex_state = 292},
  [290] = {.lex_state = 303},
  [291] = {.lex_state = 292},
  [292] = {.lex_state = 267},
  [293] = {.lex_state = 292},
  [294] = {.lex_state = 283},
  [295] = {.lex_state = 283},
  [296] = {.lex_state = 283},
  [297] = {.lex_state = 283},
  [298] = {.lex_state = 347},
  [299] = {.lex_state = 303},
  [300] = {.lex_state = 283},
  [301] = {.lex_state = 283},
  [302] = {.lex_state = 372},
  [303] = {.lex_state = 283},
  [304] = {.lex_state = 306},
  [305] = {.lex_state = 267},
  [306] = {.lex_state = 368},
  [307] = {.lex_state = 283},
  [308] = {.lex_state = 267},
  [309] = {.lex_state = 372},
  [310] = {.lex_state = 267},
  [311] = {.lex_state = 378, .external_lex_state = 2},
  [312] = {.lex_state = 283},
  [313] = {.lex_state = 279, .external_lex_state = 3},
  [314] = {.lex_state = 267},
  [315] = {.lex_state = 453, .external_lex_state = 2},
  [316] = {.lex_state = 267},
  [317] = {.lex_state = 453, .external_lex_state = 2},
  [318] = {.lex_state = 453, .external_lex_state = 2},
  [319] = {.lex_state = 295},
  [320] = {.lex_state = 267},
  [321] = {.lex_state = 381, .external_lex_state = 2},
  [322] = {.lex_state = 170},
  [323] = {.lex_state = 378},
  [324] = {.lex_state = 283},
  [325] = {.lex_state = 267},
  [326] = {.lex_state = 453},
  [327] = {.lex_state = 267},
  [328] = {.lex_state = 453},
  [329] = {.lex_state = 453},
  [330] = {.lex_state = 295},
  [331] = {.lex_state = 267},
  [332] = {.lex_state = 283},
  [333] = {.lex_state = 170, .external_lex_state = 4},
  [334] = {.lex_state = 170},
  [335] = {.lex_state = 279, .external_lex_state = 3},
  [336] = {.lex_state = 273},
  [337] = {.lex_state = 279, .external_lex_state = 2},
  [338] = {.lex_state = 279, .external_lex_state = 2},
  [339] = {.lex_state = 170, .external_lex_state = 5},
  [340] = {.lex_state = 385, .external_lex_state = 5},
  [341] = {.lex_state = 279, .external_lex_state = 2},
  [342] = {.lex_state = 279, .external_lex_state = 5},
  [343] = {.lex_state = 372},
  [344] = {.lex_state = 381, .external_lex_state = 2},
  [345] = {.lex_state = 170},
  [346] = {.lex_state = 267},
  [347] = {.lex_state = 279, .external_lex_state = 3},
  [348] = {.lex_state = 283},
  [349] = {.lex_state = 267},
  [350] = {.lex_state = 283},
  [351] = {.lex_state = 267},
  [352] = {.lex_state = 170, .external_lex_state = 6},
  [353] = {.lex_state = 283},
  [354] = {.lex_state = 279, .external_lex_state = 5},
  [355] = {.lex_state = 279, .external_lex_state = 5},
  [356] = {.lex_state = 170, .external_lex_state = 5},
  [357] = {.lex_state = 273},
  [358] = {.lex_state = 444},
  [359] = {.lex_state = 273},
  [360] = {.lex_state = 350},
  [361] = {.lex_state = 273},
  [362] = {.lex_state = 444},
  [363] = {.lex_state = 444},
  [364] = {.lex_state = 279, .external_lex_state = 5},
  [365] = {.lex_state = 267},
  [366] = {.lex_state = 456, .external_lex_state = 5},
  [367] = {.lex_state = 267},
  [368] = {.lex_state = 316, .external_lex_state = 5},
  [369] = {.lex_state = 505, .external_lex_state = 5},
  [370] = {.lex_state = 283},
  [371] = {.lex_state = 456, .external_lex_state = 5},
  [372] = {.lex_state = 456, .external_lex_state = 5},
  [373] = {.lex_state = 283},
  [374] = {.lex_state = 292},
  [375] = {.lex_state = 303},
  [376] = {.lex_state = 356, .external_lex_state = 2},
  [377] = {.lex_state = 359, .external_lex_state = 2},
  [378] = {.lex_state = 363, .external_lex_state = 2},
  [379] = {.lex_state = 339, .external_lex_state = 2},
  [380] = {.lex_state = 447, .external_lex_state = 2},
  [381] = {.lex_state = 283},
  [382] = {.lex_state = 279, .external_lex_state = 2},
  [383] = {.lex_state = 279, .external_lex_state = 2},
  [384] = {.lex_state = 295},
  [385] = {.lex_state = 283},
  [386] = {.lex_state = 372},
  [387] = {.lex_state = 283},
  [388] = {.lex_state = 283},
  [389] = {.lex_state = 450},
  [390] = {.lex_state = 283},
  [391] = {.lex_state = 267},
  [392] = {.lex_state = 509},
  [393] = {.lex_state = 267},
  [394] = {.lex_state = 372},
  [395] = {.lex_state = 509},
  [396] = {.lex_state = 509},
  [397] = {.lex_state = 295},
  [398] = {.lex_state = 267},
  [399] = {.lex_state = 292},
  [400] = {.lex_state = 283},
  [401] = {.lex_state = 267},
  [402] = {.lex_state = 303},
  [403] = {.lex_state = 306},
  [404] = {.lex_state = 267},
  [405] = {.lex_state = 267},
  [406] = {.lex_state = 267},
  [407] = {.lex_state = 283},
  [408] = {.lex_state = 368},
  [409] = {.lex_state = 372},
  [410] = {.lex_state = 283},
  [411] = {.lex_state = 378, .external_lex_state = 2},
  [412] = {.lex_state = 170},
  [413] = {.lex_state = 453, .external_lex_state = 2},
  [414] = {.lex_state = 283},
  [415] = {.lex_state = 279, .external_lex_state = 3},
  [416] = {.lex_state = 378},
  [417] = {.lex_state = 453},
  [418] = {.lex_state = 283},
  [419] = {.lex_state = 170},
  [420] = {.lex_state = 512},
  [421] = {.lex_state = 279, .external_lex_state = 2},
  [422] = {.lex_state = 170},
  [423] = {.lex_state = 279, .external_lex_state = 5},
  [424] = {.lex_state = 385, .external_lex_state = 5},
  [425] = {.lex_state = 279, .external_lex_state = 4},
  [426] = {.lex_state = 385, .external_lex_state = 5},
  [427] = {.lex_state = 279, .external_lex_state = 2},
  [428] = {.lex_state = 372},
  [429] = {.lex_state = 170, .external_lex_state = 4},
  [430] = {.lex_state = 381, .external_lex_state = 2},
  [431] = {.lex_state = 170, .external_lex_state = 5},
  [432] = {.lex_state = 267},
  [433] = {.lex_state = 279, .external_lex_state = 3},
  [434] = {.lex_state = 283},
  [435] = {.lex_state = 267},
  [436] = {.lex_state = 381, .external_lex_state = 2},
  [437] = {.lex_state = 385, .external_lex_state = 5},
  [438] = {.lex_state = 170, .external_lex_state = 5},
  [439] = {.lex_state = 267},
  [440] = {.lex_state = 170, .external_lex_state = 6},
  [441] = {.lex_state = 170, .external_lex_state = 5},
  [442] = {.lex_state = 170, .external_lex_state = 5},
  [443] = {.lex_state = 350},
  [444] = {.lex_state = 273},
  [445] = {.lex_state = 444},
  [446] = {.lex_state = 316, .external_lex_state = 5},
  [447] = {.lex_state = 316, .external_lex_state = 5},
  [448] = {.lex_state = 456, .external_lex_state = 5},
  [449] = {.lex_state = 283},
  [450] = {.lex_state = 267},
  [451] = {.lex_state = 517, .external_lex_state = 5},
  [452] = {.lex_state = 267},
  [453] = {.lex_state = 505, .external_lex_state = 5},
  [454] = {.lex_state = 517, .external_lex_state = 5},
  [455] = {.lex_state = 517, .external_lex_state = 5},
  [456] = {.lex_state = 295},
  [457] = {.lex_state = 267},
  [458] = {.lex_state = 505, .external_lex_state = 5},
  [459] = {.lex_state = 447, .external_lex_state = 2},
  [460] = {.lex_state = 283},
  [461] = {.lex_state = 450},
  [462] = {.lex_state = 372},
  [463] = {.lex_state = 509},
  [464] = {.lex_state = 283},
  [465] = {.lex_state = 292},
  [466] = {.lex_state = 283},
  [467] = {.lex_state = 372},
  [468] = {.lex_state = 283},
  [469] = {.lex_state = 306},
  [470] = {.lex_state = 453, .external_lex_state = 2},
  [471] = {.lex_state = 170},
  [472] = {.lex_state = 453},
  [473] = {.lex_state = 273},
  [474] = {.lex_state = 170},
  [475] = {.lex_state = 372},
  [476] = {.lex_state = 385, .external_lex_state = 5},
  [477] = {.lex_state = 279, .external_lex_state = 4},
  [478] = {.lex_state = 279, .external_lex_state = 2},
  [479] = {.lex_state = 170},
  [480] = {.lex_state = 279, .external_lex_state = 3},
  [481] = {.lex_state = 381, .external_lex_state = 2},
  [482] = {.lex_state = 170, .external_lex_state = 5},
  [483] = {.lex_state = 283},
  [484] = {.lex_state = 170, .external_lex_state = 6},
  [485] = {.lex_state = 170, .external_lex_state = 5},
  [486] = {.lex_state = 170, .external_lex_state = 5},
  [487] = {.lex_state = 279, .external_lex_state = 5},
  [488] = {.lex_state = 381, .external_lex_state = 2},
  [489] = {.lex_state = 170, .external_lex_state = 5},
  [490] = {.lex_state = 456, .external_lex_state = 5},
  [491] = {.lex_state = 316, .external_lex_state = 5},
  [492] = {.lex_state = 517, .external_lex_state = 5},
  [493] = {.lex_state = 283},
  [494] = {.lex_state = 509},
  [495] = {.lex_state = 306},
  [496] = {.lex_state = 279, .external_lex_state = 5},
  [497] = {.lex_state = 372},
  [498] = {.lex_state = 372},
  [499] = {.lex_state = 170, .external_lex_state = 5},
  [500] = {.lex_state = 279, .external_lex_state = 3},
  [501] = {.lex_state = 170, .external_lex_state = 5},
  [502] = {.lex_state = 170, .external_lex_state = 5},
  [503] = {.lex_state = 279, .external_lex_state = 5},
  [504] = {.lex_state = 170, .external_lex_state = 6},
  [505] = {.lex_state = 517, .external_lex_state = 5},
  [506] = {.lex_state = 385, .external_lex_state = 5},
  [507] = {.lex_state = 273},
  [508] = {.lex_state = 170, .external_lex_state = 5},
  [509] = {.lex_state = 170, .external_lex_state = 5},
  [510] = {.lex_state = 170, .external_lex_state = 5},
  [511] = {.lex_state = 279, .external_lex_state = 5},
  [512] = {.lex_state = 372},
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
    [sym_source_file] = STATE(10),
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(16),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(17),
    [sym_data_signature_only] = STATE(16),
    [sym_record] = STATE(17),
    [sym_record_signature_only] = STATE(16),
    [sym_field] = STATE(17),
    [sym__declaration] = STATE(16),
    [sym__declaration_block] = STATE(17),
    [sym_infix] = STATE(16),
    [sym_instance] = STATE(17),
    [sym__declarations1] = STATE(18),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(21),
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
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [2] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_rewrite] = ACTIONS(31),
    [anon_sym_with] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
  },
  [3] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(28),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [4] = {
    [sym_name] = ACTIONS(47),
    [sym_comment] = ACTIONS(13),
  },
  [5] = {
    [sym_name] = ACTIONS(49),
    [sym_comment] = ACTIONS(13),
  },
  [6] = {
    [sym_literal] = STATE(40),
    [sym__atom_no_curly] = STATE(40),
    [sym_string] = ACTIONS(51),
    [sym_int] = ACTIONS(51),
    [sym_qualified_name] = ACTIONS(53),
    [anon_sym__] = ACTIONS(53),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(53),
    [anon_sym_Prop] = ACTIONS(53),
    [anon_sym_Set] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(53),
    [anon_sym_quoteTerm] = ACTIONS(53),
    [anon_sym_unquote] = ACTIONS(53),
  },
  [7] = {
    [sym__declarations0] = STATE(42),
    [sym__newline] = ACTIONS(55),
    [sym__indent] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [8] = {
    [sym__arg_type_signatures_block] = STATE(44),
    [sym__indent] = ACTIONS(61),
    [sym_comment] = ACTIONS(59),
  },
  [9] = {
    [sym_int] = ACTIONS(63),
    [sym_comment] = ACTIONS(59),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_comment] = ACTIONS(59),
  },
  [11] = {
    [sym_rewrite_equations] = STATE(48),
    [sym_with_expressions] = STATE(49),
    [sym__newline] = ACTIONS(67),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(67),
    [anon_sym_rewrite] = ACTIONS(69),
    [anon_sym_with] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(67),
    [anon_sym_module] = ACTIONS(67),
  },
  [12] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [13] = {
    [sym__newline] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_rewrite] = ACTIONS(79),
    [anon_sym_with] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [14] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_rewrite] = ACTIONS(83),
    [anon_sym_with] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
  },
  [15] = {
    [sym_rhs] = STATE(54),
    [sym_where_clause] = STATE(55),
    [sym__newline] = ACTIONS(85),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_where] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(91),
  },
  [16] = {
    [sym__newline] = ACTIONS(93),
    [sym_comment] = ACTIONS(59),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_string] = ACTIONS(97),
    [sym_int] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_Prop] = ACTIONS(97),
    [anon_sym_Set] = ACTIONS(97),
    [anon_sym_quote] = ACTIONS(97),
    [anon_sym_quoteTerm] = ACTIONS(97),
    [anon_sym_unquote] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(97),
    [anon_sym_codata] = ACTIONS(97),
    [anon_sym_record] = ACTIONS(97),
    [anon_sym_instance] = ACTIONS(97),
    [anon_sym_field] = ACTIONS(97),
    [sym_pragma] = ACTIONS(97),
    [anon_sym_infix] = ACTIONS(97),
    [anon_sym_infixl] = ACTIONS(97),
    [anon_sym_infixr] = ACTIONS(97),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(59),
  },
  [19] = {
    [sym_literal] = STATE(14),
    [sym__application] = STATE(57),
    [sym__expr2] = STATE(57),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(20),
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
  [20] = {
    [sym_literal] = STATE(14),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(7),
    [sym_int] = ACTIONS(7),
    [sym_qualified_name] = ACTIONS(9),
    [anon_sym__] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(9),
    [anon_sym_Prop] = ACTIONS(9),
    [anon_sym_Set] = ACTIONS(9),
    [anon_sym_quote] = ACTIONS(9),
    [anon_sym_quoteTerm] = ACTIONS(9),
    [anon_sym_unquote] = ACTIONS(9),
  },
  [21] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(61),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(62),
    [sym_data_signature_only] = STATE(61),
    [sym_record] = STATE(62),
    [sym_record_signature_only] = STATE(61),
    [sym_field] = STATE(62),
    [sym__declaration] = STATE(61),
    [sym__declaration_block] = STATE(62),
    [sym_infix] = STATE(61),
    [sym_instance] = STATE(62),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(63),
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
    [sym_pragma] = ACTIONS(103),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [22] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [23] = {
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(107),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(109),
  },
  [24] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(70),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [25] = {
    [sym__newline] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_rewrite] = ACTIONS(121),
    [anon_sym_with] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(121),
  },
  [26] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(77),
    [sym__expr2] = STATE(77),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [27] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(81),
    [sym__expr2] = STATE(81),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [28] = {
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_comment] = ACTIONS(59),
  },
  [29] = {
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(133),
  },
  [30] = {
    [sym__const_right_arrow] = ACTIONS(133),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [31] = {
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [32] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
  [33] = {
    [sym__const_right_arrow] = ACTIONS(133),
    [sym_comment] = ACTIONS(59),
  },
  [34] = {
    [sym_literal] = STATE(88),
    [sym__application] = STATE(86),
    [sym__expr2] = STATE(86),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(87),
    [sym__atom_curly] = STATE(88),
    [sym__atom_no_curly] = STATE(88),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(89),
    [sym_string] = ACTIONS(135),
    [sym_int] = ACTIONS(135),
    [sym_qualified_name] = ACTIONS(137),
    [anon_sym__] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(137),
    [anon_sym_Prop] = ACTIONS(137),
    [anon_sym_Set] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_quoteTerm] = ACTIONS(137),
    [anon_sym_unquote] = ACTIONS(137),
  },
  [35] = {
    [sym_literal] = STATE(32),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(141),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
  },
  [36] = {
    [sym_typed_binding] = STATE(94),
    [aux_sym__typed_bindings1_repeat1] = STATE(94),
    [sym__const_right_arrow] = ACTIONS(143),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(149),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(151),
  },
  [37] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(104),
    [sym_typed_binding] = STATE(104),
    [sym__typed_untyped_binding1] = STATE(103),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(104),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_where] = ACTIONS(165),
  },
  [38] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(104),
    [sym_typed_binding] = STATE(104),
    [sym__typed_untyped_binding1] = STATE(106),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(104),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_where] = ACTIONS(165),
  },
  [39] = {
    [sym_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [40] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(104),
    [sym_typed_binding] = STATE(104),
    [sym__typed_untyped_binding1] = STATE(109),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(104),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_where] = ACTIONS(171),
  },
  [41] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(117),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(118),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_string] = ACTIONS(187),
    [sym_int] = ACTIONS(187),
    [sym_qualified_name] = ACTIONS(187),
    [anon_sym__] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(187),
    [anon_sym_Prop] = ACTIONS(187),
    [anon_sym_Set] = ACTIONS(187),
    [anon_sym_quote] = ACTIONS(187),
    [anon_sym_quoteTerm] = ACTIONS(187),
    [anon_sym_unquote] = ACTIONS(187),
    [anon_sym_data] = ACTIONS(187),
    [anon_sym_codata] = ACTIONS(187),
    [anon_sym_record] = ACTIONS(187),
    [anon_sym_instance] = ACTIONS(187),
    [anon_sym_field] = ACTIONS(187),
    [sym_pragma] = ACTIONS(187),
    [anon_sym_infix] = ACTIONS(187),
    [anon_sym_infixl] = ACTIONS(187),
    [anon_sym_infixr] = ACTIONS(187),
  },
  [43] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym__arg_names] = STATE(125),
    [sym_arg_name] = STATE(127),
    [sym__arg_type_signatures1] = STATE(126),
    [sym_arg_type_signature] = STATE(128),
    [aux_sym__arg_names_repeat1] = STATE(127),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(128),
    [sym_name] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(197),
    [anon_sym_overlap] = ACTIONS(199),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_string] = ACTIONS(203),
    [sym_int] = ACTIONS(203),
    [sym_qualified_name] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_Prop] = ACTIONS(203),
    [anon_sym_Set] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_quoteTerm] = ACTIONS(203),
    [anon_sym_unquote] = ACTIONS(203),
    [anon_sym_data] = ACTIONS(203),
    [anon_sym_codata] = ACTIONS(203),
    [anon_sym_record] = ACTIONS(203),
    [anon_sym_instance] = ACTIONS(203),
    [anon_sym_field] = ACTIONS(203),
    [sym_pragma] = ACTIONS(203),
    [anon_sym_infix] = ACTIONS(203),
    [anon_sym_infixl] = ACTIONS(203),
    [anon_sym_infixr] = ACTIONS(203),
  },
  [45] = {
    [sym_binding_name] = STATE(130),
    [aux_sym_infix_repeat1] = STATE(130),
    [sym_name] = ACTIONS(205),
    [anon_sym__] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
  },
  [46] = {
    [sym_literal] = STATE(135),
    [sym__expr1] = STATE(133),
    [sym__application] = STATE(133),
    [sym__expr2] = STATE(133),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(134),
    [sym__atom_curly] = STATE(135),
    [sym__atom_no_curly] = STATE(135),
    [aux_sym__expr1_repeat1] = STATE(136),
    [aux_sym__application_repeat1] = STATE(137),
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
  [47] = {
    [sym_literal] = STATE(142),
    [sym__expr1] = STATE(140),
    [sym__application] = STATE(140),
    [sym__expr2] = STATE(140),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(141),
    [sym__atom_curly] = STATE(142),
    [sym__atom_no_curly] = STATE(142),
    [aux_sym__expr1_repeat1] = STATE(143),
    [aux_sym__application_repeat1] = STATE(144),
    [sym_string] = ACTIONS(213),
    [sym_int] = ACTIONS(213),
    [sym_qualified_name] = ACTIONS(215),
    [anon_sym__] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(217),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_Prop] = ACTIONS(215),
    [anon_sym_Set] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_quoteTerm] = ACTIONS(215),
    [anon_sym_unquote] = ACTIONS(215),
  },
  [48] = {
    [sym_with_expressions] = STATE(145),
    [sym__newline] = ACTIONS(219),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_with] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(219),
    [anon_sym_module] = ACTIONS(219),
  },
  [49] = {
    [sym__newline] = ACTIONS(219),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_where] = ACTIONS(219),
    [anon_sym_module] = ACTIONS(219),
  },
  [50] = {
    [sym_string] = ACTIONS(221),
    [sym_int] = ACTIONS(221),
    [sym_qualified_name] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_Prop] = ACTIONS(221),
    [anon_sym_Set] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_quoteTerm] = ACTIONS(221),
    [anon_sym_unquote] = ACTIONS(221),
  },
  [51] = {
    [sym_literal] = STATE(152),
    [sym_expr] = STATE(148),
    [sym__expr1] = STATE(149),
    [sym__application] = STATE(149),
    [sym__expr2] = STATE(149),
    [sym__atoms1] = STATE(150),
    [sym_atom] = STATE(151),
    [sym__atom_curly] = STATE(152),
    [sym__atom_no_curly] = STATE(152),
    [sym__typed_bindings1] = STATE(153),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(154),
    [aux_sym__application_repeat1] = STATE(155),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(223),
    [sym_int] = ACTIONS(223),
    [sym_qualified_name] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_Prop] = ACTIONS(225),
    [anon_sym_Set] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_quoteTerm] = ACTIONS(225),
    [anon_sym_unquote] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [52] = {
    [sym__declarations0] = STATE(157),
    [sym__newline] = ACTIONS(229),
    [sym__indent] = ACTIONS(231),
    [sym_comment] = ACTIONS(59),
  },
  [53] = {
    [sym_anonymous_name] = STATE(158),
    [sym_name] = ACTIONS(233),
    [anon_sym__] = ACTIONS(235),
    [sym_comment] = ACTIONS(13),
  },
  [54] = {
    [sym_where_clause] = STATE(160),
    [sym__newline] = ACTIONS(237),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(91),
  },
  [55] = {
    [sym__newline] = ACTIONS(237),
    [sym_comment] = ACTIONS(59),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
    [anon_sym_infix] = ACTIONS(241),
    [anon_sym_infixl] = ACTIONS(241),
    [anon_sym_infixr] = ACTIONS(241),
  },
  [57] = {
    [sym__newline] = ACTIONS(243),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_rewrite] = ACTIONS(243),
    [anon_sym_with] = ACTIONS(243),
    [anon_sym_where] = ACTIONS(243),
    [anon_sym_module] = ACTIONS(243),
  },
  [58] = {
    [sym_literal] = STATE(163),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(164),
    [sym__atom_curly] = STATE(163),
    [sym__atom_no_curly] = STATE(163),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(164),
    [sym_string] = ACTIONS(245),
    [sym_int] = ACTIONS(245),
    [sym_qualified_name] = ACTIONS(248),
    [anon_sym__] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(251),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_Prop] = ACTIONS(248),
    [anon_sym_Set] = ACTIONS(248),
    [anon_sym_quote] = ACTIONS(248),
    [anon_sym_quoteTerm] = ACTIONS(248),
    [anon_sym_unquote] = ACTIONS(248),
  },
  [59] = {
    [sym__newline] = ACTIONS(254),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_rewrite] = ACTIONS(254),
    [anon_sym_with] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(254),
  },
  [60] = {
    [sym_literal] = STATE(163),
    [sym_atom] = STATE(60),
    [sym__atom_curly] = STATE(163),
    [sym__atom_no_curly] = STATE(163),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(256),
    [sym_int] = ACTIONS(256),
    [sym_qualified_name] = ACTIONS(259),
    [anon_sym__] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(262),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(259),
    [anon_sym_Prop] = ACTIONS(259),
    [anon_sym_Set] = ACTIONS(259),
    [anon_sym_quote] = ACTIONS(259),
    [anon_sym_quoteTerm] = ACTIONS(259),
    [anon_sym_unquote] = ACTIONS(259),
  },
  [61] = {
    [sym__newline] = ACTIONS(267),
    [sym_comment] = ACTIONS(59),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(97),
    [sym_int] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_Prop] = ACTIONS(97),
    [anon_sym_Set] = ACTIONS(97),
    [anon_sym_quote] = ACTIONS(97),
    [anon_sym_quoteTerm] = ACTIONS(97),
    [anon_sym_unquote] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(97),
    [anon_sym_codata] = ACTIONS(97),
    [anon_sym_record] = ACTIONS(97),
    [anon_sym_instance] = ACTIONS(97),
    [anon_sym_field] = ACTIONS(97),
    [sym_pragma] = ACTIONS(97),
    [anon_sym_infix] = ACTIONS(97),
    [anon_sym_infixl] = ACTIONS(97),
    [anon_sym_infixr] = ACTIONS(97),
  },
  [63] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(166),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(63),
    [sym_data_signature_only] = STATE(166),
    [sym_record] = STATE(63),
    [sym_record_signature_only] = STATE(166),
    [sym_field] = STATE(63),
    [sym__declaration] = STATE(166),
    [sym__declaration_block] = STATE(63),
    [sym_infix] = STATE(166),
    [sym_instance] = STATE(63),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(63),
    [sym_string] = ACTIONS(269),
    [sym_int] = ACTIONS(269),
    [sym_qualified_name] = ACTIONS(272),
    [anon_sym__] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(275),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(272),
    [anon_sym_Prop] = ACTIONS(272),
    [anon_sym_Set] = ACTIONS(272),
    [anon_sym_quote] = ACTIONS(272),
    [anon_sym_quoteTerm] = ACTIONS(272),
    [anon_sym_unquote] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(278),
    [anon_sym_codata] = ACTIONS(281),
    [anon_sym_record] = ACTIONS(284),
    [anon_sym_instance] = ACTIONS(287),
    [anon_sym_field] = ACTIONS(290),
    [sym_pragma] = ACTIONS(293),
    [anon_sym_infix] = ACTIONS(296),
    [anon_sym_infixl] = ACTIONS(296),
    [anon_sym_infixr] = ACTIONS(296),
  },
  [64] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(167),
    [sym__expr2] = STATE(167),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [65] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(168),
    [sym__expr2] = STATE(168),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [66] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(169),
    [sym__expr2] = STATE(169),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [67] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [68] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(171),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [69] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [70] = {
    [anon_sym_RBRACE] = ACTIONS(301),
    [sym_comment] = ACTIONS(59),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(303),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(305),
  },
  [72] = {
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [73] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
  },
  [74] = {
    [sym_literal] = STATE(73),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(307),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
  },
  [75] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [76] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(176),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [77] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(311),
  },
  [78] = {
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [79] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
  },
  [80] = {
    [sym_literal] = STATE(79),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(178),
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
  [81] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(313),
  },
  [82] = {
    [sym__newline] = ACTIONS(315),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_rewrite] = ACTIONS(317),
    [anon_sym_with] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(317),
  },
  [83] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(180),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [84] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [85] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(182),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [86] = {
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_where] = ACTIONS(243),
  },
  [87] = {
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [88] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
  [89] = {
    [sym_literal] = STATE(88),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(87),
    [sym__atom_curly] = STATE(88),
    [sym__atom_no_curly] = STATE(88),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(135),
    [sym_int] = ACTIONS(135),
    [sym_qualified_name] = ACTIONS(137),
    [anon_sym__] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(139),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(137),
    [anon_sym_Prop] = ACTIONS(137),
    [anon_sym_Set] = ACTIONS(137),
    [anon_sym_quote] = ACTIONS(137),
    [anon_sym_quoteTerm] = ACTIONS(137),
    [anon_sym_unquote] = ACTIONS(137),
  },
  [90] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(70),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
  },
  [92] = {
    [sym_literal] = STATE(185),
    [sym_atom] = STATE(92),
    [sym__atom_curly] = STATE(185),
    [sym__atom_no_curly] = STATE(185),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(265),
    [sym_string] = ACTIONS(321),
    [sym_int] = ACTIONS(321),
    [sym_qualified_name] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_Prop] = ACTIONS(324),
    [anon_sym_Set] = ACTIONS(324),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_quoteTerm] = ACTIONS(324),
    [anon_sym_unquote] = ACTIONS(324),
  },
  [93] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(186),
    [sym__expr2] = STATE(186),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [94] = {
    [sym_typed_binding] = STATE(94),
    [aux_sym__typed_bindings1_repeat1] = STATE(94),
    [sym__const_right_arrow] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_DOT_DOT] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(341),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(344),
  },
  [95] = {
    [sym_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(347),
    [anon_sym_DOT_DOT] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(347),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_where] = ACTIONS(347),
  },
  [96] = {
    [sym_binding_name] = STATE(190),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(351),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(353),
  },
  [97] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(191),
    [sym__expr2] = STATE(191),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [98] = {
    [sym_literal] = STATE(196),
    [sym__application] = STATE(194),
    [sym__expr2] = STATE(194),
    [sym_atom] = STATE(195),
    [sym__atom_curly] = STATE(196),
    [sym__atom_no_curly] = STATE(196),
    [aux_sym__application_repeat1] = STATE(197),
    [sym_string] = ACTIONS(355),
    [sym_int] = ACTIONS(355),
    [sym_qualified_name] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_Prop] = ACTIONS(357),
    [anon_sym_Set] = ACTIONS(357),
    [anon_sym_quote] = ACTIONS(357),
    [anon_sym_quoteTerm] = ACTIONS(357),
    [anon_sym_unquote] = ACTIONS(357),
  },
  [99] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(198),
    [sym__expr2] = STATE(198),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [100] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(201),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [101] = {
    [sym__declarations0] = STATE(209),
    [sym__newline] = ACTIONS(367),
    [sym__indent] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [102] = {
    [sym_name] = ACTIONS(369),
    [anon_sym__] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(369),
    [anon_sym_DOT_DOT] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(369),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_where] = ACTIONS(369),
  },
  [103] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_where] = ACTIONS(373),
  },
  [104] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(212),
    [sym_typed_binding] = STATE(212),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(212),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_where] = ACTIONS(375),
  },
  [105] = {
    [sym_literal] = STATE(219),
    [sym_expr] = STATE(215),
    [sym__expr1] = STATE(216),
    [sym__application] = STATE(216),
    [sym__expr2] = STATE(216),
    [sym__atoms1] = STATE(217),
    [sym_atom] = STATE(218),
    [sym__atom_curly] = STATE(219),
    [sym__atom_no_curly] = STATE(219),
    [sym__typed_bindings1] = STATE(220),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(221),
    [aux_sym__application_repeat1] = STATE(222),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(377),
    [sym_int] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_Prop] = ACTIONS(379),
    [anon_sym_Set] = ACTIONS(379),
    [anon_sym_quote] = ACTIONS(379),
    [anon_sym_quoteTerm] = ACTIONS(379),
    [anon_sym_unquote] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [106] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_where] = ACTIONS(373),
  },
  [107] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(224),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [108] = {
    [sym_record_declarations_block] = STATE(226),
    [sym__indent] = ACTIONS(385),
    [ts_builtin_sym_end] = ACTIONS(387),
    [sym_string] = ACTIONS(389),
    [sym_int] = ACTIONS(389),
    [sym_qualified_name] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_Prop] = ACTIONS(389),
    [anon_sym_Set] = ACTIONS(389),
    [anon_sym_quote] = ACTIONS(389),
    [anon_sym_quoteTerm] = ACTIONS(389),
    [anon_sym_unquote] = ACTIONS(389),
    [anon_sym_data] = ACTIONS(389),
    [anon_sym_codata] = ACTIONS(389),
    [anon_sym_record] = ACTIONS(389),
    [anon_sym_instance] = ACTIONS(389),
    [anon_sym_field] = ACTIONS(389),
    [sym_pragma] = ACTIONS(389),
    [anon_sym_infix] = ACTIONS(389),
    [anon_sym_infixl] = ACTIONS(389),
    [anon_sym_infixr] = ACTIONS(389),
  },
  [109] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_where] = ACTIONS(393),
  },
  [110] = {
    [sym_name] = ACTIONS(395),
    [sym_comment] = ACTIONS(13),
  },
  [111] = {
    [sym_name] = ACTIONS(397),
    [sym_comment] = ACTIONS(13),
  },
  [112] = {
    [sym_literal] = STATE(231),
    [sym__atom_no_curly] = STATE(231),
    [sym_string] = ACTIONS(51),
    [sym_int] = ACTIONS(51),
    [sym_qualified_name] = ACTIONS(399),
    [anon_sym__] = ACTIONS(399),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(399),
    [anon_sym_Prop] = ACTIONS(399),
    [anon_sym_Set] = ACTIONS(399),
    [anon_sym_quote] = ACTIONS(399),
    [anon_sym_quoteTerm] = ACTIONS(399),
    [anon_sym_unquote] = ACTIONS(399),
  },
  [113] = {
    [sym__declarations0] = STATE(233),
    [sym__newline] = ACTIONS(401),
    [sym__indent] = ACTIONS(403),
    [sym_comment] = ACTIONS(59),
  },
  [114] = {
    [sym__arg_type_signatures_block] = STATE(235),
    [sym__indent] = ACTIONS(405),
    [sym_comment] = ACTIONS(59),
  },
  [115] = {
    [sym__newline] = ACTIONS(407),
    [sym_comment] = ACTIONS(59),
  },
  [116] = {
    [sym__dedent] = ACTIONS(95),
    [sym_string] = ACTIONS(97),
    [sym_int] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_Prop] = ACTIONS(97),
    [anon_sym_Set] = ACTIONS(97),
    [anon_sym_quote] = ACTIONS(97),
    [anon_sym_quoteTerm] = ACTIONS(97),
    [anon_sym_unquote] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(97),
    [anon_sym_codata] = ACTIONS(97),
    [anon_sym_record] = ACTIONS(97),
    [anon_sym_instance] = ACTIONS(97),
    [anon_sym_field] = ACTIONS(97),
    [sym_pragma] = ACTIONS(97),
    [anon_sym_infix] = ACTIONS(97),
    [anon_sym_infixl] = ACTIONS(97),
    [anon_sym_infixr] = ACTIONS(97),
  },
  [117] = {
    [sym__dedent] = ACTIONS(409),
    [sym_comment] = ACTIONS(59),
  },
  [118] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(238),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(239),
    [sym_data_signature_only] = STATE(238),
    [sym_record] = STATE(239),
    [sym_record_signature_only] = STATE(238),
    [sym_field] = STATE(239),
    [sym__declaration] = STATE(238),
    [sym__declaration_block] = STATE(239),
    [sym_infix] = STATE(238),
    [sym_instance] = STATE(239),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(63),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(411),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [119] = {
    [sym_name] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(415),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(13),
  },
  [120] = {
    [sym__maybe_dotted_names1] = STATE(244),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(245),
    [sym_name] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(421),
    [anon_sym_DOT_DOT] = ACTIONS(421),
    [sym_comment] = ACTIONS(13),
  },
  [121] = {
    [sym__maybe_dotted_names1] = STATE(247),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(248),
    [sym_name] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DOT_DOT] = ACTIONS(425),
    [sym_comment] = ACTIONS(13),
  },
  [122] = {
    [sym__arg_type_signatures_block] = STATE(250),
    [sym__indent] = ACTIONS(427),
    [sym_comment] = ACTIONS(59),
  },
  [123] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym__arg_names] = STATE(251),
    [sym_arg_name] = STATE(127),
    [aux_sym__arg_names_repeat1] = STATE(127),
    [sym_name] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
  },
  [124] = {
    [sym_name] = ACTIONS(429),
    [anon_sym_DOT] = ACTIONS(429),
    [anon_sym_DOT_DOT] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(429),
  },
  [125] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(431),
  },
  [126] = {
    [sym__dedent] = ACTIONS(433),
    [sym_comment] = ACTIONS(59),
  },
  [127] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym_arg_name] = STATE(254),
    [aux_sym__arg_names_repeat1] = STATE(254),
    [sym_name] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(435),
  },
  [128] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym__arg_names] = STATE(125),
    [sym_arg_name] = STATE(127),
    [sym_arg_type_signature] = STATE(255),
    [aux_sym__arg_names_repeat1] = STATE(127),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(255),
    [sym__dedent] = ACTIONS(437),
    [sym_name] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(197),
    [anon_sym_overlap] = ACTIONS(199),
  },
  [129] = {
    [sym__newline] = ACTIONS(439),
    [sym_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [sym_comment] = ACTIONS(13),
  },
  [130] = {
    [sym_binding_name] = STATE(256),
    [aux_sym_infix_repeat1] = STATE(256),
    [sym__newline] = ACTIONS(441),
    [sym_name] = ACTIONS(205),
    [anon_sym__] = ACTIONS(205),
    [sym_comment] = ACTIONS(13),
  },
  [131] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_with] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
  },
  [132] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(258),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [133] = {
    [sym__newline] = ACTIONS(445),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_with] = ACTIONS(445),
    [anon_sym_where] = ACTIONS(445),
    [anon_sym_module] = ACTIONS(445),
  },
  [134] = {
    [sym__newline] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_with] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [135] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_with] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
  },
  [136] = {
    [sym_literal] = STATE(135),
    [sym__application] = STATE(57),
    [sym__expr2] = STATE(57),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(134),
    [sym__atom_curly] = STATE(135),
    [sym__atom_no_curly] = STATE(135),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(137),
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
  [137] = {
    [sym_literal] = STATE(135),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(134),
    [sym__atom_curly] = STATE(135),
    [sym__atom_no_curly] = STATE(135),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(207),
    [sym_int] = ACTIONS(207),
    [sym_qualified_name] = ACTIONS(209),
    [anon_sym__] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(211),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_Prop] = ACTIONS(209),
    [anon_sym_Set] = ACTIONS(209),
    [anon_sym_quote] = ACTIONS(209),
    [anon_sym_quoteTerm] = ACTIONS(209),
    [anon_sym_unquote] = ACTIONS(209),
  },
  [138] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
  },
  [139] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(260),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [140] = {
    [sym__newline] = ACTIONS(449),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_where] = ACTIONS(449),
    [anon_sym_module] = ACTIONS(449),
  },
  [141] = {
    [sym__newline] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [142] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
  },
  [143] = {
    [sym_literal] = STATE(142),
    [sym__application] = STATE(57),
    [sym__expr2] = STATE(57),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(141),
    [sym__atom_curly] = STATE(142),
    [sym__atom_no_curly] = STATE(142),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(144),
    [sym_string] = ACTIONS(213),
    [sym_int] = ACTIONS(213),
    [sym_qualified_name] = ACTIONS(215),
    [anon_sym__] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(217),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_Prop] = ACTIONS(215),
    [anon_sym_Set] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_quoteTerm] = ACTIONS(215),
    [anon_sym_unquote] = ACTIONS(215),
  },
  [144] = {
    [sym_literal] = STATE(142),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(141),
    [sym__atom_curly] = STATE(142),
    [sym__atom_no_curly] = STATE(142),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(213),
    [sym_int] = ACTIONS(213),
    [sym_qualified_name] = ACTIONS(215),
    [anon_sym__] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(217),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_Prop] = ACTIONS(215),
    [anon_sym_Set] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_quoteTerm] = ACTIONS(215),
    [anon_sym_unquote] = ACTIONS(215),
  },
  [145] = {
    [sym__newline] = ACTIONS(451),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_where] = ACTIONS(451),
    [anon_sym_module] = ACTIONS(451),
  },
  [146] = {
    [sym__newline] = ACTIONS(29),
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
  },
  [147] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(262),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [148] = {
    [sym__newline] = ACTIONS(455),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(455),
    [anon_sym_module] = ACTIONS(455),
  },
  [149] = {
    [sym__newline] = ACTIONS(131),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_where] = ACTIONS(131),
    [anon_sym_module] = ACTIONS(131),
  },
  [150] = {
    [sym__const_right_arrow] = ACTIONS(457),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [151] = {
    [sym__newline] = ACTIONS(75),
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [152] = {
    [sym__newline] = ACTIONS(81),
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
  },
  [153] = {
    [sym__const_right_arrow] = ACTIONS(457),
    [sym_comment] = ACTIONS(59),
  },
  [154] = {
    [sym_literal] = STATE(267),
    [sym__application] = STATE(57),
    [sym__expr2] = STATE(57),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(266),
    [sym__atom_curly] = STATE(267),
    [sym__atom_no_curly] = STATE(267),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(268),
    [sym_string] = ACTIONS(459),
    [sym_int] = ACTIONS(459),
    [sym_qualified_name] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_Prop] = ACTIONS(461),
    [anon_sym_Set] = ACTIONS(461),
    [anon_sym_quote] = ACTIONS(461),
    [anon_sym_quoteTerm] = ACTIONS(461),
    [anon_sym_unquote] = ACTIONS(461),
  },
  [155] = {
    [sym_literal] = STATE(152),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(151),
    [sym__atom_curly] = STATE(152),
    [sym__atom_no_curly] = STATE(152),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(223),
    [sym_int] = ACTIONS(223),
    [sym_qualified_name] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(465),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_Prop] = ACTIONS(225),
    [anon_sym_Set] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_quoteTerm] = ACTIONS(225),
    [anon_sym_unquote] = ACTIONS(225),
  },
  [156] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(270),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(118),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [157] = {
    [sym__newline] = ACTIONS(467),
    [sym_comment] = ACTIONS(59),
  },
  [158] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(469),
  },
  [159] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(471),
  },
  [160] = {
    [sym__newline] = ACTIONS(473),
    [sym_comment] = ACTIONS(59),
  },
  [161] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
  },
  [162] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(273),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [163] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
  },
  [164] = {
    [sym_literal] = STATE(163),
    [sym_atom] = STATE(60),
    [sym__atom_curly] = STATE(163),
    [sym__atom_no_curly] = STATE(163),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(477),
    [sym_int] = ACTIONS(477),
    [sym_qualified_name] = ACTIONS(479),
    [anon_sym__] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(479),
    [anon_sym_Prop] = ACTIONS(479),
    [anon_sym_Set] = ACTIONS(479),
    [anon_sym_quote] = ACTIONS(479),
    [anon_sym_quoteTerm] = ACTIONS(479),
    [anon_sym_unquote] = ACTIONS(479),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
    [anon_sym_infix] = ACTIONS(241),
    [anon_sym_infixl] = ACTIONS(241),
    [anon_sym_infixr] = ACTIONS(241),
  },
  [166] = {
    [sym__newline] = ACTIONS(485),
    [sym_comment] = ACTIONS(59),
  },
  [167] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(487),
  },
  [168] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(489),
  },
  [169] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(491),
  },
  [170] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
  },
  [171] = {
    [anon_sym_RBRACE] = ACTIONS(493),
    [sym_comment] = ACTIONS(59),
  },
  [172] = {
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [173] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(279),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [174] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(171),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [175] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
  },
  [176] = {
    [anon_sym_RBRACE] = ACTIONS(495),
    [sym_comment] = ACTIONS(59),
  },
  [177] = {
    [sym_literal] = STATE(287),
    [sym_expr] = STATE(283),
    [sym__expr1] = STATE(284),
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(284),
    [sym__atoms1] = STATE(285),
    [sym_atom] = STATE(286),
    [sym__atom_curly] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [sym__typed_bindings1] = STATE(288),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(289),
    [aux_sym__application_repeat1] = STATE(290),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(497),
    [sym_int] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_Prop] = ACTIONS(499),
    [anon_sym_Set] = ACTIONS(499),
    [anon_sym_quote] = ACTIONS(499),
    [anon_sym_quoteTerm] = ACTIONS(499),
    [anon_sym_unquote] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [178] = {
    [sym_literal] = STATE(293),
    [sym_atom] = STATE(178),
    [sym__atom_curly] = STATE(293),
    [sym__atom_no_curly] = STATE(293),
    [aux_sym__application_repeat1] = STATE(178),
    [sym_string] = ACTIONS(503),
    [sym_int] = ACTIONS(503),
    [sym_qualified_name] = ACTIONS(506),
    [anon_sym__] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(509),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(506),
    [anon_sym_Prop] = ACTIONS(506),
    [anon_sym_Set] = ACTIONS(506),
    [anon_sym_quote] = ACTIONS(506),
    [anon_sym_quoteTerm] = ACTIONS(506),
    [anon_sym_unquote] = ACTIONS(506),
  },
  [179] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(294),
    [sym__expr1] = STATE(295),
    [sym__application] = STATE(295),
    [sym__expr2] = STATE(295),
    [sym__atoms1] = STATE(296),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(297),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [180] = {
    [anon_sym_RBRACE] = ACTIONS(512),
    [sym_comment] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_where] = ACTIONS(512),
  },
  [181] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(514),
    [sym_comment] = ACTIONS(59),
  },
  [183] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
  },
  [184] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(300),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [185] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
  },
  [186] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(305),
  },
  [187] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(301),
    [sym__expr2] = STATE(301),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [188] = {
    [sym_literal] = STATE(196),
    [sym__application] = STATE(302),
    [sym__expr2] = STATE(302),
    [sym_atom] = STATE(195),
    [sym__atom_curly] = STATE(196),
    [sym__atom_no_curly] = STATE(196),
    [aux_sym__application_repeat1] = STATE(197),
    [sym_string] = ACTIONS(355),
    [sym_int] = ACTIONS(355),
    [sym_qualified_name] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_Prop] = ACTIONS(357),
    [anon_sym_Set] = ACTIONS(357),
    [anon_sym_quote] = ACTIONS(357),
    [anon_sym_quoteTerm] = ACTIONS(357),
    [anon_sym_unquote] = ACTIONS(357),
  },
  [189] = {
    [sym_literal] = STATE(79),
    [sym__application] = STATE(303),
    [sym__expr2] = STATE(303),
    [sym_atom] = STATE(78),
    [sym__atom_curly] = STATE(79),
    [sym__atom_no_curly] = STATE(79),
    [aux_sym__application_repeat1] = STATE(80),
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
  [190] = {
    [sym_name] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [anon_sym_DOT] = ACTIONS(518),
    [anon_sym_DOT_DOT] = ACTIONS(518),
    [anon_sym_LBRACE] = ACTIONS(518),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(518),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(518),
    [anon_sym_COLON] = ACTIONS(518),
    [anon_sym_where] = ACTIONS(518),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(520),
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(522),
  },
  [192] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
  },
  [193] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(307),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [194] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(520),
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(526),
  },
  [195] = {
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
  },
  [196] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
  },
  [197] = {
    [sym_literal] = STATE(196),
    [sym__expr2] = STATE(309),
    [sym_atom] = STATE(195),
    [sym__atom_curly] = STATE(196),
    [sym__atom_no_curly] = STATE(196),
    [aux_sym__application_repeat1] = STATE(178),
    [sym_string] = ACTIONS(355),
    [sym_int] = ACTIONS(355),
    [sym_qualified_name] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(359),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_Prop] = ACTIONS(357),
    [anon_sym_Set] = ACTIONS(357),
    [anon_sym_quote] = ACTIONS(357),
    [anon_sym_quoteTerm] = ACTIONS(357),
    [anon_sym_unquote] = ACTIONS(357),
  },
  [198] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(528),
  },
  [199] = {
    [sym__newline] = ACTIONS(29),
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [200] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(312),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(530),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [201] = {
    [sym__newline] = ACTIONS(532),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(534),
  },
  [202] = {
    [sym__newline] = ACTIONS(131),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(536),
    [anon_sym_where] = ACTIONS(131),
  },
  [203] = {
    [sym__const_right_arrow] = ACTIONS(536),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [204] = {
    [sym__newline] = ACTIONS(75),
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
  },
  [205] = {
    [sym__newline] = ACTIONS(81),
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
  },
  [206] = {
    [sym__const_right_arrow] = ACTIONS(536),
    [sym_comment] = ACTIONS(59),
  },
  [207] = {
    [sym_literal] = STATE(318),
    [sym__application] = STATE(57),
    [sym__expr2] = STATE(57),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(317),
    [sym__atom_curly] = STATE(318),
    [sym__atom_no_curly] = STATE(318),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(319),
    [sym_string] = ACTIONS(538),
    [sym_int] = ACTIONS(538),
    [sym_qualified_name] = ACTIONS(540),
    [anon_sym__] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(542),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(540),
    [anon_sym_Prop] = ACTIONS(540),
    [anon_sym_Set] = ACTIONS(540),
    [anon_sym_quote] = ACTIONS(540),
    [anon_sym_quoteTerm] = ACTIONS(540),
    [anon_sym_unquote] = ACTIONS(540),
  },
  [208] = {
    [sym_literal] = STATE(205),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(544),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [sym_string] = ACTIONS(548),
    [sym_int] = ACTIONS(548),
    [sym_qualified_name] = ACTIONS(548),
    [anon_sym__] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(548),
    [anon_sym_Prop] = ACTIONS(548),
    [anon_sym_Set] = ACTIONS(548),
    [anon_sym_quote] = ACTIONS(548),
    [anon_sym_quoteTerm] = ACTIONS(548),
    [anon_sym_unquote] = ACTIONS(548),
    [anon_sym_data] = ACTIONS(548),
    [anon_sym_codata] = ACTIONS(548),
    [anon_sym_record] = ACTIONS(548),
    [anon_sym_instance] = ACTIONS(548),
    [anon_sym_field] = ACTIONS(548),
    [sym_pragma] = ACTIONS(548),
    [anon_sym_infix] = ACTIONS(548),
    [anon_sym_infixl] = ACTIONS(548),
    [anon_sym_infixr] = ACTIONS(548),
  },
  [210] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(321),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [211] = {
    [sym__declarations0] = STATE(322),
    [sym__newline] = ACTIONS(550),
    [sym__indent] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [212] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(212),
    [sym_typed_binding] = STATE(212),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(212),
    [sym_name] = ACTIONS(552),
    [anon_sym__] = ACTIONS(552),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_DOT_DOT] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(558),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(561),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_where] = ACTIONS(567),
  },
  [213] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [214] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(324),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [215] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(534),
  },
  [216] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(571),
    [anon_sym_where] = ACTIONS(131),
  },
  [217] = {
    [sym__const_right_arrow] = ACTIONS(571),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [218] = {
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
  },
  [219] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
  },
  [220] = {
    [sym__const_right_arrow] = ACTIONS(571),
    [sym_comment] = ACTIONS(59),
  },
  [221] = {
    [sym_literal] = STATE(329),
    [sym__application] = STATE(86),
    [sym__expr2] = STATE(86),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(328),
    [sym__atom_curly] = STATE(329),
    [sym__atom_no_curly] = STATE(329),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(330),
    [sym_string] = ACTIONS(573),
    [sym_int] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_Prop] = ACTIONS(575),
    [anon_sym_Set] = ACTIONS(575),
    [anon_sym_quote] = ACTIONS(575),
    [anon_sym_quoteTerm] = ACTIONS(575),
    [anon_sym_unquote] = ACTIONS(575),
  },
  [222] = {
    [sym_literal] = STATE(219),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(218),
    [sym__atom_curly] = STATE(219),
    [sym__atom_no_curly] = STATE(219),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(377),
    [sym_int] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(579),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_Prop] = ACTIONS(379),
    [anon_sym_Set] = ACTIONS(379),
    [anon_sym_quote] = ACTIONS(379),
    [anon_sym_quoteTerm] = ACTIONS(379),
    [anon_sym_unquote] = ACTIONS(379),
  },
  [223] = {
    [sym_literal] = STATE(219),
    [sym_expr] = STATE(332),
    [sym__expr1] = STATE(216),
    [sym__application] = STATE(216),
    [sym__expr2] = STATE(216),
    [sym__atoms1] = STATE(217),
    [sym_atom] = STATE(218),
    [sym__atom_curly] = STATE(219),
    [sym__atom_no_curly] = STATE(219),
    [sym__typed_bindings1] = STATE(220),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(221),
    [aux_sym__application_repeat1] = STATE(222),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(377),
    [sym_int] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_Prop] = ACTIONS(379),
    [anon_sym_Set] = ACTIONS(379),
    [anon_sym_quote] = ACTIONS(379),
    [anon_sym_quoteTerm] = ACTIONS(379),
    [anon_sym_unquote] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [224] = {
    [sym__newline] = ACTIONS(581),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(583),
  },
  [225] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym__record_directives1] = STATE(339),
    [sym_record_constructor_instance] = STATE(340),
    [sym_record_constructor] = STATE(341),
    [sym__record_directive] = STATE(341),
    [sym_record_induction] = STATE(341),
    [sym_record_eta] = STATE(341),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(342),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__record_directives1_repeat1] = STATE(343),
    [aux_sym__declarations1_repeat1] = STATE(118),
    [sym__dedent] = ACTIONS(585),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(587),
    [anon_sym_constructor] = ACTIONS(589),
    [anon_sym_inductive] = ACTIONS(591),
    [anon_sym_coinductive] = ACTIONS(591),
    [anon_sym_eta_DASHequality] = ACTIONS(593),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(593),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(595),
    [sym_string] = ACTIONS(597),
    [sym_int] = ACTIONS(597),
    [sym_qualified_name] = ACTIONS(597),
    [anon_sym__] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_Prop] = ACTIONS(597),
    [anon_sym_Set] = ACTIONS(597),
    [anon_sym_quote] = ACTIONS(597),
    [anon_sym_quoteTerm] = ACTIONS(597),
    [anon_sym_unquote] = ACTIONS(597),
    [anon_sym_data] = ACTIONS(597),
    [anon_sym_codata] = ACTIONS(597),
    [anon_sym_record] = ACTIONS(597),
    [anon_sym_instance] = ACTIONS(597),
    [anon_sym_field] = ACTIONS(597),
    [sym_pragma] = ACTIONS(597),
    [anon_sym_infix] = ACTIONS(597),
    [anon_sym_infixl] = ACTIONS(597),
    [anon_sym_infixr] = ACTIONS(597),
  },
  [227] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(344),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [228] = {
    [sym_record_declarations_block] = STATE(345),
    [sym__indent] = ACTIONS(385),
    [ts_builtin_sym_end] = ACTIONS(595),
    [sym_string] = ACTIONS(597),
    [sym_int] = ACTIONS(597),
    [sym_qualified_name] = ACTIONS(597),
    [anon_sym__] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_Prop] = ACTIONS(597),
    [anon_sym_Set] = ACTIONS(597),
    [anon_sym_quote] = ACTIONS(597),
    [anon_sym_quoteTerm] = ACTIONS(597),
    [anon_sym_unquote] = ACTIONS(597),
    [anon_sym_data] = ACTIONS(597),
    [anon_sym_codata] = ACTIONS(597),
    [anon_sym_record] = ACTIONS(597),
    [anon_sym_instance] = ACTIONS(597),
    [anon_sym_field] = ACTIONS(597),
    [sym_pragma] = ACTIONS(597),
    [anon_sym_infix] = ACTIONS(597),
    [anon_sym_infixl] = ACTIONS(597),
    [anon_sym_infixr] = ACTIONS(597),
  },
  [229] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(104),
    [sym_typed_binding] = STATE(104),
    [sym__typed_untyped_binding1] = STATE(348),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(104),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_where] = ACTIONS(601),
  },
  [230] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(104),
    [sym_typed_binding] = STATE(104),
    [sym__typed_untyped_binding1] = STATE(350),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(104),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(603),
    [anon_sym_where] = ACTIONS(601),
  },
  [231] = {
    [sym_binding_name] = STATE(102),
    [sym_untyped_binding] = STATE(104),
    [sym_typed_binding] = STATE(104),
    [sym__typed_untyped_binding1] = STATE(353),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(104),
    [sym_name] = ACTIONS(153),
    [anon_sym__] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(159),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_where] = ACTIONS(607),
  },
  [232] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(354),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(118),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [233] = {
    [sym__dedent] = ACTIONS(185),
    [sym_string] = ACTIONS(187),
    [sym_int] = ACTIONS(187),
    [sym_qualified_name] = ACTIONS(187),
    [anon_sym__] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(187),
    [anon_sym_Prop] = ACTIONS(187),
    [anon_sym_Set] = ACTIONS(187),
    [anon_sym_quote] = ACTIONS(187),
    [anon_sym_quoteTerm] = ACTIONS(187),
    [anon_sym_unquote] = ACTIONS(187),
    [anon_sym_data] = ACTIONS(187),
    [anon_sym_codata] = ACTIONS(187),
    [anon_sym_record] = ACTIONS(187),
    [anon_sym_instance] = ACTIONS(187),
    [anon_sym_field] = ACTIONS(187),
    [sym_pragma] = ACTIONS(187),
    [anon_sym_infix] = ACTIONS(187),
    [anon_sym_infixl] = ACTIONS(187),
    [anon_sym_infixr] = ACTIONS(187),
  },
  [234] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym__arg_names] = STATE(125),
    [sym_arg_name] = STATE(127),
    [sym__arg_type_signatures1] = STATE(355),
    [sym_arg_type_signature] = STATE(128),
    [aux_sym__arg_names_repeat1] = STATE(127),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(128),
    [sym_name] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(197),
    [anon_sym_overlap] = ACTIONS(199),
  },
  [235] = {
    [sym__dedent] = ACTIONS(201),
    [sym_string] = ACTIONS(203),
    [sym_int] = ACTIONS(203),
    [sym_qualified_name] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_Prop] = ACTIONS(203),
    [anon_sym_Set] = ACTIONS(203),
    [anon_sym_quote] = ACTIONS(203),
    [anon_sym_quoteTerm] = ACTIONS(203),
    [anon_sym_unquote] = ACTIONS(203),
    [anon_sym_data] = ACTIONS(203),
    [anon_sym_codata] = ACTIONS(203),
    [anon_sym_record] = ACTIONS(203),
    [anon_sym_instance] = ACTIONS(203),
    [anon_sym_field] = ACTIONS(203),
    [sym_pragma] = ACTIONS(203),
    [anon_sym_infix] = ACTIONS(203),
    [anon_sym_infixl] = ACTIONS(203),
    [anon_sym_infixr] = ACTIONS(203),
  },
  [236] = {
    [sym__dedent] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
    [anon_sym_infix] = ACTIONS(241),
    [anon_sym_infixl] = ACTIONS(241),
    [anon_sym_infixr] = ACTIONS(241),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [sym_string] = ACTIONS(611),
    [sym_int] = ACTIONS(611),
    [sym_qualified_name] = ACTIONS(611),
    [anon_sym__] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(611),
    [anon_sym_Prop] = ACTIONS(611),
    [anon_sym_Set] = ACTIONS(611),
    [anon_sym_quote] = ACTIONS(611),
    [anon_sym_quoteTerm] = ACTIONS(611),
    [anon_sym_unquote] = ACTIONS(611),
    [anon_sym_data] = ACTIONS(611),
    [anon_sym_codata] = ACTIONS(611),
    [anon_sym_record] = ACTIONS(611),
    [anon_sym_instance] = ACTIONS(611),
    [anon_sym_field] = ACTIONS(611),
    [sym_pragma] = ACTIONS(611),
    [anon_sym_infix] = ACTIONS(611),
    [anon_sym_infixl] = ACTIONS(611),
    [anon_sym_infixr] = ACTIONS(611),
  },
  [238] = {
    [sym__newline] = ACTIONS(613),
    [sym_comment] = ACTIONS(59),
  },
  [239] = {
    [sym__dedent] = ACTIONS(239),
    [sym_string] = ACTIONS(97),
    [sym_int] = ACTIONS(97),
    [sym_qualified_name] = ACTIONS(97),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(97),
    [anon_sym_Prop] = ACTIONS(97),
    [anon_sym_Set] = ACTIONS(97),
    [anon_sym_quote] = ACTIONS(97),
    [anon_sym_quoteTerm] = ACTIONS(97),
    [anon_sym_unquote] = ACTIONS(97),
    [anon_sym_data] = ACTIONS(97),
    [anon_sym_codata] = ACTIONS(97),
    [anon_sym_record] = ACTIONS(97),
    [anon_sym_instance] = ACTIONS(97),
    [anon_sym_field] = ACTIONS(97),
    [sym_pragma] = ACTIONS(97),
    [anon_sym_infix] = ACTIONS(97),
    [anon_sym_infixl] = ACTIONS(97),
    [anon_sym_infixr] = ACTIONS(97),
  },
  [240] = {
    [sym_name] = ACTIONS(615),
    [anon_sym_DOT] = ACTIONS(615),
    [anon_sym_DOT_DOT] = ACTIONS(615),
    [anon_sym_LBRACE] = ACTIONS(615),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(615),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(615),
  },
  [241] = {
    [aux_sym_arg_name_repeat1] = STATE(357),
    [sym_name] = ACTIONS(617),
    [sym_comment] = ACTIONS(13),
  },
  [242] = {
    [aux_sym_arg_name_repeat1] = STATE(358),
    [sym_name] = ACTIONS(619),
    [sym_comment] = ACTIONS(13),
  },
  [243] = {
    [sym_name] = ACTIONS(621),
    [sym_comment] = ACTIONS(13),
  },
  [244] = {
    [anon_sym_RBRACE] = ACTIONS(623),
    [sym_comment] = ACTIONS(59),
  },
  [245] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(361),
    [sym_name] = ACTIONS(625),
    [anon_sym_DOT] = ACTIONS(421),
    [anon_sym_DOT_DOT] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(13),
  },
  [246] = {
    [sym_name] = ACTIONS(629),
    [sym_comment] = ACTIONS(13),
  },
  [247] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(623),
    [sym_comment] = ACTIONS(59),
  },
  [248] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(363),
    [sym_name] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(425),
    [anon_sym_DOT_DOT] = ACTIONS(425),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(627),
    [sym_comment] = ACTIONS(13),
  },
  [249] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym__arg_names] = STATE(125),
    [sym_arg_name] = STATE(127),
    [sym__arg_type_signatures1] = STATE(364),
    [sym_arg_type_signature] = STATE(128),
    [aux_sym__arg_names_repeat1] = STATE(127),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(128),
    [sym_name] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(197),
    [anon_sym_overlap] = ACTIONS(199),
  },
  [250] = {
    [sym__dedent] = ACTIONS(633),
    [sym_name] = ACTIONS(635),
    [anon_sym_DOT] = ACTIONS(635),
    [anon_sym_DOT_DOT] = ACTIONS(635),
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(635),
    [anon_sym_overlap] = ACTIONS(635),
  },
  [251] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(637),
  },
  [252] = {
    [sym_literal] = STATE(372),
    [sym_expr] = STATE(368),
    [sym__expr1] = STATE(369),
    [sym__application] = STATE(369),
    [sym__expr2] = STATE(369),
    [sym__atoms1] = STATE(370),
    [sym_atom] = STATE(371),
    [sym__atom_curly] = STATE(372),
    [sym__atom_no_curly] = STATE(372),
    [sym__typed_bindings1] = STATE(373),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(374),
    [aux_sym__application_repeat1] = STATE(375),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(639),
    [sym_int] = ACTIONS(639),
    [sym_qualified_name] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(641),
    [anon_sym_Prop] = ACTIONS(641),
    [anon_sym_Set] = ACTIONS(641),
    [anon_sym_quote] = ACTIONS(641),
    [anon_sym_quoteTerm] = ACTIONS(641),
    [anon_sym_unquote] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [sym_string] = ACTIONS(647),
    [sym_int] = ACTIONS(647),
    [sym_qualified_name] = ACTIONS(647),
    [anon_sym__] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(647),
    [anon_sym_Prop] = ACTIONS(647),
    [anon_sym_Set] = ACTIONS(647),
    [anon_sym_quote] = ACTIONS(647),
    [anon_sym_quoteTerm] = ACTIONS(647),
    [anon_sym_unquote] = ACTIONS(647),
    [anon_sym_data] = ACTIONS(647),
    [anon_sym_codata] = ACTIONS(647),
    [anon_sym_record] = ACTIONS(647),
    [anon_sym_instance] = ACTIONS(647),
    [anon_sym_field] = ACTIONS(647),
    [sym_pragma] = ACTIONS(647),
    [anon_sym_infix] = ACTIONS(647),
    [anon_sym_infixl] = ACTIONS(647),
    [anon_sym_infixr] = ACTIONS(647),
  },
  [254] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym_arg_name] = STATE(254),
    [aux_sym__arg_names_repeat1] = STATE(254),
    [sym_name] = ACTIONS(649),
    [anon_sym_DOT] = ACTIONS(652),
    [anon_sym_DOT_DOT] = ACTIONS(652),
    [anon_sym_LBRACE] = ACTIONS(655),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(658),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(661),
  },
  [255] = {
    [sym__maybe_dotted_name] = STATE(124),
    [sym__arg_names] = STATE(125),
    [sym_arg_name] = STATE(127),
    [sym_arg_type_signature] = STATE(255),
    [aux_sym__arg_names_repeat1] = STATE(127),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(255),
    [sym__dedent] = ACTIONS(663),
    [sym_name] = ACTIONS(665),
    [anon_sym_DOT] = ACTIONS(668),
    [anon_sym_DOT_DOT] = ACTIONS(668),
    [anon_sym_LBRACE] = ACTIONS(671),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(674),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(677),
    [anon_sym_overlap] = ACTIONS(680),
  },
  [256] = {
    [sym_binding_name] = STATE(256),
    [aux_sym_infix_repeat1] = STATE(256),
    [sym__newline] = ACTIONS(683),
    [sym_name] = ACTIONS(685),
    [anon_sym__] = ACTIONS(685),
    [sym_comment] = ACTIONS(13),
  },
  [257] = {
    [sym__newline] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_with] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(121),
  },
  [258] = {
    [anon_sym_RBRACE] = ACTIONS(688),
    [sym_comment] = ACTIONS(59),
  },
  [259] = {
    [sym__newline] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(121),
  },
  [260] = {
    [anon_sym_RBRACE] = ACTIONS(690),
    [sym_comment] = ACTIONS(59),
  },
  [261] = {
    [sym__newline] = ACTIONS(119),
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(121),
  },
  [262] = {
    [anon_sym_RBRACE] = ACTIONS(692),
    [sym_comment] = ACTIONS(59),
  },
  [263] = {
    [sym_literal] = STATE(152),
    [sym_expr] = STATE(379),
    [sym__expr1] = STATE(149),
    [sym__application] = STATE(149),
    [sym__expr2] = STATE(149),
    [sym__atoms1] = STATE(150),
    [sym_atom] = STATE(151),
    [sym__atom_curly] = STATE(152),
    [sym__atom_no_curly] = STATE(152),
    [sym__typed_bindings1] = STATE(153),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(154),
    [aux_sym__application_repeat1] = STATE(155),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(223),
    [sym_int] = ACTIONS(223),
    [sym_qualified_name] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_Prop] = ACTIONS(225),
    [anon_sym_Set] = ACTIONS(225),
    [anon_sym_quote] = ACTIONS(225),
    [anon_sym_quoteTerm] = ACTIONS(225),
    [anon_sym_unquote] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [264] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
    [anon_sym_module] = ACTIONS(31),
  },
  [265] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(381),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(694),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [266] = {
    [sym__newline] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_module] = ACTIONS(79),
  },
  [267] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(83),
  },
  [268] = {
    [sym_literal] = STATE(267),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(266),
    [sym__atom_curly] = STATE(267),
    [sym__atom_no_curly] = STATE(267),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(459),
    [sym_int] = ACTIONS(459),
    [sym_qualified_name] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(461),
    [anon_sym_Prop] = ACTIONS(461),
    [anon_sym_Set] = ACTIONS(461),
    [anon_sym_quote] = ACTIONS(461),
    [anon_sym_quoteTerm] = ACTIONS(461),
    [anon_sym_unquote] = ACTIONS(461),
  },
  [269] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(262),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [270] = {
    [sym__dedent] = ACTIONS(696),
    [sym_comment] = ACTIONS(59),
  },
  [271] = {
    [sym__declarations0] = STATE(383),
    [sym__newline] = ACTIONS(698),
    [sym__indent] = ACTIONS(231),
    [sym_comment] = ACTIONS(59),
  },
  [272] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym_comment] = ACTIONS(59),
  },
  [274] = {
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
    [anon_sym_infix] = ACTIONS(241),
    [anon_sym_infixl] = ACTIONS(241),
    [anon_sym_infixr] = ACTIONS(241),
  },
  [275] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(385),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [276] = {
    [sym_literal] = STATE(287),
    [sym_expr] = STATE(386),
    [sym__expr1] = STATE(284),
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(284),
    [sym__atoms1] = STATE(285),
    [sym_atom] = STATE(286),
    [sym__atom_curly] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [sym__typed_bindings1] = STATE(288),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(289),
    [aux_sym__application_repeat1] = STATE(290),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(497),
    [sym_int] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_Prop] = ACTIONS(499),
    [anon_sym_Set] = ACTIONS(499),
    [anon_sym_quote] = ACTIONS(499),
    [anon_sym_quoteTerm] = ACTIONS(499),
    [anon_sym_unquote] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [277] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(387),
    [sym__expr1] = STATE(295),
    [sym__application] = STATE(295),
    [sym__expr2] = STATE(295),
    [sym__atoms1] = STATE(296),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(297),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [278] = {
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
  },
  [279] = {
    [anon_sym_RBRACE] = ACTIONS(702),
    [sym_comment] = ACTIONS(59),
  },
  [280] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
  },
  [281] = {
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
  },
  [282] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(390),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [283] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(702),
    [sym_comment] = ACTIONS(59),
  },
  [284] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(706),
  },
  [285] = {
    [sym__const_right_arrow] = ACTIONS(706),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [286] = {
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
  },
  [287] = {
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
  },
  [288] = {
    [sym__const_right_arrow] = ACTIONS(706),
    [sym_comment] = ACTIONS(59),
  },
  [289] = {
    [sym_literal] = STATE(396),
    [sym__application] = STATE(394),
    [sym__expr2] = STATE(394),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(395),
    [sym__atom_curly] = STATE(396),
    [sym__atom_no_curly] = STATE(396),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(397),
    [sym_string] = ACTIONS(708),
    [sym_int] = ACTIONS(708),
    [sym_qualified_name] = ACTIONS(710),
    [anon_sym__] = ACTIONS(710),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(710),
    [anon_sym_Prop] = ACTIONS(710),
    [anon_sym_Set] = ACTIONS(710),
    [anon_sym_quote] = ACTIONS(710),
    [anon_sym_quoteTerm] = ACTIONS(710),
    [anon_sym_unquote] = ACTIONS(710),
  },
  [290] = {
    [sym_literal] = STATE(287),
    [sym__expr2] = STATE(309),
    [sym_atom] = STATE(286),
    [sym__atom_curly] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(497),
    [sym_int] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(714),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_Prop] = ACTIONS(499),
    [anon_sym_Set] = ACTIONS(499),
    [anon_sym_quote] = ACTIONS(499),
    [anon_sym_quoteTerm] = ACTIONS(499),
    [anon_sym_unquote] = ACTIONS(499),
  },
  [291] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
  },
  [292] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(400),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(716),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [293] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
  },
  [294] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(702),
  },
  [295] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(718),
    [anon_sym_RPAREN] = ACTIONS(131),
  },
  [296] = {
    [sym__const_right_arrow] = ACTIONS(718),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [297] = {
    [sym__const_right_arrow] = ACTIONS(718),
    [sym_comment] = ACTIONS(59),
  },
  [298] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
  },
  [299] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [300] = {
    [anon_sym_RBRACE] = ACTIONS(720),
    [sym_comment] = ACTIONS(59),
  },
  [301] = {
    [anon_sym_RBRACE] = ACTIONS(722),
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(724),
  },
  [302] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(722),
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(726),
  },
  [303] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(728),
  },
  [304] = {
    [sym_name] = ACTIONS(730),
    [anon_sym__] = ACTIONS(730),
    [anon_sym_DOT] = ACTIONS(730),
    [anon_sym_DOT_DOT] = ACTIONS(730),
    [anon_sym_LBRACE] = ACTIONS(730),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(730),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(730),
    [anon_sym_COLON] = ACTIONS(730),
    [anon_sym_where] = ACTIONS(730),
  },
  [305] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(407),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [306] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
  },
  [307] = {
    [anon_sym_RBRACE] = ACTIONS(732),
    [sym_comment] = ACTIONS(59),
  },
  [308] = {
    [sym_literal] = STATE(287),
    [sym_expr] = STATE(409),
    [sym__expr1] = STATE(284),
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(284),
    [sym__atoms1] = STATE(285),
    [sym_atom] = STATE(286),
    [sym__atom_curly] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [sym__typed_bindings1] = STATE(288),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(289),
    [aux_sym__application_repeat1] = STATE(290),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(497),
    [sym_int] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_Prop] = ACTIONS(499),
    [anon_sym_Set] = ACTIONS(499),
    [anon_sym_quote] = ACTIONS(499),
    [anon_sym_quoteTerm] = ACTIONS(499),
    [anon_sym_unquote] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [309] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
  },
  [310] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(410),
    [sym__expr1] = STATE(295),
    [sym__application] = STATE(295),
    [sym__expr2] = STATE(295),
    [sym__atoms1] = STATE(296),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(297),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [311] = {
    [sym__newline] = ACTIONS(119),
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
  },
  [312] = {
    [anon_sym_RBRACE] = ACTIONS(734),
    [sym_comment] = ACTIONS(59),
  },
  [313] = {
    [sym__declarations0] = STATE(412),
    [sym__newline] = ACTIONS(736),
    [sym__indent] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [314] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(379),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [315] = {
    [sym__newline] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [316] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(414),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(738),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [317] = {
    [sym__newline] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
  },
  [318] = {
    [sym__newline] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
  },
  [319] = {
    [sym_literal] = STATE(318),
    [sym__expr2] = STATE(59),
    [sym_atom] = STATE(317),
    [sym__atom_curly] = STATE(318),
    [sym__atom_no_curly] = STATE(318),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(538),
    [sym_int] = ACTIONS(538),
    [sym_qualified_name] = ACTIONS(540),
    [anon_sym__] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(542),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(540),
    [anon_sym_Prop] = ACTIONS(540),
    [anon_sym_Set] = ACTIONS(540),
    [anon_sym_quote] = ACTIONS(540),
    [anon_sym_quoteTerm] = ACTIONS(540),
    [anon_sym_unquote] = ACTIONS(540),
  },
  [320] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(312),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(530),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [321] = {
    [sym__newline] = ACTIONS(740),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(742),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(744),
    [sym_string] = ACTIONS(746),
    [sym_int] = ACTIONS(746),
    [sym_qualified_name] = ACTIONS(746),
    [anon_sym__] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(746),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_Prop] = ACTIONS(746),
    [anon_sym_Set] = ACTIONS(746),
    [anon_sym_quote] = ACTIONS(746),
    [anon_sym_quoteTerm] = ACTIONS(746),
    [anon_sym_unquote] = ACTIONS(746),
    [anon_sym_data] = ACTIONS(746),
    [anon_sym_codata] = ACTIONS(746),
    [anon_sym_record] = ACTIONS(746),
    [anon_sym_instance] = ACTIONS(746),
    [anon_sym_field] = ACTIONS(746),
    [sym_pragma] = ACTIONS(746),
    [anon_sym_infix] = ACTIONS(746),
    [anon_sym_infixl] = ACTIONS(746),
    [anon_sym_infixr] = ACTIONS(746),
  },
  [323] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
  },
  [324] = {
    [anon_sym_RBRACE] = ACTIONS(748),
    [sym_comment] = ACTIONS(59),
  },
  [325] = {
    [sym_literal] = STATE(219),
    [sym_expr] = STATE(180),
    [sym__expr1] = STATE(216),
    [sym__application] = STATE(216),
    [sym__expr2] = STATE(216),
    [sym__atoms1] = STATE(217),
    [sym_atom] = STATE(218),
    [sym__atom_curly] = STATE(219),
    [sym__atom_no_curly] = STATE(219),
    [sym__typed_bindings1] = STATE(220),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(221),
    [aux_sym__application_repeat1] = STATE(222),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(377),
    [sym_int] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_Prop] = ACTIONS(379),
    [anon_sym_Set] = ACTIONS(379),
    [anon_sym_quote] = ACTIONS(379),
    [anon_sym_quoteTerm] = ACTIONS(379),
    [anon_sym_unquote] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [326] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_where] = ACTIONS(31),
  },
  [327] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(418),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(750),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [328] = {
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_where] = ACTIONS(79),
  },
  [329] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_where] = ACTIONS(83),
  },
  [330] = {
    [sym_literal] = STATE(329),
    [sym__expr2] = STATE(91),
    [sym_atom] = STATE(328),
    [sym__atom_curly] = STATE(329),
    [sym__atom_no_curly] = STATE(329),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(573),
    [sym_int] = ACTIONS(573),
    [sym_qualified_name] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(577),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(575),
    [anon_sym_Prop] = ACTIONS(575),
    [anon_sym_Set] = ACTIONS(575),
    [anon_sym_quote] = ACTIONS(575),
    [anon_sym_quoteTerm] = ACTIONS(575),
    [anon_sym_unquote] = ACTIONS(575),
  },
  [331] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(324),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [332] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(742),
  },
  [333] = {
    [sym_record_declarations_block] = STATE(419),
    [sym__indent] = ACTIONS(385),
    [ts_builtin_sym_end] = ACTIONS(752),
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
    [anon_sym_instance] = ACTIONS(754),
    [anon_sym_field] = ACTIONS(754),
    [sym_pragma] = ACTIONS(754),
    [anon_sym_infix] = ACTIONS(754),
    [anon_sym_infixl] = ACTIONS(754),
    [anon_sym_infixr] = ACTIONS(754),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(756),
    [sym_string] = ACTIONS(758),
    [sym_int] = ACTIONS(758),
    [sym_qualified_name] = ACTIONS(758),
    [anon_sym__] = ACTIONS(758),
    [anon_sym_LBRACE] = ACTIONS(758),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(758),
    [anon_sym_Prop] = ACTIONS(758),
    [anon_sym_Set] = ACTIONS(758),
    [anon_sym_quote] = ACTIONS(758),
    [anon_sym_quoteTerm] = ACTIONS(758),
    [anon_sym_unquote] = ACTIONS(758),
    [anon_sym_data] = ACTIONS(758),
    [anon_sym_codata] = ACTIONS(758),
    [anon_sym_record] = ACTIONS(758),
    [anon_sym_instance] = ACTIONS(758),
    [anon_sym_field] = ACTIONS(758),
    [sym_pragma] = ACTIONS(758),
    [anon_sym_infix] = ACTIONS(758),
    [anon_sym_infixl] = ACTIONS(758),
    [anon_sym_infixr] = ACTIONS(758),
  },
  [335] = {
    [sym__declarations0] = STATE(233),
    [sym__newline] = ACTIONS(401),
    [sym__indent] = ACTIONS(760),
    [sym_comment] = ACTIONS(59),
  },
  [336] = {
    [sym_name] = ACTIONS(762),
    [sym_comment] = ACTIONS(13),
  },
  [337] = {
    [sym__newline] = ACTIONS(764),
    [sym_comment] = ACTIONS(59),
  },
  [338] = {
    [sym__newline] = ACTIONS(766),
    [sym_comment] = ACTIONS(59),
  },
  [339] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(423),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(118),
    [sym__dedent] = ACTIONS(768),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [340] = {
    [sym__dedent] = ACTIONS(770),
    [sym_string] = ACTIONS(772),
    [sym_int] = ACTIONS(772),
    [sym_qualified_name] = ACTIONS(772),
    [anon_sym__] = ACTIONS(772),
    [anon_sym_LBRACE] = ACTIONS(772),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(772),
    [anon_sym_Prop] = ACTIONS(772),
    [anon_sym_Set] = ACTIONS(772),
    [anon_sym_quote] = ACTIONS(772),
    [anon_sym_quoteTerm] = ACTIONS(772),
    [anon_sym_unquote] = ACTIONS(772),
    [anon_sym_data] = ACTIONS(772),
    [anon_sym_codata] = ACTIONS(772),
    [anon_sym_record] = ACTIONS(772),
    [anon_sym_instance] = ACTIONS(774),
    [anon_sym_constructor] = ACTIONS(777),
    [anon_sym_inductive] = ACTIONS(777),
    [anon_sym_coinductive] = ACTIONS(777),
    [anon_sym_eta_DASHequality] = ACTIONS(777),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(777),
    [anon_sym_field] = ACTIONS(772),
    [sym_pragma] = ACTIONS(772),
    [anon_sym_infix] = ACTIONS(772),
    [anon_sym_infixl] = ACTIONS(772),
    [anon_sym_infixr] = ACTIONS(772),
  },
  [341] = {
    [sym__newline] = ACTIONS(779),
    [sym_comment] = ACTIONS(59),
  },
  [342] = {
    [sym__dedent] = ACTIONS(768),
    [sym_comment] = ACTIONS(59),
  },
  [343] = {
    [sym_record_constructor_instance] = STATE(426),
    [sym_record_constructor] = STATE(427),
    [sym__record_directive] = STATE(427),
    [sym_record_induction] = STATE(427),
    [sym_record_eta] = STATE(427),
    [aux_sym__record_directives1_repeat1] = STATE(428),
    [sym_comment] = ACTIONS(59),
    [anon_sym_instance] = ACTIONS(781),
    [anon_sym_constructor] = ACTIONS(783),
    [anon_sym_inductive] = ACTIONS(785),
    [anon_sym_coinductive] = ACTIONS(785),
    [anon_sym_eta_DASHequality] = ACTIONS(787),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(787),
  },
  [344] = {
    [sym__newline] = ACTIONS(789),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(791),
  },
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(752),
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
    [anon_sym_instance] = ACTIONS(754),
    [anon_sym_field] = ACTIONS(754),
    [sym_pragma] = ACTIONS(754),
    [anon_sym_infix] = ACTIONS(754),
    [anon_sym_infixl] = ACTIONS(754),
    [anon_sym_infixr] = ACTIONS(754),
  },
  [346] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(430),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [347] = {
    [sym__declarations0] = STATE(431),
    [sym__newline] = ACTIONS(793),
    [sym__indent] = ACTIONS(403),
    [sym_comment] = ACTIONS(59),
  },
  [348] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(795),
    [anon_sym_where] = ACTIONS(797),
  },
  [349] = {
    [sym_literal] = STATE(219),
    [sym_expr] = STATE(434),
    [sym__expr1] = STATE(216),
    [sym__application] = STATE(216),
    [sym__expr2] = STATE(216),
    [sym__atoms1] = STATE(217),
    [sym_atom] = STATE(218),
    [sym__atom_curly] = STATE(219),
    [sym__atom_no_curly] = STATE(219),
    [sym__typed_bindings1] = STATE(220),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(221),
    [aux_sym__application_repeat1] = STATE(222),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(377),
    [sym_int] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_Prop] = ACTIONS(379),
    [anon_sym_Set] = ACTIONS(379),
    [anon_sym_quote] = ACTIONS(379),
    [anon_sym_quoteTerm] = ACTIONS(379),
    [anon_sym_unquote] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [350] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(799),
    [anon_sym_where] = ACTIONS(797),
  },
  [351] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(436),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [352] = {
    [sym_record_declarations_block] = STATE(438),
    [sym__indent] = ACTIONS(801),
    [sym__dedent] = ACTIONS(387),
    [sym_string] = ACTIONS(389),
    [sym_int] = ACTIONS(389),
    [sym_qualified_name] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(389),
    [anon_sym_Prop] = ACTIONS(389),
    [anon_sym_Set] = ACTIONS(389),
    [anon_sym_quote] = ACTIONS(389),
    [anon_sym_quoteTerm] = ACTIONS(389),
    [anon_sym_unquote] = ACTIONS(389),
    [anon_sym_data] = ACTIONS(389),
    [anon_sym_codata] = ACTIONS(389),
    [anon_sym_record] = ACTIONS(389),
    [anon_sym_instance] = ACTIONS(389),
    [anon_sym_field] = ACTIONS(389),
    [sym_pragma] = ACTIONS(389),
    [anon_sym_infix] = ACTIONS(389),
    [anon_sym_infixl] = ACTIONS(389),
    [anon_sym_infixr] = ACTIONS(389),
  },
  [353] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(803),
    [anon_sym_where] = ACTIONS(805),
  },
  [354] = {
    [sym__dedent] = ACTIONS(807),
    [sym_comment] = ACTIONS(59),
  },
  [355] = {
    [sym__dedent] = ACTIONS(809),
    [sym_comment] = ACTIONS(59),
  },
  [356] = {
    [sym__dedent] = ACTIONS(483),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
    [anon_sym_infix] = ACTIONS(241),
    [anon_sym_infixl] = ACTIONS(241),
    [anon_sym_infixr] = ACTIONS(241),
  },
  [357] = {
    [aux_sym_arg_name_repeat1] = STATE(444),
    [sym_name] = ACTIONS(811),
    [anon_sym_RBRACE] = ACTIONS(813),
    [sym_comment] = ACTIONS(13),
  },
  [358] = {
    [aux_sym_arg_name_repeat1] = STATE(445),
    [sym_name] = ACTIONS(815),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(813),
    [sym_comment] = ACTIONS(13),
  },
  [359] = {
    [sym_name] = ACTIONS(817),
    [anon_sym_DOT] = ACTIONS(817),
    [anon_sym_DOT_DOT] = ACTIONS(817),
    [anon_sym_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(13),
  },
  [360] = {
    [sym_name] = ACTIONS(819),
    [anon_sym_DOT] = ACTIONS(819),
    [anon_sym_DOT_DOT] = ACTIONS(819),
    [anon_sym_LBRACE] = ACTIONS(819),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(819),
  },
  [361] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(361),
    [sym_name] = ACTIONS(821),
    [anon_sym_DOT] = ACTIONS(824),
    [anon_sym_DOT_DOT] = ACTIONS(824),
    [anon_sym_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(13),
  },
  [362] = {
    [sym_name] = ACTIONS(817),
    [anon_sym_DOT] = ACTIONS(817),
    [anon_sym_DOT_DOT] = ACTIONS(817),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(13),
  },
  [363] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(363),
    [sym_name] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(830),
    [anon_sym_DOT_DOT] = ACTIONS(830),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(13),
  },
  [364] = {
    [sym__dedent] = ACTIONS(833),
    [sym_comment] = ACTIONS(59),
  },
  [365] = {
    [sym_literal] = STATE(372),
    [sym_expr] = STATE(447),
    [sym__expr1] = STATE(369),
    [sym__application] = STATE(369),
    [sym__expr2] = STATE(369),
    [sym__atoms1] = STATE(370),
    [sym_atom] = STATE(371),
    [sym__atom_curly] = STATE(372),
    [sym__atom_no_curly] = STATE(372),
    [sym__typed_bindings1] = STATE(373),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(374),
    [aux_sym__application_repeat1] = STATE(375),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(639),
    [sym_int] = ACTIONS(639),
    [sym_qualified_name] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(641),
    [anon_sym_Prop] = ACTIONS(641),
    [anon_sym_Set] = ACTIONS(641),
    [anon_sym_quote] = ACTIONS(641),
    [anon_sym_quoteTerm] = ACTIONS(641),
    [anon_sym_unquote] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [366] = {
    [sym__dedent] = ACTIONS(29),
    [sym__const_right_arrow] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_name] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_instance] = ACTIONS(31),
    [anon_sym_overlap] = ACTIONS(31),
  },
  [367] = {
    [sym_literal] = STATE(73),
    [sym_expr] = STATE(449),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(71),
    [sym__expr2] = STATE(71),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(72),
    [sym__atom_curly] = STATE(73),
    [sym__atom_no_curly] = STATE(73),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(74),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(111),
    [sym_int] = ACTIONS(111),
    [sym_qualified_name] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_Prop] = ACTIONS(113),
    [anon_sym_Set] = ACTIONS(113),
    [anon_sym_quote] = ACTIONS(113),
    [anon_sym_quoteTerm] = ACTIONS(113),
    [anon_sym_unquote] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [368] = {
    [sym__dedent] = ACTIONS(837),
    [sym_name] = ACTIONS(839),
    [anon_sym_DOT] = ACTIONS(839),
    [anon_sym_DOT_DOT] = ACTIONS(839),
    [anon_sym_LBRACE] = ACTIONS(839),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(839),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(839),
    [anon_sym_overlap] = ACTIONS(839),
  },
  [369] = {
    [sym__dedent] = ACTIONS(131),
    [sym_name] = ACTIONS(841),
    [anon_sym_DOT] = ACTIONS(841),
    [anon_sym_DOT_DOT] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(841),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(843),
    [anon_sym_instance] = ACTIONS(841),
    [anon_sym_overlap] = ACTIONS(841),
  },
  [370] = {
    [sym__const_right_arrow] = ACTIONS(845),
    [sym_comment] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(73),
  },
  [371] = {
    [sym__dedent] = ACTIONS(75),
    [sym__const_right_arrow] = ACTIONS(77),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_name] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_instance] = ACTIONS(79),
    [anon_sym_overlap] = ACTIONS(79),
  },
  [372] = {
    [sym__dedent] = ACTIONS(81),
    [sym__const_right_arrow] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_name] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_instance] = ACTIONS(83),
    [anon_sym_overlap] = ACTIONS(83),
  },
  [373] = {
    [sym__const_right_arrow] = ACTIONS(845),
    [sym_comment] = ACTIONS(59),
  },
  [374] = {
    [sym_literal] = STATE(455),
    [sym__application] = STATE(453),
    [sym__expr2] = STATE(453),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(454),
    [sym__atom_curly] = STATE(455),
    [sym__atom_no_curly] = STATE(455),
    [aux_sym__expr1_repeat1] = STATE(58),
    [aux_sym__application_repeat1] = STATE(456),
    [sym_string] = ACTIONS(847),
    [sym_int] = ACTIONS(847),
    [sym_qualified_name] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_LBRACE] = ACTIONS(851),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(849),
    [anon_sym_Prop] = ACTIONS(849),
    [anon_sym_Set] = ACTIONS(849),
    [anon_sym_quote] = ACTIONS(849),
    [anon_sym_quoteTerm] = ACTIONS(849),
    [anon_sym_unquote] = ACTIONS(849),
  },
  [375] = {
    [sym_literal] = STATE(372),
    [sym__expr2] = STATE(458),
    [sym_atom] = STATE(371),
    [sym__atom_curly] = STATE(372),
    [sym__atom_no_curly] = STATE(372),
    [aux_sym__application_repeat1] = STATE(92),
    [sym__const_right_arrow] = ACTIONS(101),
    [sym_string] = ACTIONS(639),
    [sym_int] = ACTIONS(639),
    [sym_qualified_name] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [anon_sym_LBRACE] = ACTIONS(853),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(641),
    [anon_sym_Prop] = ACTIONS(641),
    [anon_sym_Set] = ACTIONS(641),
    [anon_sym_quote] = ACTIONS(641),
    [anon_sym_quoteTerm] = ACTIONS(641),
    [anon_sym_unquote] = ACTIONS(641),
  },
  [376] = {
    [sym__newline] = ACTIONS(315),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_with] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(317),
  },
  [377] = {
    [sym__newline] = ACTIONS(315),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(317),
  },
  [378] = {
    [sym__newline] = ACTIONS(315),
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(317),
  },
  [379] = {
    [sym__newline] = ACTIONS(512),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(512),
  },
  [380] = {
    [sym__newline] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
    [anon_sym_module] = ACTIONS(121),
  },
  [381] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(59),
  },
  [382] = {
    [sym__newline] = ACTIONS(609),
    [sym_comment] = ACTIONS(59),
  },
  [383] = {
    [sym__newline] = ACTIONS(857),
    [sym_comment] = ACTIONS(59),
  },
  [384] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
  },
  [385] = {
    [anon_sym_RBRACE] = ACTIONS(859),
    [sym_comment] = ACTIONS(59),
  },
  [386] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(859),
    [sym_comment] = ACTIONS(59),
  },
  [387] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(859),
  },
  [388] = {
    [sym__const_right_arrow] = ACTIONS(861),
    [anon_sym_DOT] = ACTIONS(863),
    [anon_sym_DOT_DOT] = ACTIONS(861),
    [anon_sym_LBRACE] = ACTIONS(863),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(861),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(861),
  },
  [389] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [390] = {
    [anon_sym_RBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(59),
  },
  [391] = {
    [sym_literal] = STATE(287),
    [sym_expr] = STATE(462),
    [sym__expr1] = STATE(284),
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(284),
    [sym__atoms1] = STATE(285),
    [sym_atom] = STATE(286),
    [sym__atom_curly] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [sym__typed_bindings1] = STATE(288),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(289),
    [aux_sym__application_repeat1] = STATE(290),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(497),
    [sym_int] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_Prop] = ACTIONS(499),
    [anon_sym_Set] = ACTIONS(499),
    [anon_sym_quote] = ACTIONS(499),
    [anon_sym_quoteTerm] = ACTIONS(499),
    [anon_sym_unquote] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [392] = {
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
  },
  [393] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(464),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [394] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(243),
  },
  [395] = {
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
  },
  [396] = {
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
  },
  [397] = {
    [sym_literal] = STATE(396),
    [sym__expr2] = STATE(309),
    [sym_atom] = STATE(395),
    [sym__atom_curly] = STATE(396),
    [sym__atom_no_curly] = STATE(396),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(708),
    [sym_int] = ACTIONS(708),
    [sym_qualified_name] = ACTIONS(710),
    [anon_sym__] = ACTIONS(710),
    [anon_sym_LBRACE] = ACTIONS(712),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(710),
    [anon_sym_Prop] = ACTIONS(710),
    [anon_sym_Set] = ACTIONS(710),
    [anon_sym_quote] = ACTIONS(710),
    [anon_sym_quoteTerm] = ACTIONS(710),
    [anon_sym_unquote] = ACTIONS(710),
  },
  [398] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(390),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [399] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [400] = {
    [anon_sym_RBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(59),
  },
  [401] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(180),
    [sym__expr1] = STATE(295),
    [sym__application] = STATE(295),
    [sym__expr2] = STATE(295),
    [sym__atoms1] = STATE(296),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(297),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [402] = {
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
  },
  [403] = {
    [sym_name] = ACTIONS(871),
    [anon_sym__] = ACTIONS(871),
    [anon_sym_DOT] = ACTIONS(871),
    [anon_sym_DOT_DOT] = ACTIONS(871),
    [anon_sym_LBRACE] = ACTIONS(871),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(871),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(871),
    [anon_sym_COLON] = ACTIONS(871),
    [anon_sym_where] = ACTIONS(871),
  },
  [404] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(466),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [405] = {
    [sym_literal] = STATE(287),
    [sym_expr] = STATE(467),
    [sym__expr1] = STATE(284),
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(284),
    [sym__atoms1] = STATE(285),
    [sym_atom] = STATE(286),
    [sym__atom_curly] = STATE(287),
    [sym__atom_no_curly] = STATE(287),
    [sym__typed_bindings1] = STATE(288),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(289),
    [aux_sym__application_repeat1] = STATE(290),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(497),
    [sym_int] = ACTIONS(497),
    [sym_qualified_name] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(499),
    [anon_sym_Prop] = ACTIONS(499),
    [anon_sym_Set] = ACTIONS(499),
    [anon_sym_quote] = ACTIONS(499),
    [anon_sym_quoteTerm] = ACTIONS(499),
    [anon_sym_unquote] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [406] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(468),
    [sym__expr1] = STATE(295),
    [sym__application] = STATE(295),
    [sym__expr2] = STATE(295),
    [sym__atoms1] = STATE(296),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(297),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [407] = {
    [anon_sym_RBRACE] = ACTIONS(873),
    [sym_comment] = ACTIONS(59),
  },
  [408] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
  },
  [409] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(873),
    [sym_comment] = ACTIONS(59),
  },
  [410] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(873),
  },
  [411] = {
    [sym__newline] = ACTIONS(315),
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
  },
  [412] = {
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
    [anon_sym_infix] = ACTIONS(877),
    [anon_sym_infixl] = ACTIONS(877),
    [anon_sym_infixr] = ACTIONS(877),
  },
  [413] = {
    [sym__newline] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(879),
    [sym_comment] = ACTIONS(59),
  },
  [415] = {
    [sym__declarations0] = STATE(471),
    [sym__newline] = ACTIONS(881),
    [sym__indent] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [416] = {
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
  },
  [417] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_where] = ACTIONS(121),
  },
  [418] = {
    [anon_sym_RBRACE] = ACTIONS(883),
    [sym_comment] = ACTIONS(59),
  },
  [419] = {
    [ts_builtin_sym_end] = ACTIONS(885),
    [sym_string] = ACTIONS(887),
    [sym_int] = ACTIONS(887),
    [sym_qualified_name] = ACTIONS(887),
    [anon_sym__] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(887),
    [anon_sym_Prop] = ACTIONS(887),
    [anon_sym_Set] = ACTIONS(887),
    [anon_sym_quote] = ACTIONS(887),
    [anon_sym_quoteTerm] = ACTIONS(887),
    [anon_sym_unquote] = ACTIONS(887),
    [anon_sym_data] = ACTIONS(887),
    [anon_sym_codata] = ACTIONS(887),
    [anon_sym_record] = ACTIONS(887),
    [anon_sym_instance] = ACTIONS(887),
    [anon_sym_field] = ACTIONS(887),
    [sym_pragma] = ACTIONS(887),
    [anon_sym_infix] = ACTIONS(887),
    [anon_sym_infixl] = ACTIONS(887),
    [anon_sym_infixr] = ACTIONS(887),
  },
  [420] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(354),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(118),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_constructor] = ACTIONS(889),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [421] = {
    [sym__newline] = ACTIONS(891),
    [sym_comment] = ACTIONS(59),
  },
  [422] = {
    [ts_builtin_sym_end] = ACTIONS(893),
    [sym_string] = ACTIONS(895),
    [sym_int] = ACTIONS(895),
    [sym_qualified_name] = ACTIONS(895),
    [anon_sym__] = ACTIONS(895),
    [anon_sym_LBRACE] = ACTIONS(895),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(895),
    [anon_sym_Prop] = ACTIONS(895),
    [anon_sym_Set] = ACTIONS(895),
    [anon_sym_quote] = ACTIONS(895),
    [anon_sym_quoteTerm] = ACTIONS(895),
    [anon_sym_unquote] = ACTIONS(895),
    [anon_sym_data] = ACTIONS(895),
    [anon_sym_codata] = ACTIONS(895),
    [anon_sym_record] = ACTIONS(895),
    [anon_sym_instance] = ACTIONS(895),
    [anon_sym_field] = ACTIONS(895),
    [sym_pragma] = ACTIONS(895),
    [anon_sym_infix] = ACTIONS(895),
    [anon_sym_infixl] = ACTIONS(895),
    [anon_sym_infixr] = ACTIONS(895),
  },
  [423] = {
    [sym__dedent] = ACTIONS(897),
    [sym_comment] = ACTIONS(59),
  },
  [424] = {
    [sym__dedent] = ACTIONS(899),
    [sym_string] = ACTIONS(901),
    [sym_int] = ACTIONS(901),
    [sym_qualified_name] = ACTIONS(901),
    [anon_sym__] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(901),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_Prop] = ACTIONS(901),
    [anon_sym_Set] = ACTIONS(901),
    [anon_sym_quote] = ACTIONS(901),
    [anon_sym_quoteTerm] = ACTIONS(901),
    [anon_sym_unquote] = ACTIONS(901),
    [anon_sym_data] = ACTIONS(901),
    [anon_sym_codata] = ACTIONS(901),
    [anon_sym_record] = ACTIONS(901),
    [anon_sym_instance] = ACTIONS(903),
    [anon_sym_constructor] = ACTIONS(906),
    [anon_sym_inductive] = ACTIONS(906),
    [anon_sym_coinductive] = ACTIONS(906),
    [anon_sym_eta_DASHequality] = ACTIONS(906),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(906),
    [anon_sym_field] = ACTIONS(901),
    [sym_pragma] = ACTIONS(901),
    [anon_sym_infix] = ACTIONS(901),
    [anon_sym_infixl] = ACTIONS(901),
    [anon_sym_infixr] = ACTIONS(901),
  },
  [425] = {
    [sym__indent] = ACTIONS(908),
    [sym_comment] = ACTIONS(59),
  },
  [426] = {
    [sym__dedent] = ACTIONS(899),
    [sym_string] = ACTIONS(901),
    [sym_int] = ACTIONS(901),
    [sym_qualified_name] = ACTIONS(901),
    [anon_sym__] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(901),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(901),
    [anon_sym_Prop] = ACTIONS(901),
    [anon_sym_Set] = ACTIONS(901),
    [anon_sym_quote] = ACTIONS(901),
    [anon_sym_quoteTerm] = ACTIONS(901),
    [anon_sym_unquote] = ACTIONS(901),
    [anon_sym_data] = ACTIONS(901),
    [anon_sym_codata] = ACTIONS(901),
    [anon_sym_record] = ACTIONS(901),
    [anon_sym_instance] = ACTIONS(910),
    [anon_sym_constructor] = ACTIONS(777),
    [anon_sym_inductive] = ACTIONS(777),
    [anon_sym_coinductive] = ACTIONS(777),
    [anon_sym_eta_DASHequality] = ACTIONS(777),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(777),
    [anon_sym_field] = ACTIONS(901),
    [sym_pragma] = ACTIONS(901),
    [anon_sym_infix] = ACTIONS(901),
    [anon_sym_infixl] = ACTIONS(901),
    [anon_sym_infixr] = ACTIONS(901),
  },
  [427] = {
    [sym__newline] = ACTIONS(913),
    [sym_comment] = ACTIONS(59),
  },
  [428] = {
    [sym_record_constructor_instance] = STATE(428),
    [sym_record_constructor] = STATE(478),
    [sym__record_directive] = STATE(478),
    [sym_record_induction] = STATE(478),
    [sym_record_eta] = STATE(478),
    [aux_sym__record_directives1_repeat1] = STATE(428),
    [sym_comment] = ACTIONS(59),
    [anon_sym_instance] = ACTIONS(915),
    [anon_sym_constructor] = ACTIONS(918),
    [anon_sym_inductive] = ACTIONS(921),
    [anon_sym_coinductive] = ACTIONS(921),
    [anon_sym_eta_DASHequality] = ACTIONS(924),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(924),
  },
  [429] = {
    [sym_record_declarations_block] = STATE(479),
    [sym__indent] = ACTIONS(385),
    [ts_builtin_sym_end] = ACTIONS(885),
    [sym_string] = ACTIONS(887),
    [sym_int] = ACTIONS(887),
    [sym_qualified_name] = ACTIONS(887),
    [anon_sym__] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(887),
    [anon_sym_Prop] = ACTIONS(887),
    [anon_sym_Set] = ACTIONS(887),
    [anon_sym_quote] = ACTIONS(887),
    [anon_sym_quoteTerm] = ACTIONS(887),
    [anon_sym_unquote] = ACTIONS(887),
    [anon_sym_data] = ACTIONS(887),
    [anon_sym_codata] = ACTIONS(887),
    [anon_sym_record] = ACTIONS(887),
    [anon_sym_instance] = ACTIONS(887),
    [anon_sym_field] = ACTIONS(887),
    [sym_pragma] = ACTIONS(887),
    [anon_sym_infix] = ACTIONS(887),
    [anon_sym_infixl] = ACTIONS(887),
    [anon_sym_infixr] = ACTIONS(887),
  },
  [430] = {
    [sym__newline] = ACTIONS(532),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(927),
  },
  [431] = {
    [sym__dedent] = ACTIONS(546),
    [sym_string] = ACTIONS(548),
    [sym_int] = ACTIONS(548),
    [sym_qualified_name] = ACTIONS(548),
    [anon_sym__] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(548),
    [anon_sym_Prop] = ACTIONS(548),
    [anon_sym_Set] = ACTIONS(548),
    [anon_sym_quote] = ACTIONS(548),
    [anon_sym_quoteTerm] = ACTIONS(548),
    [anon_sym_unquote] = ACTIONS(548),
    [anon_sym_data] = ACTIONS(548),
    [anon_sym_codata] = ACTIONS(548),
    [anon_sym_record] = ACTIONS(548),
    [anon_sym_instance] = ACTIONS(548),
    [anon_sym_field] = ACTIONS(548),
    [sym_pragma] = ACTIONS(548),
    [anon_sym_infix] = ACTIONS(548),
    [anon_sym_infixl] = ACTIONS(548),
    [anon_sym_infixr] = ACTIONS(548),
  },
  [432] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(481),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [433] = {
    [sym__declarations0] = STATE(482),
    [sym__newline] = ACTIONS(929),
    [sym__indent] = ACTIONS(403),
    [sym_comment] = ACTIONS(59),
  },
  [434] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(927),
  },
  [435] = {
    [sym_literal] = STATE(219),
    [sym_expr] = STATE(483),
    [sym__expr1] = STATE(216),
    [sym__application] = STATE(216),
    [sym__expr2] = STATE(216),
    [sym__atoms1] = STATE(217),
    [sym_atom] = STATE(218),
    [sym__atom_curly] = STATE(219),
    [sym__atom_no_curly] = STATE(219),
    [sym__typed_bindings1] = STATE(220),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(221),
    [aux_sym__application_repeat1] = STATE(222),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(377),
    [sym_int] = ACTIONS(377),
    [sym_qualified_name] = ACTIONS(379),
    [anon_sym__] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(379),
    [anon_sym_Prop] = ACTIONS(379),
    [anon_sym_Set] = ACTIONS(379),
    [anon_sym_quote] = ACTIONS(379),
    [anon_sym_quoteTerm] = ACTIONS(379),
    [anon_sym_unquote] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [436] = {
    [sym__newline] = ACTIONS(581),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(931),
  },
  [437] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym__record_directives1] = STATE(486),
    [sym_record_constructor_instance] = STATE(340),
    [sym_record_constructor] = STATE(341),
    [sym__record_directive] = STATE(341),
    [sym_record_induction] = STATE(341),
    [sym_record_eta] = STATE(341),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(487),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__record_directives1_repeat1] = STATE(343),
    [aux_sym__declarations1_repeat1] = STATE(118),
    [sym__dedent] = ACTIONS(933),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(587),
    [anon_sym_constructor] = ACTIONS(589),
    [anon_sym_inductive] = ACTIONS(591),
    [anon_sym_coinductive] = ACTIONS(591),
    [anon_sym_eta_DASHequality] = ACTIONS(593),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(593),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [438] = {
    [sym__dedent] = ACTIONS(595),
    [sym_string] = ACTIONS(597),
    [sym_int] = ACTIONS(597),
    [sym_qualified_name] = ACTIONS(597),
    [anon_sym__] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_Prop] = ACTIONS(597),
    [anon_sym_Set] = ACTIONS(597),
    [anon_sym_quote] = ACTIONS(597),
    [anon_sym_quoteTerm] = ACTIONS(597),
    [anon_sym_unquote] = ACTIONS(597),
    [anon_sym_data] = ACTIONS(597),
    [anon_sym_codata] = ACTIONS(597),
    [anon_sym_record] = ACTIONS(597),
    [anon_sym_instance] = ACTIONS(597),
    [anon_sym_field] = ACTIONS(597),
    [sym_pragma] = ACTIONS(597),
    [anon_sym_infix] = ACTIONS(597),
    [anon_sym_infixl] = ACTIONS(597),
    [anon_sym_infixr] = ACTIONS(597),
  },
  [439] = {
    [sym_literal] = STATE(205),
    [sym_expr] = STATE(488),
    [sym__expr1] = STATE(202),
    [sym__application] = STATE(202),
    [sym__expr2] = STATE(202),
    [sym__atoms1] = STATE(203),
    [sym_atom] = STATE(204),
    [sym__atom_curly] = STATE(205),
    [sym__atom_no_curly] = STATE(205),
    [sym__typed_bindings1] = STATE(206),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(207),
    [aux_sym__application_repeat1] = STATE(208),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(361),
    [sym_int] = ACTIONS(361),
    [sym_qualified_name] = ACTIONS(363),
    [anon_sym__] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(363),
    [anon_sym_Prop] = ACTIONS(363),
    [anon_sym_Set] = ACTIONS(363),
    [anon_sym_quote] = ACTIONS(363),
    [anon_sym_quoteTerm] = ACTIONS(363),
    [anon_sym_unquote] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [440] = {
    [sym_record_declarations_block] = STATE(489),
    [sym__indent] = ACTIONS(801),
    [sym__dedent] = ACTIONS(595),
    [sym_string] = ACTIONS(597),
    [sym_int] = ACTIONS(597),
    [sym_qualified_name] = ACTIONS(597),
    [anon_sym__] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(597),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_Prop] = ACTIONS(597),
    [anon_sym_Set] = ACTIONS(597),
    [anon_sym_quote] = ACTIONS(597),
    [anon_sym_quoteTerm] = ACTIONS(597),
    [anon_sym_unquote] = ACTIONS(597),
    [anon_sym_data] = ACTIONS(597),
    [anon_sym_codata] = ACTIONS(597),
    [anon_sym_record] = ACTIONS(597),
    [anon_sym_instance] = ACTIONS(597),
    [anon_sym_field] = ACTIONS(597),
    [sym_pragma] = ACTIONS(597),
    [anon_sym_infix] = ACTIONS(597),
    [anon_sym_infixl] = ACTIONS(597),
    [anon_sym_infixr] = ACTIONS(597),
  },
  [441] = {
    [sym__dedent] = ACTIONS(609),
    [sym_string] = ACTIONS(611),
    [sym_int] = ACTIONS(611),
    [sym_qualified_name] = ACTIONS(611),
    [anon_sym__] = ACTIONS(611),
    [anon_sym_LBRACE] = ACTIONS(611),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(611),
    [anon_sym_Prop] = ACTIONS(611),
    [anon_sym_Set] = ACTIONS(611),
    [anon_sym_quote] = ACTIONS(611),
    [anon_sym_quoteTerm] = ACTIONS(611),
    [anon_sym_unquote] = ACTIONS(611),
    [anon_sym_data] = ACTIONS(611),
    [anon_sym_codata] = ACTIONS(611),
    [anon_sym_record] = ACTIONS(611),
    [anon_sym_instance] = ACTIONS(611),
    [anon_sym_field] = ACTIONS(611),
    [sym_pragma] = ACTIONS(611),
    [anon_sym_infix] = ACTIONS(611),
    [anon_sym_infixl] = ACTIONS(611),
    [anon_sym_infixr] = ACTIONS(611),
  },
  [442] = {
    [sym__dedent] = ACTIONS(645),
    [sym_string] = ACTIONS(647),
    [sym_int] = ACTIONS(647),
    [sym_qualified_name] = ACTIONS(647),
    [anon_sym__] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(647),
    [anon_sym_Prop] = ACTIONS(647),
    [anon_sym_Set] = ACTIONS(647),
    [anon_sym_quote] = ACTIONS(647),
    [anon_sym_quoteTerm] = ACTIONS(647),
    [anon_sym_unquote] = ACTIONS(647),
    [anon_sym_data] = ACTIONS(647),
    [anon_sym_codata] = ACTIONS(647),
    [anon_sym_record] = ACTIONS(647),
    [anon_sym_instance] = ACTIONS(647),
    [anon_sym_field] = ACTIONS(647),
    [sym_pragma] = ACTIONS(647),
    [anon_sym_infix] = ACTIONS(647),
    [anon_sym_infixl] = ACTIONS(647),
    [anon_sym_infixr] = ACTIONS(647),
  },
  [443] = {
    [sym_name] = ACTIONS(935),
    [anon_sym_DOT] = ACTIONS(935),
    [anon_sym_DOT_DOT] = ACTIONS(935),
    [anon_sym_LBRACE] = ACTIONS(935),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(935),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(935),
  },
  [444] = {
    [aux_sym_arg_name_repeat1] = STATE(444),
    [sym_name] = ACTIONS(937),
    [anon_sym_RBRACE] = ACTIONS(940),
    [sym_comment] = ACTIONS(13),
  },
  [445] = {
    [aux_sym_arg_name_repeat1] = STATE(445),
    [sym_name] = ACTIONS(942),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(940),
    [sym_comment] = ACTIONS(13),
  },
  [446] = {
    [sym__dedent] = ACTIONS(645),
    [sym_name] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(647),
    [anon_sym_DOT_DOT] = ACTIONS(647),
    [anon_sym_LBRACE] = ACTIONS(647),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(647),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(647),
    [anon_sym_overlap] = ACTIONS(647),
  },
  [447] = {
    [sym__dedent] = ACTIONS(945),
    [sym_name] = ACTIONS(947),
    [anon_sym_DOT] = ACTIONS(947),
    [anon_sym_DOT_DOT] = ACTIONS(947),
    [anon_sym_LBRACE] = ACTIONS(947),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(947),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(947),
    [anon_sym_overlap] = ACTIONS(947),
  },
  [448] = {
    [sym__dedent] = ACTIONS(119),
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_name] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_instance] = ACTIONS(121),
    [anon_sym_overlap] = ACTIONS(121),
  },
  [449] = {
    [anon_sym_RBRACE] = ACTIONS(949),
    [sym_comment] = ACTIONS(59),
  },
  [450] = {
    [sym_literal] = STATE(372),
    [sym_expr] = STATE(491),
    [sym__expr1] = STATE(369),
    [sym__application] = STATE(369),
    [sym__expr2] = STATE(369),
    [sym__atoms1] = STATE(370),
    [sym_atom] = STATE(371),
    [sym__atom_curly] = STATE(372),
    [sym__atom_no_curly] = STATE(372),
    [sym__typed_bindings1] = STATE(373),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(374),
    [aux_sym__application_repeat1] = STATE(375),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(639),
    [sym_int] = ACTIONS(639),
    [sym_qualified_name] = ACTIONS(641),
    [anon_sym__] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(641),
    [anon_sym_Prop] = ACTIONS(641),
    [anon_sym_Set] = ACTIONS(641),
    [anon_sym_quote] = ACTIONS(641),
    [anon_sym_quoteTerm] = ACTIONS(641),
    [anon_sym_unquote] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [451] = {
    [sym__dedent] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_int] = ACTIONS(31),
    [sym_name] = ACTIONS(31),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(31),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_Prop] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_quote] = ACTIONS(31),
    [anon_sym_quoteTerm] = ACTIONS(31),
    [anon_sym_unquote] = ACTIONS(31),
    [anon_sym_instance] = ACTIONS(31),
    [anon_sym_overlap] = ACTIONS(31),
  },
  [452] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(493),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(951),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [453] = {
    [sym__dedent] = ACTIONS(243),
    [sym_name] = ACTIONS(953),
    [anon_sym_DOT] = ACTIONS(953),
    [anon_sym_DOT_DOT] = ACTIONS(953),
    [anon_sym_LBRACE] = ACTIONS(953),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(953),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(953),
    [anon_sym_instance] = ACTIONS(953),
    [anon_sym_overlap] = ACTIONS(953),
  },
  [454] = {
    [sym__dedent] = ACTIONS(75),
    [sym_string] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_name] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_Prop] = ACTIONS(77),
    [anon_sym_Set] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(77),
    [anon_sym_quoteTerm] = ACTIONS(77),
    [anon_sym_unquote] = ACTIONS(77),
    [anon_sym_instance] = ACTIONS(79),
    [anon_sym_overlap] = ACTIONS(79),
  },
  [455] = {
    [sym__dedent] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_name] = ACTIONS(83),
    [sym_qualified_name] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(83),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_Prop] = ACTIONS(83),
    [anon_sym_Set] = ACTIONS(83),
    [anon_sym_quote] = ACTIONS(83),
    [anon_sym_quoteTerm] = ACTIONS(83),
    [anon_sym_unquote] = ACTIONS(83),
    [anon_sym_instance] = ACTIONS(83),
    [anon_sym_overlap] = ACTIONS(83),
  },
  [456] = {
    [sym_literal] = STATE(455),
    [sym__expr2] = STATE(458),
    [sym_atom] = STATE(454),
    [sym__atom_curly] = STATE(455),
    [sym__atom_no_curly] = STATE(455),
    [aux_sym__application_repeat1] = STATE(60),
    [sym_string] = ACTIONS(847),
    [sym_int] = ACTIONS(847),
    [sym_qualified_name] = ACTIONS(849),
    [anon_sym__] = ACTIONS(849),
    [anon_sym_LBRACE] = ACTIONS(851),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(849),
    [anon_sym_Prop] = ACTIONS(849),
    [anon_sym_Set] = ACTIONS(849),
    [anon_sym_quote] = ACTIONS(849),
    [anon_sym_quoteTerm] = ACTIONS(849),
    [anon_sym_unquote] = ACTIONS(849),
  },
  [457] = {
    [sym_literal] = STATE(32),
    [sym_expr] = STATE(449),
    [sym__expr1] = STATE(29),
    [sym__application] = STATE(29),
    [sym__expr2] = STATE(29),
    [sym__atoms1] = STATE(30),
    [sym_atom] = STATE(31),
    [sym__atom_curly] = STATE(32),
    [sym__atom_no_curly] = STATE(32),
    [sym__typed_bindings1] = STATE(33),
    [sym_typed_binding] = STATE(36),
    [aux_sym__expr1_repeat1] = STATE(34),
    [aux_sym__application_repeat1] = STATE(35),
    [aux_sym__typed_bindings1_repeat1] = STATE(36),
    [sym_string] = ACTIONS(33),
    [sym_int] = ACTIONS(33),
    [sym_qualified_name] = ACTIONS(35),
    [anon_sym__] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(43),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(35),
    [anon_sym_Prop] = ACTIONS(35),
    [anon_sym_Set] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(35),
    [anon_sym_quoteTerm] = ACTIONS(35),
    [anon_sym_unquote] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(45),
  },
  [458] = {
    [sym__dedent] = ACTIONS(254),
    [sym_name] = ACTIONS(955),
    [anon_sym_DOT] = ACTIONS(955),
    [anon_sym_DOT_DOT] = ACTIONS(955),
    [anon_sym_LBRACE] = ACTIONS(955),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(955),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(955),
    [anon_sym_instance] = ACTIONS(955),
    [anon_sym_overlap] = ACTIONS(955),
  },
  [459] = {
    [sym__newline] = ACTIONS(315),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
    [anon_sym_module] = ACTIONS(317),
  },
  [460] = {
    [sym__const_right_arrow] = ACTIONS(957),
    [anon_sym_DOT] = ACTIONS(959),
    [anon_sym_DOT_DOT] = ACTIONS(957),
    [anon_sym_LBRACE] = ACTIONS(959),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(957),
    [sym_comment] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(957),
  },
  [461] = {
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
  },
  [462] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(512),
    [sym_comment] = ACTIONS(59),
  },
  [463] = {
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
  },
  [464] = {
    [anon_sym_RBRACE] = ACTIONS(961),
    [sym_comment] = ACTIONS(59),
  },
  [465] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
  },
  [466] = {
    [anon_sym_RBRACE] = ACTIONS(963),
    [sym_comment] = ACTIONS(59),
  },
  [467] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(963),
    [sym_comment] = ACTIONS(59),
  },
  [468] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(963),
  },
  [469] = {
    [sym_name] = ACTIONS(863),
    [anon_sym__] = ACTIONS(863),
    [anon_sym_DOT] = ACTIONS(863),
    [anon_sym_DOT_DOT] = ACTIONS(863),
    [anon_sym_LBRACE] = ACTIONS(863),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(863),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_where] = ACTIONS(863),
  },
  [470] = {
    [sym__newline] = ACTIONS(315),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
  },
  [471] = {
    [ts_builtin_sym_end] = ACTIONS(965),
    [sym_string] = ACTIONS(967),
    [sym_int] = ACTIONS(967),
    [sym_qualified_name] = ACTIONS(967),
    [anon_sym__] = ACTIONS(967),
    [anon_sym_LBRACE] = ACTIONS(967),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(967),
    [anon_sym_Prop] = ACTIONS(967),
    [anon_sym_Set] = ACTIONS(967),
    [anon_sym_quote] = ACTIONS(967),
    [anon_sym_quoteTerm] = ACTIONS(967),
    [anon_sym_unquote] = ACTIONS(967),
    [anon_sym_data] = ACTIONS(967),
    [anon_sym_codata] = ACTIONS(967),
    [anon_sym_record] = ACTIONS(967),
    [anon_sym_instance] = ACTIONS(967),
    [anon_sym_field] = ACTIONS(967),
    [sym_pragma] = ACTIONS(967),
    [anon_sym_infix] = ACTIONS(967),
    [anon_sym_infixl] = ACTIONS(967),
    [anon_sym_infixr] = ACTIONS(967),
  },
  [472] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_where] = ACTIONS(317),
  },
  [473] = {
    [sym_name] = ACTIONS(969),
    [sym_comment] = ACTIONS(13),
  },
  [474] = {
    [ts_builtin_sym_end] = ACTIONS(971),
    [sym_string] = ACTIONS(973),
    [sym_int] = ACTIONS(973),
    [sym_qualified_name] = ACTIONS(973),
    [anon_sym__] = ACTIONS(973),
    [anon_sym_LBRACE] = ACTIONS(973),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(973),
    [anon_sym_Prop] = ACTIONS(973),
    [anon_sym_Set] = ACTIONS(973),
    [anon_sym_quote] = ACTIONS(973),
    [anon_sym_quoteTerm] = ACTIONS(973),
    [anon_sym_unquote] = ACTIONS(973),
    [anon_sym_data] = ACTIONS(973),
    [anon_sym_codata] = ACTIONS(973),
    [anon_sym_record] = ACTIONS(973),
    [anon_sym_instance] = ACTIONS(973),
    [anon_sym_field] = ACTIONS(973),
    [sym_pragma] = ACTIONS(973),
    [anon_sym_infix] = ACTIONS(973),
    [anon_sym_infixl] = ACTIONS(973),
    [anon_sym_infixr] = ACTIONS(973),
  },
  [475] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_constructor] = ACTIONS(975),
  },
  [476] = {
    [sym__dedent] = ACTIONS(977),
    [sym_string] = ACTIONS(979),
    [sym_int] = ACTIONS(979),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_LBRACE] = ACTIONS(979),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
    [anon_sym_data] = ACTIONS(979),
    [anon_sym_codata] = ACTIONS(979),
    [anon_sym_record] = ACTIONS(979),
    [anon_sym_instance] = ACTIONS(981),
    [anon_sym_constructor] = ACTIONS(906),
    [anon_sym_inductive] = ACTIONS(906),
    [anon_sym_coinductive] = ACTIONS(906),
    [anon_sym_eta_DASHequality] = ACTIONS(906),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(906),
    [anon_sym_field] = ACTIONS(979),
    [sym_pragma] = ACTIONS(979),
    [anon_sym_infix] = ACTIONS(979),
    [anon_sym_infixl] = ACTIONS(979),
    [anon_sym_infixr] = ACTIONS(979),
  },
  [477] = {
    [sym__indent] = ACTIONS(984),
    [sym_comment] = ACTIONS(59),
  },
  [478] = {
    [sym__newline] = ACTIONS(986),
    [sym_comment] = ACTIONS(59),
  },
  [479] = {
    [ts_builtin_sym_end] = ACTIONS(988),
    [sym_string] = ACTIONS(990),
    [sym_int] = ACTIONS(990),
    [sym_qualified_name] = ACTIONS(990),
    [anon_sym__] = ACTIONS(990),
    [anon_sym_LBRACE] = ACTIONS(990),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(990),
    [anon_sym_Prop] = ACTIONS(990),
    [anon_sym_Set] = ACTIONS(990),
    [anon_sym_quote] = ACTIONS(990),
    [anon_sym_quoteTerm] = ACTIONS(990),
    [anon_sym_unquote] = ACTIONS(990),
    [anon_sym_data] = ACTIONS(990),
    [anon_sym_codata] = ACTIONS(990),
    [anon_sym_record] = ACTIONS(990),
    [anon_sym_instance] = ACTIONS(990),
    [anon_sym_field] = ACTIONS(990),
    [sym_pragma] = ACTIONS(990),
    [anon_sym_infix] = ACTIONS(990),
    [anon_sym_infixl] = ACTIONS(990),
    [anon_sym_infixr] = ACTIONS(990),
  },
  [480] = {
    [sym__declarations0] = STATE(499),
    [sym__newline] = ACTIONS(992),
    [sym__indent] = ACTIONS(403),
    [sym_comment] = ACTIONS(59),
  },
  [481] = {
    [sym__newline] = ACTIONS(740),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(994),
  },
  [482] = {
    [sym__dedent] = ACTIONS(744),
    [sym_string] = ACTIONS(746),
    [sym_int] = ACTIONS(746),
    [sym_qualified_name] = ACTIONS(746),
    [anon_sym__] = ACTIONS(746),
    [anon_sym_LBRACE] = ACTIONS(746),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(746),
    [anon_sym_Prop] = ACTIONS(746),
    [anon_sym_Set] = ACTIONS(746),
    [anon_sym_quote] = ACTIONS(746),
    [anon_sym_quoteTerm] = ACTIONS(746),
    [anon_sym_unquote] = ACTIONS(746),
    [anon_sym_data] = ACTIONS(746),
    [anon_sym_codata] = ACTIONS(746),
    [anon_sym_record] = ACTIONS(746),
    [anon_sym_instance] = ACTIONS(746),
    [anon_sym_field] = ACTIONS(746),
    [sym_pragma] = ACTIONS(746),
    [anon_sym_infix] = ACTIONS(746),
    [anon_sym_infixl] = ACTIONS(746),
    [anon_sym_infixr] = ACTIONS(746),
  },
  [483] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(994),
  },
  [484] = {
    [sym_record_declarations_block] = STATE(501),
    [sym__indent] = ACTIONS(801),
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
    [anon_sym_instance] = ACTIONS(754),
    [anon_sym_field] = ACTIONS(754),
    [sym_pragma] = ACTIONS(754),
    [anon_sym_infix] = ACTIONS(754),
    [anon_sym_infixl] = ACTIONS(754),
    [anon_sym_infixr] = ACTIONS(754),
  },
  [485] = {
    [sym__dedent] = ACTIONS(756),
    [sym_string] = ACTIONS(758),
    [sym_int] = ACTIONS(758),
    [sym_qualified_name] = ACTIONS(758),
    [anon_sym__] = ACTIONS(758),
    [anon_sym_LBRACE] = ACTIONS(758),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(758),
    [anon_sym_Prop] = ACTIONS(758),
    [anon_sym_Set] = ACTIONS(758),
    [anon_sym_quote] = ACTIONS(758),
    [anon_sym_quoteTerm] = ACTIONS(758),
    [anon_sym_unquote] = ACTIONS(758),
    [anon_sym_data] = ACTIONS(758),
    [anon_sym_codata] = ACTIONS(758),
    [anon_sym_record] = ACTIONS(758),
    [anon_sym_instance] = ACTIONS(758),
    [anon_sym_field] = ACTIONS(758),
    [sym_pragma] = ACTIONS(758),
    [anon_sym_infix] = ACTIONS(758),
    [anon_sym_infixl] = ACTIONS(758),
    [anon_sym_infixr] = ACTIONS(758),
  },
  [486] = {
    [sym_literal] = STATE(14),
    [sym__expr1] = STATE(11),
    [sym__application] = STATE(11),
    [sym__expr2] = STATE(11),
    [sym__atoms1] = STATE(12),
    [sym_atom] = STATE(13),
    [sym__atom_curly] = STATE(14),
    [sym__atom_no_curly] = STATE(14),
    [sym_function_clause] = STATE(115),
    [sym_lhs] = STATE(15),
    [sym_data] = STATE(116),
    [sym_data_signature_only] = STATE(115),
    [sym_record] = STATE(116),
    [sym_record_signature_only] = STATE(115),
    [sym_field] = STATE(116),
    [sym__declaration] = STATE(115),
    [sym__declaration_block] = STATE(116),
    [sym_infix] = STATE(115),
    [sym_instance] = STATE(116),
    [sym__declarations1] = STATE(503),
    [aux_sym__expr1_repeat1] = STATE(19),
    [aux_sym__application_repeat1] = STATE(20),
    [aux_sym__declarations1_repeat1] = STATE(118),
    [sym__dedent] = ACTIONS(996),
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
    [anon_sym_data] = ACTIONS(173),
    [anon_sym_codata] = ACTIONS(175),
    [anon_sym_record] = ACTIONS(177),
    [anon_sym_instance] = ACTIONS(179),
    [anon_sym_field] = ACTIONS(181),
    [sym_pragma] = ACTIONS(183),
    [anon_sym_infix] = ACTIONS(27),
    [anon_sym_infixl] = ACTIONS(27),
    [anon_sym_infixr] = ACTIONS(27),
  },
  [487] = {
    [sym__dedent] = ACTIONS(996),
    [sym_comment] = ACTIONS(59),
  },
  [488] = {
    [sym__newline] = ACTIONS(789),
    [sym_comment] = ACTIONS(59),
    [anon_sym_where] = ACTIONS(998),
  },
  [489] = {
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
    [anon_sym_instance] = ACTIONS(754),
    [anon_sym_field] = ACTIONS(754),
    [sym_pragma] = ACTIONS(754),
    [anon_sym_infix] = ACTIONS(754),
    [anon_sym_infixl] = ACTIONS(754),
    [anon_sym_infixr] = ACTIONS(754),
  },
  [490] = {
    [sym__dedent] = ACTIONS(315),
    [sym__const_right_arrow] = ACTIONS(317),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_name] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(317),
    [anon_sym_DOT_DOT] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_instance] = ACTIONS(317),
    [anon_sym_overlap] = ACTIONS(317),
  },
  [491] = {
    [sym__dedent] = ACTIONS(512),
    [sym_name] = ACTIONS(1000),
    [anon_sym_DOT] = ACTIONS(1000),
    [anon_sym_DOT_DOT] = ACTIONS(1000),
    [anon_sym_LBRACE] = ACTIONS(1000),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1000),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(1000),
    [anon_sym_overlap] = ACTIONS(1000),
  },
  [492] = {
    [sym__dedent] = ACTIONS(119),
    [sym_string] = ACTIONS(121),
    [sym_int] = ACTIONS(121),
    [sym_name] = ACTIONS(121),
    [sym_qualified_name] = ACTIONS(121),
    [anon_sym__] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_QMARK] = ACTIONS(121),
    [anon_sym_Prop] = ACTIONS(121),
    [anon_sym_Set] = ACTIONS(121),
    [anon_sym_quote] = ACTIONS(121),
    [anon_sym_quoteTerm] = ACTIONS(121),
    [anon_sym_unquote] = ACTIONS(121),
    [anon_sym_instance] = ACTIONS(121),
    [anon_sym_overlap] = ACTIONS(121),
  },
  [493] = {
    [anon_sym_RBRACE] = ACTIONS(1002),
    [sym_comment] = ACTIONS(59),
  },
  [494] = {
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
  },
  [495] = {
    [sym_name] = ACTIONS(959),
    [anon_sym__] = ACTIONS(959),
    [anon_sym_DOT] = ACTIONS(959),
    [anon_sym_DOT_DOT] = ACTIONS(959),
    [anon_sym_LBRACE] = ACTIONS(959),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(959),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(959),
    [anon_sym_COLON] = ACTIONS(959),
    [anon_sym_where] = ACTIONS(959),
  },
  [496] = {
    [sym__dedent] = ACTIONS(1004),
    [sym_comment] = ACTIONS(59),
  },
  [497] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_constructor] = ACTIONS(1006),
  },
  [498] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_instance] = ACTIONS(1008),
    [anon_sym_constructor] = ACTIONS(1008),
    [anon_sym_inductive] = ACTIONS(1008),
    [anon_sym_coinductive] = ACTIONS(1008),
    [anon_sym_eta_DASHequality] = ACTIONS(1008),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1008),
  },
  [499] = {
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
    [anon_sym_infix] = ACTIONS(877),
    [anon_sym_infixl] = ACTIONS(877),
    [anon_sym_infixr] = ACTIONS(877),
  },
  [500] = {
    [sym__declarations0] = STATE(508),
    [sym__newline] = ACTIONS(1010),
    [sym__indent] = ACTIONS(403),
    [sym_comment] = ACTIONS(59),
  },
  [501] = {
    [sym__dedent] = ACTIONS(885),
    [sym_string] = ACTIONS(887),
    [sym_int] = ACTIONS(887),
    [sym_qualified_name] = ACTIONS(887),
    [anon_sym__] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(887),
    [anon_sym_Prop] = ACTIONS(887),
    [anon_sym_Set] = ACTIONS(887),
    [anon_sym_quote] = ACTIONS(887),
    [anon_sym_quoteTerm] = ACTIONS(887),
    [anon_sym_unquote] = ACTIONS(887),
    [anon_sym_data] = ACTIONS(887),
    [anon_sym_codata] = ACTIONS(887),
    [anon_sym_record] = ACTIONS(887),
    [anon_sym_instance] = ACTIONS(887),
    [anon_sym_field] = ACTIONS(887),
    [sym_pragma] = ACTIONS(887),
    [anon_sym_infix] = ACTIONS(887),
    [anon_sym_infixl] = ACTIONS(887),
    [anon_sym_infixr] = ACTIONS(887),
  },
  [502] = {
    [sym__dedent] = ACTIONS(893),
    [sym_string] = ACTIONS(895),
    [sym_int] = ACTIONS(895),
    [sym_qualified_name] = ACTIONS(895),
    [anon_sym__] = ACTIONS(895),
    [anon_sym_LBRACE] = ACTIONS(895),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(895),
    [anon_sym_Prop] = ACTIONS(895),
    [anon_sym_Set] = ACTIONS(895),
    [anon_sym_quote] = ACTIONS(895),
    [anon_sym_quoteTerm] = ACTIONS(895),
    [anon_sym_unquote] = ACTIONS(895),
    [anon_sym_data] = ACTIONS(895),
    [anon_sym_codata] = ACTIONS(895),
    [anon_sym_record] = ACTIONS(895),
    [anon_sym_instance] = ACTIONS(895),
    [anon_sym_field] = ACTIONS(895),
    [sym_pragma] = ACTIONS(895),
    [anon_sym_infix] = ACTIONS(895),
    [anon_sym_infixl] = ACTIONS(895),
    [anon_sym_infixr] = ACTIONS(895),
  },
  [503] = {
    [sym__dedent] = ACTIONS(1012),
    [sym_comment] = ACTIONS(59),
  },
  [504] = {
    [sym_record_declarations_block] = STATE(510),
    [sym__indent] = ACTIONS(801),
    [sym__dedent] = ACTIONS(885),
    [sym_string] = ACTIONS(887),
    [sym_int] = ACTIONS(887),
    [sym_qualified_name] = ACTIONS(887),
    [anon_sym__] = ACTIONS(887),
    [anon_sym_LBRACE] = ACTIONS(887),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(887),
    [anon_sym_Prop] = ACTIONS(887),
    [anon_sym_Set] = ACTIONS(887),
    [anon_sym_quote] = ACTIONS(887),
    [anon_sym_quoteTerm] = ACTIONS(887),
    [anon_sym_unquote] = ACTIONS(887),
    [anon_sym_data] = ACTIONS(887),
    [anon_sym_codata] = ACTIONS(887),
    [anon_sym_record] = ACTIONS(887),
    [anon_sym_instance] = ACTIONS(887),
    [anon_sym_field] = ACTIONS(887),
    [sym_pragma] = ACTIONS(887),
    [anon_sym_infix] = ACTIONS(887),
    [anon_sym_infixl] = ACTIONS(887),
    [anon_sym_infixr] = ACTIONS(887),
  },
  [505] = {
    [sym__dedent] = ACTIONS(315),
    [sym_string] = ACTIONS(317),
    [sym_int] = ACTIONS(317),
    [sym_name] = ACTIONS(317),
    [sym_qualified_name] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(317),
    [anon_sym_DOT_DOT] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_QMARK] = ACTIONS(317),
    [anon_sym_Prop] = ACTIONS(317),
    [anon_sym_Set] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_quoteTerm] = ACTIONS(317),
    [anon_sym_unquote] = ACTIONS(317),
    [anon_sym_instance] = ACTIONS(317),
    [anon_sym_overlap] = ACTIONS(317),
  },
  [506] = {
    [sym__dedent] = ACTIONS(1014),
    [sym_string] = ACTIONS(1016),
    [sym_int] = ACTIONS(1016),
    [sym_qualified_name] = ACTIONS(1016),
    [anon_sym__] = ACTIONS(1016),
    [anon_sym_LBRACE] = ACTIONS(1016),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1016),
    [anon_sym_Prop] = ACTIONS(1016),
    [anon_sym_Set] = ACTIONS(1016),
    [anon_sym_quote] = ACTIONS(1016),
    [anon_sym_quoteTerm] = ACTIONS(1016),
    [anon_sym_unquote] = ACTIONS(1016),
    [anon_sym_data] = ACTIONS(1016),
    [anon_sym_codata] = ACTIONS(1016),
    [anon_sym_record] = ACTIONS(1016),
    [anon_sym_instance] = ACTIONS(1016),
    [anon_sym_constructor] = ACTIONS(1016),
    [anon_sym_inductive] = ACTIONS(1016),
    [anon_sym_coinductive] = ACTIONS(1016),
    [anon_sym_eta_DASHequality] = ACTIONS(1016),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1016),
    [anon_sym_field] = ACTIONS(1016),
    [sym_pragma] = ACTIONS(1016),
    [anon_sym_infix] = ACTIONS(1016),
    [anon_sym_infixl] = ACTIONS(1016),
    [anon_sym_infixr] = ACTIONS(1016),
  },
  [507] = {
    [sym_name] = ACTIONS(1018),
    [sym_comment] = ACTIONS(13),
  },
  [508] = {
    [sym__dedent] = ACTIONS(965),
    [sym_string] = ACTIONS(967),
    [sym_int] = ACTIONS(967),
    [sym_qualified_name] = ACTIONS(967),
    [anon_sym__] = ACTIONS(967),
    [anon_sym_LBRACE] = ACTIONS(967),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(967),
    [anon_sym_Prop] = ACTIONS(967),
    [anon_sym_Set] = ACTIONS(967),
    [anon_sym_quote] = ACTIONS(967),
    [anon_sym_quoteTerm] = ACTIONS(967),
    [anon_sym_unquote] = ACTIONS(967),
    [anon_sym_data] = ACTIONS(967),
    [anon_sym_codata] = ACTIONS(967),
    [anon_sym_record] = ACTIONS(967),
    [anon_sym_instance] = ACTIONS(967),
    [anon_sym_field] = ACTIONS(967),
    [sym_pragma] = ACTIONS(967),
    [anon_sym_infix] = ACTIONS(967),
    [anon_sym_infixl] = ACTIONS(967),
    [anon_sym_infixr] = ACTIONS(967),
  },
  [509] = {
    [sym__dedent] = ACTIONS(971),
    [sym_string] = ACTIONS(973),
    [sym_int] = ACTIONS(973),
    [sym_qualified_name] = ACTIONS(973),
    [anon_sym__] = ACTIONS(973),
    [anon_sym_LBRACE] = ACTIONS(973),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(973),
    [anon_sym_Prop] = ACTIONS(973),
    [anon_sym_Set] = ACTIONS(973),
    [anon_sym_quote] = ACTIONS(973),
    [anon_sym_quoteTerm] = ACTIONS(973),
    [anon_sym_unquote] = ACTIONS(973),
    [anon_sym_data] = ACTIONS(973),
    [anon_sym_codata] = ACTIONS(973),
    [anon_sym_record] = ACTIONS(973),
    [anon_sym_instance] = ACTIONS(973),
    [anon_sym_field] = ACTIONS(973),
    [sym_pragma] = ACTIONS(973),
    [anon_sym_infix] = ACTIONS(973),
    [anon_sym_infixl] = ACTIONS(973),
    [anon_sym_infixr] = ACTIONS(973),
  },
  [510] = {
    [sym__dedent] = ACTIONS(988),
    [sym_string] = ACTIONS(990),
    [sym_int] = ACTIONS(990),
    [sym_qualified_name] = ACTIONS(990),
    [anon_sym__] = ACTIONS(990),
    [anon_sym_LBRACE] = ACTIONS(990),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(990),
    [anon_sym_Prop] = ACTIONS(990),
    [anon_sym_Set] = ACTIONS(990),
    [anon_sym_quote] = ACTIONS(990),
    [anon_sym_quoteTerm] = ACTIONS(990),
    [anon_sym_unquote] = ACTIONS(990),
    [anon_sym_data] = ACTIONS(990),
    [anon_sym_codata] = ACTIONS(990),
    [anon_sym_record] = ACTIONS(990),
    [anon_sym_instance] = ACTIONS(990),
    [anon_sym_field] = ACTIONS(990),
    [sym_pragma] = ACTIONS(990),
    [anon_sym_infix] = ACTIONS(990),
    [anon_sym_infixl] = ACTIONS(990),
    [anon_sym_infixr] = ACTIONS(990),
  },
  [511] = {
    [sym__dedent] = ACTIONS(1020),
    [sym_comment] = ACTIONS(59),
  },
  [512] = {
    [sym_comment] = ACTIONS(59),
    [anon_sym_instance] = ACTIONS(1014),
    [anon_sym_constructor] = ACTIONS(1014),
    [anon_sym_inductive] = ACTIONS(1014),
    [anon_sym_coinductive] = ACTIONS(1014),
    [anon_sym_eta_DASHequality] = ACTIONS(1014),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1014),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(14),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = false}, SHIFT(6),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_literal, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_literal, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(22),
  [35] = {.count = 1, .reusable = false}, SHIFT(32),
  [37] = {.count = 1, .reusable = false}, SHIFT(23),
  [39] = {.count = 1, .reusable = false}, SHIFT(24),
  [41] = {.count = 1, .reusable = false}, SHIFT(25),
  [43] = {.count = 1, .reusable = false}, SHIFT(26),
  [45] = {.count = 1, .reusable = false}, SHIFT(27),
  [47] = {.count = 1, .reusable = false}, SHIFT(37),
  [49] = {.count = 1, .reusable = false}, SHIFT(38),
  [51] = {.count = 1, .reusable = false}, SHIFT(39),
  [53] = {.count = 1, .reusable = false}, SHIFT(40),
  [55] = {.count = 1, .reusable = true}, SHIFT(42),
  [57] = {.count = 1, .reusable = true}, SHIFT(41),
  [59] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [61] = {.count = 1, .reusable = true}, SHIFT(43),
  [63] = {.count = 1, .reusable = true}, SHIFT(45),
  [65] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(46),
  [71] = {.count = 1, .reusable = true}, SHIFT(47),
  [73] = {.count = 1, .reusable = true}, SHIFT(50),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym__expr2, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym__expr2, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(52),
  [91] = {.count = 1, .reusable = true}, SHIFT(53),
  [93] = {.count = 1, .reusable = true}, SHIFT(56),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 1),
  [97] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__atoms1, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(61),
  [105] = {.count = 1, .reusable = false}, SHIFT(64),
  [107] = {.count = 1, .reusable = true}, SHIFT(65),
  [109] = {.count = 1, .reusable = true}, SHIFT(66),
  [111] = {.count = 1, .reusable = false}, SHIFT(67),
  [113] = {.count = 1, .reusable = false}, SHIFT(73),
  [115] = {.count = 1, .reusable = false}, SHIFT(68),
  [117] = {.count = 1, .reusable = false}, SHIFT(69),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 2),
  [123] = {.count = 1, .reusable = false}, SHIFT(75),
  [125] = {.count = 1, .reusable = false}, SHIFT(79),
  [127] = {.count = 1, .reusable = false}, SHIFT(76),
  [129] = {.count = 1, .reusable = true}, SHIFT(82),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(83),
  [135] = {.count = 1, .reusable = false}, SHIFT(84),
  [137] = {.count = 1, .reusable = false}, SHIFT(88),
  [139] = {.count = 1, .reusable = false}, SHIFT(85),
  [141] = {.count = 1, .reusable = false}, SHIFT(90),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym__typed_bindings1, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(23),
  [147] = {.count = 1, .reusable = false}, SHIFT(93),
  [149] = {.count = 1, .reusable = true}, SHIFT(26),
  [151] = {.count = 1, .reusable = true}, SHIFT(27),
  [153] = {.count = 1, .reusable = false}, SHIFT(95),
  [155] = {.count = 1, .reusable = false}, SHIFT(96),
  [157] = {.count = 1, .reusable = false}, SHIFT(97),
  [159] = {.count = 1, .reusable = false}, SHIFT(98),
  [161] = {.count = 1, .reusable = false}, SHIFT(99),
  [163] = {.count = 1, .reusable = false}, SHIFT(100),
  [165] = {.count = 1, .reusable = false}, SHIFT(101),
  [167] = {.count = 1, .reusable = false}, SHIFT(105),
  [169] = {.count = 1, .reusable = false}, SHIFT(107),
  [171] = {.count = 1, .reusable = false}, SHIFT(108),
  [173] = {.count = 1, .reusable = false}, SHIFT(110),
  [175] = {.count = 1, .reusable = false}, SHIFT(111),
  [177] = {.count = 1, .reusable = false}, SHIFT(112),
  [179] = {.count = 1, .reusable = false}, SHIFT(113),
  [181] = {.count = 1, .reusable = false}, SHIFT(114),
  [183] = {.count = 1, .reusable = false}, SHIFT(115),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_instance, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_instance, 2),
  [189] = {.count = 1, .reusable = false}, SHIFT(124),
  [191] = {.count = 1, .reusable = false}, SHIFT(119),
  [193] = {.count = 1, .reusable = false}, SHIFT(120),
  [195] = {.count = 1, .reusable = false}, SHIFT(121),
  [197] = {.count = 1, .reusable = false}, SHIFT(122),
  [199] = {.count = 1, .reusable = false}, SHIFT(123),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [205] = {.count = 1, .reusable = false}, SHIFT(129),
  [207] = {.count = 1, .reusable = false}, SHIFT(131),
  [209] = {.count = 1, .reusable = false}, SHIFT(135),
  [211] = {.count = 1, .reusable = false}, SHIFT(132),
  [213] = {.count = 1, .reusable = false}, SHIFT(138),
  [215] = {.count = 1, .reusable = false}, SHIFT(142),
  [217] = {.count = 1, .reusable = false}, SHIFT(139),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [223] = {.count = 1, .reusable = false}, SHIFT(146),
  [225] = {.count = 1, .reusable = false}, SHIFT(152),
  [227] = {.count = 1, .reusable = false}, SHIFT(147),
  [229] = {.count = 1, .reusable = true}, SHIFT(157),
  [231] = {.count = 1, .reusable = true}, SHIFT(156),
  [233] = {.count = 1, .reusable = false}, SHIFT(158),
  [235] = {.count = 1, .reusable = false}, SHIFT(159),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 2),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(161),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(163),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(162),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(161),
  [259] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(163),
  [262] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(162),
  [265] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(165),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(2),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(14),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(3),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(4),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(5),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(6),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(7),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(8),
  [293] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(166),
  [296] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1_repeat1, 2), SHIFT_REPEAT(9),
  [299] = {.count = 1, .reusable = false}, SHIFT(170),
  [301] = {.count = 1, .reusable = true}, SHIFT(172),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 1),
  [305] = {.count = 1, .reusable = true}, SHIFT(173),
  [307] = {.count = 1, .reusable = false}, SHIFT(174),
  [309] = {.count = 1, .reusable = false}, SHIFT(175),
  [311] = {.count = 1, .reusable = true}, SHIFT(177),
  [313] = {.count = 1, .reusable = true}, SHIFT(179),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 3),
  [319] = {.count = 1, .reusable = false}, SHIFT(181),
  [321] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(183),
  [324] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(185),
  [327] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(184),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2),
  [332] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(23),
  [338] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(93),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(26),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(27),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_binding_name, 1),
  [349] = {.count = 1, .reusable = false}, SHIFT(187),
  [351] = {.count = 1, .reusable = false}, SHIFT(188),
  [353] = {.count = 1, .reusable = false}, SHIFT(189),
  [355] = {.count = 1, .reusable = false}, SHIFT(192),
  [357] = {.count = 1, .reusable = false}, SHIFT(196),
  [359] = {.count = 1, .reusable = false}, SHIFT(193),
  [361] = {.count = 1, .reusable = false}, SHIFT(199),
  [363] = {.count = 1, .reusable = false}, SHIFT(205),
  [365] = {.count = 1, .reusable = false}, SHIFT(200),
  [367] = {.count = 1, .reusable = true}, SHIFT(209),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 1),
  [371] = {.count = 1, .reusable = true}, SHIFT(210),
  [373] = {.count = 1, .reusable = true}, SHIFT(211),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__typed_untyped_binding1, 1),
  [377] = {.count = 1, .reusable = false}, SHIFT(213),
  [379] = {.count = 1, .reusable = false}, SHIFT(219),
  [381] = {.count = 1, .reusable = false}, SHIFT(214),
  [383] = {.count = 1, .reusable = true}, SHIFT(223),
  [385] = {.count = 1, .reusable = true}, SHIFT(225),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_record, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_record, 3),
  [391] = {.count = 1, .reusable = true}, SHIFT(227),
  [393] = {.count = 1, .reusable = true}, SHIFT(228),
  [395] = {.count = 1, .reusable = false}, SHIFT(229),
  [397] = {.count = 1, .reusable = false}, SHIFT(230),
  [399] = {.count = 1, .reusable = false}, SHIFT(231),
  [401] = {.count = 1, .reusable = true}, SHIFT(233),
  [403] = {.count = 1, .reusable = true}, SHIFT(232),
  [405] = {.count = 1, .reusable = true}, SHIFT(234),
  [407] = {.count = 1, .reusable = true}, SHIFT(236),
  [409] = {.count = 1, .reusable = true}, SHIFT(237),
  [411] = {.count = 1, .reusable = false}, SHIFT(238),
  [413] = {.count = 1, .reusable = false}, SHIFT(240),
  [415] = {.count = 1, .reusable = false}, SHIFT(241),
  [417] = {.count = 1, .reusable = false}, SHIFT(242),
  [419] = {.count = 1, .reusable = false}, SHIFT(245),
  [421] = {.count = 1, .reusable = false}, SHIFT(243),
  [423] = {.count = 1, .reusable = false}, SHIFT(248),
  [425] = {.count = 1, .reusable = false}, SHIFT(246),
  [427] = {.count = 1, .reusable = true}, SHIFT(249),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 1),
  [431] = {.count = 1, .reusable = true}, SHIFT(252),
  [433] = {.count = 1, .reusable = true}, SHIFT(253),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym__arg_names, 1),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures1, 1),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_binding_name, 1),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_infix, 3),
  [443] = {.count = 1, .reusable = false}, SHIFT(257),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_rewrite_equations, 2),
  [447] = {.count = 1, .reusable = false}, SHIFT(259),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_with_expressions, 2),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 3),
  [453] = {.count = 1, .reusable = false}, SHIFT(261),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_rhs, 2),
  [457] = {.count = 1, .reusable = true}, SHIFT(263),
  [459] = {.count = 1, .reusable = false}, SHIFT(264),
  [461] = {.count = 1, .reusable = false}, SHIFT(267),
  [463] = {.count = 1, .reusable = false}, SHIFT(265),
  [465] = {.count = 1, .reusable = false}, SHIFT(269),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [469] = {.count = 1, .reusable = true}, SHIFT(271),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_name, 1),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 3),
  [475] = {.count = 1, .reusable = false}, SHIFT(272),
  [477] = {.count = 1, .reusable = false}, SHIFT(161),
  [479] = {.count = 1, .reusable = false}, SHIFT(163),
  [481] = {.count = 1, .reusable = false}, SHIFT(162),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1, 3),
  [485] = {.count = 1, .reusable = true}, SHIFT(274),
  [487] = {.count = 1, .reusable = true}, SHIFT(275),
  [489] = {.count = 1, .reusable = true}, SHIFT(276),
  [491] = {.count = 1, .reusable = true}, SHIFT(277),
  [493] = {.count = 1, .reusable = true}, SHIFT(278),
  [495] = {.count = 1, .reusable = true}, SHIFT(280),
  [497] = {.count = 1, .reusable = false}, SHIFT(281),
  [499] = {.count = 1, .reusable = false}, SHIFT(287),
  [501] = {.count = 1, .reusable = false}, SHIFT(282),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(291),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(293),
  [509] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(292),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [514] = {.count = 1, .reusable = true}, SHIFT(298),
  [516] = {.count = 1, .reusable = false}, SHIFT(299),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 2),
  [520] = {.count = 1, .reusable = true}, SHIFT(304),
  [522] = {.count = 1, .reusable = true}, SHIFT(305),
  [524] = {.count = 1, .reusable = false}, SHIFT(306),
  [526] = {.count = 1, .reusable = true}, SHIFT(308),
  [528] = {.count = 1, .reusable = true}, SHIFT(310),
  [530] = {.count = 1, .reusable = false}, SHIFT(311),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 4),
  [534] = {.count = 1, .reusable = true}, SHIFT(313),
  [536] = {.count = 1, .reusable = true}, SHIFT(314),
  [538] = {.count = 1, .reusable = false}, SHIFT(315),
  [540] = {.count = 1, .reusable = false}, SHIFT(318),
  [542] = {.count = 1, .reusable = false}, SHIFT(316),
  [544] = {.count = 1, .reusable = false}, SHIFT(320),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_data, 4),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_data, 4),
  [550] = {.count = 1, .reusable = true}, SHIFT(322),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(95),
  [555] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(96),
  [558] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(97),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(98),
  [564] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(99),
  [567] = {.count = 1, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2),
  [569] = {.count = 1, .reusable = false}, SHIFT(323),
  [571] = {.count = 1, .reusable = true}, SHIFT(325),
  [573] = {.count = 1, .reusable = false}, SHIFT(326),
  [575] = {.count = 1, .reusable = false}, SHIFT(329),
  [577] = {.count = 1, .reusable = false}, SHIFT(327),
  [579] = {.count = 1, .reusable = false}, SHIFT(331),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 4),
  [583] = {.count = 1, .reusable = true}, SHIFT(333),
  [585] = {.count = 1, .reusable = true}, SHIFT(334),
  [587] = {.count = 1, .reusable = false}, SHIFT(335),
  [589] = {.count = 1, .reusable = false}, SHIFT(336),
  [591] = {.count = 1, .reusable = false}, SHIFT(337),
  [593] = {.count = 1, .reusable = false}, SHIFT(338),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_record, 4),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_record, 4),
  [599] = {.count = 1, .reusable = false}, SHIFT(346),
  [601] = {.count = 1, .reusable = false}, SHIFT(347),
  [603] = {.count = 1, .reusable = false}, SHIFT(349),
  [605] = {.count = 1, .reusable = false}, SHIFT(351),
  [607] = {.count = 1, .reusable = false}, SHIFT(352),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__declarations0, 3),
  [611] = {.count = 1, .reusable = false}, REDUCE(sym__declarations0, 3),
  [613] = {.count = 1, .reusable = true}, SHIFT(356),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_name, 2),
  [617] = {.count = 1, .reusable = false}, SHIFT(357),
  [619] = {.count = 1, .reusable = false}, SHIFT(358),
  [621] = {.count = 1, .reusable = false}, SHIFT(359),
  [623] = {.count = 1, .reusable = true}, SHIFT(360),
  [625] = {.count = 1, .reusable = false}, SHIFT(361),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_names1, 1),
  [629] = {.count = 1, .reusable = false}, SHIFT(362),
  [631] = {.count = 1, .reusable = false}, SHIFT(363),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 2),
  [635] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 2),
  [637] = {.count = 1, .reusable = true}, SHIFT(365),
  [639] = {.count = 1, .reusable = false}, SHIFT(366),
  [641] = {.count = 1, .reusable = false}, SHIFT(372),
  [643] = {.count = 1, .reusable = false}, SHIFT(367),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures_block, 3),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym__arg_type_signatures_block, 3),
  [649] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(124),
  [652] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(119),
  [655] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(120),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(121),
  [661] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(124),
  [668] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(119),
  [671] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(120),
  [674] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(121),
  [677] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(122),
  [680] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(123),
  [683] = {.count = 1, .reusable = true}, REDUCE(aux_sym_infix_repeat1, 2),
  [685] = {.count = 2, .reusable = false}, REDUCE(aux_sym_infix_repeat1, 2), SHIFT_REPEAT(129),
  [688] = {.count = 1, .reusable = true}, SHIFT(376),
  [690] = {.count = 1, .reusable = true}, SHIFT(377),
  [692] = {.count = 1, .reusable = true}, SHIFT(378),
  [694] = {.count = 1, .reusable = false}, SHIFT(380),
  [696] = {.count = 1, .reusable = true}, SHIFT(382),
  [698] = {.count = 1, .reusable = true}, SHIFT(383),
  [700] = {.count = 1, .reusable = true}, SHIFT(384),
  [702] = {.count = 1, .reusable = true}, SHIFT(388),
  [704] = {.count = 1, .reusable = false}, SHIFT(389),
  [706] = {.count = 1, .reusable = true}, SHIFT(391),
  [708] = {.count = 1, .reusable = false}, SHIFT(392),
  [710] = {.count = 1, .reusable = false}, SHIFT(396),
  [712] = {.count = 1, .reusable = false}, SHIFT(393),
  [714] = {.count = 1, .reusable = false}, SHIFT(398),
  [716] = {.count = 1, .reusable = false}, SHIFT(399),
  [718] = {.count = 1, .reusable = true}, SHIFT(401),
  [720] = {.count = 1, .reusable = true}, SHIFT(402),
  [722] = {.count = 1, .reusable = true}, SHIFT(403),
  [724] = {.count = 1, .reusable = true}, SHIFT(404),
  [726] = {.count = 1, .reusable = true}, SHIFT(405),
  [728] = {.count = 1, .reusable = true}, SHIFT(406),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 3),
  [732] = {.count = 1, .reusable = true}, SHIFT(408),
  [734] = {.count = 1, .reusable = true}, SHIFT(411),
  [736] = {.count = 1, .reusable = true}, SHIFT(412),
  [738] = {.count = 1, .reusable = false}, SHIFT(413),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 5),
  [742] = {.count = 1, .reusable = true}, SHIFT(415),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_data, 5),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_data, 5),
  [748] = {.count = 1, .reusable = true}, SHIFT(416),
  [750] = {.count = 1, .reusable = false}, SHIFT(417),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym_record, 5),
  [754] = {.count = 1, .reusable = false}, REDUCE(sym_record, 5),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 2),
  [758] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 2),
  [760] = {.count = 1, .reusable = true}, SHIFT(420),
  [762] = {.count = 1, .reusable = false}, SHIFT(421),
  [764] = {.count = 1, .reusable = true}, REDUCE(sym_record_induction, 1),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_record_eta, 1),
  [768] = {.count = 1, .reusable = true}, SHIFT(422),
  [770] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 1),
  [772] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 1),
  [774] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 1), REDUCE(aux_sym__record_directives1_repeat1, 1),
  [777] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1),
  [779] = {.count = 1, .reusable = true}, SHIFT(424),
  [781] = {.count = 1, .reusable = true}, SHIFT(425),
  [783] = {.count = 1, .reusable = true}, SHIFT(336),
  [785] = {.count = 1, .reusable = true}, SHIFT(337),
  [787] = {.count = 1, .reusable = true}, SHIFT(338),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 5),
  [791] = {.count = 1, .reusable = true}, SHIFT(429),
  [793] = {.count = 1, .reusable = true}, SHIFT(431),
  [795] = {.count = 1, .reusable = true}, SHIFT(432),
  [797] = {.count = 1, .reusable = true}, SHIFT(433),
  [799] = {.count = 1, .reusable = true}, SHIFT(435),
  [801] = {.count = 1, .reusable = true}, SHIFT(437),
  [803] = {.count = 1, .reusable = true}, SHIFT(439),
  [805] = {.count = 1, .reusable = true}, SHIFT(440),
  [807] = {.count = 1, .reusable = true}, SHIFT(441),
  [809] = {.count = 1, .reusable = true}, SHIFT(442),
  [811] = {.count = 1, .reusable = false}, SHIFT(444),
  [813] = {.count = 1, .reusable = false}, SHIFT(443),
  [815] = {.count = 1, .reusable = false}, SHIFT(445),
  [817] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 3),
  [821] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(361),
  [824] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(243),
  [827] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(363),
  [830] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(246),
  [833] = {.count = 1, .reusable = true}, SHIFT(446),
  [835] = {.count = 1, .reusable = false}, SHIFT(448),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 3),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 3),
  [841] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [843] = {.count = 1, .reusable = false}, SHIFT(450),
  [845] = {.count = 1, .reusable = true}, SHIFT(450),
  [847] = {.count = 1, .reusable = false}, SHIFT(451),
  [849] = {.count = 1, .reusable = false}, SHIFT(455),
  [851] = {.count = 1, .reusable = false}, SHIFT(452),
  [853] = {.count = 1, .reusable = false}, SHIFT(457),
  [855] = {.count = 1, .reusable = true}, SHIFT(459),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 4),
  [859] = {.count = 1, .reusable = true}, SHIFT(460),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [865] = {.count = 1, .reusable = true}, SHIFT(461),
  [867] = {.count = 1, .reusable = false}, SHIFT(463),
  [869] = {.count = 1, .reusable = true}, SHIFT(465),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 4),
  [873] = {.count = 1, .reusable = true}, SHIFT(469),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_data, 6),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym_data, 6),
  [879] = {.count = 1, .reusable = true}, SHIFT(470),
  [881] = {.count = 1, .reusable = true}, SHIFT(471),
  [883] = {.count = 1, .reusable = true}, SHIFT(472),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_record, 6),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_record, 6),
  [889] = {.count = 1, .reusable = false}, SHIFT(473),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor, 2),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 3),
  [895] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 3),
  [897] = {.count = 1, .reusable = true}, SHIFT(474),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 2),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 2),
  [903] = {.count = 2, .reusable = false}, REDUCE(sym__record_directives1, 2), REDUCE(aux_sym__record_directives1_repeat1, 2),
  [906] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [908] = {.count = 1, .reusable = true}, SHIFT(475),
  [910] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1), REDUCE(sym__record_directives1, 2),
  [913] = {.count = 1, .reusable = true}, SHIFT(476),
  [915] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(477),
  [918] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(336),
  [921] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(337),
  [924] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(338),
  [927] = {.count = 1, .reusable = true}, SHIFT(480),
  [929] = {.count = 1, .reusable = true}, SHIFT(482),
  [931] = {.count = 1, .reusable = true}, SHIFT(484),
  [933] = {.count = 1, .reusable = true}, SHIFT(485),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 4),
  [937] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(444),
  [940] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2),
  [942] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(445),
  [945] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 4),
  [947] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 4),
  [949] = {.count = 1, .reusable = true}, SHIFT(490),
  [951] = {.count = 1, .reusable = false}, SHIFT(492),
  [953] = {.count = 1, .reusable = false}, REDUCE(sym__expr1, 2),
  [955] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [959] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [961] = {.count = 1, .reusable = true}, SHIFT(494),
  [963] = {.count = 1, .reusable = true}, SHIFT(495),
  [965] = {.count = 1, .reusable = true}, REDUCE(sym_data, 7),
  [967] = {.count = 1, .reusable = false}, REDUCE(sym_data, 7),
  [969] = {.count = 1, .reusable = false}, SHIFT(496),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 4),
  [973] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 4),
  [975] = {.count = 1, .reusable = true}, SHIFT(473),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 3),
  [979] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 3),
  [981] = {.count = 2, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2), REDUCE(sym__record_directives1, 3),
  [984] = {.count = 1, .reusable = true}, SHIFT(497),
  [986] = {.count = 1, .reusable = true}, SHIFT(498),
  [988] = {.count = 1, .reusable = true}, REDUCE(sym_record, 7),
  [990] = {.count = 1, .reusable = false}, REDUCE(sym_record, 7),
  [992] = {.count = 1, .reusable = true}, SHIFT(499),
  [994] = {.count = 1, .reusable = true}, SHIFT(500),
  [996] = {.count = 1, .reusable = true}, SHIFT(502),
  [998] = {.count = 1, .reusable = true}, SHIFT(504),
  [1000] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [1002] = {.count = 1, .reusable = true}, SHIFT(505),
  [1004] = {.count = 1, .reusable = true}, SHIFT(506),
  [1006] = {.count = 1, .reusable = true}, SHIFT(507),
  [1008] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1010] = {.count = 1, .reusable = true}, SHIFT(508),
  [1012] = {.count = 1, .reusable = true}, SHIFT(509),
  [1014] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor_instance, 5),
  [1016] = {.count = 1, .reusable = false}, REDUCE(sym_record_constructor_instance, 5),
  [1018] = {.count = 1, .reusable = false}, SHIFT(511),
  [1020] = {.count = 1, .reusable = true}, SHIFT(512),
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
