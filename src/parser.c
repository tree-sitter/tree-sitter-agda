#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 590
#define SYMBOL_COUNT 103
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
  sym__declarations0_ = 90,
  sym__declarations1_ = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym__maybe_dotted_names1_repeat1 = 93,
  aux_sym__arg_names_repeat1 = 94,
  aux_sym_arg_name_repeat1 = 95,
  aux_sym__expr1_repeat1 = 96,
  aux_sym__application_repeat1 = 97,
  aux_sym__typed_bindings1_repeat1 = 98,
  aux_sym__typed_untyped_binding1_repeat1 = 99,
  aux_sym__record_directives1_repeat1 = 100,
  aux_sym__arg_type_signatures1_repeat1 = 101,
  aux_sym__declarations1__repeat1 = 102,
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
  [sym__declarations0_] = "_declarations0_",
  [sym__declarations1_] = "_declarations1_",
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
  [aux_sym__declarations1__repeat1] = "_declarations1__repeat1",
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
  [sym__declarations0_] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations1_] = {
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
  [aux_sym__declarations1__repeat1] = {
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
      if (lookahead == 0)
        ADVANCE(1);
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
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
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
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
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
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
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
      if (lookahead == 'c')
        ADVANCE(212);
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
        ADVANCE(253);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '}')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(252);
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
    case 253:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      if (lookahead == '-')
        ADVANCE(171);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(253);
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
    case 255:
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
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(257);
      if (lookahead == '{')
        ADVANCE(165);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '#')
        ADVANCE(162);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 259:
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '}')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(261);
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
        ADVANCE(262);
      END_STATE();
    case 261:
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
        ADVANCE(261);
      END_STATE();
    case 262:
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
        ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(263);
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
        ADVANCE(262);
      END_STATE();
    case 265:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '\\')
        SKIP(267);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(265);
      END_STATE();
    case 266:
      if (lookahead == '-')
        ADVANCE(7);
      END_STATE();
    case 267:
      if (lookahead == 'n')
        SKIP(265);
      END_STATE();
    case 268:
      if (lookahead == '-')
        ADVANCE(257);
      END_STATE();
    case 269:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(270);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
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
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(269);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 271:
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
        ADVANCE(270);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
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
    case 272:
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
        SKIP(273);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '|')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(258);
      if (lookahead == 8594)
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == 'n')
        SKIP(272);
      END_STATE();
    case 274:
      if (lookahead == 'h')
        ADVANCE(149);
      END_STATE();
    case 275:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(276);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 277:
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
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 278:
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
        ADVANCE(282);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(257);
      END_STATE();
    case 283:
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
        ADVANCE(284);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
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
    case 284:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 285:
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
        ADVANCE(284);
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
    case 286:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(289);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(258);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
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
    case 287:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
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
    case 289:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(287);
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
        ADVANCE(289);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
    case 291:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(291);
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
    case 292:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
    case 294:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(296);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 295:
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
        ADVANCE(262);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(296);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == 'w')
        ADVANCE(299);
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
        ADVANCE(262);
      END_STATE();
    case 298:
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
        ADVANCE(262);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
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
        ADVANCE(262);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(262);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
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
        ADVANCE(262);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(303);
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
        ADVANCE(262);
      END_STATE();
    case 303:
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
        ADVANCE(262);
      END_STATE();
    case 304:
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(307);
      if (lookahead == 'o')
        ADVANCE(315);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(306);
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
        ADVANCE(262);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(305);
      if (lookahead == 'i')
        ADVANCE(307);
      if (lookahead == 'o')
        ADVANCE(315);
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
        ADVANCE(262);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(262);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
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
        ADVANCE(262);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
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
        ADVANCE(262);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
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
        ADVANCE(262);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(262);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
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
        ADVANCE(262);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(262);
      END_STATE();
    case 314:
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
        ADVANCE(262);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v')
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
        ADVANCE(262);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
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
        ADVANCE(262);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
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
        ADVANCE(262);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
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
        ADVANCE(262);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
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
        ADVANCE(262);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
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
        ADVANCE(262);
      END_STATE();
    case 321:
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
        ADVANCE(262);
      END_STATE();
    case 322:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(323);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(322);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 324:
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
        ADVANCE(323);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
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
    case 325:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(326);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(325);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
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
        ADVANCE(262);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(326);
      if (lookahead == '_')
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
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 328:
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
        ADVANCE(329);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(328);
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
        ADVANCE(329);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 331:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
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
        ADVANCE(332);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(258);
      if (lookahead == 8594)
        ADVANCE(288);
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
        ADVANCE(287);
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
        ADVANCE(332);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
    case 334:
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
        ADVANCE(335);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '}')
        ADVANCE(258);
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
          (lookahead < '0' || lookahead > ';') &&
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
      if (lookahead == ':')
        ADVANCE(226);
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
    case 337:
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
        ADVANCE(338);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
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
    case 338:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 339:
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
        ADVANCE(338);
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
    case 340:
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(341);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == ':')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(341);
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
        ADVANCE(262);
      END_STATE();
    case 343:
      if (lookahead == 0)
        ADVANCE(1);
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
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(343);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
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
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
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
    case 346:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(347);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(346);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          (lookahead < '0' || lookahead > ';') &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 348:
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
        ADVANCE(347);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 349:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(350);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(349);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(287);
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
        ADVANCE(350);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
    case 352:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(353);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(352);
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
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(353);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
        ADVANCE(282);
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
        ADVANCE(266);
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
        ADVANCE(268);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
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
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(365);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
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
        ADVANCE(287);
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
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
        ADVANCE(369);
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
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(368);
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
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(369);
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
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 371:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(372);
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
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(371);
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
    case 372:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 373:
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
        ADVANCE(372);
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
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 374:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(375);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
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
    case 375:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
      if (lookahead == '-')
        ADVANCE(287);
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
        ADVANCE(375);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
        ADVANCE(427);
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
        SKIP(377);
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
        ADVANCE(427);
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
      if (lookahead == 't')
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
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'a')
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
      if (lookahead == 'n')
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
      if (lookahead == 'c')
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
      if (lookahead == 'e')
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
    case 427:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'o')
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
      if (lookahead == '-')
        ADVANCE(429);
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
      if (lookahead == 'e')
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
      if (lookahead == 't')
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
      if (lookahead == '-')
        ADVANCE(433);
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
    case 433:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
      if (lookahead == 'q')
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
      if (lookahead == 'u')
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
      if (lookahead == 'a')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
    case 442:
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(443);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(442);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@')
        ADVANCE(262);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(443);
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
        ADVANCE(262);
      END_STATE();
    case 445:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(445);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
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
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(192);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 448:
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
        ADVANCE(449);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(451);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(243);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(448);
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
    case 449:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 450:
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
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'r')
        ADVANCE(451);
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
    case 451:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'e')
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
    case 453:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(454);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'r')
        ADVANCE(455);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(453);
      END_STATE();
    case 454:
      if (lookahead == 'n')
        SKIP(453);
      END_STATE();
    case 455:
      if (lookahead == 'e')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'w')
        ADVANCE(136);
      END_STATE();
    case 457:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(458);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(457);
      END_STATE();
    case 458:
      if (lookahead == 'n')
        SKIP(457);
      END_STATE();
    case 459:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(460);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(459);
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
    case 460:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(287);
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
        ADVANCE(460);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
    case 462:
      if (lookahead == 0)
        ADVANCE(1);
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
        ADVANCE(463);
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
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(462);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(223);
      if (lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(175);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 464:
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
        ADVANCE(463);
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
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 465:
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
        ADVANCE(466);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(465);
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
    case 466:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
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
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 467:
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
        ADVANCE(466);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 468:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(473);
      if (lookahead == '?')
        ADVANCE(474);
      if (lookahead == 'P')
        ADVANCE(475);
      if (lookahead == 'S')
        ADVANCE(479);
      if (lookahead == '\\')
        ADVANCE(482);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(484);
      if (lookahead == 'o')
        ADVANCE(492);
      if (lookahead == 'q')
        ADVANCE(499);
      if (lookahead == 'u')
        ADVANCE(508);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '|')
        ADVANCE(515);
      if (lookahead == 8594)
        ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(468);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(472);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(470);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '>')
        ADVANCE(471);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(173);
      if (lookahead == '_')
        ADVANCE(261);
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
        ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__const_right_arrow);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
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
        ADVANCE(472);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'o')
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
        ADVANCE(472);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
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
        ADVANCE(472);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_Prop);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'e')
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
        ADVANCE(472);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 't')
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
        ADVANCE(472);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'n')
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
        ADVANCE(472);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '=')
        ADVANCE(473);
      if (lookahead == '?')
        ADVANCE(474);
      if (lookahead == 'P')
        ADVANCE(475);
      if (lookahead == 'S')
        ADVANCE(479);
      if (lookahead == '\\')
        ADVANCE(482);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(484);
      if (lookahead == 'o')
        ADVANCE(492);
      if (lookahead == 'q')
        ADVANCE(499);
      if (lookahead == 'u')
        ADVANCE(508);
      if (lookahead == '|')
        ADVANCE(515);
      if (lookahead == 8594)
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(472);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'n')
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
        ADVANCE(472);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 's')
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
        ADVANCE(472);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 't')
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
        ADVANCE(472);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'a')
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
        ADVANCE(472);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
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
        ADVANCE(472);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'c')
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
        ADVANCE(472);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
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
        ADVANCE(472);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'v')
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
        ADVANCE(472);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
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
        ADVANCE(472);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'r')
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
        ADVANCE(472);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'l')
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
        ADVANCE(472);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'a')
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
        ADVANCE(472);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'p')
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
        ADVANCE(472);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_overlap);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'u')
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
        ADVANCE(472);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'o')
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
        ADVANCE(472);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 't')
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
        ADVANCE(472);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'e')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'T')
        ADVANCE(504);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'e')
        ADVANCE(505);
      if (lookahead != 0 &&
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
        ADVANCE(472);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'r')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'm')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_quoteTerm);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead != 0 &&
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
        ADVANCE(472);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'q')
        ADVANCE(510);
      if (lookahead != 0 &&
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
        ADVANCE(472);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'u')
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
        ADVANCE(472);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'o')
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
        ADVANCE(472);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 't')
        ADVANCE(513);
      if (lookahead != 0 &&
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
        ADVANCE(472);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'e')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 517:
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(518);
      if (lookahead == '\\')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(307);
      if (lookahead == 'o')
        ADVANCE(315);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(517);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 518:
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
        ADVANCE(262);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_name);
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
          lookahead != '.' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(262);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '=')
        ADVANCE(518);
      if (lookahead == '\\')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(307);
      if (lookahead == 'o')
        ADVANCE(315);
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
        ADVANCE(262);
      END_STATE();
    case 521:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(148);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(521);
      END_STATE();
    case 522:
      if (lookahead == 'n')
        SKIP(521);
      END_STATE();
    case 523:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(523);
      END_STATE();
    case 524:
      if (lookahead == 'n')
        SKIP(523);
      END_STATE();
    case 525:
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
        ADVANCE(526);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '}')
        ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(525);
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
    case 526:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 527:
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
        ADVANCE(526);
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
    case 528:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(529);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(473);
      if (lookahead == '?')
        ADVANCE(474);
      if (lookahead == 'P')
        ADVANCE(475);
      if (lookahead == 'S')
        ADVANCE(479);
      if (lookahead == '\\')
        ADVANCE(530);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(484);
      if (lookahead == 'o')
        ADVANCE(492);
      if (lookahead == 'q')
        ADVANCE(499);
      if (lookahead == 'u')
        ADVANCE(508);
      if (lookahead == '{')
        ADVANCE(256);
      if (lookahead == '|')
        ADVANCE(515);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(528);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(472);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(470);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
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
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(472);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '_')
        ADVANCE(262);
      if (lookahead == 'n')
        ADVANCE(531);
      if (lookahead != 0 &&
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
        ADVANCE(472);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-')
        ADVANCE(529);
      if (lookahead == '.')
        ADVANCE(255);
      if (lookahead == '=')
        ADVANCE(473);
      if (lookahead == '?')
        ADVANCE(474);
      if (lookahead == 'P')
        ADVANCE(475);
      if (lookahead == 'S')
        ADVANCE(479);
      if (lookahead == '\\')
        ADVANCE(530);
      if (lookahead == '_')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(484);
      if (lookahead == 'o')
        ADVANCE(492);
      if (lookahead == 'q')
        ADVANCE(499);
      if (lookahead == 'u')
        ADVANCE(508);
      if (lookahead == '|')
        ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9'))
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
          lookahead != '?' &&
          lookahead != '@' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(472);
      END_STATE();
    case 532:
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
        ADVANCE(533);
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
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(532);
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
    case 533:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 534:
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
        ADVANCE(533);
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
    case 535:
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
        ADVANCE(536);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(535);
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
    case 536:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 537:
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
        ADVANCE(536);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
    case 538:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(287);
      if (lookahead == '=')
        ADVANCE(227);
      if (lookahead == '?')
        ADVANCE(176);
      if (lookahead == 'P')
        ADVANCE(177);
      if (lookahead == 'S')
        ADVANCE(181);
      if (lookahead == '\\')
        ADVANCE(539);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(538);
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
    case 539:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '-')
        ADVANCE(287);
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
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == 8594)
        ADVANCE(288);
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
    case 541:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(542);
      if (lookahead == 'm')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(541);
      END_STATE();
    case 542:
      if (lookahead == 'n')
        SKIP(541);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '\\')
        SKIP(544);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(543);
      END_STATE();
    case 544:
      if (lookahead == 'n')
        SKIP(543);
      END_STATE();
    case 545:
      if (lookahead == '-')
        ADVANCE(266);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\\')
        SKIP(546);
      if (lookahead == 'w')
        ADVANCE(274);
      if (lookahead == '{')
        ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(545);
      END_STATE();
    case 546:
      if (lookahead == 'n')
        SKIP(545);
      END_STATE();
    case 547:
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
        ADVANCE(548);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(547);
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
    case 548:
      ACCEPT_TOKEN(sym_qualified_name);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'n')
        ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(175);
      END_STATE();
    case 549:
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
        ADVANCE(548);
      if (lookahead == 'm')
        ADVANCE(230);
      if (lookahead == 'q')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(216);
      if (lookahead == 'w')
        ADVANCE(278);
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
  [2] = {.lex_state = 225},
  [3] = {.lex_state = 252},
  [4] = {.lex_state = 259},
  [5] = {.lex_state = 259},
  [6] = {.lex_state = 252},
  [7] = {.lex_state = 265, .external_lex_state = 2},
  [8] = {.lex_state = 265},
  [9] = {.lex_state = 269},
  [10] = {.lex_state = 272},
  [11] = {.lex_state = 225},
  [12] = {.lex_state = 225},
  [13] = {.lex_state = 275},
  [14] = {.lex_state = 170},
  [15] = {.lex_state = 279},
  [16] = {.lex_state = 283},
  [17] = {.lex_state = 286},
  [18] = {.lex_state = 272},
  [19] = {.lex_state = 252},
  [20] = {.lex_state = 225},
  [21] = {.lex_state = 279},
  [22] = {.lex_state = 279},
  [23] = {.lex_state = 272},
  [24] = {.lex_state = 272},
  [25] = {.lex_state = 272},
  [26] = {.lex_state = 286},
  [27] = {.lex_state = 286},
  [28] = {.lex_state = 272},
  [29] = {.lex_state = 279},
  [30] = {.lex_state = 291},
  [31] = {.lex_state = 272},
  [32] = {.lex_state = 294},
  [33] = {.lex_state = 294},
  [34] = {.lex_state = 294},
  [35] = {.lex_state = 294},
  [36] = {.lex_state = 304},
  [37] = {.lex_state = 170},
  [38] = {.lex_state = 279},
  [39] = {.lex_state = 279},
  [40] = {.lex_state = 322},
  [41] = {.lex_state = 275},
  [42] = {.lex_state = 279},
  [43] = {.lex_state = 252},
  [44] = {.lex_state = 265, .external_lex_state = 3},
  [45] = {.lex_state = 325},
  [46] = {.lex_state = 328},
  [47] = {.lex_state = 170},
  [48] = {.lex_state = 170},
  [49] = {.lex_state = 269},
  [50] = {.lex_state = 279},
  [51] = {.lex_state = 269},
  [52] = {.lex_state = 283},
  [53] = {.lex_state = 279},
  [54] = {.lex_state = 279},
  [55] = {.lex_state = 279},
  [56] = {.lex_state = 331},
  [57] = {.lex_state = 252},
  [58] = {.lex_state = 286},
  [59] = {.lex_state = 272},
  [60] = {.lex_state = 272},
  [61] = {.lex_state = 331},
  [62] = {.lex_state = 331},
  [63] = {.lex_state = 291},
  [64] = {.lex_state = 334},
  [65] = {.lex_state = 252},
  [66] = {.lex_state = 272},
  [67] = {.lex_state = 334},
  [68] = {.lex_state = 334},
  [69] = {.lex_state = 279},
  [70] = {.lex_state = 272},
  [71] = {.lex_state = 225},
  [72] = {.lex_state = 252},
  [73] = {.lex_state = 337},
  [74] = {.lex_state = 252},
  [75] = {.lex_state = 272},
  [76] = {.lex_state = 337},
  [77] = {.lex_state = 337},
  [78] = {.lex_state = 283},
  [79] = {.lex_state = 252},
  [80] = {.lex_state = 272},
  [81] = {.lex_state = 291},
  [82] = {.lex_state = 279},
  [83] = {.lex_state = 272},
  [84] = {.lex_state = 294},
  [85] = {.lex_state = 325},
  [86] = {.lex_state = 279},
  [87] = {.lex_state = 279},
  [88] = {.lex_state = 279},
  [89] = {.lex_state = 252},
  [90] = {.lex_state = 265, .external_lex_state = 3},
  [91] = {.lex_state = 294},
  [92] = {.lex_state = 272},
  [93] = {.lex_state = 294},
  [94] = {.lex_state = 252},
  [95] = {.lex_state = 272},
  [96] = {.lex_state = 252},
  [97] = {.lex_state = 170, .external_lex_state = 2},
  [98] = {.lex_state = 272},
  [99] = {.lex_state = 259},
  [100] = {.lex_state = 259},
  [101] = {.lex_state = 259},
  [102] = {.lex_state = 265, .external_lex_state = 2},
  [103] = {.lex_state = 259},
  [104] = {.lex_state = 340},
  [105] = {.lex_state = 272},
  [106] = {.lex_state = 265, .external_lex_state = 4},
  [107] = {.lex_state = 340},
  [108] = {.lex_state = 304, .external_lex_state = 4},
  [109] = {.lex_state = 343},
  [110] = {.lex_state = 252},
  [111] = {.lex_state = 322},
  [112] = {.lex_state = 343},
  [113] = {.lex_state = 343},
  [114] = {.lex_state = 279},
  [115] = {.lex_state = 283},
  [116] = {.lex_state = 346},
  [117] = {.lex_state = 252},
  [118] = {.lex_state = 275},
  [119] = {.lex_state = 346},
  [120] = {.lex_state = 346},
  [121] = {.lex_state = 279},
  [122] = {.lex_state = 283},
  [123] = {.lex_state = 275},
  [124] = {.lex_state = 349},
  [125] = {.lex_state = 252},
  [126] = {.lex_state = 328},
  [127] = {.lex_state = 352},
  [128] = {.lex_state = 272},
  [129] = {.lex_state = 349},
  [130] = {.lex_state = 349},
  [131] = {.lex_state = 272},
  [132] = {.lex_state = 279},
  [133] = {.lex_state = 291},
  [134] = {.lex_state = 170},
  [135] = {.lex_state = 170},
  [136] = {.lex_state = 272},
  [137] = {.lex_state = 272},
  [138] = {.lex_state = 170},
  [139] = {.lex_state = 283},
  [140] = {.lex_state = 252},
  [141] = {.lex_state = 283},
  [142] = {.lex_state = 283},
  [143] = {.lex_state = 272},
  [144] = {.lex_state = 272},
  [145] = {.lex_state = 272},
  [146] = {.lex_state = 331},
  [147] = {.lex_state = 272},
  [148] = {.lex_state = 286},
  [149] = {.lex_state = 252},
  [150] = {.lex_state = 252},
  [151] = {.lex_state = 334},
  [152] = {.lex_state = 272},
  [153] = {.lex_state = 252},
  [154] = {.lex_state = 279},
  [155] = {.lex_state = 252},
  [156] = {.lex_state = 272},
  [157] = {.lex_state = 337},
  [158] = {.lex_state = 272},
  [159] = {.lex_state = 291},
  [160] = {.lex_state = 252},
  [161] = {.lex_state = 291},
  [162] = {.lex_state = 272},
  [163] = {.lex_state = 279},
  [164] = {.lex_state = 279},
  [165] = {.lex_state = 279},
  [166] = {.lex_state = 294},
  [167] = {.lex_state = 272},
  [168] = {.lex_state = 355},
  [169] = {.lex_state = 252},
  [170] = {.lex_state = 359},
  [171] = {.lex_state = 355},
  [172] = {.lex_state = 355},
  [173] = {.lex_state = 279},
  [174] = {.lex_state = 272},
  [175] = {.lex_state = 365},
  [176] = {.lex_state = 252},
  [177] = {.lex_state = 368},
  [178] = {.lex_state = 371},
  [179] = {.lex_state = 272},
  [180] = {.lex_state = 365},
  [181] = {.lex_state = 365},
  [182] = {.lex_state = 272},
  [183] = {.lex_state = 279},
  [184] = {.lex_state = 291},
  [185] = {.lex_state = 170},
  [186] = {.lex_state = 252},
  [187] = {.lex_state = 265, .external_lex_state = 3},
  [188] = {.lex_state = 294},
  [189] = {.lex_state = 374},
  [190] = {.lex_state = 252},
  [191] = {.lex_state = 272},
  [192] = {.lex_state = 272},
  [193] = {.lex_state = 272},
  [194] = {.lex_state = 374},
  [195] = {.lex_state = 374},
  [196] = {.lex_state = 272},
  [197] = {.lex_state = 279},
  [198] = {.lex_state = 291},
  [199] = {.lex_state = 252},
  [200] = {.lex_state = 368},
  [201] = {.lex_state = 377, .external_lex_state = 4},
  [202] = {.lex_state = 170},
  [203] = {.lex_state = 252},
  [204] = {.lex_state = 170, .external_lex_state = 2},
  [205] = {.lex_state = 340},
  [206] = {.lex_state = 259},
  [207] = {.lex_state = 259},
  [208] = {.lex_state = 259},
  [209] = {.lex_state = 272},
  [210] = {.lex_state = 259},
  [211] = {.lex_state = 259},
  [212] = {.lex_state = 359},
  [213] = {.lex_state = 442},
  [214] = {.lex_state = 304},
  [215] = {.lex_state = 304, .external_lex_state = 4},
  [216] = {.lex_state = 272},
  [217] = {.lex_state = 252},
  [218] = {.lex_state = 170},
  [219] = {.lex_state = 340},
  [220] = {.lex_state = 304, .external_lex_state = 4},
  [221] = {.lex_state = 343},
  [222] = {.lex_state = 272},
  [223] = {.lex_state = 322},
  [224] = {.lex_state = 322},
  [225] = {.lex_state = 346},
  [226] = {.lex_state = 272},
  [227] = {.lex_state = 275},
  [228] = {.lex_state = 275},
  [229] = {.lex_state = 349},
  [230] = {.lex_state = 272},
  [231] = {.lex_state = 252},
  [232] = {.lex_state = 445},
  [233] = {.lex_state = 252},
  [234] = {.lex_state = 352},
  [235] = {.lex_state = 445},
  [236] = {.lex_state = 445},
  [237] = {.lex_state = 283},
  [238] = {.lex_state = 252},
  [239] = {.lex_state = 352},
  [240] = {.lex_state = 448, .external_lex_state = 5},
  [241] = {.lex_state = 252},
  [242] = {.lex_state = 259},
  [243] = {.lex_state = 259},
  [244] = {.lex_state = 252},
  [245] = {.lex_state = 265, .external_lex_state = 2},
  [246] = {.lex_state = 453, .external_lex_state = 5},
  [247] = {.lex_state = 448, .external_lex_state = 5},
  [248] = {.lex_state = 448, .external_lex_state = 5},
  [249] = {.lex_state = 457, .external_lex_state = 5},
  [250] = {.lex_state = 265, .external_lex_state = 5},
  [251] = {.lex_state = 265, .external_lex_state = 4},
  [252] = {.lex_state = 279},
  [253] = {.lex_state = 283},
  [254] = {.lex_state = 170, .external_lex_state = 4},
  [255] = {.lex_state = 265, .external_lex_state = 3},
  [256] = {.lex_state = 283},
  [257] = {.lex_state = 272},
  [258] = {.lex_state = 252},
  [259] = {.lex_state = 252},
  [260] = {.lex_state = 252},
  [261] = {.lex_state = 331},
  [262] = {.lex_state = 272},
  [263] = {.lex_state = 334},
  [264] = {.lex_state = 459},
  [265] = {.lex_state = 252},
  [266] = {.lex_state = 359},
  [267] = {.lex_state = 359},
  [268] = {.lex_state = 272},
  [269] = {.lex_state = 459},
  [270] = {.lex_state = 459},
  [271] = {.lex_state = 272},
  [272] = {.lex_state = 279},
  [273] = {.lex_state = 291},
  [274] = {.lex_state = 279},
  [275] = {.lex_state = 252},
  [276] = {.lex_state = 279},
  [277] = {.lex_state = 272},
  [278] = {.lex_state = 272},
  [279] = {.lex_state = 272},
  [280] = {.lex_state = 272},
  [281] = {.lex_state = 337},
  [282] = {.lex_state = 291},
  [283] = {.lex_state = 272},
  [284] = {.lex_state = 272},
  [285] = {.lex_state = 359},
  [286] = {.lex_state = 272},
  [287] = {.lex_state = 294},
  [288] = {.lex_state = 252},
  [289] = {.lex_state = 355},
  [290] = {.lex_state = 272},
  [291] = {.lex_state = 252},
  [292] = {.lex_state = 359},
  [293] = {.lex_state = 252},
  [294] = {.lex_state = 365},
  [295] = {.lex_state = 272},
  [296] = {.lex_state = 265, .external_lex_state = 3},
  [297] = {.lex_state = 252},
  [298] = {.lex_state = 462},
  [299] = {.lex_state = 252},
  [300] = {.lex_state = 371},
  [301] = {.lex_state = 462},
  [302] = {.lex_state = 462},
  [303] = {.lex_state = 283},
  [304] = {.lex_state = 252},
  [305] = {.lex_state = 371},
  [306] = {.lex_state = 368},
  [307] = {.lex_state = 170},
  [308] = {.lex_state = 374},
  [309] = {.lex_state = 272},
  [310] = {.lex_state = 252},
  [311] = {.lex_state = 465},
  [312] = {.lex_state = 252},
  [313] = {.lex_state = 465},
  [314] = {.lex_state = 465},
  [315] = {.lex_state = 283},
  [316] = {.lex_state = 252},
  [317] = {.lex_state = 272},
  [318] = {.lex_state = 170, .external_lex_state = 2},
  [319] = {.lex_state = 170},
  [320] = {.lex_state = 265, .external_lex_state = 2},
  [321] = {.lex_state = 259},
  [322] = {.lex_state = 265, .external_lex_state = 5},
  [323] = {.lex_state = 265, .external_lex_state = 5},
  [324] = {.lex_state = 170, .external_lex_state = 4},
  [325] = {.lex_state = 377, .external_lex_state = 4},
  [326] = {.lex_state = 265, .external_lex_state = 5},
  [327] = {.lex_state = 265, .external_lex_state = 4},
  [328] = {.lex_state = 359},
  [329] = {.lex_state = 368},
  [330] = {.lex_state = 170},
  [331] = {.lex_state = 259},
  [332] = {.lex_state = 442},
  [333] = {.lex_state = 259},
  [334] = {.lex_state = 340},
  [335] = {.lex_state = 259},
  [336] = {.lex_state = 442},
  [337] = {.lex_state = 442},
  [338] = {.lex_state = 265, .external_lex_state = 4},
  [339] = {.lex_state = 252},
  [340] = {.lex_state = 468, .external_lex_state = 4},
  [341] = {.lex_state = 252},
  [342] = {.lex_state = 304, .external_lex_state = 4},
  [343] = {.lex_state = 517, .external_lex_state = 4},
  [344] = {.lex_state = 272},
  [345] = {.lex_state = 468, .external_lex_state = 4},
  [346] = {.lex_state = 468, .external_lex_state = 4},
  [347] = {.lex_state = 272},
  [348] = {.lex_state = 279},
  [349] = {.lex_state = 291},
  [350] = {.lex_state = 343},
  [351] = {.lex_state = 346},
  [352] = {.lex_state = 349},
  [353] = {.lex_state = 328},
  [354] = {.lex_state = 445},
  [355] = {.lex_state = 272},
  [356] = {.lex_state = 448, .external_lex_state = 5},
  [357] = {.lex_state = 272},
  [358] = {.lex_state = 294},
  [359] = {.lex_state = 294},
  [360] = {.lex_state = 294},
  [361] = {.lex_state = 304},
  [362] = {.lex_state = 265, .external_lex_state = 5},
  [363] = {.lex_state = 279},
  [364] = {.lex_state = 279},
  [365] = {.lex_state = 521, .external_lex_state = 5},
  [366] = {.lex_state = 457, .external_lex_state = 5},
  [367] = {.lex_state = 252},
  [368] = {.lex_state = 265, .external_lex_state = 3},
  [369] = {.lex_state = 325},
  [370] = {.lex_state = 523, .external_lex_state = 5},
  [371] = {.lex_state = 265, .external_lex_state = 5},
  [372] = {.lex_state = 170, .external_lex_state = 4},
  [373] = {.lex_state = 170},
  [374] = {.lex_state = 453, .external_lex_state = 5},
  [375] = {.lex_state = 453, .external_lex_state = 5},
  [376] = {.lex_state = 170, .external_lex_state = 4},
  [377] = {.lex_state = 170},
  [378] = {.lex_state = 283},
  [379] = {.lex_state = 272},
  [380] = {.lex_state = 359},
  [381] = {.lex_state = 272},
  [382] = {.lex_state = 272},
  [383] = {.lex_state = 459},
  [384] = {.lex_state = 272},
  [385] = {.lex_state = 252},
  [386] = {.lex_state = 525},
  [387] = {.lex_state = 252},
  [388] = {.lex_state = 359},
  [389] = {.lex_state = 525},
  [390] = {.lex_state = 525},
  [391] = {.lex_state = 283},
  [392] = {.lex_state = 252},
  [393] = {.lex_state = 279},
  [394] = {.lex_state = 272},
  [395] = {.lex_state = 252},
  [396] = {.lex_state = 291},
  [397] = {.lex_state = 294},
  [398] = {.lex_state = 252},
  [399] = {.lex_state = 252},
  [400] = {.lex_state = 252},
  [401] = {.lex_state = 272},
  [402] = {.lex_state = 355},
  [403] = {.lex_state = 359},
  [404] = {.lex_state = 272},
  [405] = {.lex_state = 365},
  [406] = {.lex_state = 170},
  [407] = {.lex_state = 368},
  [408] = {.lex_state = 462},
  [409] = {.lex_state = 272},
  [410] = {.lex_state = 265, .external_lex_state = 3},
  [411] = {.lex_state = 374},
  [412] = {.lex_state = 465},
  [413] = {.lex_state = 272},
  [414] = {.lex_state = 170},
  [415] = {.lex_state = 359},
  [416] = {.lex_state = 265, .external_lex_state = 5},
  [417] = {.lex_state = 170},
  [418] = {.lex_state = 265, .external_lex_state = 4},
  [419] = {.lex_state = 377, .external_lex_state = 4},
  [420] = {.lex_state = 377, .external_lex_state = 4},
  [421] = {.lex_state = 265, .external_lex_state = 5},
  [422] = {.lex_state = 359},
  [423] = {.lex_state = 170, .external_lex_state = 2},
  [424] = {.lex_state = 340},
  [425] = {.lex_state = 259},
  [426] = {.lex_state = 442},
  [427] = {.lex_state = 304, .external_lex_state = 4},
  [428] = {.lex_state = 304, .external_lex_state = 4},
  [429] = {.lex_state = 468, .external_lex_state = 4},
  [430] = {.lex_state = 272},
  [431] = {.lex_state = 252},
  [432] = {.lex_state = 528, .external_lex_state = 4},
  [433] = {.lex_state = 252},
  [434] = {.lex_state = 517, .external_lex_state = 4},
  [435] = {.lex_state = 528, .external_lex_state = 4},
  [436] = {.lex_state = 528, .external_lex_state = 4},
  [437] = {.lex_state = 283},
  [438] = {.lex_state = 252},
  [439] = {.lex_state = 517, .external_lex_state = 4},
  [440] = {.lex_state = 445},
  [441] = {.lex_state = 448, .external_lex_state = 5},
  [442] = {.lex_state = 252},
  [443] = {.lex_state = 265, .external_lex_state = 3},
  [444] = {.lex_state = 272},
  [445] = {.lex_state = 252},
  [446] = {.lex_state = 272},
  [447] = {.lex_state = 252},
  [448] = {.lex_state = 265, .external_lex_state = 3},
  [449] = {.lex_state = 272},
  [450] = {.lex_state = 265, .external_lex_state = 4},
  [451] = {.lex_state = 532, .external_lex_state = 5},
  [452] = {.lex_state = 252},
  [453] = {.lex_state = 521, .external_lex_state = 5},
  [454] = {.lex_state = 532, .external_lex_state = 5},
  [455] = {.lex_state = 532, .external_lex_state = 5},
  [456] = {.lex_state = 279},
  [457] = {.lex_state = 283},
  [458] = {.lex_state = 535, .external_lex_state = 5},
  [459] = {.lex_state = 252},
  [460] = {.lex_state = 457, .external_lex_state = 5},
  [461] = {.lex_state = 535, .external_lex_state = 5},
  [462] = {.lex_state = 535, .external_lex_state = 5},
  [463] = {.lex_state = 279},
  [464] = {.lex_state = 283},
  [465] = {.lex_state = 457, .external_lex_state = 5},
  [466] = {.lex_state = 538, .external_lex_state = 5},
  [467] = {.lex_state = 252},
  [468] = {.lex_state = 523, .external_lex_state = 5},
  [469] = {.lex_state = 541, .external_lex_state = 5},
  [470] = {.lex_state = 272},
  [471] = {.lex_state = 538, .external_lex_state = 5},
  [472] = {.lex_state = 538, .external_lex_state = 5},
  [473] = {.lex_state = 272},
  [474] = {.lex_state = 279},
  [475] = {.lex_state = 291},
  [476] = {.lex_state = 170},
  [477] = {.lex_state = 265, .external_lex_state = 5},
  [478] = {.lex_state = 272},
  [479] = {.lex_state = 265, .external_lex_state = 5},
  [480] = {.lex_state = 272},
  [481] = {.lex_state = 459},
  [482] = {.lex_state = 359},
  [483] = {.lex_state = 525},
  [484] = {.lex_state = 272},
  [485] = {.lex_state = 279},
  [486] = {.lex_state = 272},
  [487] = {.lex_state = 359},
  [488] = {.lex_state = 272},
  [489] = {.lex_state = 294},
  [490] = {.lex_state = 462},
  [491] = {.lex_state = 170},
  [492] = {.lex_state = 465},
  [493] = {.lex_state = 259},
  [494] = {.lex_state = 170},
  [495] = {.lex_state = 377, .external_lex_state = 4},
  [496] = {.lex_state = 265, .external_lex_state = 2},
  [497] = {.lex_state = 265, .external_lex_state = 5},
  [498] = {.lex_state = 170},
  [499] = {.lex_state = 468, .external_lex_state = 4},
  [500] = {.lex_state = 304, .external_lex_state = 4},
  [501] = {.lex_state = 528, .external_lex_state = 4},
  [502] = {.lex_state = 272},
  [503] = {.lex_state = 374, .external_lex_state = 5},
  [504] = {.lex_state = 252},
  [505] = {.lex_state = 543, .external_lex_state = 5},
  [506] = {.lex_state = 545, .external_lex_state = 5},
  [507] = {.lex_state = 272},
  [508] = {.lex_state = 374, .external_lex_state = 5},
  [509] = {.lex_state = 374, .external_lex_state = 5},
  [510] = {.lex_state = 272},
  [511] = {.lex_state = 279},
  [512] = {.lex_state = 291},
  [513] = {.lex_state = 265, .external_lex_state = 5},
  [514] = {.lex_state = 252},
  [515] = {.lex_state = 265, .external_lex_state = 3},
  [516] = {.lex_state = 272},
  [517] = {.lex_state = 252},
  [518] = {.lex_state = 543, .external_lex_state = 5},
  [519] = {.lex_state = 377, .external_lex_state = 4},
  [520] = {.lex_state = 265, .external_lex_state = 5},
  [521] = {.lex_state = 252},
  [522] = {.lex_state = 265, .external_lex_state = 3},
  [523] = {.lex_state = 265, .external_lex_state = 5},
  [524] = {.lex_state = 532, .external_lex_state = 5},
  [525] = {.lex_state = 272},
  [526] = {.lex_state = 535, .external_lex_state = 5},
  [527] = {.lex_state = 272},
  [528] = {.lex_state = 538, .external_lex_state = 5},
  [529] = {.lex_state = 272},
  [530] = {.lex_state = 252},
  [531] = {.lex_state = 547, .external_lex_state = 5},
  [532] = {.lex_state = 252},
  [533] = {.lex_state = 547, .external_lex_state = 5},
  [534] = {.lex_state = 547, .external_lex_state = 5},
  [535] = {.lex_state = 283},
  [536] = {.lex_state = 252},
  [537] = {.lex_state = 265, .external_lex_state = 4},
  [538] = {.lex_state = 265, .external_lex_state = 3},
  [539] = {.lex_state = 525},
  [540] = {.lex_state = 294},
  [541] = {.lex_state = 265, .external_lex_state = 4},
  [542] = {.lex_state = 359},
  [543] = {.lex_state = 359},
  [544] = {.lex_state = 528, .external_lex_state = 4},
  [545] = {.lex_state = 374, .external_lex_state = 5},
  [546] = {.lex_state = 272},
  [547] = {.lex_state = 265, .external_lex_state = 3},
  [548] = {.lex_state = 252},
  [549] = {.lex_state = 465, .external_lex_state = 5},
  [550] = {.lex_state = 252},
  [551] = {.lex_state = 465, .external_lex_state = 5},
  [552] = {.lex_state = 465, .external_lex_state = 5},
  [553] = {.lex_state = 283},
  [554] = {.lex_state = 252},
  [555] = {.lex_state = 543, .external_lex_state = 5},
  [556] = {.lex_state = 265, .external_lex_state = 5},
  [557] = {.lex_state = 272},
  [558] = {.lex_state = 265, .external_lex_state = 3},
  [559] = {.lex_state = 265, .external_lex_state = 5},
  [560] = {.lex_state = 170, .external_lex_state = 4},
  [561] = {.lex_state = 265, .external_lex_state = 4},
  [562] = {.lex_state = 543, .external_lex_state = 5},
  [563] = {.lex_state = 265, .external_lex_state = 5},
  [564] = {.lex_state = 532, .external_lex_state = 5},
  [565] = {.lex_state = 535, .external_lex_state = 5},
  [566] = {.lex_state = 538, .external_lex_state = 5},
  [567] = {.lex_state = 523, .external_lex_state = 5},
  [568] = {.lex_state = 547, .external_lex_state = 5},
  [569] = {.lex_state = 272},
  [570] = {.lex_state = 265, .external_lex_state = 5},
  [571] = {.lex_state = 265, .external_lex_state = 5},
  [572] = {.lex_state = 377, .external_lex_state = 4},
  [573] = {.lex_state = 259},
  [574] = {.lex_state = 374, .external_lex_state = 5},
  [575] = {.lex_state = 265, .external_lex_state = 5},
  [576] = {.lex_state = 465, .external_lex_state = 5},
  [577] = {.lex_state = 272},
  [578] = {.lex_state = 265, .external_lex_state = 3},
  [579] = {.lex_state = 265, .external_lex_state = 5},
  [580] = {.lex_state = 265, .external_lex_state = 5},
  [581] = {.lex_state = 265, .external_lex_state = 4},
  [582] = {.lex_state = 265, .external_lex_state = 3},
  [583] = {.lex_state = 547, .external_lex_state = 5},
  [584] = {.lex_state = 265, .external_lex_state = 4},
  [585] = {.lex_state = 465, .external_lex_state = 5},
  [586] = {.lex_state = 265, .external_lex_state = 5},
  [587] = {.lex_state = 265, .external_lex_state = 5},
  [588] = {.lex_state = 265, .external_lex_state = 5},
  [589] = {.lex_state = 359},
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
    [ts_external_token__indent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
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
    [sym_data] = STATE(14),
    [sym_data_signature_only] = STATE(14),
    [sym_record] = STATE(14),
    [sym_record_signature_only] = STATE(14),
    [sym_field] = STATE(14),
    [sym__declaration] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym__expr1_repeat1] = STATE(15),
    [aux_sym__application_repeat1] = STATE(16),
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
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [3] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(23),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
    [sym_literal] = STATE(35),
    [sym__atom_no_curly] = STATE(35),
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
    [sym__arg_type_signatures_block] = STATE(37),
    [sym__indent] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_comment] = ACTIONS(53),
  },
  [9] = {
    [sym_rewrite_equations] = STATE(40),
    [sym_with_expressions] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_string] = ACTIONS(59),
    [sym_int] = ACTIONS(59),
    [sym_qualified_name] = ACTIONS(59),
    [anon_sym__] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_Prop] = ACTIONS(59),
    [anon_sym_Set] = ACTIONS(59),
    [anon_sym_quote] = ACTIONS(59),
    [anon_sym_quoteTerm] = ACTIONS(59),
    [anon_sym_unquote] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_rewrite] = ACTIONS(61),
    [anon_sym_with] = ACTIONS(63),
    [anon_sym_where] = ACTIONS(59),
    [anon_sym_module] = ACTIONS(59),
    [anon_sym_data] = ACTIONS(59),
    [anon_sym_codata] = ACTIONS(59),
    [anon_sym_record] = ACTIONS(59),
    [anon_sym_field] = ACTIONS(59),
    [sym_pragma] = ACTIONS(59),
  },
  [10] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_rewrite] = ACTIONS(71),
    [anon_sym_with] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_rewrite] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [13] = {
    [sym_rhs] = STATE(46),
    [sym_where_clause] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_qualified_name] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_Prop] = ACTIONS(79),
    [anon_sym_Set] = ACTIONS(79),
    [anon_sym_quote] = ACTIONS(79),
    [anon_sym_quoteTerm] = ACTIONS(79),
    [anon_sym_unquote] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_data] = ACTIONS(79),
    [anon_sym_codata] = ACTIONS(79),
    [anon_sym_record] = ACTIONS(79),
    [anon_sym_field] = ACTIONS(79),
    [sym_pragma] = ACTIONS(79),
  },
  [14] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(48),
    [sym_lhs] = STATE(13),
    [sym_data] = STATE(48),
    [sym_data_signature_only] = STATE(48),
    [sym_record] = STATE(48),
    [sym_record_signature_only] = STATE(48),
    [sym_field] = STATE(48),
    [sym__declaration] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [aux_sym__expr1_repeat1] = STATE(15),
    [aux_sym__application_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(87),
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
  [15] = {
    [sym_literal] = STATE(12),
    [sym__application] = STATE(49),
    [sym__expr2] = STATE(49),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(16),
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
  [16] = {
    [sym_literal] = STATE(12),
    [sym__expr2] = STATE(51),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [aux_sym__application_repeat1] = STATE(52),
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
  [17] = {
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
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(97),
  },
  [19] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(59),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [21] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(66),
    [sym__expr2] = STATE(66),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [22] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(70),
    [sym__expr2] = STATE(70),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [23] = {
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym_comment] = ACTIONS(53),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(121),
  },
  [25] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [26] = {
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [27] = {
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [28] = {
    [sym__const_right_arrow] = ACTIONS(121),
    [sym_comment] = ACTIONS(53),
  },
  [29] = {
    [sym_literal] = STATE(77),
    [sym__application] = STATE(75),
    [sym__expr2] = STATE(75),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(78),
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
  [30] = {
    [sym_literal] = STATE(27),
    [sym__expr2] = STATE(80),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [aux_sym__application_repeat1] = STATE(81),
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
  [31] = {
    [sym_typed_binding] = STATE(83),
    [aux_sym__typed_bindings1_repeat1] = STATE(83),
    [sym__const_right_arrow] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(137),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(139),
  },
  [32] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(93),
    [sym_typed_binding] = STATE(93),
    [sym__typed_untyped_binding1] = STATE(92),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(93),
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
  [33] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(93),
    [sym_typed_binding] = STATE(93),
    [sym__typed_untyped_binding1] = STATE(95),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(93),
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
  [34] = {
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
  [35] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(93),
    [sym_typed_binding] = STATE(93),
    [sym__typed_untyped_binding1] = STATE(98),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(93),
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
  [36] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym__arg_names] = STATE(105),
    [sym_arg_name] = STATE(107),
    [sym__arg_type_signatures1] = STATE(106),
    [sym_arg_type_signature] = STATE(108),
    [aux_sym__arg_names_repeat1] = STATE(107),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(108),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [37] = {
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
  [38] = {
    [sym_literal] = STATE(113),
    [sym__expr1] = STATE(111),
    [sym__application] = STATE(111),
    [sym__expr2] = STATE(111),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(112),
    [sym__atom_curly] = STATE(113),
    [sym__atom_no_curly] = STATE(113),
    [aux_sym__expr1_repeat1] = STATE(114),
    [aux_sym__application_repeat1] = STATE(115),
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
  [39] = {
    [sym_literal] = STATE(120),
    [sym__expr1] = STATE(118),
    [sym__application] = STATE(118),
    [sym__expr2] = STATE(118),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(119),
    [sym__atom_curly] = STATE(120),
    [sym__atom_no_curly] = STATE(120),
    [aux_sym__expr1_repeat1] = STATE(121),
    [aux_sym__application_repeat1] = STATE(122),
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
  [40] = {
    [sym_with_expressions] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_string] = ACTIONS(191),
    [sym_int] = ACTIONS(191),
    [sym_qualified_name] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_Prop] = ACTIONS(191),
    [anon_sym_Set] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_quoteTerm] = ACTIONS(191),
    [anon_sym_unquote] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_with] = ACTIONS(63),
    [anon_sym_where] = ACTIONS(191),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_data] = ACTIONS(191),
    [anon_sym_codata] = ACTIONS(191),
    [anon_sym_record] = ACTIONS(191),
    [anon_sym_field] = ACTIONS(191),
    [sym_pragma] = ACTIONS(191),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_string] = ACTIONS(191),
    [sym_int] = ACTIONS(191),
    [sym_qualified_name] = ACTIONS(191),
    [anon_sym__] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(191),
    [anon_sym_Prop] = ACTIONS(191),
    [anon_sym_Set] = ACTIONS(191),
    [anon_sym_quote] = ACTIONS(191),
    [anon_sym_quoteTerm] = ACTIONS(191),
    [anon_sym_unquote] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_where] = ACTIONS(191),
    [anon_sym_module] = ACTIONS(191),
    [anon_sym_data] = ACTIONS(191),
    [anon_sym_codata] = ACTIONS(191),
    [anon_sym_record] = ACTIONS(191),
    [anon_sym_field] = ACTIONS(191),
    [sym_pragma] = ACTIONS(191),
  },
  [42] = {
    [sym_string] = ACTIONS(193),
    [sym_int] = ACTIONS(193),
    [sym_qualified_name] = ACTIONS(193),
    [anon_sym__] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_Prop] = ACTIONS(193),
    [anon_sym_Set] = ACTIONS(193),
    [anon_sym_quote] = ACTIONS(193),
    [anon_sym_quoteTerm] = ACTIONS(193),
    [anon_sym_unquote] = ACTIONS(193),
  },
  [43] = {
    [sym_literal] = STATE(130),
    [sym_expr] = STATE(126),
    [sym__expr1] = STATE(127),
    [sym__application] = STATE(127),
    [sym__expr2] = STATE(127),
    [sym__atoms1] = STATE(128),
    [sym_atom] = STATE(129),
    [sym__atom_curly] = STATE(130),
    [sym__atom_no_curly] = STATE(130),
    [sym__typed_bindings1] = STATE(131),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(132),
    [aux_sym__application_repeat1] = STATE(133),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(195),
    [sym_int] = ACTIONS(195),
    [sym_qualified_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_Prop] = ACTIONS(197),
    [anon_sym_Set] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_quoteTerm] = ACTIONS(197),
    [anon_sym_unquote] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [44] = {
    [sym__declarations0_] = STATE(135),
    [sym__newline] = ACTIONS(201),
    [sym__indent] = ACTIONS(203),
    [sym_comment] = ACTIONS(53),
  },
  [45] = {
    [sym_anonymous_name] = STATE(136),
    [sym_name] = ACTIONS(205),
    [anon_sym__] = ACTIONS(207),
    [sym_comment] = ACTIONS(13),
  },
  [46] = {
    [sym_where_clause] = STATE(138),
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
    [anon_sym_where] = ACTIONS(83),
    [anon_sym_module] = ACTIONS(85),
    [anon_sym_data] = ACTIONS(211),
    [anon_sym_codata] = ACTIONS(211),
    [anon_sym_record] = ACTIONS(211),
    [anon_sym_field] = ACTIONS(211),
    [sym_pragma] = ACTIONS(211),
  },
  [47] = {
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
  [48] = {
    [sym_literal] = STATE(12),
    [sym__expr1] = STATE(9),
    [sym__application] = STATE(9),
    [sym__expr2] = STATE(9),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(11),
    [sym__atom_curly] = STATE(12),
    [sym__atom_no_curly] = STATE(12),
    [sym_function_clause] = STATE(48),
    [sym_lhs] = STATE(13),
    [sym_data] = STATE(48),
    [sym_data_signature_only] = STATE(48),
    [sym_record] = STATE(48),
    [sym_record_signature_only] = STATE(48),
    [sym_field] = STATE(48),
    [sym__declaration] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [aux_sym__expr1_repeat1] = STATE(15),
    [aux_sym__application_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(213),
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
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_rewrite] = ACTIONS(241),
    [anon_sym_with] = ACTIONS(241),
    [anon_sym_where] = ACTIONS(241),
    [anon_sym_module] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
  },
  [50] = {
    [sym_literal] = STATE(141),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(142),
    [sym__atom_curly] = STATE(141),
    [sym__atom_no_curly] = STATE(141),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(142),
    [sym_string] = ACTIONS(243),
    [sym_int] = ACTIONS(243),
    [sym_qualified_name] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(249),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(246),
    [anon_sym_Prop] = ACTIONS(246),
    [anon_sym_Set] = ACTIONS(246),
    [anon_sym_quote] = ACTIONS(246),
    [anon_sym_quoteTerm] = ACTIONS(246),
    [anon_sym_unquote] = ACTIONS(246),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_string] = ACTIONS(254),
    [sym_int] = ACTIONS(254),
    [sym_qualified_name] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_Prop] = ACTIONS(254),
    [anon_sym_Set] = ACTIONS(254),
    [anon_sym_quote] = ACTIONS(254),
    [anon_sym_quoteTerm] = ACTIONS(254),
    [anon_sym_unquote] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_rewrite] = ACTIONS(254),
    [anon_sym_with] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_codata] = ACTIONS(254),
    [anon_sym_record] = ACTIONS(254),
    [anon_sym_field] = ACTIONS(254),
    [sym_pragma] = ACTIONS(254),
  },
  [52] = {
    [sym_literal] = STATE(141),
    [sym_atom] = STATE(52),
    [sym__atom_curly] = STATE(141),
    [sym__atom_no_curly] = STATE(141),
    [aux_sym__application_repeat1] = STATE(52),
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
  [53] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(143),
    [sym__expr2] = STATE(143),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [54] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(144),
    [sym__expr2] = STATE(144),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [55] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(145),
    [sym__expr2] = STATE(145),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [56] = {
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
  [57] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(147),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(267),
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
  [58] = {
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
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(269),
    [sym_comment] = ACTIONS(53),
  },
  [60] = {
    [anon_sym_RBRACE] = ACTIONS(271),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(273),
  },
  [61] = {
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
  },
  [62] = {
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
  },
  [63] = {
    [sym_literal] = STATE(62),
    [sym__expr2] = STATE(80),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(275),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_Prop] = ACTIONS(101),
    [anon_sym_Set] = ACTIONS(101),
    [anon_sym_quote] = ACTIONS(101),
    [anon_sym_quoteTerm] = ACTIONS(101),
    [anon_sym_unquote] = ACTIONS(101),
  },
  [64] = {
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
  [65] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(152),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(277),
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
  [66] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(279),
  },
  [67] = {
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
  },
  [68] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
  },
  [69] = {
    [sym_literal] = STATE(68),
    [sym__expr2] = STATE(80),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(154),
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
  [70] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(281),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_rewrite] = ACTIONS(285),
    [anon_sym_with] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [72] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(156),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [73] = {
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
  [74] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(158),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(287),
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
  [75] = {
    [anon_sym_RBRACE] = ACTIONS(239),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_where] = ACTIONS(239),
  },
  [76] = {
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(71),
  },
  [77] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [78] = {
    [sym_literal] = STATE(77),
    [sym__expr2] = STATE(80),
    [sym_atom] = STATE(76),
    [sym__atom_curly] = STATE(77),
    [sym__atom_no_curly] = STATE(77),
    [aux_sym__application_repeat1] = STATE(52),
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
  [79] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(59),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(252),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_where] = ACTIONS(252),
  },
  [81] = {
    [sym_literal] = STATE(161),
    [sym_atom] = STATE(81),
    [sym__atom_curly] = STATE(161),
    [sym__atom_no_curly] = STATE(161),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(265),
    [sym_string] = ACTIONS(289),
    [sym_int] = ACTIONS(289),
    [sym_qualified_name] = ACTIONS(292),
    [anon_sym__] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(295),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_QMARK] = ACTIONS(292),
    [anon_sym_Prop] = ACTIONS(292),
    [anon_sym_Set] = ACTIONS(292),
    [anon_sym_quote] = ACTIONS(292),
    [anon_sym_quoteTerm] = ACTIONS(292),
    [anon_sym_unquote] = ACTIONS(292),
  },
  [82] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(162),
    [sym__expr2] = STATE(162),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [83] = {
    [sym_typed_binding] = STATE(83),
    [aux_sym__typed_bindings1_repeat1] = STATE(83),
    [sym__const_right_arrow] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_DOT_DOT] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(312),
  },
  [84] = {
    [sym_name] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_DOT_DOT] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(315),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_where] = ACTIONS(315),
  },
  [85] = {
    [sym_binding_name] = STATE(166),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(319),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(321),
  },
  [86] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(167),
    [sym__expr2] = STATE(167),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [87] = {
    [sym_literal] = STATE(172),
    [sym__application] = STATE(170),
    [sym__expr2] = STATE(170),
    [sym_atom] = STATE(171),
    [sym__atom_curly] = STATE(172),
    [sym__atom_no_curly] = STATE(172),
    [aux_sym__application_repeat1] = STATE(173),
    [sym_string] = ACTIONS(323),
    [sym_int] = ACTIONS(323),
    [sym_qualified_name] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_Prop] = ACTIONS(325),
    [anon_sym_Set] = ACTIONS(325),
    [anon_sym_quote] = ACTIONS(325),
    [anon_sym_quoteTerm] = ACTIONS(325),
    [anon_sym_unquote] = ACTIONS(325),
  },
  [88] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(174),
    [sym__expr2] = STATE(174),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [89] = {
    [sym_literal] = STATE(181),
    [sym_expr] = STATE(177),
    [sym__expr1] = STATE(178),
    [sym__application] = STATE(178),
    [sym__expr2] = STATE(178),
    [sym__atoms1] = STATE(179),
    [sym_atom] = STATE(180),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [sym__typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(183),
    [aux_sym__application_repeat1] = STATE(184),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(329),
    [sym_int] = ACTIONS(329),
    [sym_qualified_name] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_Prop] = ACTIONS(331),
    [anon_sym_Set] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_quoteTerm] = ACTIONS(331),
    [anon_sym_unquote] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [90] = {
    [sym__declarations0_] = STATE(185),
    [sym__newline] = ACTIONS(335),
    [sym__indent] = ACTIONS(203),
    [sym_comment] = ACTIONS(53),
  },
  [91] = {
    [sym_name] = ACTIONS(337),
    [anon_sym__] = ACTIONS(337),
    [anon_sym_DOT] = ACTIONS(337),
    [anon_sym_DOT_DOT] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(337),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(337),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_where] = ACTIONS(337),
  },
  [92] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_where] = ACTIONS(341),
  },
  [93] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(188),
    [sym_typed_binding] = STATE(188),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(188),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_where] = ACTIONS(343),
  },
  [94] = {
    [sym_literal] = STATE(195),
    [sym_expr] = STATE(191),
    [sym__expr1] = STATE(192),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym__atoms1] = STATE(193),
    [sym_atom] = STATE(194),
    [sym__atom_curly] = STATE(195),
    [sym__atom_no_curly] = STATE(195),
    [sym__typed_bindings1] = STATE(196),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(197),
    [aux_sym__application_repeat1] = STATE(198),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(345),
    [sym_int] = ACTIONS(345),
    [sym_qualified_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_Prop] = ACTIONS(347),
    [anon_sym_Set] = ACTIONS(347),
    [anon_sym_quote] = ACTIONS(347),
    [anon_sym_quoteTerm] = ACTIONS(347),
    [anon_sym_unquote] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [95] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_where] = ACTIONS(341),
  },
  [96] = {
    [sym_literal] = STATE(181),
    [sym_expr] = STATE(200),
    [sym__expr1] = STATE(178),
    [sym__application] = STATE(178),
    [sym__expr2] = STATE(178),
    [sym__atoms1] = STATE(179),
    [sym_atom] = STATE(180),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [sym__typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(183),
    [aux_sym__application_repeat1] = STATE(184),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(329),
    [sym_int] = ACTIONS(329),
    [sym_qualified_name] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_Prop] = ACTIONS(331),
    [anon_sym_Set] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_quoteTerm] = ACTIONS(331),
    [anon_sym_unquote] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [97] = {
    [sym_record_declarations_block] = STATE(202),
    [sym__indent] = ACTIONS(353),
    [ts_builtin_sym_end] = ACTIONS(355),
    [sym_string] = ACTIONS(357),
    [sym_int] = ACTIONS(357),
    [sym_qualified_name] = ACTIONS(357),
    [anon_sym__] = ACTIONS(357),
    [anon_sym_LBRACE] = ACTIONS(357),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(357),
    [anon_sym_Prop] = ACTIONS(357),
    [anon_sym_Set] = ACTIONS(357),
    [anon_sym_quote] = ACTIONS(357),
    [anon_sym_quoteTerm] = ACTIONS(357),
    [anon_sym_unquote] = ACTIONS(357),
    [anon_sym_data] = ACTIONS(357),
    [anon_sym_codata] = ACTIONS(357),
    [anon_sym_record] = ACTIONS(357),
    [anon_sym_field] = ACTIONS(357),
    [sym_pragma] = ACTIONS(357),
  },
  [98] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_where] = ACTIONS(361),
  },
  [99] = {
    [sym_name] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(367),
    [sym_comment] = ACTIONS(13),
  },
  [100] = {
    [sym__maybe_dotted_names1] = STATE(209),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(210),
    [sym_name] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [sym_comment] = ACTIONS(13),
  },
  [101] = {
    [sym__maybe_dotted_names1] = STATE(212),
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(213),
    [sym_name] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(375),
    [anon_sym_DOT_DOT] = ACTIONS(375),
    [sym_comment] = ACTIONS(13),
  },
  [102] = {
    [sym__arg_type_signatures_block] = STATE(215),
    [sym__indent] = ACTIONS(377),
    [sym_comment] = ACTIONS(53),
  },
  [103] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym__arg_names] = STATE(216),
    [sym_arg_name] = STATE(107),
    [aux_sym__arg_names_repeat1] = STATE(107),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
  },
  [104] = {
    [sym_name] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_DOT_DOT] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(379),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(379),
  },
  [105] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(381),
  },
  [106] = {
    [sym__dedent] = ACTIONS(383),
    [sym_comment] = ACTIONS(53),
  },
  [107] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym_arg_name] = STATE(219),
    [aux_sym__arg_names_repeat1] = STATE(219),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(385),
  },
  [108] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym__arg_names] = STATE(105),
    [sym_arg_name] = STATE(107),
    [sym_arg_type_signature] = STATE(220),
    [aux_sym__arg_names_repeat1] = STATE(107),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(220),
    [sym__dedent] = ACTIONS(387),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [110] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(222),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(389),
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
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_string] = ACTIONS(393),
    [sym_int] = ACTIONS(393),
    [sym_qualified_name] = ACTIONS(393),
    [anon_sym__] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(393),
    [anon_sym_QMARK] = ACTIONS(393),
    [anon_sym_Prop] = ACTIONS(393),
    [anon_sym_Set] = ACTIONS(393),
    [anon_sym_quote] = ACTIONS(393),
    [anon_sym_quoteTerm] = ACTIONS(393),
    [anon_sym_unquote] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_with] = ACTIONS(393),
    [anon_sym_where] = ACTIONS(393),
    [anon_sym_module] = ACTIONS(393),
    [anon_sym_data] = ACTIONS(393),
    [anon_sym_codata] = ACTIONS(393),
    [anon_sym_record] = ACTIONS(393),
    [anon_sym_field] = ACTIONS(393),
    [sym_pragma] = ACTIONS(393),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_with] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [114] = {
    [sym_literal] = STATE(113),
    [sym__application] = STATE(223),
    [sym__expr2] = STATE(223),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(112),
    [sym__atom_curly] = STATE(113),
    [sym__atom_no_curly] = STATE(113),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(115),
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
  [115] = {
    [sym_literal] = STATE(113),
    [sym__expr2] = STATE(224),
    [sym_atom] = STATE(112),
    [sym__atom_curly] = STATE(113),
    [sym__atom_no_curly] = STATE(113),
    [aux_sym__application_repeat1] = STATE(52),
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
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [117] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(226),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(395),
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
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_string] = ACTIONS(399),
    [sym_int] = ACTIONS(399),
    [sym_qualified_name] = ACTIONS(399),
    [anon_sym__] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(399),
    [anon_sym_QMARK] = ACTIONS(399),
    [anon_sym_Prop] = ACTIONS(399),
    [anon_sym_Set] = ACTIONS(399),
    [anon_sym_quote] = ACTIONS(399),
    [anon_sym_quoteTerm] = ACTIONS(399),
    [anon_sym_unquote] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_where] = ACTIONS(399),
    [anon_sym_module] = ACTIONS(399),
    [anon_sym_data] = ACTIONS(399),
    [anon_sym_codata] = ACTIONS(399),
    [anon_sym_record] = ACTIONS(399),
    [anon_sym_field] = ACTIONS(399),
    [sym_pragma] = ACTIONS(399),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [121] = {
    [sym_literal] = STATE(120),
    [sym__application] = STATE(227),
    [sym__expr2] = STATE(227),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(119),
    [sym__atom_curly] = STATE(120),
    [sym__atom_no_curly] = STATE(120),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(122),
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
  [122] = {
    [sym_literal] = STATE(120),
    [sym__expr2] = STATE(228),
    [sym_atom] = STATE(119),
    [sym__atom_curly] = STATE(120),
    [sym__atom_no_curly] = STATE(120),
    [aux_sym__application_repeat1] = STATE(52),
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
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym_string] = ACTIONS(403),
    [sym_int] = ACTIONS(403),
    [sym_qualified_name] = ACTIONS(403),
    [anon_sym__] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(403),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(403),
    [anon_sym_QMARK] = ACTIONS(403),
    [anon_sym_Prop] = ACTIONS(403),
    [anon_sym_Set] = ACTIONS(403),
    [anon_sym_quote] = ACTIONS(403),
    [anon_sym_quoteTerm] = ACTIONS(403),
    [anon_sym_unquote] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_where] = ACTIONS(403),
    [anon_sym_module] = ACTIONS(403),
    [anon_sym_data] = ACTIONS(403),
    [anon_sym_codata] = ACTIONS(403),
    [anon_sym_record] = ACTIONS(403),
    [anon_sym_field] = ACTIONS(403),
    [sym_pragma] = ACTIONS(403),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [125] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(230),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(405),
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
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_string] = ACTIONS(409),
    [sym_int] = ACTIONS(409),
    [sym_qualified_name] = ACTIONS(409),
    [anon_sym__] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(409),
    [anon_sym_Prop] = ACTIONS(409),
    [anon_sym_Set] = ACTIONS(409),
    [anon_sym_quote] = ACTIONS(409),
    [anon_sym_quoteTerm] = ACTIONS(409),
    [anon_sym_unquote] = ACTIONS(409),
    [anon_sym_where] = ACTIONS(409),
    [anon_sym_module] = ACTIONS(409),
    [anon_sym_data] = ACTIONS(409),
    [anon_sym_codata] = ACTIONS(409),
    [anon_sym_record] = ACTIONS(409),
    [anon_sym_field] = ACTIONS(409),
    [sym_pragma] = ACTIONS(409),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_string] = ACTIONS(411),
    [sym_int] = ACTIONS(411),
    [sym_qualified_name] = ACTIONS(411),
    [anon_sym__] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_QMARK] = ACTIONS(411),
    [anon_sym_Prop] = ACTIONS(411),
    [anon_sym_Set] = ACTIONS(411),
    [anon_sym_quote] = ACTIONS(411),
    [anon_sym_quoteTerm] = ACTIONS(411),
    [anon_sym_unquote] = ACTIONS(411),
    [anon_sym_where] = ACTIONS(411),
    [anon_sym_module] = ACTIONS(411),
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_codata] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(411),
    [anon_sym_field] = ACTIONS(411),
    [sym_pragma] = ACTIONS(411),
  },
  [128] = {
    [sym__const_right_arrow] = ACTIONS(415),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [131] = {
    [sym__const_right_arrow] = ACTIONS(415),
    [sym_comment] = ACTIONS(53),
  },
  [132] = {
    [sym_literal] = STATE(236),
    [sym__application] = STATE(234),
    [sym__expr2] = STATE(234),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(235),
    [sym__atom_curly] = STATE(236),
    [sym__atom_no_curly] = STATE(236),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(237),
    [sym_string] = ACTIONS(417),
    [sym_int] = ACTIONS(417),
    [sym_qualified_name] = ACTIONS(419),
    [anon_sym__] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(421),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(419),
    [anon_sym_Prop] = ACTIONS(419),
    [anon_sym_Set] = ACTIONS(419),
    [anon_sym_quote] = ACTIONS(419),
    [anon_sym_quoteTerm] = ACTIONS(419),
    [anon_sym_unquote] = ACTIONS(419),
  },
  [133] = {
    [sym_literal] = STATE(130),
    [sym__expr2] = STATE(239),
    [sym_atom] = STATE(129),
    [sym__atom_curly] = STATE(130),
    [sym__atom_no_curly] = STATE(130),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(195),
    [sym_int] = ACTIONS(195),
    [sym_qualified_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(423),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_Prop] = ACTIONS(197),
    [anon_sym_Set] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_quoteTerm] = ACTIONS(197),
    [anon_sym_unquote] = ACTIONS(197),
  },
  [134] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [sym__declarations1_] = STATE(251),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__declarations1__repeat1] = STATE(254),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_string] = ACTIONS(443),
    [sym_int] = ACTIONS(443),
    [sym_qualified_name] = ACTIONS(443),
    [anon_sym__] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(443),
    [anon_sym_Prop] = ACTIONS(443),
    [anon_sym_Set] = ACTIONS(443),
    [anon_sym_quote] = ACTIONS(443),
    [anon_sym_quoteTerm] = ACTIONS(443),
    [anon_sym_unquote] = ACTIONS(443),
    [anon_sym_data] = ACTIONS(443),
    [anon_sym_codata] = ACTIONS(443),
    [anon_sym_record] = ACTIONS(443),
    [anon_sym_field] = ACTIONS(443),
    [sym_pragma] = ACTIONS(443),
  },
  [136] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(445),
  },
  [137] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(447),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_string] = ACTIONS(451),
    [sym_int] = ACTIONS(451),
    [sym_qualified_name] = ACTIONS(451),
    [anon_sym__] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(451),
    [anon_sym_Prop] = ACTIONS(451),
    [anon_sym_Set] = ACTIONS(451),
    [anon_sym_quote] = ACTIONS(451),
    [anon_sym_quoteTerm] = ACTIONS(451),
    [anon_sym_unquote] = ACTIONS(451),
    [anon_sym_data] = ACTIONS(451),
    [anon_sym_codata] = ACTIONS(451),
    [anon_sym_record] = ACTIONS(451),
    [anon_sym_field] = ACTIONS(451),
    [sym_pragma] = ACTIONS(451),
  },
  [139] = {
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
  [140] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(257),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(453),
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
  [141] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
  },
  [142] = {
    [sym_literal] = STATE(141),
    [sym_atom] = STATE(52),
    [sym__atom_curly] = STATE(141),
    [sym__atom_no_curly] = STATE(141),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(455),
    [sym_int] = ACTIONS(455),
    [sym_qualified_name] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(459),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_Prop] = ACTIONS(457),
    [anon_sym_Set] = ACTIONS(457),
    [anon_sym_quote] = ACTIONS(457),
    [anon_sym_quoteTerm] = ACTIONS(457),
    [anon_sym_unquote] = ACTIONS(457),
  },
  [143] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(461),
  },
  [144] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(463),
  },
  [145] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(465),
  },
  [146] = {
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
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(467),
    [sym_comment] = ACTIONS(53),
  },
  [148] = {
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [149] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(262),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [150] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(147),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(267),
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
  [151] = {
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
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(469),
    [sym_comment] = ACTIONS(53),
  },
  [153] = {
    [sym_literal] = STATE(270),
    [sym_expr] = STATE(266),
    [sym__expr1] = STATE(267),
    [sym__application] = STATE(267),
    [sym__expr2] = STATE(267),
    [sym__atoms1] = STATE(268),
    [sym_atom] = STATE(269),
    [sym__atom_curly] = STATE(270),
    [sym__atom_no_curly] = STATE(270),
    [sym__typed_bindings1] = STATE(271),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(272),
    [aux_sym__application_repeat1] = STATE(273),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(471),
    [sym_int] = ACTIONS(471),
    [sym_qualified_name] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_Prop] = ACTIONS(473),
    [anon_sym_Set] = ACTIONS(473),
    [anon_sym_quote] = ACTIONS(473),
    [anon_sym_quoteTerm] = ACTIONS(473),
    [anon_sym_unquote] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [154] = {
    [sym_literal] = STATE(276),
    [sym_atom] = STATE(154),
    [sym__atom_curly] = STATE(276),
    [sym__atom_no_curly] = STATE(276),
    [aux_sym__application_repeat1] = STATE(154),
    [sym_string] = ACTIONS(477),
    [sym_int] = ACTIONS(477),
    [sym_qualified_name] = ACTIONS(480),
    [anon_sym__] = ACTIONS(480),
    [anon_sym_LBRACE] = ACTIONS(483),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(480),
    [anon_sym_Prop] = ACTIONS(480),
    [anon_sym_Set] = ACTIONS(480),
    [anon_sym_quote] = ACTIONS(480),
    [anon_sym_quoteTerm] = ACTIONS(480),
    [anon_sym_unquote] = ACTIONS(480),
  },
  [155] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(277),
    [sym__expr1] = STATE(278),
    [sym__application] = STATE(278),
    [sym__expr2] = STATE(278),
    [sym__atoms1] = STATE(279),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(280),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [156] = {
    [anon_sym_RBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_where] = ACTIONS(486),
  },
  [157] = {
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
  [158] = {
    [anon_sym_RBRACE] = ACTIONS(488),
    [sym_comment] = ACTIONS(53),
  },
  [159] = {
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
  [160] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(283),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(490),
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
  [161] = {
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
  },
  [162] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(273),
  },
  [163] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(284),
    [sym__expr2] = STATE(284),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [164] = {
    [sym_literal] = STATE(172),
    [sym__application] = STATE(285),
    [sym__expr2] = STATE(285),
    [sym_atom] = STATE(171),
    [sym__atom_curly] = STATE(172),
    [sym__atom_no_curly] = STATE(172),
    [aux_sym__application_repeat1] = STATE(173),
    [sym_string] = ACTIONS(323),
    [sym_int] = ACTIONS(323),
    [sym_qualified_name] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_Prop] = ACTIONS(325),
    [anon_sym_Set] = ACTIONS(325),
    [anon_sym_quote] = ACTIONS(325),
    [anon_sym_quoteTerm] = ACTIONS(325),
    [anon_sym_unquote] = ACTIONS(325),
  },
  [165] = {
    [sym_literal] = STATE(68),
    [sym__application] = STATE(286),
    [sym__expr2] = STATE(286),
    [sym_atom] = STATE(67),
    [sym__atom_curly] = STATE(68),
    [sym__atom_no_curly] = STATE(68),
    [aux_sym__application_repeat1] = STATE(69),
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
  [166] = {
    [sym_name] = ACTIONS(492),
    [anon_sym__] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(492),
    [anon_sym_DOT_DOT] = ACTIONS(492),
    [anon_sym_LBRACE] = ACTIONS(492),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(492),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(492),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_where] = ACTIONS(492),
  },
  [167] = {
    [anon_sym_RBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(496),
  },
  [168] = {
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
  [169] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(290),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(498),
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
  [170] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(500),
  },
  [171] = {
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
  },
  [172] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
  },
  [173] = {
    [sym_literal] = STATE(172),
    [sym__expr2] = STATE(292),
    [sym_atom] = STATE(171),
    [sym__atom_curly] = STATE(172),
    [sym__atom_no_curly] = STATE(172),
    [aux_sym__application_repeat1] = STATE(154),
    [sym_string] = ACTIONS(323),
    [sym_int] = ACTIONS(323),
    [sym_qualified_name] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(327),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(325),
    [anon_sym_Prop] = ACTIONS(325),
    [anon_sym_Set] = ACTIONS(325),
    [anon_sym_quote] = ACTIONS(325),
    [anon_sym_quoteTerm] = ACTIONS(325),
    [anon_sym_unquote] = ACTIONS(325),
  },
  [174] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(502),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [176] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(295),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(504),
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
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [sym_string] = ACTIONS(508),
    [sym_int] = ACTIONS(508),
    [sym_qualified_name] = ACTIONS(508),
    [anon_sym__] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(508),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(508),
    [anon_sym_Prop] = ACTIONS(508),
    [anon_sym_Set] = ACTIONS(508),
    [anon_sym_quote] = ACTIONS(508),
    [anon_sym_quoteTerm] = ACTIONS(508),
    [anon_sym_unquote] = ACTIONS(508),
    [anon_sym_where] = ACTIONS(510),
    [anon_sym_data] = ACTIONS(508),
    [anon_sym_codata] = ACTIONS(508),
    [anon_sym_record] = ACTIONS(508),
    [anon_sym_field] = ACTIONS(508),
    [sym_pragma] = ACTIONS(508),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_string] = ACTIONS(411),
    [sym_int] = ACTIONS(411),
    [sym_qualified_name] = ACTIONS(411),
    [anon_sym__] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_QMARK] = ACTIONS(411),
    [anon_sym_Prop] = ACTIONS(411),
    [anon_sym_Set] = ACTIONS(411),
    [anon_sym_quote] = ACTIONS(411),
    [anon_sym_quoteTerm] = ACTIONS(411),
    [anon_sym_unquote] = ACTIONS(411),
    [anon_sym_where] = ACTIONS(411),
    [anon_sym_data] = ACTIONS(411),
    [anon_sym_codata] = ACTIONS(411),
    [anon_sym_record] = ACTIONS(411),
    [anon_sym_field] = ACTIONS(411),
    [sym_pragma] = ACTIONS(411),
  },
  [179] = {
    [sym__const_right_arrow] = ACTIONS(514),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [182] = {
    [sym__const_right_arrow] = ACTIONS(514),
    [sym_comment] = ACTIONS(53),
  },
  [183] = {
    [sym_literal] = STATE(302),
    [sym__application] = STATE(300),
    [sym__expr2] = STATE(300),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(301),
    [sym__atom_curly] = STATE(302),
    [sym__atom_no_curly] = STATE(302),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(303),
    [sym_string] = ACTIONS(516),
    [sym_int] = ACTIONS(516),
    [sym_qualified_name] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [anon_sym_LBRACE] = ACTIONS(520),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(518),
    [anon_sym_Prop] = ACTIONS(518),
    [anon_sym_Set] = ACTIONS(518),
    [anon_sym_quote] = ACTIONS(518),
    [anon_sym_quoteTerm] = ACTIONS(518),
    [anon_sym_unquote] = ACTIONS(518),
  },
  [184] = {
    [sym_literal] = STATE(181),
    [sym__expr2] = STATE(305),
    [sym_atom] = STATE(180),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(329),
    [sym_int] = ACTIONS(329),
    [sym_qualified_name] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(522),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_Prop] = ACTIONS(331),
    [anon_sym_Set] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_quoteTerm] = ACTIONS(331),
    [anon_sym_unquote] = ACTIONS(331),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [sym_string] = ACTIONS(526),
    [sym_int] = ACTIONS(526),
    [sym_qualified_name] = ACTIONS(526),
    [anon_sym__] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_Prop] = ACTIONS(526),
    [anon_sym_Set] = ACTIONS(526),
    [anon_sym_quote] = ACTIONS(526),
    [anon_sym_quoteTerm] = ACTIONS(526),
    [anon_sym_unquote] = ACTIONS(526),
    [anon_sym_data] = ACTIONS(526),
    [anon_sym_codata] = ACTIONS(526),
    [anon_sym_record] = ACTIONS(526),
    [anon_sym_field] = ACTIONS(526),
    [sym_pragma] = ACTIONS(526),
  },
  [186] = {
    [sym_literal] = STATE(181),
    [sym_expr] = STATE(306),
    [sym__expr1] = STATE(178),
    [sym__application] = STATE(178),
    [sym__expr2] = STATE(178),
    [sym__atoms1] = STATE(179),
    [sym_atom] = STATE(180),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [sym__typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(183),
    [aux_sym__application_repeat1] = STATE(184),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(329),
    [sym_int] = ACTIONS(329),
    [sym_qualified_name] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_Prop] = ACTIONS(331),
    [anon_sym_Set] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_quoteTerm] = ACTIONS(331),
    [anon_sym_unquote] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [187] = {
    [sym__declarations0_] = STATE(307),
    [sym__newline] = ACTIONS(528),
    [sym__indent] = ACTIONS(203),
    [sym_comment] = ACTIONS(53),
  },
  [188] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(188),
    [sym_typed_binding] = STATE(188),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(188),
    [sym_name] = ACTIONS(530),
    [anon_sym__] = ACTIONS(530),
    [anon_sym_DOT] = ACTIONS(533),
    [anon_sym_DOT_DOT] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(536),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_COLON] = ACTIONS(545),
    [anon_sym_where] = ACTIONS(545),
  },
  [189] = {
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
  [190] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(309),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(547),
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
  [191] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(549),
  },
  [192] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_where] = ACTIONS(119),
  },
  [193] = {
    [sym__const_right_arrow] = ACTIONS(551),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [194] = {
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
  },
  [195] = {
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
  },
  [196] = {
    [sym__const_right_arrow] = ACTIONS(551),
    [sym_comment] = ACTIONS(53),
  },
  [197] = {
    [sym_literal] = STATE(314),
    [sym__application] = STATE(75),
    [sym__expr2] = STATE(75),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(313),
    [sym__atom_curly] = STATE(314),
    [sym__atom_no_curly] = STATE(314),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(315),
    [sym_string] = ACTIONS(553),
    [sym_int] = ACTIONS(553),
    [sym_qualified_name] = ACTIONS(555),
    [anon_sym__] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(555),
    [anon_sym_Prop] = ACTIONS(555),
    [anon_sym_Set] = ACTIONS(555),
    [anon_sym_quote] = ACTIONS(555),
    [anon_sym_quoteTerm] = ACTIONS(555),
    [anon_sym_unquote] = ACTIONS(555),
  },
  [198] = {
    [sym_literal] = STATE(195),
    [sym__expr2] = STATE(80),
    [sym_atom] = STATE(194),
    [sym__atom_curly] = STATE(195),
    [sym__atom_no_curly] = STATE(195),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(345),
    [sym_int] = ACTIONS(345),
    [sym_qualified_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(559),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_Prop] = ACTIONS(347),
    [anon_sym_Set] = ACTIONS(347),
    [anon_sym_quote] = ACTIONS(347),
    [anon_sym_quoteTerm] = ACTIONS(347),
    [anon_sym_unquote] = ACTIONS(347),
  },
  [199] = {
    [sym_literal] = STATE(195),
    [sym_expr] = STATE(317),
    [sym__expr1] = STATE(192),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym__atoms1] = STATE(193),
    [sym_atom] = STATE(194),
    [sym__atom_curly] = STATE(195),
    [sym__atom_no_curly] = STATE(195),
    [sym__typed_bindings1] = STATE(196),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(197),
    [aux_sym__application_repeat1] = STATE(198),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(345),
    [sym_int] = ACTIONS(345),
    [sym_qualified_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_Prop] = ACTIONS(347),
    [anon_sym_Set] = ACTIONS(347),
    [anon_sym_quote] = ACTIONS(347),
    [anon_sym_quoteTerm] = ACTIONS(347),
    [anon_sym_unquote] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [sym_string] = ACTIONS(563),
    [sym_int] = ACTIONS(563),
    [sym_qualified_name] = ACTIONS(563),
    [anon_sym__] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(563),
    [anon_sym_Prop] = ACTIONS(563),
    [anon_sym_Set] = ACTIONS(563),
    [anon_sym_quote] = ACTIONS(563),
    [anon_sym_quoteTerm] = ACTIONS(563),
    [anon_sym_unquote] = ACTIONS(563),
    [anon_sym_where] = ACTIONS(565),
    [anon_sym_data] = ACTIONS(563),
    [anon_sym_codata] = ACTIONS(563),
    [anon_sym_record] = ACTIONS(563),
    [anon_sym_field] = ACTIONS(563),
    [sym_pragma] = ACTIONS(563),
  },
  [201] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym__record_directives1] = STATE(324),
    [sym_record_constructor_instance] = STATE(325),
    [sym_record_constructor] = STATE(326),
    [sym__record_directive] = STATE(326),
    [sym_record_induction] = STATE(326),
    [sym_record_eta] = STATE(326),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [sym__declarations1_] = STATE(327),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__record_directives1_repeat1] = STATE(328),
    [aux_sym__declarations1__repeat1] = STATE(254),
    [sym__dedent] = ACTIONS(567),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_instance] = ACTIONS(569),
    [anon_sym_constructor] = ACTIONS(571),
    [anon_sym_inductive] = ACTIONS(573),
    [anon_sym_coinductive] = ACTIONS(573),
    [anon_sym_eta_DASHequality] = ACTIONS(575),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(575),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [sym_string] = ACTIONS(579),
    [sym_int] = ACTIONS(579),
    [sym_qualified_name] = ACTIONS(579),
    [anon_sym__] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(579),
    [anon_sym_Prop] = ACTIONS(579),
    [anon_sym_Set] = ACTIONS(579),
    [anon_sym_quote] = ACTIONS(579),
    [anon_sym_quoteTerm] = ACTIONS(579),
    [anon_sym_unquote] = ACTIONS(579),
    [anon_sym_data] = ACTIONS(579),
    [anon_sym_codata] = ACTIONS(579),
    [anon_sym_record] = ACTIONS(579),
    [anon_sym_field] = ACTIONS(579),
    [sym_pragma] = ACTIONS(579),
  },
  [203] = {
    [sym_literal] = STATE(181),
    [sym_expr] = STATE(329),
    [sym__expr1] = STATE(178),
    [sym__application] = STATE(178),
    [sym__expr2] = STATE(178),
    [sym__atoms1] = STATE(179),
    [sym_atom] = STATE(180),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [sym__typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(183),
    [aux_sym__application_repeat1] = STATE(184),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(329),
    [sym_int] = ACTIONS(329),
    [sym_qualified_name] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_Prop] = ACTIONS(331),
    [anon_sym_Set] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_quoteTerm] = ACTIONS(331),
    [anon_sym_unquote] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [204] = {
    [sym_record_declarations_block] = STATE(330),
    [sym__indent] = ACTIONS(353),
    [ts_builtin_sym_end] = ACTIONS(577),
    [sym_string] = ACTIONS(579),
    [sym_int] = ACTIONS(579),
    [sym_qualified_name] = ACTIONS(579),
    [anon_sym__] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(579),
    [anon_sym_Prop] = ACTIONS(579),
    [anon_sym_Set] = ACTIONS(579),
    [anon_sym_quote] = ACTIONS(579),
    [anon_sym_quoteTerm] = ACTIONS(579),
    [anon_sym_unquote] = ACTIONS(579),
    [anon_sym_data] = ACTIONS(579),
    [anon_sym_codata] = ACTIONS(579),
    [anon_sym_record] = ACTIONS(579),
    [anon_sym_field] = ACTIONS(579),
    [sym_pragma] = ACTIONS(579),
  },
  [205] = {
    [sym_name] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [anon_sym_DOT_DOT] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(581),
  },
  [206] = {
    [aux_sym_arg_name_repeat1] = STATE(331),
    [sym_name] = ACTIONS(583),
    [sym_comment] = ACTIONS(13),
  },
  [207] = {
    [aux_sym_arg_name_repeat1] = STATE(332),
    [sym_name] = ACTIONS(585),
    [sym_comment] = ACTIONS(13),
  },
  [208] = {
    [sym_name] = ACTIONS(587),
    [sym_comment] = ACTIONS(13),
  },
  [209] = {
    [anon_sym_RBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(53),
  },
  [210] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(335),
    [sym_name] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(13),
  },
  [211] = {
    [sym_name] = ACTIONS(595),
    [sym_comment] = ACTIONS(13),
  },
  [212] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(589),
    [sym_comment] = ACTIONS(53),
  },
  [213] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(337),
    [sym_name] = ACTIONS(597),
    [anon_sym_DOT] = ACTIONS(375),
    [anon_sym_DOT_DOT] = ACTIONS(375),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(13),
  },
  [214] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym__arg_names] = STATE(105),
    [sym_arg_name] = STATE(107),
    [sym__arg_type_signatures1] = STATE(338),
    [sym_arg_type_signature] = STATE(108),
    [aux_sym__arg_names_repeat1] = STATE(107),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(108),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [215] = {
    [sym__dedent] = ACTIONS(599),
    [sym_name] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_DOT_DOT] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(601),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(601),
    [anon_sym_overlap] = ACTIONS(601),
  },
  [216] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(603),
  },
  [217] = {
    [sym_literal] = STATE(346),
    [sym_expr] = STATE(342),
    [sym__expr1] = STATE(343),
    [sym__application] = STATE(343),
    [sym__expr2] = STATE(343),
    [sym__atoms1] = STATE(344),
    [sym_atom] = STATE(345),
    [sym__atom_curly] = STATE(346),
    [sym__atom_no_curly] = STATE(346),
    [sym__typed_bindings1] = STATE(347),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(348),
    [aux_sym__application_repeat1] = STATE(349),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(605),
    [sym_int] = ACTIONS(605),
    [sym_qualified_name] = ACTIONS(607),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_Prop] = ACTIONS(607),
    [anon_sym_Set] = ACTIONS(607),
    [anon_sym_quote] = ACTIONS(607),
    [anon_sym_quoteTerm] = ACTIONS(607),
    [anon_sym_unquote] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [sym_string] = ACTIONS(613),
    [sym_int] = ACTIONS(613),
    [sym_qualified_name] = ACTIONS(613),
    [anon_sym__] = ACTIONS(613),
    [anon_sym_LBRACE] = ACTIONS(613),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(613),
    [anon_sym_Prop] = ACTIONS(613),
    [anon_sym_Set] = ACTIONS(613),
    [anon_sym_quote] = ACTIONS(613),
    [anon_sym_quoteTerm] = ACTIONS(613),
    [anon_sym_unquote] = ACTIONS(613),
    [anon_sym_data] = ACTIONS(613),
    [anon_sym_codata] = ACTIONS(613),
    [anon_sym_record] = ACTIONS(613),
    [anon_sym_field] = ACTIONS(613),
    [sym_pragma] = ACTIONS(613),
  },
  [219] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym_arg_name] = STATE(219),
    [aux_sym__arg_names_repeat1] = STATE(219),
    [sym_name] = ACTIONS(615),
    [anon_sym_DOT] = ACTIONS(618),
    [anon_sym_DOT_DOT] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(621),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(624),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(627),
  },
  [220] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym__arg_names] = STATE(105),
    [sym_arg_name] = STATE(107),
    [sym_arg_type_signature] = STATE(220),
    [aux_sym__arg_names_repeat1] = STATE(107),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(220),
    [sym__dedent] = ACTIONS(629),
    [sym_name] = ACTIONS(631),
    [anon_sym_DOT] = ACTIONS(634),
    [anon_sym_DOT_DOT] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(637),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(640),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(643),
    [anon_sym_overlap] = ACTIONS(646),
  },
  [221] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [222] = {
    [anon_sym_RBRACE] = ACTIONS(649),
    [sym_comment] = ACTIONS(53),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_with] = ACTIONS(241),
    [anon_sym_where] = ACTIONS(241),
    [anon_sym_module] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
  },
  [224] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_string] = ACTIONS(254),
    [sym_int] = ACTIONS(254),
    [sym_qualified_name] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_Prop] = ACTIONS(254),
    [anon_sym_Set] = ACTIONS(254),
    [anon_sym_quote] = ACTIONS(254),
    [anon_sym_quoteTerm] = ACTIONS(254),
    [anon_sym_unquote] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_with] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_codata] = ACTIONS(254),
    [anon_sym_record] = ACTIONS(254),
    [anon_sym_field] = ACTIONS(254),
    [sym_pragma] = ACTIONS(254),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(651),
    [sym_comment] = ACTIONS(53),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_where] = ACTIONS(241),
    [anon_sym_module] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_string] = ACTIONS(254),
    [sym_int] = ACTIONS(254),
    [sym_qualified_name] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_Prop] = ACTIONS(254),
    [anon_sym_Set] = ACTIONS(254),
    [anon_sym_quote] = ACTIONS(254),
    [anon_sym_quoteTerm] = ACTIONS(254),
    [anon_sym_unquote] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_codata] = ACTIONS(254),
    [anon_sym_record] = ACTIONS(254),
    [anon_sym_field] = ACTIONS(254),
    [sym_pragma] = ACTIONS(254),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [230] = {
    [anon_sym_RBRACE] = ACTIONS(653),
    [sym_comment] = ACTIONS(53),
  },
  [231] = {
    [sym_literal] = STATE(130),
    [sym_expr] = STATE(353),
    [sym__expr1] = STATE(127),
    [sym__application] = STATE(127),
    [sym__expr2] = STATE(127),
    [sym__atoms1] = STATE(128),
    [sym_atom] = STATE(129),
    [sym__atom_curly] = STATE(130),
    [sym__atom_no_curly] = STATE(130),
    [sym__typed_bindings1] = STATE(131),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(132),
    [aux_sym__application_repeat1] = STATE(133),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(195),
    [sym_int] = ACTIONS(195),
    [sym_qualified_name] = ACTIONS(197),
    [anon_sym__] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_Prop] = ACTIONS(197),
    [anon_sym_Set] = ACTIONS(197),
    [anon_sym_quote] = ACTIONS(197),
    [anon_sym_quoteTerm] = ACTIONS(197),
    [anon_sym_unquote] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [233] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(355),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_where] = ACTIONS(241),
    [anon_sym_module] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [237] = {
    [sym_literal] = STATE(236),
    [sym__expr2] = STATE(239),
    [sym_atom] = STATE(235),
    [sym__atom_curly] = STATE(236),
    [sym__atom_no_curly] = STATE(236),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(417),
    [sym_int] = ACTIONS(417),
    [sym_qualified_name] = ACTIONS(419),
    [anon_sym__] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(421),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(419),
    [anon_sym_Prop] = ACTIONS(419),
    [anon_sym_Set] = ACTIONS(419),
    [anon_sym_quote] = ACTIONS(419),
    [anon_sym_quoteTerm] = ACTIONS(419),
    [anon_sym_unquote] = ACTIONS(419),
  },
  [238] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(230),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(405),
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
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_string] = ACTIONS(254),
    [sym_int] = ACTIONS(254),
    [sym_qualified_name] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_Prop] = ACTIONS(254),
    [anon_sym_Set] = ACTIONS(254),
    [anon_sym_quote] = ACTIONS(254),
    [anon_sym_quoteTerm] = ACTIONS(254),
    [anon_sym_unquote] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_codata] = ACTIONS(254),
    [anon_sym_record] = ACTIONS(254),
    [anon_sym_field] = ACTIONS(254),
    [sym_pragma] = ACTIONS(254),
  },
  [240] = {
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
  [241] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(357),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(657),
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
    [sym_name] = ACTIONS(659),
    [sym_comment] = ACTIONS(13),
  },
  [243] = {
    [sym_name] = ACTIONS(661),
    [sym_comment] = ACTIONS(13),
  },
  [244] = {
    [sym_literal] = STATE(360),
    [sym__atom_no_curly] = STATE(360),
    [sym_string] = ACTIONS(47),
    [sym_int] = ACTIONS(47),
    [sym_qualified_name] = ACTIONS(663),
    [anon_sym__] = ACTIONS(663),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(663),
    [anon_sym_Prop] = ACTIONS(663),
    [anon_sym_Set] = ACTIONS(663),
    [anon_sym_quote] = ACTIONS(663),
    [anon_sym_quoteTerm] = ACTIONS(663),
    [anon_sym_unquote] = ACTIONS(663),
  },
  [245] = {
    [sym__arg_type_signatures_block] = STATE(362),
    [sym__indent] = ACTIONS(665),
    [sym_comment] = ACTIONS(53),
  },
  [246] = {
    [sym_rewrite_equations] = STATE(365),
    [sym_with_expressions] = STATE(366),
    [sym__newline] = ACTIONS(57),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_rewrite] = ACTIONS(667),
    [anon_sym_with] = ACTIONS(669),
    [anon_sym_where] = ACTIONS(57),
    [anon_sym_module] = ACTIONS(57),
  },
  [247] = {
    [sym__newline] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_rewrite] = ACTIONS(71),
    [anon_sym_with] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
  },
  [248] = {
    [sym__newline] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_rewrite] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [249] = {
    [sym_rhs] = STATE(370),
    [sym_where_clause] = STATE(371),
    [sym__newline] = ACTIONS(77),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(671),
    [anon_sym_COLON] = ACTIONS(671),
    [anon_sym_where] = ACTIONS(673),
    [anon_sym_module] = ACTIONS(675),
  },
  [250] = {
    [sym__newline] = ACTIONS(677),
    [sym_comment] = ACTIONS(53),
  },
  [251] = {
    [sym__dedent] = ACTIONS(679),
    [sym_comment] = ACTIONS(53),
  },
  [252] = {
    [sym_literal] = STATE(248),
    [sym__application] = STATE(374),
    [sym__expr2] = STATE(374),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(253),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
  },
  [253] = {
    [sym_literal] = STATE(248),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
  },
  [254] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__declarations1__repeat1] = STATE(376),
    [sym__dedent] = ACTIONS(681),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [255] = {
    [sym__declarations0_] = STATE(377),
    [sym__newline] = ACTIONS(683),
    [sym__indent] = ACTIONS(203),
    [sym_comment] = ACTIONS(53),
  },
  [256] = {
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
  [257] = {
    [anon_sym_RBRACE] = ACTIONS(685),
    [sym_comment] = ACTIONS(53),
  },
  [258] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(379),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [259] = {
    [sym_literal] = STATE(270),
    [sym_expr] = STATE(380),
    [sym__expr1] = STATE(267),
    [sym__application] = STATE(267),
    [sym__expr2] = STATE(267),
    [sym__atoms1] = STATE(268),
    [sym_atom] = STATE(269),
    [sym__atom_curly] = STATE(270),
    [sym__atom_no_curly] = STATE(270),
    [sym__typed_bindings1] = STATE(271),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(272),
    [aux_sym__application_repeat1] = STATE(273),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(471),
    [sym_int] = ACTIONS(471),
    [sym_qualified_name] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_Prop] = ACTIONS(473),
    [anon_sym_Set] = ACTIONS(473),
    [anon_sym_quote] = ACTIONS(473),
    [anon_sym_quoteTerm] = ACTIONS(473),
    [anon_sym_unquote] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [260] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(381),
    [sym__expr1] = STATE(278),
    [sym__application] = STATE(278),
    [sym__expr2] = STATE(278),
    [sym__atoms1] = STATE(279),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(280),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [261] = {
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
  },
  [262] = {
    [anon_sym_RBRACE] = ACTIONS(687),
    [sym_comment] = ACTIONS(53),
  },
  [263] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
  },
  [264] = {
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
  [265] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(384),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(689),
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
  [266] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(687),
    [sym_comment] = ACTIONS(53),
  },
  [267] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(691),
  },
  [268] = {
    [sym__const_right_arrow] = ACTIONS(691),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [269] = {
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
  },
  [270] = {
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
  },
  [271] = {
    [sym__const_right_arrow] = ACTIONS(691),
    [sym_comment] = ACTIONS(53),
  },
  [272] = {
    [sym_literal] = STATE(390),
    [sym__application] = STATE(388),
    [sym__expr2] = STATE(388),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(389),
    [sym__atom_curly] = STATE(390),
    [sym__atom_no_curly] = STATE(390),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(391),
    [sym_string] = ACTIONS(693),
    [sym_int] = ACTIONS(693),
    [sym_qualified_name] = ACTIONS(695),
    [anon_sym__] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(697),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(695),
    [anon_sym_Prop] = ACTIONS(695),
    [anon_sym_Set] = ACTIONS(695),
    [anon_sym_quote] = ACTIONS(695),
    [anon_sym_quoteTerm] = ACTIONS(695),
    [anon_sym_unquote] = ACTIONS(695),
  },
  [273] = {
    [sym_literal] = STATE(270),
    [sym__expr2] = STATE(292),
    [sym_atom] = STATE(269),
    [sym__atom_curly] = STATE(270),
    [sym__atom_no_curly] = STATE(270),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(471),
    [sym_int] = ACTIONS(471),
    [sym_qualified_name] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(699),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_Prop] = ACTIONS(473),
    [anon_sym_Set] = ACTIONS(473),
    [anon_sym_quote] = ACTIONS(473),
    [anon_sym_quoteTerm] = ACTIONS(473),
    [anon_sym_unquote] = ACTIONS(473),
  },
  [274] = {
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
  [275] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(394),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(701),
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
  [276] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
  },
  [277] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(687),
  },
  [278] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(119),
  },
  [279] = {
    [sym__const_right_arrow] = ACTIONS(703),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [280] = {
    [sym__const_right_arrow] = ACTIONS(703),
    [sym_comment] = ACTIONS(53),
  },
  [281] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
  },
  [282] = {
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
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(705),
    [sym_comment] = ACTIONS(53),
  },
  [284] = {
    [anon_sym_RBRACE] = ACTIONS(707),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(709),
  },
  [285] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(707),
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(711),
  },
  [286] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(713),
  },
  [287] = {
    [sym_name] = ACTIONS(715),
    [anon_sym__] = ACTIONS(715),
    [anon_sym_DOT] = ACTIONS(715),
    [anon_sym_DOT_DOT] = ACTIONS(715),
    [anon_sym_LBRACE] = ACTIONS(715),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(715),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(715),
    [anon_sym_COLON] = ACTIONS(715),
    [anon_sym_where] = ACTIONS(715),
  },
  [288] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(401),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [289] = {
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
  [290] = {
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_comment] = ACTIONS(53),
  },
  [291] = {
    [sym_literal] = STATE(270),
    [sym_expr] = STATE(403),
    [sym__expr1] = STATE(267),
    [sym__application] = STATE(267),
    [sym__expr2] = STATE(267),
    [sym__atoms1] = STATE(268),
    [sym_atom] = STATE(269),
    [sym__atom_curly] = STATE(270),
    [sym__atom_no_curly] = STATE(270),
    [sym__typed_bindings1] = STATE(271),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(272),
    [aux_sym__application_repeat1] = STATE(273),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(471),
    [sym_int] = ACTIONS(471),
    [sym_qualified_name] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_Prop] = ACTIONS(473),
    [anon_sym_Set] = ACTIONS(473),
    [anon_sym_quote] = ACTIONS(473),
    [anon_sym_quoteTerm] = ACTIONS(473),
    [anon_sym_unquote] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [292] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(252),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(252),
  },
  [293] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(404),
    [sym__expr1] = STATE(278),
    [sym__application] = STATE(278),
    [sym__expr2] = STATE(278),
    [sym__atoms1] = STATE(279),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(280),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [294] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [295] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [sym_comment] = ACTIONS(53),
  },
  [296] = {
    [sym__declarations0_] = STATE(406),
    [sym__newline] = ACTIONS(721),
    [sym__indent] = ACTIONS(203),
    [sym_comment] = ACTIONS(53),
  },
  [297] = {
    [sym_literal] = STATE(181),
    [sym_expr] = STATE(407),
    [sym__expr1] = STATE(178),
    [sym__application] = STATE(178),
    [sym__expr2] = STATE(178),
    [sym__atoms1] = STATE(179),
    [sym_atom] = STATE(180),
    [sym__atom_curly] = STATE(181),
    [sym__atom_no_curly] = STATE(181),
    [sym__typed_bindings1] = STATE(182),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(183),
    [aux_sym__application_repeat1] = STATE(184),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(329),
    [sym_int] = ACTIONS(329),
    [sym_qualified_name] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_Prop] = ACTIONS(331),
    [anon_sym_Set] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_quoteTerm] = ACTIONS(331),
    [anon_sym_unquote] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(25),
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
    [anon_sym_data] = ACTIONS(27),
    [anon_sym_codata] = ACTIONS(27),
    [anon_sym_record] = ACTIONS(27),
    [anon_sym_field] = ACTIONS(27),
    [sym_pragma] = ACTIONS(27),
  },
  [299] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(409),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(723),
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
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_string] = ACTIONS(241),
    [sym_int] = ACTIONS(241),
    [sym_qualified_name] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_Prop] = ACTIONS(241),
    [anon_sym_Set] = ACTIONS(241),
    [anon_sym_quote] = ACTIONS(241),
    [anon_sym_quoteTerm] = ACTIONS(241),
    [anon_sym_unquote] = ACTIONS(241),
    [anon_sym_where] = ACTIONS(241),
    [anon_sym_data] = ACTIONS(241),
    [anon_sym_codata] = ACTIONS(241),
    [anon_sym_record] = ACTIONS(241),
    [anon_sym_field] = ACTIONS(241),
    [sym_pragma] = ACTIONS(241),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_data] = ACTIONS(71),
    [anon_sym_codata] = ACTIONS(71),
    [anon_sym_record] = ACTIONS(71),
    [anon_sym_field] = ACTIONS(71),
    [sym_pragma] = ACTIONS(71),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_data] = ACTIONS(75),
    [anon_sym_codata] = ACTIONS(75),
    [anon_sym_record] = ACTIONS(75),
    [anon_sym_field] = ACTIONS(75),
    [sym_pragma] = ACTIONS(75),
  },
  [303] = {
    [sym_literal] = STATE(302),
    [sym__expr2] = STATE(305),
    [sym_atom] = STATE(301),
    [sym__atom_curly] = STATE(302),
    [sym__atom_no_curly] = STATE(302),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(516),
    [sym_int] = ACTIONS(516),
    [sym_qualified_name] = ACTIONS(518),
    [anon_sym__] = ACTIONS(518),
    [anon_sym_LBRACE] = ACTIONS(520),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(518),
    [anon_sym_Prop] = ACTIONS(518),
    [anon_sym_Set] = ACTIONS(518),
    [anon_sym_quote] = ACTIONS(518),
    [anon_sym_quoteTerm] = ACTIONS(518),
    [anon_sym_unquote] = ACTIONS(518),
  },
  [304] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(295),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(504),
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
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_string] = ACTIONS(254),
    [sym_int] = ACTIONS(254),
    [sym_qualified_name] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_Prop] = ACTIONS(254),
    [anon_sym_Set] = ACTIONS(254),
    [anon_sym_quote] = ACTIONS(254),
    [anon_sym_quoteTerm] = ACTIONS(254),
    [anon_sym_unquote] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_codata] = ACTIONS(254),
    [anon_sym_record] = ACTIONS(254),
    [anon_sym_field] = ACTIONS(254),
    [sym_pragma] = ACTIONS(254),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [sym_string] = ACTIONS(727),
    [sym_int] = ACTIONS(727),
    [sym_qualified_name] = ACTIONS(727),
    [anon_sym__] = ACTIONS(727),
    [anon_sym_LBRACE] = ACTIONS(727),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(727),
    [anon_sym_Prop] = ACTIONS(727),
    [anon_sym_Set] = ACTIONS(727),
    [anon_sym_quote] = ACTIONS(727),
    [anon_sym_quoteTerm] = ACTIONS(727),
    [anon_sym_unquote] = ACTIONS(727),
    [anon_sym_where] = ACTIONS(729),
    [anon_sym_data] = ACTIONS(727),
    [anon_sym_codata] = ACTIONS(727),
    [anon_sym_record] = ACTIONS(727),
    [anon_sym_field] = ACTIONS(727),
    [sym_pragma] = ACTIONS(727),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [sym_string] = ACTIONS(733),
    [sym_int] = ACTIONS(733),
    [sym_qualified_name] = ACTIONS(733),
    [anon_sym__] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(733),
    [anon_sym_Prop] = ACTIONS(733),
    [anon_sym_Set] = ACTIONS(733),
    [anon_sym_quote] = ACTIONS(733),
    [anon_sym_quoteTerm] = ACTIONS(733),
    [anon_sym_unquote] = ACTIONS(733),
    [anon_sym_data] = ACTIONS(733),
    [anon_sym_codata] = ACTIONS(733),
    [anon_sym_record] = ACTIONS(733),
    [anon_sym_field] = ACTIONS(733),
    [sym_pragma] = ACTIONS(733),
  },
  [308] = {
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
  [309] = {
    [anon_sym_RBRACE] = ACTIONS(735),
    [sym_comment] = ACTIONS(53),
  },
  [310] = {
    [sym_literal] = STATE(195),
    [sym_expr] = STATE(156),
    [sym__expr1] = STATE(192),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym__atoms1] = STATE(193),
    [sym_atom] = STATE(194),
    [sym__atom_curly] = STATE(195),
    [sym__atom_no_curly] = STATE(195),
    [sym__typed_bindings1] = STATE(196),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(197),
    [aux_sym__application_repeat1] = STATE(198),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(345),
    [sym_int] = ACTIONS(345),
    [sym_qualified_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_Prop] = ACTIONS(347),
    [anon_sym_Set] = ACTIONS(347),
    [anon_sym_quote] = ACTIONS(347),
    [anon_sym_quoteTerm] = ACTIONS(347),
    [anon_sym_unquote] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [311] = {
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
  [312] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(413),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(737),
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
  [313] = {
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
  },
  [314] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
  },
  [315] = {
    [sym_literal] = STATE(314),
    [sym__expr2] = STATE(80),
    [sym_atom] = STATE(313),
    [sym__atom_curly] = STATE(314),
    [sym__atom_no_curly] = STATE(314),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(553),
    [sym_int] = ACTIONS(553),
    [sym_qualified_name] = ACTIONS(555),
    [anon_sym__] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(557),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(555),
    [anon_sym_Prop] = ACTIONS(555),
    [anon_sym_Set] = ACTIONS(555),
    [anon_sym_quote] = ACTIONS(555),
    [anon_sym_quoteTerm] = ACTIONS(555),
    [anon_sym_unquote] = ACTIONS(555),
  },
  [316] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(309),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(547),
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
  [317] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(739),
  },
  [318] = {
    [sym_record_declarations_block] = STATE(414),
    [sym__indent] = ACTIONS(353),
    [ts_builtin_sym_end] = ACTIONS(741),
    [sym_string] = ACTIONS(743),
    [sym_int] = ACTIONS(743),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_LBRACE] = ACTIONS(743),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_data] = ACTIONS(743),
    [anon_sym_codata] = ACTIONS(743),
    [anon_sym_record] = ACTIONS(743),
    [anon_sym_field] = ACTIONS(743),
    [sym_pragma] = ACTIONS(743),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(745),
    [sym_string] = ACTIONS(747),
    [sym_int] = ACTIONS(747),
    [sym_qualified_name] = ACTIONS(747),
    [anon_sym__] = ACTIONS(747),
    [anon_sym_LBRACE] = ACTIONS(747),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(747),
    [anon_sym_Prop] = ACTIONS(747),
    [anon_sym_Set] = ACTIONS(747),
    [anon_sym_quote] = ACTIONS(747),
    [anon_sym_quoteTerm] = ACTIONS(747),
    [anon_sym_unquote] = ACTIONS(747),
    [anon_sym_data] = ACTIONS(747),
    [anon_sym_codata] = ACTIONS(747),
    [anon_sym_record] = ACTIONS(747),
    [anon_sym_field] = ACTIONS(747),
    [sym_pragma] = ACTIONS(747),
  },
  [320] = {
    [sym__indent] = ACTIONS(749),
    [sym_comment] = ACTIONS(53),
  },
  [321] = {
    [sym_name] = ACTIONS(751),
    [sym_comment] = ACTIONS(13),
  },
  [322] = {
    [sym__newline] = ACTIONS(753),
    [sym_comment] = ACTIONS(53),
  },
  [323] = {
    [sym__newline] = ACTIONS(755),
    [sym_comment] = ACTIONS(53),
  },
  [324] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [sym__declarations1_] = STATE(418),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__declarations1__repeat1] = STATE(254),
    [sym__dedent] = ACTIONS(757),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [325] = {
    [sym__dedent] = ACTIONS(759),
    [sym_string] = ACTIONS(761),
    [sym_int] = ACTIONS(761),
    [sym_qualified_name] = ACTIONS(761),
    [anon_sym__] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(761),
    [anon_sym_Prop] = ACTIONS(761),
    [anon_sym_Set] = ACTIONS(761),
    [anon_sym_quote] = ACTIONS(761),
    [anon_sym_quoteTerm] = ACTIONS(761),
    [anon_sym_unquote] = ACTIONS(761),
    [anon_sym_data] = ACTIONS(761),
    [anon_sym_codata] = ACTIONS(761),
    [anon_sym_record] = ACTIONS(761),
    [anon_sym_instance] = ACTIONS(763),
    [anon_sym_constructor] = ACTIONS(763),
    [anon_sym_inductive] = ACTIONS(763),
    [anon_sym_coinductive] = ACTIONS(763),
    [anon_sym_eta_DASHequality] = ACTIONS(763),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(763),
    [anon_sym_field] = ACTIONS(761),
    [sym_pragma] = ACTIONS(761),
  },
  [326] = {
    [sym__newline] = ACTIONS(765),
    [sym_comment] = ACTIONS(53),
  },
  [327] = {
    [sym__dedent] = ACTIONS(757),
    [sym_comment] = ACTIONS(53),
  },
  [328] = {
    [sym_record_constructor_instance] = STATE(420),
    [sym_record_constructor] = STATE(421),
    [sym__record_directive] = STATE(421),
    [sym_record_induction] = STATE(421),
    [sym_record_eta] = STATE(421),
    [aux_sym__record_directives1_repeat1] = STATE(422),
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(767),
    [anon_sym_constructor] = ACTIONS(769),
    [anon_sym_inductive] = ACTIONS(771),
    [anon_sym_coinductive] = ACTIONS(771),
    [anon_sym_eta_DASHequality] = ACTIONS(773),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(773),
  },
  [329] = {
    [ts_builtin_sym_end] = ACTIONS(775),
    [sym_string] = ACTIONS(777),
    [sym_int] = ACTIONS(777),
    [sym_qualified_name] = ACTIONS(777),
    [anon_sym__] = ACTIONS(777),
    [anon_sym_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(777),
    [anon_sym_Prop] = ACTIONS(777),
    [anon_sym_Set] = ACTIONS(777),
    [anon_sym_quote] = ACTIONS(777),
    [anon_sym_quoteTerm] = ACTIONS(777),
    [anon_sym_unquote] = ACTIONS(777),
    [anon_sym_where] = ACTIONS(779),
    [anon_sym_data] = ACTIONS(777),
    [anon_sym_codata] = ACTIONS(777),
    [anon_sym_record] = ACTIONS(777),
    [anon_sym_field] = ACTIONS(777),
    [sym_pragma] = ACTIONS(777),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [sym_string] = ACTIONS(743),
    [sym_int] = ACTIONS(743),
    [sym_qualified_name] = ACTIONS(743),
    [anon_sym__] = ACTIONS(743),
    [anon_sym_LBRACE] = ACTIONS(743),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(743),
    [anon_sym_Prop] = ACTIONS(743),
    [anon_sym_Set] = ACTIONS(743),
    [anon_sym_quote] = ACTIONS(743),
    [anon_sym_quoteTerm] = ACTIONS(743),
    [anon_sym_unquote] = ACTIONS(743),
    [anon_sym_data] = ACTIONS(743),
    [anon_sym_codata] = ACTIONS(743),
    [anon_sym_record] = ACTIONS(743),
    [anon_sym_field] = ACTIONS(743),
    [sym_pragma] = ACTIONS(743),
  },
  [331] = {
    [aux_sym_arg_name_repeat1] = STATE(425),
    [sym_name] = ACTIONS(781),
    [anon_sym_RBRACE] = ACTIONS(783),
    [sym_comment] = ACTIONS(13),
  },
  [332] = {
    [aux_sym_arg_name_repeat1] = STATE(426),
    [sym_name] = ACTIONS(785),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(783),
    [sym_comment] = ACTIONS(13),
  },
  [333] = {
    [sym_name] = ACTIONS(787),
    [anon_sym_DOT] = ACTIONS(787),
    [anon_sym_DOT_DOT] = ACTIONS(787),
    [anon_sym_RBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(13),
  },
  [334] = {
    [sym_name] = ACTIONS(789),
    [anon_sym_DOT] = ACTIONS(789),
    [anon_sym_DOT_DOT] = ACTIONS(789),
    [anon_sym_LBRACE] = ACTIONS(789),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(789),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(789),
  },
  [335] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(335),
    [sym_name] = ACTIONS(791),
    [anon_sym_DOT] = ACTIONS(794),
    [anon_sym_DOT_DOT] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(13),
  },
  [336] = {
    [sym_name] = ACTIONS(787),
    [anon_sym_DOT] = ACTIONS(787),
    [anon_sym_DOT_DOT] = ACTIONS(787),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(13),
  },
  [337] = {
    [aux_sym__maybe_dotted_names1_repeat1] = STATE(337),
    [sym_name] = ACTIONS(797),
    [anon_sym_DOT] = ACTIONS(800),
    [anon_sym_DOT_DOT] = ACTIONS(800),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(787),
    [sym_comment] = ACTIONS(13),
  },
  [338] = {
    [sym__dedent] = ACTIONS(803),
    [sym_comment] = ACTIONS(53),
  },
  [339] = {
    [sym_literal] = STATE(346),
    [sym_expr] = STATE(428),
    [sym__expr1] = STATE(343),
    [sym__application] = STATE(343),
    [sym__expr2] = STATE(343),
    [sym__atoms1] = STATE(344),
    [sym_atom] = STATE(345),
    [sym__atom_curly] = STATE(346),
    [sym__atom_no_curly] = STATE(346),
    [sym__typed_bindings1] = STATE(347),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(348),
    [aux_sym__application_repeat1] = STATE(349),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(605),
    [sym_int] = ACTIONS(605),
    [sym_qualified_name] = ACTIONS(607),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_Prop] = ACTIONS(607),
    [anon_sym_Set] = ACTIONS(607),
    [anon_sym_quote] = ACTIONS(607),
    [anon_sym_quoteTerm] = ACTIONS(607),
    [anon_sym_unquote] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [340] = {
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
  [341] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(430),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(805),
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
  [342] = {
    [sym__dedent] = ACTIONS(807),
    [sym_name] = ACTIONS(809),
    [anon_sym_DOT] = ACTIONS(809),
    [anon_sym_DOT_DOT] = ACTIONS(809),
    [anon_sym_LBRACE] = ACTIONS(809),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(809),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(809),
    [anon_sym_overlap] = ACTIONS(809),
  },
  [343] = {
    [sym__dedent] = ACTIONS(119),
    [sym_name] = ACTIONS(411),
    [anon_sym_DOT] = ACTIONS(411),
    [anon_sym_DOT_DOT] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(811),
    [anon_sym_instance] = ACTIONS(411),
    [anon_sym_overlap] = ACTIONS(411),
  },
  [344] = {
    [sym__const_right_arrow] = ACTIONS(813),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [345] = {
    [sym__dedent] = ACTIONS(67),
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_name] = ACTIONS(71),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_instance] = ACTIONS(71),
    [anon_sym_overlap] = ACTIONS(71),
  },
  [346] = {
    [sym__dedent] = ACTIONS(73),
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_name] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_overlap] = ACTIONS(75),
  },
  [347] = {
    [sym__const_right_arrow] = ACTIONS(813),
    [sym_comment] = ACTIONS(53),
  },
  [348] = {
    [sym_literal] = STATE(436),
    [sym__application] = STATE(434),
    [sym__expr2] = STATE(434),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(435),
    [sym__atom_curly] = STATE(436),
    [sym__atom_no_curly] = STATE(436),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(437),
    [sym_string] = ACTIONS(815),
    [sym_int] = ACTIONS(815),
    [sym_qualified_name] = ACTIONS(817),
    [anon_sym__] = ACTIONS(817),
    [anon_sym_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(817),
    [anon_sym_Prop] = ACTIONS(817),
    [anon_sym_Set] = ACTIONS(817),
    [anon_sym_quote] = ACTIONS(817),
    [anon_sym_quoteTerm] = ACTIONS(817),
    [anon_sym_unquote] = ACTIONS(817),
  },
  [349] = {
    [sym_literal] = STATE(346),
    [sym__expr2] = STATE(439),
    [sym_atom] = STATE(345),
    [sym__atom_curly] = STATE(346),
    [sym__atom_no_curly] = STATE(346),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(605),
    [sym_int] = ACTIONS(605),
    [sym_qualified_name] = ACTIONS(607),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(821),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_Prop] = ACTIONS(607),
    [anon_sym_Set] = ACTIONS(607),
    [anon_sym_quote] = ACTIONS(607),
    [anon_sym_quoteTerm] = ACTIONS(607),
    [anon_sym_unquote] = ACTIONS(607),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_with] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [353] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym_string] = ACTIONS(823),
    [sym_int] = ACTIONS(823),
    [sym_qualified_name] = ACTIONS(823),
    [anon_sym__] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(823),
    [anon_sym_Prop] = ACTIONS(823),
    [anon_sym_Set] = ACTIONS(823),
    [anon_sym_quote] = ACTIONS(823),
    [anon_sym_quoteTerm] = ACTIONS(823),
    [anon_sym_unquote] = ACTIONS(823),
    [anon_sym_where] = ACTIONS(823),
    [anon_sym_module] = ACTIONS(823),
    [anon_sym_data] = ACTIONS(823),
    [anon_sym_codata] = ACTIONS(823),
    [anon_sym_record] = ACTIONS(823),
    [anon_sym_field] = ACTIONS(823),
    [sym_pragma] = ACTIONS(823),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [355] = {
    [anon_sym_RBRACE] = ACTIONS(825),
    [sym_comment] = ACTIONS(53),
  },
  [356] = {
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
  [357] = {
    [anon_sym_RBRACE] = ACTIONS(827),
    [sym_comment] = ACTIONS(53),
  },
  [358] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(93),
    [sym_typed_binding] = STATE(93),
    [sym__typed_untyped_binding1] = STATE(444),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(93),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(829),
    [anon_sym_where] = ACTIONS(831),
  },
  [359] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(93),
    [sym_typed_binding] = STATE(93),
    [sym__typed_untyped_binding1] = STATE(446),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(93),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(833),
    [anon_sym_where] = ACTIONS(831),
  },
  [360] = {
    [sym_binding_name] = STATE(91),
    [sym_untyped_binding] = STATE(93),
    [sym_typed_binding] = STATE(93),
    [sym__typed_untyped_binding1] = STATE(449),
    [aux_sym__typed_untyped_binding1_repeat1] = STATE(93),
    [sym_name] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(835),
    [anon_sym_where] = ACTIONS(837),
  },
  [361] = {
    [sym__maybe_dotted_name] = STATE(104),
    [sym__arg_names] = STATE(105),
    [sym_arg_name] = STATE(107),
    [sym__arg_type_signatures1] = STATE(450),
    [sym_arg_type_signature] = STATE(108),
    [aux_sym__arg_names_repeat1] = STATE(107),
    [aux_sym__arg_type_signatures1_repeat1] = STATE(108),
    [sym_name] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(167),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(169),
    [anon_sym_overlap] = ACTIONS(171),
  },
  [362] = {
    [sym__newline] = ACTIONS(173),
    [sym_comment] = ACTIONS(53),
  },
  [363] = {
    [sym_literal] = STATE(455),
    [sym__expr1] = STATE(453),
    [sym__application] = STATE(453),
    [sym__expr2] = STATE(453),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(454),
    [sym__atom_curly] = STATE(455),
    [sym__atom_no_curly] = STATE(455),
    [aux_sym__expr1_repeat1] = STATE(456),
    [aux_sym__application_repeat1] = STATE(457),
    [sym_string] = ACTIONS(839),
    [sym_int] = ACTIONS(839),
    [sym_qualified_name] = ACTIONS(841),
    [anon_sym__] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(843),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(841),
    [anon_sym_Prop] = ACTIONS(841),
    [anon_sym_Set] = ACTIONS(841),
    [anon_sym_quote] = ACTIONS(841),
    [anon_sym_quoteTerm] = ACTIONS(841),
    [anon_sym_unquote] = ACTIONS(841),
  },
  [364] = {
    [sym_literal] = STATE(462),
    [sym__expr1] = STATE(460),
    [sym__application] = STATE(460),
    [sym__expr2] = STATE(460),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(461),
    [sym__atom_curly] = STATE(462),
    [sym__atom_no_curly] = STATE(462),
    [aux_sym__expr1_repeat1] = STATE(463),
    [aux_sym__application_repeat1] = STATE(464),
    [sym_string] = ACTIONS(845),
    [sym_int] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(849),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
  },
  [365] = {
    [sym_with_expressions] = STATE(465),
    [sym__newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_with] = ACTIONS(669),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
  },
  [366] = {
    [sym__newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_module] = ACTIONS(189),
  },
  [367] = {
    [sym_literal] = STATE(472),
    [sym_expr] = STATE(468),
    [sym__expr1] = STATE(469),
    [sym__application] = STATE(469),
    [sym__expr2] = STATE(469),
    [sym__atoms1] = STATE(470),
    [sym_atom] = STATE(471),
    [sym__atom_curly] = STATE(472),
    [sym__atom_no_curly] = STATE(472),
    [sym__typed_bindings1] = STATE(473),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(474),
    [aux_sym__application_repeat1] = STATE(475),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(851),
    [sym_int] = ACTIONS(851),
    [sym_qualified_name] = ACTIONS(853),
    [anon_sym__] = ACTIONS(853),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(853),
    [anon_sym_Prop] = ACTIONS(853),
    [anon_sym_Set] = ACTIONS(853),
    [anon_sym_quote] = ACTIONS(853),
    [anon_sym_quoteTerm] = ACTIONS(853),
    [anon_sym_unquote] = ACTIONS(853),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [368] = {
    [sym__declarations0_] = STATE(477),
    [sym__newline] = ACTIONS(857),
    [sym__indent] = ACTIONS(859),
    [sym_comment] = ACTIONS(53),
  },
  [369] = {
    [sym_anonymous_name] = STATE(478),
    [sym_name] = ACTIONS(861),
    [anon_sym__] = ACTIONS(207),
    [sym_comment] = ACTIONS(13),
  },
  [370] = {
    [sym_where_clause] = STATE(479),
    [sym__newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(673),
    [anon_sym_module] = ACTIONS(675),
  },
  [371] = {
    [sym__newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(53),
  },
  [372] = {
    [sym__dedent] = ACTIONS(863),
    [sym_string] = ACTIONS(865),
    [sym_int] = ACTIONS(865),
    [sym_qualified_name] = ACTIONS(865),
    [anon_sym__] = ACTIONS(865),
    [anon_sym_LBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(865),
    [anon_sym_Prop] = ACTIONS(865),
    [anon_sym_Set] = ACTIONS(865),
    [anon_sym_quote] = ACTIONS(865),
    [anon_sym_quoteTerm] = ACTIONS(865),
    [anon_sym_unquote] = ACTIONS(865),
    [anon_sym_data] = ACTIONS(865),
    [anon_sym_codata] = ACTIONS(865),
    [anon_sym_record] = ACTIONS(865),
    [anon_sym_field] = ACTIONS(865),
    [sym_pragma] = ACTIONS(865),
  },
  [373] = {
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
    [anon_sym_field] = ACTIONS(869),
    [sym_pragma] = ACTIONS(869),
  },
  [374] = {
    [sym__newline] = ACTIONS(239),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_rewrite] = ACTIONS(239),
    [anon_sym_with] = ACTIONS(239),
    [anon_sym_where] = ACTIONS(239),
    [anon_sym_module] = ACTIONS(239),
  },
  [375] = {
    [sym__newline] = ACTIONS(252),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_rewrite] = ACTIONS(252),
    [anon_sym_with] = ACTIONS(252),
    [anon_sym_where] = ACTIONS(252),
    [anon_sym_module] = ACTIONS(252),
  },
  [376] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__declarations1__repeat1] = STATE(376),
    [sym__dedent] = ACTIONS(863),
    [sym_string] = ACTIONS(871),
    [sym_int] = ACTIONS(871),
    [sym_qualified_name] = ACTIONS(874),
    [anon_sym__] = ACTIONS(874),
    [anon_sym_LBRACE] = ACTIONS(877),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(874),
    [anon_sym_Prop] = ACTIONS(874),
    [anon_sym_Set] = ACTIONS(874),
    [anon_sym_quote] = ACTIONS(874),
    [anon_sym_quoteTerm] = ACTIONS(874),
    [anon_sym_unquote] = ACTIONS(874),
    [anon_sym_data] = ACTIONS(880),
    [anon_sym_codata] = ACTIONS(883),
    [anon_sym_record] = ACTIONS(886),
    [anon_sym_field] = ACTIONS(889),
    [sym_pragma] = ACTIONS(892),
  },
  [377] = {
    [ts_builtin_sym_end] = ACTIONS(895),
    [sym_string] = ACTIONS(897),
    [sym_int] = ACTIONS(897),
    [sym_qualified_name] = ACTIONS(897),
    [anon_sym__] = ACTIONS(897),
    [anon_sym_LBRACE] = ACTIONS(897),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(897),
    [anon_sym_Prop] = ACTIONS(897),
    [anon_sym_Set] = ACTIONS(897),
    [anon_sym_quote] = ACTIONS(897),
    [anon_sym_quoteTerm] = ACTIONS(897),
    [anon_sym_unquote] = ACTIONS(897),
    [anon_sym_data] = ACTIONS(897),
    [anon_sym_codata] = ACTIONS(897),
    [anon_sym_record] = ACTIONS(897),
    [anon_sym_field] = ACTIONS(897),
    [sym_pragma] = ACTIONS(897),
  },
  [378] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
  },
  [379] = {
    [anon_sym_RBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(53),
  },
  [380] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(53),
  },
  [381] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(899),
  },
  [382] = {
    [sym__const_right_arrow] = ACTIONS(901),
    [anon_sym_DOT] = ACTIONS(903),
    [anon_sym_DOT_DOT] = ACTIONS(901),
    [anon_sym_LBRACE] = ACTIONS(903),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(901),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(901),
  },
  [383] = {
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
  [384] = {
    [anon_sym_RBRACE] = ACTIONS(905),
    [sym_comment] = ACTIONS(53),
  },
  [385] = {
    [sym_literal] = STATE(270),
    [sym_expr] = STATE(482),
    [sym__expr1] = STATE(267),
    [sym__application] = STATE(267),
    [sym__expr2] = STATE(267),
    [sym__atoms1] = STATE(268),
    [sym_atom] = STATE(269),
    [sym__atom_curly] = STATE(270),
    [sym__atom_no_curly] = STATE(270),
    [sym__typed_bindings1] = STATE(271),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(272),
    [aux_sym__application_repeat1] = STATE(273),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(471),
    [sym_int] = ACTIONS(471),
    [sym_qualified_name] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_Prop] = ACTIONS(473),
    [anon_sym_Set] = ACTIONS(473),
    [anon_sym_quote] = ACTIONS(473),
    [anon_sym_quoteTerm] = ACTIONS(473),
    [anon_sym_unquote] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [386] = {
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
  [387] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(484),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(907),
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
  [388] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(239),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(239),
  },
  [389] = {
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
  },
  [390] = {
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
  },
  [391] = {
    [sym_literal] = STATE(390),
    [sym__expr2] = STATE(292),
    [sym_atom] = STATE(389),
    [sym__atom_curly] = STATE(390),
    [sym__atom_no_curly] = STATE(390),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(693),
    [sym_int] = ACTIONS(693),
    [sym_qualified_name] = ACTIONS(695),
    [anon_sym__] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(697),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(695),
    [anon_sym_Prop] = ACTIONS(695),
    [anon_sym_Set] = ACTIONS(695),
    [anon_sym_quote] = ACTIONS(695),
    [anon_sym_quoteTerm] = ACTIONS(695),
    [anon_sym_unquote] = ACTIONS(695),
  },
  [392] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(384),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(689),
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
  [393] = {
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
  [394] = {
    [anon_sym_RBRACE] = ACTIONS(909),
    [sym_comment] = ACTIONS(53),
  },
  [395] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(156),
    [sym__expr1] = STATE(278),
    [sym__application] = STATE(278),
    [sym__expr2] = STATE(278),
    [sym__atoms1] = STATE(279),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(280),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [396] = {
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
  },
  [397] = {
    [sym_name] = ACTIONS(911),
    [anon_sym__] = ACTIONS(911),
    [anon_sym_DOT] = ACTIONS(911),
    [anon_sym_DOT_DOT] = ACTIONS(911),
    [anon_sym_LBRACE] = ACTIONS(911),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(911),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(911),
    [anon_sym_COLON] = ACTIONS(911),
    [anon_sym_where] = ACTIONS(911),
  },
  [398] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(486),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [399] = {
    [sym_literal] = STATE(270),
    [sym_expr] = STATE(487),
    [sym__expr1] = STATE(267),
    [sym__application] = STATE(267),
    [sym__expr2] = STATE(267),
    [sym__atoms1] = STATE(268),
    [sym_atom] = STATE(269),
    [sym__atom_curly] = STATE(270),
    [sym__atom_no_curly] = STATE(270),
    [sym__typed_bindings1] = STATE(271),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(272),
    [aux_sym__application_repeat1] = STATE(273),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(471),
    [sym_int] = ACTIONS(471),
    [sym_qualified_name] = ACTIONS(473),
    [anon_sym__] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(473),
    [anon_sym_Prop] = ACTIONS(473),
    [anon_sym_Set] = ACTIONS(473),
    [anon_sym_quote] = ACTIONS(473),
    [anon_sym_quoteTerm] = ACTIONS(473),
    [anon_sym_unquote] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [400] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(488),
    [sym__expr1] = STATE(278),
    [sym__application] = STATE(278),
    [sym__expr2] = STATE(278),
    [sym__atoms1] = STATE(279),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(280),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
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
  [401] = {
    [anon_sym_RBRACE] = ACTIONS(913),
    [sym_comment] = ACTIONS(53),
  },
  [402] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
  },
  [403] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(913),
    [sym_comment] = ACTIONS(53),
  },
  [404] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(913),
  },
  [405] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [406] = {
    [ts_builtin_sym_end] = ACTIONS(915),
    [sym_string] = ACTIONS(917),
    [sym_int] = ACTIONS(917),
    [sym_qualified_name] = ACTIONS(917),
    [anon_sym__] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(917),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(917),
    [anon_sym_Prop] = ACTIONS(917),
    [anon_sym_Set] = ACTIONS(917),
    [anon_sym_quote] = ACTIONS(917),
    [anon_sym_quoteTerm] = ACTIONS(917),
    [anon_sym_unquote] = ACTIONS(917),
    [anon_sym_data] = ACTIONS(917),
    [anon_sym_codata] = ACTIONS(917),
    [anon_sym_record] = ACTIONS(917),
    [anon_sym_field] = ACTIONS(917),
    [sym_pragma] = ACTIONS(917),
  },
  [407] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym_string] = ACTIONS(823),
    [sym_int] = ACTIONS(823),
    [sym_qualified_name] = ACTIONS(823),
    [anon_sym__] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(823),
    [anon_sym_Prop] = ACTIONS(823),
    [anon_sym_Set] = ACTIONS(823),
    [anon_sym_quote] = ACTIONS(823),
    [anon_sym_quoteTerm] = ACTIONS(823),
    [anon_sym_unquote] = ACTIONS(823),
    [anon_sym_where] = ACTIONS(823),
    [anon_sym_data] = ACTIONS(823),
    [anon_sym_codata] = ACTIONS(823),
    [anon_sym_record] = ACTIONS(823),
    [anon_sym_field] = ACTIONS(823),
    [sym_pragma] = ACTIONS(823),
  },
  [408] = {
    [ts_builtin_sym_end] = ACTIONS(107),
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
    [anon_sym_data] = ACTIONS(109),
    [anon_sym_codata] = ACTIONS(109),
    [anon_sym_record] = ACTIONS(109),
    [anon_sym_field] = ACTIONS(109),
    [sym_pragma] = ACTIONS(109),
  },
  [409] = {
    [anon_sym_RBRACE] = ACTIONS(919),
    [sym_comment] = ACTIONS(53),
  },
  [410] = {
    [sym__declarations0_] = STATE(491),
    [sym__newline] = ACTIONS(921),
    [sym__indent] = ACTIONS(203),
    [sym_comment] = ACTIONS(53),
  },
  [411] = {
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
  },
  [412] = {
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
  [413] = {
    [anon_sym_RBRACE] = ACTIONS(923),
    [sym_comment] = ACTIONS(53),
  },
  [414] = {
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
  [415] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_constructor] = ACTIONS(929),
  },
  [416] = {
    [sym__newline] = ACTIONS(931),
    [sym_comment] = ACTIONS(53),
  },
  [417] = {
    [ts_builtin_sym_end] = ACTIONS(933),
    [sym_string] = ACTIONS(935),
    [sym_int] = ACTIONS(935),
    [sym_qualified_name] = ACTIONS(935),
    [anon_sym__] = ACTIONS(935),
    [anon_sym_LBRACE] = ACTIONS(935),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(935),
    [anon_sym_Prop] = ACTIONS(935),
    [anon_sym_Set] = ACTIONS(935),
    [anon_sym_quote] = ACTIONS(935),
    [anon_sym_quoteTerm] = ACTIONS(935),
    [anon_sym_unquote] = ACTIONS(935),
    [anon_sym_data] = ACTIONS(935),
    [anon_sym_codata] = ACTIONS(935),
    [anon_sym_record] = ACTIONS(935),
    [anon_sym_field] = ACTIONS(935),
    [sym_pragma] = ACTIONS(935),
  },
  [418] = {
    [sym__dedent] = ACTIONS(937),
    [sym_comment] = ACTIONS(53),
  },
  [419] = {
    [sym__dedent] = ACTIONS(939),
    [sym_string] = ACTIONS(941),
    [sym_int] = ACTIONS(941),
    [sym_qualified_name] = ACTIONS(941),
    [anon_sym__] = ACTIONS(941),
    [anon_sym_LBRACE] = ACTIONS(941),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(941),
    [anon_sym_Prop] = ACTIONS(941),
    [anon_sym_Set] = ACTIONS(941),
    [anon_sym_quote] = ACTIONS(941),
    [anon_sym_quoteTerm] = ACTIONS(941),
    [anon_sym_unquote] = ACTIONS(941),
    [anon_sym_data] = ACTIONS(941),
    [anon_sym_codata] = ACTIONS(941),
    [anon_sym_record] = ACTIONS(941),
    [anon_sym_instance] = ACTIONS(943),
    [anon_sym_constructor] = ACTIONS(943),
    [anon_sym_inductive] = ACTIONS(943),
    [anon_sym_coinductive] = ACTIONS(943),
    [anon_sym_eta_DASHequality] = ACTIONS(943),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(943),
    [anon_sym_field] = ACTIONS(941),
    [sym_pragma] = ACTIONS(941),
  },
  [420] = {
    [sym__dedent] = ACTIONS(939),
    [sym_string] = ACTIONS(941),
    [sym_int] = ACTIONS(941),
    [sym_qualified_name] = ACTIONS(941),
    [anon_sym__] = ACTIONS(941),
    [anon_sym_LBRACE] = ACTIONS(941),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(941),
    [anon_sym_Prop] = ACTIONS(941),
    [anon_sym_Set] = ACTIONS(941),
    [anon_sym_quote] = ACTIONS(941),
    [anon_sym_quoteTerm] = ACTIONS(941),
    [anon_sym_unquote] = ACTIONS(941),
    [anon_sym_data] = ACTIONS(941),
    [anon_sym_codata] = ACTIONS(941),
    [anon_sym_record] = ACTIONS(941),
    [anon_sym_instance] = ACTIONS(763),
    [anon_sym_constructor] = ACTIONS(763),
    [anon_sym_inductive] = ACTIONS(763),
    [anon_sym_coinductive] = ACTIONS(763),
    [anon_sym_eta_DASHequality] = ACTIONS(763),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(763),
    [anon_sym_field] = ACTIONS(941),
    [sym_pragma] = ACTIONS(941),
  },
  [421] = {
    [sym__newline] = ACTIONS(945),
    [sym_comment] = ACTIONS(53),
  },
  [422] = {
    [sym_record_constructor_instance] = STATE(422),
    [sym_record_constructor] = STATE(497),
    [sym__record_directive] = STATE(497),
    [sym_record_induction] = STATE(497),
    [sym_record_eta] = STATE(497),
    [aux_sym__record_directives1_repeat1] = STATE(422),
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(947),
    [anon_sym_constructor] = ACTIONS(950),
    [anon_sym_inductive] = ACTIONS(953),
    [anon_sym_coinductive] = ACTIONS(953),
    [anon_sym_eta_DASHequality] = ACTIONS(956),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(956),
  },
  [423] = {
    [sym_record_declarations_block] = STATE(498),
    [sym__indent] = ACTIONS(353),
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
  [424] = {
    [sym_name] = ACTIONS(959),
    [anon_sym_DOT] = ACTIONS(959),
    [anon_sym_DOT_DOT] = ACTIONS(959),
    [anon_sym_LBRACE] = ACTIONS(959),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(959),
    [sym_comment] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(959),
  },
  [425] = {
    [aux_sym_arg_name_repeat1] = STATE(425),
    [sym_name] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(964),
    [sym_comment] = ACTIONS(13),
  },
  [426] = {
    [aux_sym_arg_name_repeat1] = STATE(426),
    [sym_name] = ACTIONS(966),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(964),
    [sym_comment] = ACTIONS(13),
  },
  [427] = {
    [sym__dedent] = ACTIONS(611),
    [sym_name] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_DOT_DOT] = ACTIONS(613),
    [anon_sym_LBRACE] = ACTIONS(613),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(613),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(613),
    [anon_sym_overlap] = ACTIONS(613),
  },
  [428] = {
    [sym__dedent] = ACTIONS(969),
    [sym_name] = ACTIONS(971),
    [anon_sym_DOT] = ACTIONS(971),
    [anon_sym_DOT_DOT] = ACTIONS(971),
    [anon_sym_LBRACE] = ACTIONS(971),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(971),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(971),
    [anon_sym_overlap] = ACTIONS(971),
  },
  [429] = {
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
  [430] = {
    [anon_sym_RBRACE] = ACTIONS(973),
    [sym_comment] = ACTIONS(53),
  },
  [431] = {
    [sym_literal] = STATE(346),
    [sym_expr] = STATE(500),
    [sym__expr1] = STATE(343),
    [sym__application] = STATE(343),
    [sym__expr2] = STATE(343),
    [sym__atoms1] = STATE(344),
    [sym_atom] = STATE(345),
    [sym__atom_curly] = STATE(346),
    [sym__atom_no_curly] = STATE(346),
    [sym__typed_bindings1] = STATE(347),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(348),
    [aux_sym__application_repeat1] = STATE(349),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(605),
    [sym_int] = ACTIONS(605),
    [sym_qualified_name] = ACTIONS(607),
    [anon_sym__] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_Prop] = ACTIONS(607),
    [anon_sym_Set] = ACTIONS(607),
    [anon_sym_quote] = ACTIONS(607),
    [anon_sym_quoteTerm] = ACTIONS(607),
    [anon_sym_unquote] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [432] = {
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
  [433] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(502),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(975),
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
  [434] = {
    [sym__dedent] = ACTIONS(239),
    [sym_name] = ACTIONS(241),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_DOT_DOT] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_instance] = ACTIONS(241),
    [anon_sym_overlap] = ACTIONS(241),
  },
  [435] = {
    [sym__dedent] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_name] = ACTIONS(71),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_instance] = ACTIONS(71),
    [anon_sym_overlap] = ACTIONS(71),
  },
  [436] = {
    [sym__dedent] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_name] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_instance] = ACTIONS(75),
    [anon_sym_overlap] = ACTIONS(75),
  },
  [437] = {
    [sym_literal] = STATE(436),
    [sym__expr2] = STATE(439),
    [sym_atom] = STATE(435),
    [sym__atom_curly] = STATE(436),
    [sym__atom_no_curly] = STATE(436),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(815),
    [sym_int] = ACTIONS(815),
    [sym_qualified_name] = ACTIONS(817),
    [anon_sym__] = ACTIONS(817),
    [anon_sym_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(817),
    [anon_sym_Prop] = ACTIONS(817),
    [anon_sym_Set] = ACTIONS(817),
    [anon_sym_quote] = ACTIONS(817),
    [anon_sym_quoteTerm] = ACTIONS(817),
    [anon_sym_unquote] = ACTIONS(817),
  },
  [438] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(430),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(805),
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
  [439] = {
    [sym__dedent] = ACTIONS(252),
    [sym_name] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_DOT_DOT] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(254),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_instance] = ACTIONS(254),
    [anon_sym_overlap] = ACTIONS(254),
  },
  [440] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [441] = {
    [sym__newline] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_rewrite] = ACTIONS(285),
    [anon_sym_with] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
  },
  [442] = {
    [sym_literal] = STATE(509),
    [sym_expr] = STATE(505),
    [sym__expr1] = STATE(506),
    [sym__application] = STATE(506),
    [sym__expr2] = STATE(506),
    [sym__atoms1] = STATE(507),
    [sym_atom] = STATE(508),
    [sym__atom_curly] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [sym__typed_bindings1] = STATE(510),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(511),
    [aux_sym__application_repeat1] = STATE(512),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(977),
    [sym_int] = ACTIONS(977),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(981),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [443] = {
    [sym__declarations0_] = STATE(513),
    [sym__newline] = ACTIONS(983),
    [sym__indent] = ACTIONS(859),
    [sym_comment] = ACTIONS(53),
  },
  [444] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(985),
    [anon_sym_where] = ACTIONS(987),
  },
  [445] = {
    [sym_literal] = STATE(195),
    [sym_expr] = STATE(516),
    [sym__expr1] = STATE(192),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym__atoms1] = STATE(193),
    [sym_atom] = STATE(194),
    [sym__atom_curly] = STATE(195),
    [sym__atom_no_curly] = STATE(195),
    [sym__typed_bindings1] = STATE(196),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(197),
    [aux_sym__application_repeat1] = STATE(198),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(345),
    [sym_int] = ACTIONS(345),
    [sym_qualified_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_Prop] = ACTIONS(347),
    [anon_sym_Set] = ACTIONS(347),
    [anon_sym_quote] = ACTIONS(347),
    [anon_sym_quoteTerm] = ACTIONS(347),
    [anon_sym_unquote] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [446] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(989),
    [anon_sym_where] = ACTIONS(987),
  },
  [447] = {
    [sym_literal] = STATE(509),
    [sym_expr] = STATE(518),
    [sym__expr1] = STATE(506),
    [sym__application] = STATE(506),
    [sym__expr2] = STATE(506),
    [sym__atoms1] = STATE(507),
    [sym_atom] = STATE(508),
    [sym__atom_curly] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [sym__typed_bindings1] = STATE(510),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(511),
    [aux_sym__application_repeat1] = STATE(512),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(977),
    [sym_int] = ACTIONS(977),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(981),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [448] = {
    [sym_record_declarations_block] = STATE(520),
    [sym__newline] = ACTIONS(355),
    [sym__indent] = ACTIONS(991),
    [sym_comment] = ACTIONS(53),
  },
  [449] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(993),
    [anon_sym_where] = ACTIONS(995),
  },
  [450] = {
    [sym__dedent] = ACTIONS(997),
    [sym_comment] = ACTIONS(53),
  },
  [451] = {
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
  [452] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(525),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(999),
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
  [453] = {
    [sym__newline] = ACTIONS(391),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_with] = ACTIONS(391),
    [anon_sym_where] = ACTIONS(391),
    [anon_sym_module] = ACTIONS(391),
  },
  [454] = {
    [sym__newline] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_with] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
  },
  [455] = {
    [sym__newline] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_with] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [456] = {
    [sym_literal] = STATE(455),
    [sym__application] = STATE(374),
    [sym__expr2] = STATE(374),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(454),
    [sym__atom_curly] = STATE(455),
    [sym__atom_no_curly] = STATE(455),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(457),
    [sym_string] = ACTIONS(839),
    [sym_int] = ACTIONS(839),
    [sym_qualified_name] = ACTIONS(841),
    [anon_sym__] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(843),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(841),
    [anon_sym_Prop] = ACTIONS(841),
    [anon_sym_Set] = ACTIONS(841),
    [anon_sym_quote] = ACTIONS(841),
    [anon_sym_quoteTerm] = ACTIONS(841),
    [anon_sym_unquote] = ACTIONS(841),
  },
  [457] = {
    [sym_literal] = STATE(455),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(454),
    [sym__atom_curly] = STATE(455),
    [sym__atom_no_curly] = STATE(455),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(839),
    [sym_int] = ACTIONS(839),
    [sym_qualified_name] = ACTIONS(841),
    [anon_sym__] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(843),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(841),
    [anon_sym_Prop] = ACTIONS(841),
    [anon_sym_Set] = ACTIONS(841),
    [anon_sym_quote] = ACTIONS(841),
    [anon_sym_quoteTerm] = ACTIONS(841),
    [anon_sym_unquote] = ACTIONS(841),
  },
  [458] = {
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
  [459] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(527),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(1001),
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
  [460] = {
    [sym__newline] = ACTIONS(397),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_where] = ACTIONS(397),
    [anon_sym_module] = ACTIONS(397),
  },
  [461] = {
    [sym__newline] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
  },
  [462] = {
    [sym__newline] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [463] = {
    [sym_literal] = STATE(462),
    [sym__application] = STATE(374),
    [sym__expr2] = STATE(374),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(461),
    [sym__atom_curly] = STATE(462),
    [sym__atom_no_curly] = STATE(462),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(464),
    [sym_string] = ACTIONS(845),
    [sym_int] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(849),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
  },
  [464] = {
    [sym_literal] = STATE(462),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(461),
    [sym__atom_curly] = STATE(462),
    [sym__atom_no_curly] = STATE(462),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(845),
    [sym_int] = ACTIONS(845),
    [sym_qualified_name] = ACTIONS(847),
    [anon_sym__] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(849),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(847),
    [anon_sym_Prop] = ACTIONS(847),
    [anon_sym_Set] = ACTIONS(847),
    [anon_sym_quote] = ACTIONS(847),
    [anon_sym_quoteTerm] = ACTIONS(847),
    [anon_sym_unquote] = ACTIONS(847),
  },
  [465] = {
    [sym__newline] = ACTIONS(401),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_where] = ACTIONS(401),
    [anon_sym_module] = ACTIONS(401),
  },
  [466] = {
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
  [467] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(529),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(1003),
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
  [468] = {
    [sym__newline] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
  },
  [469] = {
    [sym__newline] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(1005),
    [anon_sym_where] = ACTIONS(119),
    [anon_sym_module] = ACTIONS(119),
  },
  [470] = {
    [sym__const_right_arrow] = ACTIONS(1005),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [471] = {
    [sym__newline] = ACTIONS(67),
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
  },
  [472] = {
    [sym__newline] = ACTIONS(73),
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [473] = {
    [sym__const_right_arrow] = ACTIONS(1005),
    [sym_comment] = ACTIONS(53),
  },
  [474] = {
    [sym_literal] = STATE(534),
    [sym__application] = STATE(374),
    [sym__expr2] = STATE(374),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(533),
    [sym__atom_curly] = STATE(534),
    [sym__atom_no_curly] = STATE(534),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(535),
    [sym_string] = ACTIONS(1007),
    [sym_int] = ACTIONS(1007),
    [sym_qualified_name] = ACTIONS(1009),
    [anon_sym__] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(1011),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1009),
    [anon_sym_Prop] = ACTIONS(1009),
    [anon_sym_Set] = ACTIONS(1009),
    [anon_sym_quote] = ACTIONS(1009),
    [anon_sym_quoteTerm] = ACTIONS(1009),
    [anon_sym_unquote] = ACTIONS(1009),
  },
  [475] = {
    [sym_literal] = STATE(472),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(471),
    [sym__atom_curly] = STATE(472),
    [sym__atom_no_curly] = STATE(472),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(851),
    [sym_int] = ACTIONS(851),
    [sym_qualified_name] = ACTIONS(853),
    [anon_sym__] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(1013),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(853),
    [anon_sym_Prop] = ACTIONS(853),
    [anon_sym_Set] = ACTIONS(853),
    [anon_sym_quote] = ACTIONS(853),
    [anon_sym_quoteTerm] = ACTIONS(853),
    [anon_sym_unquote] = ACTIONS(853),
  },
  [476] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [sym__declarations1_] = STATE(537),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__declarations1__repeat1] = STATE(254),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [477] = {
    [sym__newline] = ACTIONS(441),
    [sym_comment] = ACTIONS(53),
  },
  [478] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1015),
  },
  [479] = {
    [sym__newline] = ACTIONS(449),
    [sym_comment] = ACTIONS(53),
  },
  [480] = {
    [sym__const_right_arrow] = ACTIONS(1017),
    [anon_sym_DOT] = ACTIONS(1019),
    [anon_sym_DOT_DOT] = ACTIONS(1017),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1017),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(1017),
  },
  [481] = {
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
  },
  [482] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(53),
  },
  [483] = {
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
  [484] = {
    [anon_sym_RBRACE] = ACTIONS(1021),
    [sym_comment] = ACTIONS(53),
  },
  [485] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
  },
  [486] = {
    [anon_sym_RBRACE] = ACTIONS(1023),
    [sym_comment] = ACTIONS(53),
  },
  [487] = {
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1023),
    [sym_comment] = ACTIONS(53),
  },
  [488] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(1023),
  },
  [489] = {
    [sym_name] = ACTIONS(903),
    [anon_sym__] = ACTIONS(903),
    [anon_sym_DOT] = ACTIONS(903),
    [anon_sym_DOT_DOT] = ACTIONS(903),
    [anon_sym_LBRACE] = ACTIONS(903),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(903),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(903),
    [anon_sym_COLON] = ACTIONS(903),
    [anon_sym_where] = ACTIONS(903),
  },
  [490] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_data] = ACTIONS(285),
    [anon_sym_codata] = ACTIONS(285),
    [anon_sym_record] = ACTIONS(285),
    [anon_sym_field] = ACTIONS(285),
    [sym_pragma] = ACTIONS(285),
  },
  [491] = {
    [ts_builtin_sym_end] = ACTIONS(1025),
    [sym_string] = ACTIONS(1027),
    [sym_int] = ACTIONS(1027),
    [sym_qualified_name] = ACTIONS(1027),
    [anon_sym__] = ACTIONS(1027),
    [anon_sym_LBRACE] = ACTIONS(1027),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1027),
    [anon_sym_Prop] = ACTIONS(1027),
    [anon_sym_Set] = ACTIONS(1027),
    [anon_sym_quote] = ACTIONS(1027),
    [anon_sym_quoteTerm] = ACTIONS(1027),
    [anon_sym_unquote] = ACTIONS(1027),
    [anon_sym_data] = ACTIONS(1027),
    [anon_sym_codata] = ACTIONS(1027),
    [anon_sym_record] = ACTIONS(1027),
    [anon_sym_field] = ACTIONS(1027),
    [sym_pragma] = ACTIONS(1027),
  },
  [492] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
  },
  [493] = {
    [sym_name] = ACTIONS(1029),
    [sym_comment] = ACTIONS(13),
  },
  [494] = {
    [ts_builtin_sym_end] = ACTIONS(1031),
    [sym_string] = ACTIONS(1033),
    [sym_int] = ACTIONS(1033),
    [sym_qualified_name] = ACTIONS(1033),
    [anon_sym__] = ACTIONS(1033),
    [anon_sym_LBRACE] = ACTIONS(1033),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1033),
    [anon_sym_Prop] = ACTIONS(1033),
    [anon_sym_Set] = ACTIONS(1033),
    [anon_sym_quote] = ACTIONS(1033),
    [anon_sym_quoteTerm] = ACTIONS(1033),
    [anon_sym_unquote] = ACTIONS(1033),
    [anon_sym_data] = ACTIONS(1033),
    [anon_sym_codata] = ACTIONS(1033),
    [anon_sym_record] = ACTIONS(1033),
    [anon_sym_field] = ACTIONS(1033),
    [sym_pragma] = ACTIONS(1033),
  },
  [495] = {
    [sym__dedent] = ACTIONS(1035),
    [sym_string] = ACTIONS(1037),
    [sym_int] = ACTIONS(1037),
    [sym_qualified_name] = ACTIONS(1037),
    [anon_sym__] = ACTIONS(1037),
    [anon_sym_LBRACE] = ACTIONS(1037),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1037),
    [anon_sym_Prop] = ACTIONS(1037),
    [anon_sym_Set] = ACTIONS(1037),
    [anon_sym_quote] = ACTIONS(1037),
    [anon_sym_quoteTerm] = ACTIONS(1037),
    [anon_sym_unquote] = ACTIONS(1037),
    [anon_sym_data] = ACTIONS(1037),
    [anon_sym_codata] = ACTIONS(1037),
    [anon_sym_record] = ACTIONS(1037),
    [anon_sym_instance] = ACTIONS(943),
    [anon_sym_constructor] = ACTIONS(943),
    [anon_sym_inductive] = ACTIONS(943),
    [anon_sym_coinductive] = ACTIONS(943),
    [anon_sym_eta_DASHequality] = ACTIONS(943),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(943),
    [anon_sym_field] = ACTIONS(1037),
    [sym_pragma] = ACTIONS(1037),
  },
  [496] = {
    [sym__indent] = ACTIONS(1039),
    [sym_comment] = ACTIONS(53),
  },
  [497] = {
    [sym__newline] = ACTIONS(1041),
    [sym_comment] = ACTIONS(53),
  },
  [498] = {
    [ts_builtin_sym_end] = ACTIONS(1043),
    [sym_string] = ACTIONS(1045),
    [sym_int] = ACTIONS(1045),
    [sym_qualified_name] = ACTIONS(1045),
    [anon_sym__] = ACTIONS(1045),
    [anon_sym_LBRACE] = ACTIONS(1045),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1045),
    [anon_sym_Prop] = ACTIONS(1045),
    [anon_sym_Set] = ACTIONS(1045),
    [anon_sym_quote] = ACTIONS(1045),
    [anon_sym_quoteTerm] = ACTIONS(1045),
    [anon_sym_unquote] = ACTIONS(1045),
    [anon_sym_data] = ACTIONS(1045),
    [anon_sym_codata] = ACTIONS(1045),
    [anon_sym_record] = ACTIONS(1045),
    [anon_sym_field] = ACTIONS(1045),
    [sym_pragma] = ACTIONS(1045),
  },
  [499] = {
    [sym__dedent] = ACTIONS(283),
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_name] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_DOT_DOT] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_instance] = ACTIONS(285),
    [anon_sym_overlap] = ACTIONS(285),
  },
  [500] = {
    [sym__dedent] = ACTIONS(486),
    [sym_name] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [anon_sym_DOT_DOT] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(13),
    [anon_sym_instance] = ACTIONS(823),
    [anon_sym_overlap] = ACTIONS(823),
  },
  [501] = {
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
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(1047),
    [sym_comment] = ACTIONS(53),
  },
  [503] = {
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
  [504] = {
    [sym_literal] = STATE(62),
    [sym_expr] = STATE(546),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(60),
    [sym__expr2] = STATE(60),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(61),
    [sym__atom_curly] = STATE(62),
    [sym__atom_no_curly] = STATE(62),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(63),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(99),
    [sym_int] = ACTIONS(99),
    [sym_qualified_name] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(1049),
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
  [505] = {
    [sym__newline] = ACTIONS(506),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1051),
  },
  [506] = {
    [sym__newline] = ACTIONS(119),
    [sym_comment] = ACTIONS(53),
    [anon_sym_EQ] = ACTIONS(1053),
    [anon_sym_where] = ACTIONS(119),
  },
  [507] = {
    [sym__const_right_arrow] = ACTIONS(1053),
    [sym_comment] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(65),
  },
  [508] = {
    [sym__newline] = ACTIONS(67),
    [sym__const_right_arrow] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
  },
  [509] = {
    [sym__newline] = ACTIONS(73),
    [sym__const_right_arrow] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
  },
  [510] = {
    [sym__const_right_arrow] = ACTIONS(1053),
    [sym_comment] = ACTIONS(53),
  },
  [511] = {
    [sym_literal] = STATE(552),
    [sym__application] = STATE(374),
    [sym__expr2] = STATE(374),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(551),
    [sym__atom_curly] = STATE(552),
    [sym__atom_no_curly] = STATE(552),
    [aux_sym__expr1_repeat1] = STATE(50),
    [aux_sym__application_repeat1] = STATE(553),
    [sym_string] = ACTIONS(1055),
    [sym_int] = ACTIONS(1055),
    [sym_qualified_name] = ACTIONS(1057),
    [anon_sym__] = ACTIONS(1057),
    [anon_sym_LBRACE] = ACTIONS(1059),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1057),
    [anon_sym_Prop] = ACTIONS(1057),
    [anon_sym_Set] = ACTIONS(1057),
    [anon_sym_quote] = ACTIONS(1057),
    [anon_sym_quoteTerm] = ACTIONS(1057),
    [anon_sym_unquote] = ACTIONS(1057),
  },
  [512] = {
    [sym_literal] = STATE(509),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(508),
    [sym__atom_curly] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [aux_sym__application_repeat1] = STATE(81),
    [sym__const_right_arrow] = ACTIONS(91),
    [sym_string] = ACTIONS(977),
    [sym_int] = ACTIONS(977),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_LBRACE] = ACTIONS(1061),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
  },
  [513] = {
    [sym__newline] = ACTIONS(524),
    [sym_comment] = ACTIONS(53),
  },
  [514] = {
    [sym_literal] = STATE(509),
    [sym_expr] = STATE(555),
    [sym__expr1] = STATE(506),
    [sym__application] = STATE(506),
    [sym__expr2] = STATE(506),
    [sym__atoms1] = STATE(507),
    [sym_atom] = STATE(508),
    [sym__atom_curly] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [sym__typed_bindings1] = STATE(510),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(511),
    [aux_sym__application_repeat1] = STATE(512),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(977),
    [sym_int] = ACTIONS(977),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(981),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [515] = {
    [sym__declarations0_] = STATE(556),
    [sym__newline] = ACTIONS(1063),
    [sym__indent] = ACTIONS(859),
    [sym_comment] = ACTIONS(53),
  },
  [516] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1051),
  },
  [517] = {
    [sym_literal] = STATE(195),
    [sym_expr] = STATE(557),
    [sym__expr1] = STATE(192),
    [sym__application] = STATE(192),
    [sym__expr2] = STATE(192),
    [sym__atoms1] = STATE(193),
    [sym_atom] = STATE(194),
    [sym__atom_curly] = STATE(195),
    [sym__atom_no_curly] = STATE(195),
    [sym__typed_bindings1] = STATE(196),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(197),
    [aux_sym__application_repeat1] = STATE(198),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(345),
    [sym_int] = ACTIONS(345),
    [sym_qualified_name] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(349),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_Prop] = ACTIONS(347),
    [anon_sym_Set] = ACTIONS(347),
    [anon_sym_quote] = ACTIONS(347),
    [anon_sym_quoteTerm] = ACTIONS(347),
    [anon_sym_unquote] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [518] = {
    [sym__newline] = ACTIONS(561),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1065),
  },
  [519] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym__record_directives1] = STATE(560),
    [sym_record_constructor_instance] = STATE(325),
    [sym_record_constructor] = STATE(326),
    [sym__record_directive] = STATE(326),
    [sym_record_induction] = STATE(326),
    [sym_record_eta] = STATE(326),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [sym__declarations1_] = STATE(561),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__record_directives1_repeat1] = STATE(328),
    [aux_sym__declarations1__repeat1] = STATE(254),
    [sym__dedent] = ACTIONS(1067),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_instance] = ACTIONS(569),
    [anon_sym_constructor] = ACTIONS(571),
    [anon_sym_inductive] = ACTIONS(573),
    [anon_sym_coinductive] = ACTIONS(573),
    [anon_sym_eta_DASHequality] = ACTIONS(575),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(575),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [520] = {
    [sym__newline] = ACTIONS(577),
    [sym_comment] = ACTIONS(53),
  },
  [521] = {
    [sym_literal] = STATE(509),
    [sym_expr] = STATE(562),
    [sym__expr1] = STATE(506),
    [sym__application] = STATE(506),
    [sym__expr2] = STATE(506),
    [sym__atoms1] = STATE(507),
    [sym_atom] = STATE(508),
    [sym__atom_curly] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [sym__typed_bindings1] = STATE(510),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(511),
    [aux_sym__application_repeat1] = STATE(512),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(977),
    [sym_int] = ACTIONS(977),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(981),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [522] = {
    [sym_record_declarations_block] = STATE(563),
    [sym__newline] = ACTIONS(577),
    [sym__indent] = ACTIONS(991),
    [sym_comment] = ACTIONS(53),
  },
  [523] = {
    [sym__newline] = ACTIONS(611),
    [sym_comment] = ACTIONS(53),
  },
  [524] = {
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
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1069),
    [sym_comment] = ACTIONS(53),
  },
  [526] = {
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
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(1071),
    [sym_comment] = ACTIONS(53),
  },
  [528] = {
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
  [529] = {
    [anon_sym_RBRACE] = ACTIONS(1073),
    [sym_comment] = ACTIONS(53),
  },
  [530] = {
    [sym_literal] = STATE(472),
    [sym_expr] = STATE(567),
    [sym__expr1] = STATE(469),
    [sym__application] = STATE(469),
    [sym__expr2] = STATE(469),
    [sym__atoms1] = STATE(470),
    [sym_atom] = STATE(471),
    [sym__atom_curly] = STATE(472),
    [sym__atom_no_curly] = STATE(472),
    [sym__typed_bindings1] = STATE(473),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(474),
    [aux_sym__application_repeat1] = STATE(475),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(851),
    [sym_int] = ACTIONS(851),
    [sym_qualified_name] = ACTIONS(853),
    [anon_sym__] = ACTIONS(853),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(855),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(853),
    [anon_sym_Prop] = ACTIONS(853),
    [anon_sym_Set] = ACTIONS(853),
    [anon_sym_quote] = ACTIONS(853),
    [anon_sym_quoteTerm] = ACTIONS(853),
    [anon_sym_unquote] = ACTIONS(853),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [531] = {
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
  [532] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(569),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(1075),
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
  [533] = {
    [sym__newline] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
  },
  [534] = {
    [sym__newline] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_module] = ACTIONS(75),
  },
  [535] = {
    [sym_literal] = STATE(534),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(533),
    [sym__atom_curly] = STATE(534),
    [sym__atom_no_curly] = STATE(534),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(1007),
    [sym_int] = ACTIONS(1007),
    [sym_qualified_name] = ACTIONS(1009),
    [anon_sym__] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(1011),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(1009),
    [anon_sym_Prop] = ACTIONS(1009),
    [anon_sym_Set] = ACTIONS(1009),
    [anon_sym_quote] = ACTIONS(1009),
    [anon_sym_quoteTerm] = ACTIONS(1009),
    [anon_sym_unquote] = ACTIONS(1009),
  },
  [536] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(529),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(1003),
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
  [537] = {
    [sym__dedent] = ACTIONS(1077),
    [sym_comment] = ACTIONS(53),
  },
  [538] = {
    [sym__declarations0_] = STATE(571),
    [sym__newline] = ACTIONS(1079),
    [sym__indent] = ACTIONS(859),
    [sym_comment] = ACTIONS(53),
  },
  [539] = {
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
  },
  [540] = {
    [sym_name] = ACTIONS(1019),
    [anon_sym__] = ACTIONS(1019),
    [anon_sym_DOT] = ACTIONS(1019),
    [anon_sym_DOT_DOT] = ACTIONS(1019),
    [anon_sym_LBRACE] = ACTIONS(1019),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1019),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(1019),
    [anon_sym_COLON] = ACTIONS(1019),
    [anon_sym_where] = ACTIONS(1019),
  },
  [541] = {
    [sym__dedent] = ACTIONS(1081),
    [sym_comment] = ACTIONS(53),
  },
  [542] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_constructor] = ACTIONS(1083),
  },
  [543] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(1085),
    [anon_sym_constructor] = ACTIONS(1085),
    [anon_sym_inductive] = ACTIONS(1085),
    [anon_sym_coinductive] = ACTIONS(1085),
    [anon_sym_eta_DASHequality] = ACTIONS(1085),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1085),
  },
  [544] = {
    [sym__dedent] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_name] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_DOT_DOT] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_instance] = ACTIONS(285),
    [anon_sym_overlap] = ACTIONS(285),
  },
  [545] = {
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
  [546] = {
    [anon_sym_RBRACE] = ACTIONS(1087),
    [sym_comment] = ACTIONS(53),
  },
  [547] = {
    [sym__declarations0_] = STATE(575),
    [sym__newline] = ACTIONS(1089),
    [sym__indent] = ACTIONS(859),
    [sym_comment] = ACTIONS(53),
  },
  [548] = {
    [sym_literal] = STATE(509),
    [sym_expr] = STATE(567),
    [sym__expr1] = STATE(506),
    [sym__application] = STATE(506),
    [sym__expr2] = STATE(506),
    [sym__atoms1] = STATE(507),
    [sym_atom] = STATE(508),
    [sym__atom_curly] = STATE(509),
    [sym__atom_no_curly] = STATE(509),
    [sym__typed_bindings1] = STATE(510),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(511),
    [aux_sym__application_repeat1] = STATE(512),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(977),
    [sym_int] = ACTIONS(977),
    [sym_qualified_name] = ACTIONS(979),
    [anon_sym__] = ACTIONS(979),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(981),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(39),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(979),
    [anon_sym_Prop] = ACTIONS(979),
    [anon_sym_Set] = ACTIONS(979),
    [anon_sym_quote] = ACTIONS(979),
    [anon_sym_quoteTerm] = ACTIONS(979),
    [anon_sym_unquote] = ACTIONS(979),
    [anon_sym_LPAREN] = ACTIONS(41),
  },
  [549] = {
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
  [550] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(577),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(1091),
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
  [551] = {
    [sym__newline] = ACTIONS(67),
    [sym_string] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_qualified_name] = ACTIONS(69),
    [anon_sym__] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(69),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_QMARK] = ACTIONS(69),
    [anon_sym_Prop] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_quote] = ACTIONS(69),
    [anon_sym_quoteTerm] = ACTIONS(69),
    [anon_sym_unquote] = ACTIONS(69),
    [anon_sym_where] = ACTIONS(71),
  },
  [552] = {
    [sym__newline] = ACTIONS(73),
    [sym_string] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_qualified_name] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_Prop] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(75),
    [anon_sym_quoteTerm] = ACTIONS(75),
    [anon_sym_unquote] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
  },
  [553] = {
    [sym_literal] = STATE(552),
    [sym__expr2] = STATE(375),
    [sym_atom] = STATE(551),
    [sym__atom_curly] = STATE(552),
    [sym__atom_no_curly] = STATE(552),
    [aux_sym__application_repeat1] = STATE(52),
    [sym_string] = ACTIONS(1055),
    [sym_int] = ACTIONS(1055),
    [sym_qualified_name] = ACTIONS(1057),
    [anon_sym__] = ACTIONS(1057),
    [anon_sym_LBRACE] = ACTIONS(1059),
    [sym_comment] = ACTIONS(13),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_QMARK] = ACTIONS(1057),
    [anon_sym_Prop] = ACTIONS(1057),
    [anon_sym_Set] = ACTIONS(1057),
    [anon_sym_quote] = ACTIONS(1057),
    [anon_sym_quoteTerm] = ACTIONS(1057),
    [anon_sym_unquote] = ACTIONS(1057),
  },
  [554] = {
    [sym_literal] = STATE(27),
    [sym_expr] = STATE(546),
    [sym__expr1] = STATE(24),
    [sym__application] = STATE(24),
    [sym__expr2] = STATE(24),
    [sym__atoms1] = STATE(25),
    [sym_atom] = STATE(26),
    [sym__atom_curly] = STATE(27),
    [sym__atom_no_curly] = STATE(27),
    [sym__typed_bindings1] = STATE(28),
    [sym_typed_binding] = STATE(31),
    [aux_sym__expr1_repeat1] = STATE(29),
    [aux_sym__application_repeat1] = STATE(30),
    [aux_sym__typed_bindings1_repeat1] = STATE(31),
    [sym_string] = ACTIONS(29),
    [sym_int] = ACTIONS(29),
    [sym_qualified_name] = ACTIONS(31),
    [anon_sym__] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(1049),
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
  [555] = {
    [sym__newline] = ACTIONS(725),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1093),
  },
  [556] = {
    [sym__newline] = ACTIONS(731),
    [sym_comment] = ACTIONS(53),
  },
  [557] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1093),
  },
  [558] = {
    [sym_record_declarations_block] = STATE(579),
    [sym__newline] = ACTIONS(741),
    [sym__indent] = ACTIONS(991),
    [sym_comment] = ACTIONS(53),
  },
  [559] = {
    [sym__newline] = ACTIONS(745),
    [sym_comment] = ACTIONS(53),
  },
  [560] = {
    [sym_literal] = STATE(248),
    [sym__expr1] = STATE(246),
    [sym__application] = STATE(246),
    [sym__expr2] = STATE(246),
    [sym__atoms1] = STATE(10),
    [sym_atom] = STATE(247),
    [sym__atom_curly] = STATE(248),
    [sym__atom_no_curly] = STATE(248),
    [sym_function_clause] = STATE(250),
    [sym_lhs] = STATE(249),
    [sym_data] = STATE(250),
    [sym_data_signature_only] = STATE(250),
    [sym_record] = STATE(250),
    [sym_record_signature_only] = STATE(250),
    [sym_field] = STATE(250),
    [sym__declaration] = STATE(250),
    [sym__declarations1_] = STATE(581),
    [aux_sym__expr1_repeat1] = STATE(252),
    [aux_sym__application_repeat1] = STATE(253),
    [aux_sym__declarations1__repeat1] = STATE(254),
    [sym__dedent] = ACTIONS(1095),
    [sym_string] = ACTIONS(425),
    [sym_int] = ACTIONS(425),
    [sym_qualified_name] = ACTIONS(427),
    [anon_sym__] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(427),
    [anon_sym_Prop] = ACTIONS(427),
    [anon_sym_Set] = ACTIONS(427),
    [anon_sym_quote] = ACTIONS(427),
    [anon_sym_quoteTerm] = ACTIONS(427),
    [anon_sym_unquote] = ACTIONS(427),
    [anon_sym_data] = ACTIONS(431),
    [anon_sym_codata] = ACTIONS(433),
    [anon_sym_record] = ACTIONS(435),
    [anon_sym_field] = ACTIONS(437),
    [sym_pragma] = ACTIONS(439),
  },
  [561] = {
    [sym__dedent] = ACTIONS(1095),
    [sym_comment] = ACTIONS(53),
  },
  [562] = {
    [sym__newline] = ACTIONS(775),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(1097),
  },
  [563] = {
    [sym__newline] = ACTIONS(741),
    [sym_comment] = ACTIONS(53),
  },
  [564] = {
    [sym__newline] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_with] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
  },
  [565] = {
    [sym__newline] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
  },
  [566] = {
    [sym__newline] = ACTIONS(283),
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
  },
  [567] = {
    [sym__newline] = ACTIONS(486),
    [sym_comment] = ACTIONS(53),
    [anon_sym_where] = ACTIONS(486),
    [anon_sym_module] = ACTIONS(486),
  },
  [568] = {
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
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1099),
    [sym_comment] = ACTIONS(53),
  },
  [570] = {
    [sym__newline] = ACTIONS(867),
    [sym_comment] = ACTIONS(53),
  },
  [571] = {
    [sym__newline] = ACTIONS(895),
    [sym_comment] = ACTIONS(53),
  },
  [572] = {
    [sym__dedent] = ACTIONS(1101),
    [sym_string] = ACTIONS(1103),
    [sym_int] = ACTIONS(1103),
    [sym_qualified_name] = ACTIONS(1103),
    [anon_sym__] = ACTIONS(1103),
    [anon_sym_LBRACE] = ACTIONS(1103),
    [sym_comment] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(1103),
    [anon_sym_Prop] = ACTIONS(1103),
    [anon_sym_Set] = ACTIONS(1103),
    [anon_sym_quote] = ACTIONS(1103),
    [anon_sym_quoteTerm] = ACTIONS(1103),
    [anon_sym_unquote] = ACTIONS(1103),
    [anon_sym_data] = ACTIONS(1103),
    [anon_sym_codata] = ACTIONS(1103),
    [anon_sym_record] = ACTIONS(1103),
    [anon_sym_instance] = ACTIONS(1103),
    [anon_sym_constructor] = ACTIONS(1103),
    [anon_sym_inductive] = ACTIONS(1103),
    [anon_sym_coinductive] = ACTIONS(1103),
    [anon_sym_eta_DASHequality] = ACTIONS(1103),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1103),
    [anon_sym_field] = ACTIONS(1103),
    [sym_pragma] = ACTIONS(1103),
  },
  [573] = {
    [sym_name] = ACTIONS(1105),
    [sym_comment] = ACTIONS(13),
  },
  [574] = {
    [sym__newline] = ACTIONS(283),
    [sym__const_right_arrow] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
  },
  [575] = {
    [sym__newline] = ACTIONS(915),
    [sym_comment] = ACTIONS(53),
  },
  [576] = {
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
  [577] = {
    [anon_sym_RBRACE] = ACTIONS(1107),
    [sym_comment] = ACTIONS(53),
  },
  [578] = {
    [sym__declarations0_] = STATE(586),
    [sym__newline] = ACTIONS(1109),
    [sym__indent] = ACTIONS(859),
    [sym_comment] = ACTIONS(53),
  },
  [579] = {
    [sym__newline] = ACTIONS(925),
    [sym_comment] = ACTIONS(53),
  },
  [580] = {
    [sym__newline] = ACTIONS(933),
    [sym_comment] = ACTIONS(53),
  },
  [581] = {
    [sym__dedent] = ACTIONS(1111),
    [sym_comment] = ACTIONS(53),
  },
  [582] = {
    [sym_record_declarations_block] = STATE(588),
    [sym__newline] = ACTIONS(925),
    [sym__indent] = ACTIONS(991),
    [sym_comment] = ACTIONS(53),
  },
  [583] = {
    [sym__newline] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
    [anon_sym_module] = ACTIONS(285),
  },
  [584] = {
    [sym__dedent] = ACTIONS(1113),
    [sym_comment] = ACTIONS(53),
  },
  [585] = {
    [sym__newline] = ACTIONS(283),
    [sym_string] = ACTIONS(285),
    [sym_int] = ACTIONS(285),
    [sym_qualified_name] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [sym_comment] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_QMARK] = ACTIONS(285),
    [anon_sym_Prop] = ACTIONS(285),
    [anon_sym_Set] = ACTIONS(285),
    [anon_sym_quote] = ACTIONS(285),
    [anon_sym_quoteTerm] = ACTIONS(285),
    [anon_sym_unquote] = ACTIONS(285),
    [anon_sym_where] = ACTIONS(285),
  },
  [586] = {
    [sym__newline] = ACTIONS(1025),
    [sym_comment] = ACTIONS(53),
  },
  [587] = {
    [sym__newline] = ACTIONS(1031),
    [sym_comment] = ACTIONS(53),
  },
  [588] = {
    [sym__newline] = ACTIONS(1043),
    [sym_comment] = ACTIONS(53),
  },
  [589] = {
    [sym_comment] = ACTIONS(53),
    [anon_sym_instance] = ACTIONS(1101),
    [anon_sym_constructor] = ACTIONS(1101),
    [anon_sym_inductive] = ACTIONS(1101),
    [anon_sym_coinductive] = ACTIONS(1101),
    [anon_sym_eta_DASHequality] = ACTIONS(1101),
    [anon_sym_no_DASHeta_DASHequality] = ACTIONS(1101),
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
  [29] = {.count = 1, .reusable = false}, SHIFT(17),
  [31] = {.count = 1, .reusable = false}, SHIFT(27),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = false}, SHIFT(19),
  [37] = {.count = 1, .reusable = false}, SHIFT(20),
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = false}, SHIFT(22),
  [43] = {.count = 1, .reusable = false}, SHIFT(32),
  [45] = {.count = 1, .reusable = false}, SHIFT(33),
  [47] = {.count = 1, .reusable = false}, SHIFT(34),
  [49] = {.count = 1, .reusable = false}, SHIFT(35),
  [51] = {.count = 1, .reusable = true}, SHIFT(36),
  [53] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [55] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_lhs, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(38),
  [63] = {.count = 1, .reusable = false}, SHIFT(39),
  [65] = {.count = 1, .reusable = true}, SHIFT(42),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__expr2, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym__expr2, 1),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_function_clause, 1),
  [81] = {.count = 1, .reusable = false}, SHIFT(43),
  [83] = {.count = 1, .reusable = false}, SHIFT(44),
  [85] = {.count = 1, .reusable = false}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(48),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__atoms1, 1),
  [93] = {.count = 1, .reusable = false}, SHIFT(53),
  [95] = {.count = 1, .reusable = true}, SHIFT(54),
  [97] = {.count = 1, .reusable = true}, SHIFT(55),
  [99] = {.count = 1, .reusable = false}, SHIFT(56),
  [101] = {.count = 1, .reusable = false}, SHIFT(62),
  [103] = {.count = 1, .reusable = false}, SHIFT(57),
  [105] = {.count = 1, .reusable = false}, SHIFT(58),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 2),
  [111] = {.count = 1, .reusable = false}, SHIFT(64),
  [113] = {.count = 1, .reusable = false}, SHIFT(68),
  [115] = {.count = 1, .reusable = false}, SHIFT(65),
  [117] = {.count = 1, .reusable = true}, SHIFT(71),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(72),
  [123] = {.count = 1, .reusable = false}, SHIFT(73),
  [125] = {.count = 1, .reusable = false}, SHIFT(77),
  [127] = {.count = 1, .reusable = false}, SHIFT(74),
  [129] = {.count = 1, .reusable = false}, SHIFT(79),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__typed_bindings1, 1),
  [133] = {.count = 1, .reusable = true}, SHIFT(18),
  [135] = {.count = 1, .reusable = false}, SHIFT(82),
  [137] = {.count = 1, .reusable = true}, SHIFT(21),
  [139] = {.count = 1, .reusable = true}, SHIFT(22),
  [141] = {.count = 1, .reusable = false}, SHIFT(84),
  [143] = {.count = 1, .reusable = false}, SHIFT(85),
  [145] = {.count = 1, .reusable = false}, SHIFT(86),
  [147] = {.count = 1, .reusable = false}, SHIFT(87),
  [149] = {.count = 1, .reusable = false}, SHIFT(88),
  [151] = {.count = 1, .reusable = false}, SHIFT(89),
  [153] = {.count = 1, .reusable = false}, SHIFT(90),
  [155] = {.count = 1, .reusable = false}, SHIFT(94),
  [157] = {.count = 1, .reusable = false}, SHIFT(96),
  [159] = {.count = 1, .reusable = false}, SHIFT(97),
  [161] = {.count = 1, .reusable = false}, SHIFT(104),
  [163] = {.count = 1, .reusable = false}, SHIFT(99),
  [165] = {.count = 1, .reusable = false}, SHIFT(100),
  [167] = {.count = 1, .reusable = false}, SHIFT(101),
  [169] = {.count = 1, .reusable = false}, SHIFT(102),
  [171] = {.count = 1, .reusable = false}, SHIFT(103),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_field, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_field, 2),
  [177] = {.count = 1, .reusable = false}, SHIFT(109),
  [179] = {.count = 1, .reusable = false}, SHIFT(113),
  [181] = {.count = 1, .reusable = false}, SHIFT(110),
  [183] = {.count = 1, .reusable = false}, SHIFT(116),
  [185] = {.count = 1, .reusable = false}, SHIFT(120),
  [187] = {.count = 1, .reusable = false}, SHIFT(117),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 2),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_lhs, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2),
  [195] = {.count = 1, .reusable = false}, SHIFT(124),
  [197] = {.count = 1, .reusable = false}, SHIFT(130),
  [199] = {.count = 1, .reusable = false}, SHIFT(125),
  [201] = {.count = 1, .reusable = true}, SHIFT(135),
  [203] = {.count = 1, .reusable = true}, SHIFT(134),
  [205] = {.count = 1, .reusable = false}, SHIFT(136),
  [207] = {.count = 1, .reusable = false}, SHIFT(137),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_function_clause, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [233] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [236] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym__expr1, 2),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(139),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(141),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expr1_repeat1, 2), SHIFT_REPEAT(140),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__application, 2),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__application, 2),
  [256] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(139),
  [259] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(141),
  [262] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(140),
  [265] = {.count = 1, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2),
  [267] = {.count = 1, .reusable = false}, SHIFT(146),
  [269] = {.count = 1, .reusable = true}, SHIFT(148),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__expr1, 1),
  [273] = {.count = 1, .reusable = true}, SHIFT(149),
  [275] = {.count = 1, .reusable = false}, SHIFT(150),
  [277] = {.count = 1, .reusable = false}, SHIFT(151),
  [279] = {.count = 1, .reusable = true}, SHIFT(153),
  [281] = {.count = 1, .reusable = true}, SHIFT(155),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym__atom_curly, 3),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym__atom_curly, 3),
  [287] = {.count = 1, .reusable = false}, SHIFT(157),
  [289] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(159),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(161),
  [295] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(160),
  [298] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(18),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(18),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(82),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(21),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typed_bindings1_repeat1, 2), SHIFT_REPEAT(22),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_binding_name, 1),
  [317] = {.count = 1, .reusable = false}, SHIFT(163),
  [319] = {.count = 1, .reusable = false}, SHIFT(164),
  [321] = {.count = 1, .reusable = false}, SHIFT(165),
  [323] = {.count = 1, .reusable = false}, SHIFT(168),
  [325] = {.count = 1, .reusable = false}, SHIFT(172),
  [327] = {.count = 1, .reusable = false}, SHIFT(169),
  [329] = {.count = 1, .reusable = false}, SHIFT(175),
  [331] = {.count = 1, .reusable = false}, SHIFT(181),
  [333] = {.count = 1, .reusable = false}, SHIFT(176),
  [335] = {.count = 1, .reusable = true}, SHIFT(185),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 1),
  [339] = {.count = 1, .reusable = true}, SHIFT(186),
  [341] = {.count = 1, .reusable = true}, SHIFT(187),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym__typed_untyped_binding1, 1),
  [345] = {.count = 1, .reusable = false}, SHIFT(189),
  [347] = {.count = 1, .reusable = false}, SHIFT(195),
  [349] = {.count = 1, .reusable = false}, SHIFT(190),
  [351] = {.count = 1, .reusable = true}, SHIFT(199),
  [353] = {.count = 1, .reusable = true}, SHIFT(201),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_record, 3),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_record, 3),
  [359] = {.count = 1, .reusable = true}, SHIFT(203),
  [361] = {.count = 1, .reusable = true}, SHIFT(204),
  [363] = {.count = 1, .reusable = false}, SHIFT(205),
  [365] = {.count = 1, .reusable = false}, SHIFT(206),
  [367] = {.count = 1, .reusable = false}, SHIFT(207),
  [369] = {.count = 1, .reusable = false}, SHIFT(210),
  [371] = {.count = 1, .reusable = false}, SHIFT(208),
  [373] = {.count = 1, .reusable = false}, SHIFT(213),
  [375] = {.count = 1, .reusable = false}, SHIFT(211),
  [377] = {.count = 1, .reusable = true}, SHIFT(214),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(217),
  [383] = {.count = 1, .reusable = true}, SHIFT(218),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym__arg_names, 1),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures1, 1),
  [389] = {.count = 1, .reusable = false}, SHIFT(221),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_rewrite_equations, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_rewrite_equations, 2),
  [395] = {.count = 1, .reusable = false}, SHIFT(225),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_with_expressions, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_with_expressions, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_lhs, 3),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_lhs, 3),
  [405] = {.count = 1, .reusable = false}, SHIFT(229),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_rhs, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_rhs, 2),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 1),
  [413] = {.count = 1, .reusable = false}, SHIFT(231),
  [415] = {.count = 1, .reusable = true}, SHIFT(231),
  [417] = {.count = 1, .reusable = false}, SHIFT(232),
  [419] = {.count = 1, .reusable = false}, SHIFT(236),
  [421] = {.count = 1, .reusable = false}, SHIFT(233),
  [423] = {.count = 1, .reusable = false}, SHIFT(238),
  [425] = {.count = 1, .reusable = false}, SHIFT(240),
  [427] = {.count = 1, .reusable = false}, SHIFT(248),
  [429] = {.count = 1, .reusable = false}, SHIFT(241),
  [431] = {.count = 1, .reusable = false}, SHIFT(242),
  [433] = {.count = 1, .reusable = false}, SHIFT(243),
  [435] = {.count = 1, .reusable = false}, SHIFT(244),
  [437] = {.count = 1, .reusable = false}, SHIFT(245),
  [439] = {.count = 1, .reusable = false}, SHIFT(250),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 2),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_where_clause, 2),
  [445] = {.count = 1, .reusable = true}, SHIFT(255),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_name, 1),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_function_clause, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_function_clause, 3),
  [453] = {.count = 1, .reusable = false}, SHIFT(256),
  [455] = {.count = 1, .reusable = false}, SHIFT(139),
  [457] = {.count = 1, .reusable = false}, SHIFT(141),
  [459] = {.count = 1, .reusable = false}, SHIFT(140),
  [461] = {.count = 1, .reusable = true}, SHIFT(258),
  [463] = {.count = 1, .reusable = true}, SHIFT(259),
  [465] = {.count = 1, .reusable = true}, SHIFT(260),
  [467] = {.count = 1, .reusable = true}, SHIFT(261),
  [469] = {.count = 1, .reusable = true}, SHIFT(263),
  [471] = {.count = 1, .reusable = false}, SHIFT(264),
  [473] = {.count = 1, .reusable = false}, SHIFT(270),
  [475] = {.count = 1, .reusable = false}, SHIFT(265),
  [477] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(274),
  [480] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(276),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym__application_repeat1, 2), SHIFT_REPEAT(275),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_expr, 3),
  [488] = {.count = 1, .reusable = true}, SHIFT(281),
  [490] = {.count = 1, .reusable = false}, SHIFT(282),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 2),
  [494] = {.count = 1, .reusable = true}, SHIFT(287),
  [496] = {.count = 1, .reusable = true}, SHIFT(288),
  [498] = {.count = 1, .reusable = false}, SHIFT(289),
  [500] = {.count = 1, .reusable = true}, SHIFT(291),
  [502] = {.count = 1, .reusable = true}, SHIFT(293),
  [504] = {.count = 1, .reusable = false}, SHIFT(294),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 4),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_data_signature_only, 4),
  [510] = {.count = 1, .reusable = false}, SHIFT(296),
  [512] = {.count = 1, .reusable = false}, SHIFT(297),
  [514] = {.count = 1, .reusable = true}, SHIFT(297),
  [516] = {.count = 1, .reusable = false}, SHIFT(298),
  [518] = {.count = 1, .reusable = false}, SHIFT(302),
  [520] = {.count = 1, .reusable = false}, SHIFT(299),
  [522] = {.count = 1, .reusable = false}, SHIFT(304),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_data, 4),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_data, 4),
  [528] = {.count = 1, .reusable = true}, SHIFT(307),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(84),
  [533] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(85),
  [536] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(86),
  [539] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(87),
  [542] = {.count = 2, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2), SHIFT_REPEAT(88),
  [545] = {.count = 1, .reusable = false}, REDUCE(aux_sym__typed_untyped_binding1_repeat1, 2),
  [547] = {.count = 1, .reusable = false}, SHIFT(308),
  [549] = {.count = 1, .reusable = true}, SHIFT(296),
  [551] = {.count = 1, .reusable = true}, SHIFT(310),
  [553] = {.count = 1, .reusable = false}, SHIFT(311),
  [555] = {.count = 1, .reusable = false}, SHIFT(314),
  [557] = {.count = 1, .reusable = false}, SHIFT(312),
  [559] = {.count = 1, .reusable = false}, SHIFT(316),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 4),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym_record_signature_only, 4),
  [565] = {.count = 1, .reusable = false}, SHIFT(318),
  [567] = {.count = 1, .reusable = true}, SHIFT(319),
  [569] = {.count = 1, .reusable = false}, SHIFT(320),
  [571] = {.count = 1, .reusable = false}, SHIFT(321),
  [573] = {.count = 1, .reusable = false}, SHIFT(322),
  [575] = {.count = 1, .reusable = false}, SHIFT(323),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_record, 4),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_record, 4),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_name, 2),
  [583] = {.count = 1, .reusable = false}, SHIFT(331),
  [585] = {.count = 1, .reusable = false}, SHIFT(332),
  [587] = {.count = 1, .reusable = false}, SHIFT(333),
  [589] = {.count = 1, .reusable = true}, SHIFT(334),
  [591] = {.count = 1, .reusable = false}, SHIFT(335),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym__maybe_dotted_names1, 1),
  [595] = {.count = 1, .reusable = false}, SHIFT(336),
  [597] = {.count = 1, .reusable = false}, SHIFT(337),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 2),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 2),
  [603] = {.count = 1, .reusable = true}, SHIFT(339),
  [605] = {.count = 1, .reusable = false}, SHIFT(340),
  [607] = {.count = 1, .reusable = false}, SHIFT(346),
  [609] = {.count = 1, .reusable = false}, SHIFT(341),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__arg_type_signatures_block, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym__arg_type_signatures_block, 3),
  [615] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(104),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(99),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(100),
  [624] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2), SHIFT_REPEAT(101),
  [627] = {.count = 1, .reusable = false}, REDUCE(aux_sym__arg_names_repeat1, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2),
  [631] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(104),
  [634] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(99),
  [637] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(100),
  [640] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(101),
  [643] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(102),
  [646] = {.count = 2, .reusable = false}, REDUCE(aux_sym__arg_type_signatures1_repeat1, 2), SHIFT_REPEAT(103),
  [649] = {.count = 1, .reusable = true}, SHIFT(350),
  [651] = {.count = 1, .reusable = true}, SHIFT(351),
  [653] = {.count = 1, .reusable = true}, SHIFT(352),
  [655] = {.count = 1, .reusable = false}, SHIFT(354),
  [657] = {.count = 1, .reusable = false}, SHIFT(356),
  [659] = {.count = 1, .reusable = false}, SHIFT(358),
  [661] = {.count = 1, .reusable = false}, SHIFT(359),
  [663] = {.count = 1, .reusable = false}, SHIFT(360),
  [665] = {.count = 1, .reusable = true}, SHIFT(361),
  [667] = {.count = 1, .reusable = true}, SHIFT(363),
  [669] = {.count = 1, .reusable = true}, SHIFT(364),
  [671] = {.count = 1, .reusable = true}, SHIFT(367),
  [673] = {.count = 1, .reusable = true}, SHIFT(368),
  [675] = {.count = 1, .reusable = true}, SHIFT(369),
  [677] = {.count = 1, .reusable = true}, SHIFT(372),
  [679] = {.count = 1, .reusable = true}, SHIFT(373),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym__declarations1_, 1),
  [683] = {.count = 1, .reusable = true}, SHIFT(377),
  [685] = {.count = 1, .reusable = true}, SHIFT(378),
  [687] = {.count = 1, .reusable = true}, SHIFT(382),
  [689] = {.count = 1, .reusable = false}, SHIFT(383),
  [691] = {.count = 1, .reusable = true}, SHIFT(385),
  [693] = {.count = 1, .reusable = false}, SHIFT(386),
  [695] = {.count = 1, .reusable = false}, SHIFT(390),
  [697] = {.count = 1, .reusable = false}, SHIFT(387),
  [699] = {.count = 1, .reusable = false}, SHIFT(392),
  [701] = {.count = 1, .reusable = false}, SHIFT(393),
  [703] = {.count = 1, .reusable = true}, SHIFT(395),
  [705] = {.count = 1, .reusable = true}, SHIFT(396),
  [707] = {.count = 1, .reusable = true}, SHIFT(397),
  [709] = {.count = 1, .reusable = true}, SHIFT(398),
  [711] = {.count = 1, .reusable = true}, SHIFT(399),
  [713] = {.count = 1, .reusable = true}, SHIFT(400),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 3),
  [717] = {.count = 1, .reusable = true}, SHIFT(402),
  [719] = {.count = 1, .reusable = true}, SHIFT(405),
  [721] = {.count = 1, .reusable = true}, SHIFT(406),
  [723] = {.count = 1, .reusable = false}, SHIFT(408),
  [725] = {.count = 1, .reusable = true}, REDUCE(sym_data_signature_only, 5),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym_data_signature_only, 5),
  [729] = {.count = 1, .reusable = false}, SHIFT(410),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_data, 5),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_data, 5),
  [735] = {.count = 1, .reusable = true}, SHIFT(411),
  [737] = {.count = 1, .reusable = false}, SHIFT(412),
  [739] = {.count = 1, .reusable = true}, SHIFT(410),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym_record, 5),
  [743] = {.count = 1, .reusable = false}, REDUCE(sym_record, 5),
  [745] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 2),
  [747] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 2),
  [749] = {.count = 1, .reusable = true}, SHIFT(415),
  [751] = {.count = 1, .reusable = false}, SHIFT(416),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_record_induction, 1),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_record_eta, 1),
  [757] = {.count = 1, .reusable = true}, SHIFT(417),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 1),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 1),
  [763] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 1),
  [765] = {.count = 1, .reusable = true}, SHIFT(419),
  [767] = {.count = 1, .reusable = true}, SHIFT(320),
  [769] = {.count = 1, .reusable = true}, SHIFT(321),
  [771] = {.count = 1, .reusable = true}, SHIFT(322),
  [773] = {.count = 1, .reusable = true}, SHIFT(323),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_record_signature_only, 5),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym_record_signature_only, 5),
  [779] = {.count = 1, .reusable = false}, SHIFT(423),
  [781] = {.count = 1, .reusable = false}, SHIFT(425),
  [783] = {.count = 1, .reusable = false}, SHIFT(424),
  [785] = {.count = 1, .reusable = false}, SHIFT(426),
  [787] = {.count = 1, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 3),
  [791] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(335),
  [794] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(208),
  [797] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(337),
  [800] = {.count = 2, .reusable = false}, REDUCE(aux_sym__maybe_dotted_names1_repeat1, 2), SHIFT_REPEAT(211),
  [803] = {.count = 1, .reusable = true}, SHIFT(427),
  [805] = {.count = 1, .reusable = false}, SHIFT(429),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 3),
  [809] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 3),
  [811] = {.count = 1, .reusable = false}, SHIFT(431),
  [813] = {.count = 1, .reusable = true}, SHIFT(431),
  [815] = {.count = 1, .reusable = false}, SHIFT(432),
  [817] = {.count = 1, .reusable = false}, SHIFT(436),
  [819] = {.count = 1, .reusable = false}, SHIFT(433),
  [821] = {.count = 1, .reusable = false}, SHIFT(438),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_expr, 3),
  [825] = {.count = 1, .reusable = true}, SHIFT(440),
  [827] = {.count = 1, .reusable = true}, SHIFT(441),
  [829] = {.count = 1, .reusable = false}, SHIFT(442),
  [831] = {.count = 1, .reusable = false}, SHIFT(443),
  [833] = {.count = 1, .reusable = false}, SHIFT(445),
  [835] = {.count = 1, .reusable = false}, SHIFT(447),
  [837] = {.count = 1, .reusable = false}, SHIFT(448),
  [839] = {.count = 1, .reusable = false}, SHIFT(451),
  [841] = {.count = 1, .reusable = false}, SHIFT(455),
  [843] = {.count = 1, .reusable = false}, SHIFT(452),
  [845] = {.count = 1, .reusable = false}, SHIFT(458),
  [847] = {.count = 1, .reusable = false}, SHIFT(462),
  [849] = {.count = 1, .reusable = false}, SHIFT(459),
  [851] = {.count = 1, .reusable = false}, SHIFT(466),
  [853] = {.count = 1, .reusable = false}, SHIFT(472),
  [855] = {.count = 1, .reusable = false}, SHIFT(467),
  [857] = {.count = 1, .reusable = true}, SHIFT(477),
  [859] = {.count = 1, .reusable = true}, SHIFT(476),
  [861] = {.count = 1, .reusable = false}, SHIFT(478),
  [863] = {.count = 1, .reusable = true}, REDUCE(aux_sym__declarations1__repeat1, 2),
  [865] = {.count = 1, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym__declarations0_, 3),
  [869] = {.count = 1, .reusable = false}, REDUCE(sym__declarations0_, 3),
  [871] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(240),
  [874] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(248),
  [877] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(241),
  [880] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(242),
  [883] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(243),
  [886] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(244),
  [889] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(245),
  [892] = {.count = 2, .reusable = false}, REDUCE(aux_sym__declarations1__repeat1, 2), SHIFT_REPEAT(250),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_where_clause, 4),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_where_clause, 4),
  [899] = {.count = 1, .reusable = true}, SHIFT(480),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 5),
  [903] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 5),
  [905] = {.count = 1, .reusable = true}, SHIFT(481),
  [907] = {.count = 1, .reusable = false}, SHIFT(483),
  [909] = {.count = 1, .reusable = true}, SHIFT(485),
  [911] = {.count = 1, .reusable = false}, REDUCE(sym_untyped_binding, 4),
  [913] = {.count = 1, .reusable = true}, SHIFT(489),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym_data, 6),
  [917] = {.count = 1, .reusable = false}, REDUCE(sym_data, 6),
  [919] = {.count = 1, .reusable = true}, SHIFT(490),
  [921] = {.count = 1, .reusable = true}, SHIFT(491),
  [923] = {.count = 1, .reusable = true}, SHIFT(492),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_record, 6),
  [927] = {.count = 1, .reusable = false}, REDUCE(sym_record, 6),
  [929] = {.count = 1, .reusable = true}, SHIFT(493),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor, 2),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 3),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 3),
  [937] = {.count = 1, .reusable = true}, SHIFT(494),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 2),
  [941] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 2),
  [943] = {.count = 1, .reusable = false}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [945] = {.count = 1, .reusable = true}, SHIFT(495),
  [947] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(496),
  [950] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(321),
  [953] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(322),
  [956] = {.count = 2, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2), SHIFT_REPEAT(323),
  [959] = {.count = 1, .reusable = false}, REDUCE(sym_arg_name, 4),
  [961] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(425),
  [964] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2),
  [966] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arg_name_repeat1, 2), SHIFT_REPEAT(426),
  [969] = {.count = 1, .reusable = true}, REDUCE(sym_arg_type_signature, 4),
  [971] = {.count = 1, .reusable = false}, REDUCE(sym_arg_type_signature, 4),
  [973] = {.count = 1, .reusable = true}, SHIFT(499),
  [975] = {.count = 1, .reusable = false}, SHIFT(501),
  [977] = {.count = 1, .reusable = false}, SHIFT(503),
  [979] = {.count = 1, .reusable = false}, SHIFT(509),
  [981] = {.count = 1, .reusable = false}, SHIFT(504),
  [983] = {.count = 1, .reusable = true}, SHIFT(513),
  [985] = {.count = 1, .reusable = true}, SHIFT(514),
  [987] = {.count = 1, .reusable = true}, SHIFT(515),
  [989] = {.count = 1, .reusable = true}, SHIFT(517),
  [991] = {.count = 1, .reusable = true}, SHIFT(519),
  [993] = {.count = 1, .reusable = true}, SHIFT(521),
  [995] = {.count = 1, .reusable = true}, SHIFT(522),
  [997] = {.count = 1, .reusable = true}, SHIFT(523),
  [999] = {.count = 1, .reusable = false}, SHIFT(524),
  [1001] = {.count = 1, .reusable = false}, SHIFT(526),
  [1003] = {.count = 1, .reusable = false}, SHIFT(528),
  [1005] = {.count = 1, .reusable = true}, SHIFT(530),
  [1007] = {.count = 1, .reusable = false}, SHIFT(531),
  [1009] = {.count = 1, .reusable = false}, SHIFT(534),
  [1011] = {.count = 1, .reusable = false}, SHIFT(532),
  [1013] = {.count = 1, .reusable = false}, SHIFT(536),
  [1015] = {.count = 1, .reusable = true}, SHIFT(538),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_typed_binding, 6),
  [1019] = {.count = 1, .reusable = false}, REDUCE(sym_typed_binding, 6),
  [1021] = {.count = 1, .reusable = true}, SHIFT(539),
  [1023] = {.count = 1, .reusable = true}, SHIFT(540),
  [1025] = {.count = 1, .reusable = true}, REDUCE(sym_data, 7),
  [1027] = {.count = 1, .reusable = false}, REDUCE(sym_data, 7),
  [1029] = {.count = 1, .reusable = false}, SHIFT(541),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym_record_declarations_block, 4),
  [1033] = {.count = 1, .reusable = false}, REDUCE(sym_record_declarations_block, 4),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym__record_directives1, 3),
  [1037] = {.count = 1, .reusable = false}, REDUCE(sym__record_directives1, 3),
  [1039] = {.count = 1, .reusable = true}, SHIFT(542),
  [1041] = {.count = 1, .reusable = true}, SHIFT(543),
  [1043] = {.count = 1, .reusable = true}, REDUCE(sym_record, 7),
  [1045] = {.count = 1, .reusable = false}, REDUCE(sym_record, 7),
  [1047] = {.count = 1, .reusable = true}, SHIFT(544),
  [1049] = {.count = 1, .reusable = false}, SHIFT(545),
  [1051] = {.count = 1, .reusable = true}, SHIFT(547),
  [1053] = {.count = 1, .reusable = true}, SHIFT(548),
  [1055] = {.count = 1, .reusable = false}, SHIFT(549),
  [1057] = {.count = 1, .reusable = false}, SHIFT(552),
  [1059] = {.count = 1, .reusable = false}, SHIFT(550),
  [1061] = {.count = 1, .reusable = false}, SHIFT(554),
  [1063] = {.count = 1, .reusable = true}, SHIFT(556),
  [1065] = {.count = 1, .reusable = true}, SHIFT(558),
  [1067] = {.count = 1, .reusable = true}, SHIFT(559),
  [1069] = {.count = 1, .reusable = true}, SHIFT(564),
  [1071] = {.count = 1, .reusable = true}, SHIFT(565),
  [1073] = {.count = 1, .reusable = true}, SHIFT(566),
  [1075] = {.count = 1, .reusable = false}, SHIFT(568),
  [1077] = {.count = 1, .reusable = true}, SHIFT(570),
  [1079] = {.count = 1, .reusable = true}, SHIFT(571),
  [1081] = {.count = 1, .reusable = true}, SHIFT(572),
  [1083] = {.count = 1, .reusable = true}, SHIFT(573),
  [1085] = {.count = 1, .reusable = true}, REDUCE(aux_sym__record_directives1_repeat1, 2),
  [1087] = {.count = 1, .reusable = true}, SHIFT(574),
  [1089] = {.count = 1, .reusable = true}, SHIFT(575),
  [1091] = {.count = 1, .reusable = false}, SHIFT(576),
  [1093] = {.count = 1, .reusable = true}, SHIFT(578),
  [1095] = {.count = 1, .reusable = true}, SHIFT(580),
  [1097] = {.count = 1, .reusable = true}, SHIFT(582),
  [1099] = {.count = 1, .reusable = true}, SHIFT(583),
  [1101] = {.count = 1, .reusable = true}, REDUCE(sym_record_constructor_instance, 5),
  [1103] = {.count = 1, .reusable = false}, REDUCE(sym_record_constructor_instance, 5),
  [1105] = {.count = 1, .reusable = false}, SHIFT(584),
  [1107] = {.count = 1, .reusable = true}, SHIFT(585),
  [1109] = {.count = 1, .reusable = true}, SHIFT(586),
  [1111] = {.count = 1, .reusable = true}, SHIFT(587),
  [1113] = {.count = 1, .reusable = true}, SHIFT(589),
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
