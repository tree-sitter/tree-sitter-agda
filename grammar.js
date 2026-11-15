/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const BRACE1 = [['{', '}']];
const BRACE2 = [['{{', '}}'], ['⦃', '⦄']];
// const BRACES = [...BRACE1, ...BRACE2];
const IDIOM = [['(|', '|)'], ['⦇', '⦈']];
const PAREN = [['(', ')']];

// numbers and literals
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;

module.exports = grammar({
  name: 'agda',

  word: $ => $.id,

  extras: $ => [
    $.comment,
    $.pragma,
    /\s|\\n/,
  ],

  externals: $ => [
    $._dummy,
    $.comment,
    $._newline,
    $._indent,
    $._dedent,
    $._let_vopen,
    $._let_vclose,
    $._with_vopen,
    $._with_vclose,
  ],

  rules: {
    source_file: $ => seq(
      $._indent,
      // TopDeclarations
      optional($._declarations1),
      optional($._dedent),
    ),

    _semi: $ => choice(';', $._newline),


    // //////////////////////////////////////////////////////////////////////
    // Constants
    // //////////////////////////////////////////////////////////////////////

    _FORALL: _ => choice('forall', '∀'),
    _ARROW: _ => choice('->', '→'),
    _LAMBDA: _ => choice('\\', 'λ'),
    _ELLIPSIS: _ => choice('...', '…'),

    // //////////////////////////////////////////////////////////////////////
    // Top-level Declarations
    // //////////////////////////////////////////////////////////////////////

    // Declarations0
    // indented, 0 or more declarations
    _declarations: $ => indent($, $._declarations1),
    _declarations0: $ => choice(
      seq($._indent, $._dedent),
      $._declarations,
    ),
    _declarations1: $ => seq(
      $._declaration,
      optional(choice(
        seq($._semi, $._declarations1),
        $._newline,
      )),
    ),

    // Declaration
    _declaration: $ => choice(
      $.fields,
      $.function,
      $.data,
      $.data_signature,
      $.record,
      $.record_signature,
      $.infix,
      $.generalize,
      $.mutual,
      $.abstract,
      $.private,
      $.instance,
      $.macro,
      $.postulate,
      $.primitive,
      $.open,
      $.import,
      $.module_macro,
      $.module,
      $.pragma,
      $.syntax,
      $.pattern,
      $.unquote_decl,
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Field
    // //////////////////////////////////////////////////////////////////////

    // Fields
    fields: $ => seq(
      'field',
      optional($._arg_type_signatures_or_empty),
    ),

    // ArgTypeSignaturesOrEmpty
    _arg_type_signatures_or_empty: $ => indent(
      $,
      // ArgTypeSignatures0
      optional($._arg_type_signatures1)),

    // ArgTypeSignatures
    _arg_type_signatures: $ => indent($, $._arg_type_signatures1),
    // ArgTypeSignatures1
    _arg_type_signatures1: $ => sepR($._semi, $.signature),
    // ArgTypeSigs
    _arg_type_sigs: $ => choice(
      seq(
        optional('overlap'),
        $._modal_arg_ids,
        ':',
        $.expr,
      ),
      seq(
        'instance',
        $._arg_type_signatures,
      ),
    ),

    signature: $ => $._arg_type_sigs,

    // ModalArgIds
    _modal_arg_ids: $ => seq(repeat($.attribute), $._arg_ids),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Functions
    // //////////////////////////////////////////////////////////////////////

    // We are splitting FunClause into 2 cases:
    //  *. function declaration (':')
    //  *. function definitions ('=')
    // Doing so we can mark the LHS of a function declaration as 'function_name'

    // FunClause
    function: $ => choice(
      seq(
        optional($.attributes),
        alias($.lhs_decl, $.lhs),
        alias(optional($.rhs_decl), $.rhs),
        optional($.where),
      ),
      seq(
        optional($.attributes),
        alias($.lhs_defn, $.lhs),
        alias(optional($.rhs_defn), $.rhs),
        optional($.where),
      ),
    ),

    // LHS
    lhs_decl: $ => seq(
      alias($._unnamed_with_exprs, $.function_name),
      optional($.rewrite_equations),
      optional($.with_expressions),
    ),
    lhs_defn: $ => prec(1, seq(
      $._unnamed_with_exprs,
      optional($.rewrite_equations),
      optional($.with_expressions),
    )),

    // RHS
    rhs_decl: $ => seq(':', $.expr),
    rhs_defn: $ => seq('=', $.expr),

    // WHS/WithExpressions
    with_expressions: $ => seq('with', $._with_vopen, alias($._with_exprs, $.expr)),

    // WHS/UnnamedWithExprs
    rewrite_equations: $ => seq('rewrite', $._unnamed_with_exprs),

    // WhereClause
    where: $ => seq(
      optional(seq(
        'module',
        $.bid,
      )),
      'where',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Data
    // //////////////////////////////////////////////////////////////////////

    data_name: $ => alias($.id, 'data_name'),

    data: $ => seq(
      choice('data', 'codata'),
      $.data_name,
      optional($._typed_untyped_bindings),
      optional(seq(':', $.expr)),
      'where',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Data Signature
    // //////////////////////////////////////////////////////////////////////

    data_signature: $ => seq(
      'data',
      $.data_name,
      optional($._typed_untyped_bindings),
      ':',
      $.expr,
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Record
    // //////////////////////////////////////////////////////////////////////

    // Record
    record: $ => seq(
      'record',
      alias($._atom_no_curly, $.record_name),
      optional($._typed_untyped_bindings),
      optional(seq(':', $.expr)),
      'where',
      $.record_declarations_block,
    ),

    // RecordDeclarations
    record_declarations_block: $ =>
      choice(
        seq($._indent, $._dedent),
        indent($,
          // FIXME: do not want to deal with conflicts
          sepR($._semi, choice($._record_directive, $._declaration)),
        ),
      ),

    // RecordDirective
    _record_directive: $ => choice(
      $.record_constructor,
      $.record_constructor_instance,
      $.record_induction,
      $.record_eta,
      // XXX: missing pattern matching
    ),
    // RecordConstructorName/RecordConstructorName
    record_constructor: $ => seq('constructor', $.id),

    // Declaration of record constructor name.
    record_constructor_instance: $ => seq(
      'instance',
      indent($, $.record_constructor),
    ),

    // RecordInduction
    record_induction: _ => choice(
      'inductive',
      'coinductive',
    ),

    // RecordEta
    record_eta: _ => choice(
      'eta-equality',
      'no-eta-equality',
    ),


    // //////////////////////////////////////////////////////////////////////
    // Declaration: Record Signature
    // //////////////////////////////////////////////////////////////////////

    record_signature: $ => seq(
      'record',
      alias($._atom_no_curly, $.record_name),
      optional($._typed_untyped_bindings),
      ':',
      $.expr,
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Infix
    // //////////////////////////////////////////////////////////////////////

    infix: $ => seq(
      choice('infix', 'infixl', 'infixr'),
      $.integer,
      repeat1($.bid),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Generalize
    // //////////////////////////////////////////////////////////////////////

    generalize: $ => seq(
      'variable',
      optional($._arg_type_signatures_or_empty),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Mutual
    // //////////////////////////////////////////////////////////////////////

    mutual: $ => seq(
      'mutual',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Abstract
    // //////////////////////////////////////////////////////////////////////

    abstract: $ => seq(
      'abstract',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Private
    // //////////////////////////////////////////////////////////////////////

    private: $ => seq(
      'private',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Instance
    // //////////////////////////////////////////////////////////////////////

    instance: $ => seq(
      'instance',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Macro
    // //////////////////////////////////////////////////////////////////////

    macro: $ => seq(
      'macro',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Postulate
    // //////////////////////////////////////////////////////////////////////

    postulate: $ => seq(
      'postulate',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Primitive
    // //////////////////////////////////////////////////////////////////////

    primitive: $ => seq(
      'primitive',
      $.type_signature,
    ),

    // compat only for ArgTypeSignaturesOrEmpty
    type_signature: $ => indent(
      $,
      // ArgTypeSignatures0
      optional(sepR($._semi, $._arg_type_sigs))),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Open
    // //////////////////////////////////////////////////////////////////////


    open: $ => seq(
      'open',
      choice($.import, $.module_name),
      optional($._atoms),
      optional($._import_directives),
    ),
    import: $ => seq('import', $.module_name),


    // ModuleName
    module_name: $ => $._qid,

    // ImportDirectives and shit
    _import_directives: $ => repeat1($.import_directive),
    import_directive: $ => choice(
      'public',
      seq('using', '(', $._comma_import_names, ')'),
      seq('hiding', '(', $._comma_import_names, ')'),
      seq('renaming', '(', sepR(';', $.renaming), ')'),
      seq('using', '(', ')'),
      seq('hiding', '(', ')'),
      seq('renaming', '(', ')'),
    ),

    // CommaImportNames
    _comma_import_names: $ => sepR(';', $._import_name),

    // Renaming
    renaming: $ => seq(
      optional('module'),
      $.id,
      'to',
      $.id,
    ),

    // ImportName
    _import_name: $ => seq(
      optional('module'), $.id,
    ),


    // //////////////////////////////////////////////////////////////////////
    // Declaration: Module Macro
    // //////////////////////////////////////////////////////////////////////

    // ModuleMacro
    module_macro: $ => seq(
      choice(
        seq('module', alias($._qid, $.module_name)),
        seq('open', 'module', alias($._qid, $.module_name)),
      ),
      optional($._typed_untyped_bindings),
      '=',
      $.module_application,
      repeat($.import_directive),
    ),

    // ModuleApplication
    module_application: $ => seq(
      $.module_name,
      choice(
        prec(1, brace_double($._ELLIPSIS)),
        optional($._atoms),
      ),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Module
    // //////////////////////////////////////////////////////////////////////

    // Module
    module: $ => seq(
      'module',
      alias(choice($._qid, '_'), $.module_name),
      optional($._typed_untyped_bindings),
      'where',
      optional($._declarations0),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Pragma
    // //////////////////////////////////////////////////////////////////////

    // Pragma / DeclarationPragma
    pragma: _ => token(seq(
      '{-#',
      repeat(choice(
        /[^#]/,
        /#[^-]/,
        /#\-[^}]/,
      )),
      '#-}',
    )),

    // CatchallPragma
    catchall_pragma: _ => seq('{-#', 'CATCHALL', '#-}'),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Syntax
    // //////////////////////////////////////////////////////////////////////

    syntax: $ => seq(
      'syntax',
      $.id,
      $.hole_names,
      '=',
      repeat1($.id),
    ),

    // HoleNames
    hole_names: $ => repeat1($.hole_name),
    hole_name: $ => choice(
      $._simple_top_hole,
      brace($._simple_hole),
      brace_double($._simple_hole),
      brace($.id, '=', $._simple_hole),
      brace_double($.id, '=', $._simple_hole),
    ),

    // SimpleTopHole
    _simple_top_hole: $ => choice(
      $.id,
      paren($._LAMBDA, $.bid, $._ARROW, $.id),
    ),

    // SimpleHole
    _simple_hole: $ => choice(
      $.id,
      seq($._LAMBDA, $.bid, $._ARROW, $.id),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Pattern Synonym
    // //////////////////////////////////////////////////////////////////////

    // PatternSyn
    pattern: $ => seq(
      'pattern',
      $.id,
      optional($._lambda_bindings), // PatternSynArgs
      '=',
      $.expr,
    ),

    // //////////////////////////////////////////////////////////////////////
    // Declaration: Unquoting declarations
    // //////////////////////////////////////////////////////////////////////

    // UnquoteDecl
    unquote_decl: $ => choice(
      seq('unquoteDecl', '=', $.expr),
      seq('unquoteDecl', $._ids, '=', $.expr),
      seq('unquoteDef', $._ids, '=', $.expr),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Names
    // //////////////////////////////////////////////////////////////////////

    // identifier: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
    id: _ => /([^\s\\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*/,

    // qualified identifier: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
    _qid: $ => prec.left(
      choice(
        // eslint-disable-next-line max-len
        alias(/(([^\s;\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*\.)*([^\s;\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*/, $.qid),
        alias($.id, $.qid),
      ),
    ),

    // BId
    bid: $ => alias(choice('_', $.id), 'bid'),

    // SpaceIds
    _ids: $ => repeat1($.id),

    _field_name: $ => alias($.id, $.field_name),
    _field_names: $ => repeat1($._field_name),

    // MaybeDottedId
    _maybe_dotted_id: $ => maybeDotted($._field_name),
    _maybe_dotted_ids: $ => repeat1($._maybe_dotted_id),

    // ArgIds
    _arg_ids: $ => repeat1($._arg_id),
    _arg_id: $ => choice(
      $._maybe_dotted_id,

      brace($._maybe_dotted_ids),
      brace_double($._maybe_dotted_ids),

      seq('.', brace($._field_names)),
      seq('.', brace_double($._field_names)),

      seq('..', brace($._field_names)),
      seq('..', brace_double($._field_names)),
    ),

    // CommaBIds / CommaBIdAndAbsurds
    _binding_ids_and_absurds: $ => prec(-1, choice(
      $._application,
      seq($._qid, '=', $._qid),
      seq($._qid, '=', '_'),
      seq('-', '=', $._qid),
      seq('-', '=', '_'),
    )),

    // Attribute
    attribute: $ => seq('@', $._expr_or_attr),
    attributes: $ => repeat1($.attribute),

    // //////////////////////////////////////////////////////////////////////
    // Expressions (terms and types)
    // //////////////////////////////////////////////////////////////////////

    // Expr
    expr: $ => choice(
      seq($._typed_bindings, $._ARROW, $.expr),
      seq(optional($.attributes), $._atoms, $._ARROW, $.expr),
      prec(-1, $._unnamed_with_exprs), // lowest precedence
    ),
    stmt: $ => choice(
      seq($._typed_bindings, $._ARROW, $.expr),
      seq(optional($.attributes), $._atoms, $._ARROW, $.expr),
      // seq($._unnamed_with_exprs, '=', $.expr),
      prec(-1, $._unnamed_with_exprs), // lowest precedence
    ),

    // UnnamedWithExprs/Expr1
    _unnamed_with_exprs: $ => choice(
      seq($._atoms, '|', $._unnamed_with_exprs),
      $._application,
    ),

    // WithExprs
    _with_exprs: $ => seq(
      $._atoms,
      optional(seq(alias($._with_vclose, 'in'), $.id)),
      optional(seq('|', $._with_exprs)),
    ),

    // ExprOrAttr
    _expr_or_attr: $ => choice(
      $.literal,
      $._qid,
      paren($._expr4),
    ),

    _expr4: $ => choice(
      seq($._unnamed_with_exprs, '=', $.expr),
      $.expr,
    ),

    // Application
    _application: $ => choice(
      $._expr2,
      seq($.atom, $._application),
    ),

    // Expr2
    _expr2: $ => choice(
      $.lambda,
      alias($.lambda_extended_or_absurd, $.lambda),
      $.forall,
      $.let,
      $.do,
      $.atom,
      // this is unused? can remove because 'in' interrupts 'instance'
      // seq('quoteGoal', $.id, 'in', $.expr),
      seq('tactic', $._atoms),
    ),

    // Expr3
    atom: $ => choice(
      $._atom_curly,
      $._atom_no_curly,
    ),
    // Application3 / OpenArgs (=optional)
    _atoms: $ => seq($.atom, optional($._atoms)),

    // XXX: missing '{{' Expr4 '}}'
    _atom_curly: $ => choice(
      brace(optional($._expr4)),
      brace_double(optional($._expr4)),
    ),

    _atom_no_curly: $ => choice(
      '_',
      'Prop',
      $.SetN,
      'quote',
      'quoteTerm',
      'quoteContext',
      'unquote',
      $.PropN,
      idiom(alias($._unnamed_with_exprs, $.expr)),
      '(|)',
      seq('(', ')'),
      seq($.id, '@', $.atom),
      seq('.', $.atom),
      seq('..', $.atom),
      $.record_assignments,
      alias($.field_assignments, $.record_assignments),
      $._ELLIPSIS,
      $._expr_or_attr,
    ),

    // ForallBindings
    forall: $ => seq($._FORALL, $._typed_untyped_bindings, $._ARROW, $.expr),

    // LetBody
    let: $ => prec.right(1, seq(
      'let',
      $._let_vopen,
      $._indent,
      $._declarations1,
      choice(
        $._dedent,
        $._let_body,
      ),
    )),

    _let_body: $ => seq(
      // dedent can still be triggered via layout
      optional($._dedent),
      alias($._let_vclose, 'in'),
      $.expr,
    ),

    // LamBindings
    lambda: $ => seq(
      $._LAMBDA,
      $._lambda_bindings,
      $._ARROW,
      $.expr,
    ),

    // LamBinds
    _lambda_bindings: $ => seq(
      repeat($._typed_untyped_binding),
      choice(
        $._typed_untyped_binding,
        seq('(', ')'),
        seq('{', '}'),
        seq('{{', '}}'),
        seq('⦃', '⦄'),
      ),
    ),

    // ExtendedOrAbsurdLam
    lambda_extended_or_absurd: $ => seq(
      $._LAMBDA,
      choice(
        // LamClauses (single non absurd lambda clause)
        brace($.lambda_clause),
        // LamClauses
        brace($._lambda_clauses),
        // LamWhereClauses
        seq('where', indent($, $._lambda_clauses)),
        // AbsurdLamBindings
        $._lambda_bindings,
      ),
    ),

    // bunch of `$._lambda_clause_maybe_absurd` sep by ';'
    _lambda_clauses: $ => prec.left(seq(
      repeat(seq($._lambda_clause_maybe_absurd, $._semi)),
      $._lambda_clause_maybe_absurd,
    )),

    // AbsurdLamBindings | AbsurdLamClause
    _lambda_clause_maybe_absurd: $ => prec.left(choice(
      $.lambda_clause_absurd,
      $.lambda_clause,
    )),

    // AbsurdLamClause
    lambda_clause_absurd: $ => seq(
      optional($.catchall_pragma),
      $._application,
    ),

    // NonAbsurdLamClause
    lambda_clause: $ => seq(
      optional($.catchall_pragma),
      optional($._atoms), // Application3PossiblyEmpty
      $._ARROW,
      $.expr,
    ),

    do: $ => seq('do',
      indent($, $._do_stmts),
    ),

    // DoStmts
    _do_stmts: $ => seq(
      $._do_stmt,
      optional(
        choice($._newline, seq($._semi, $._do_stmts)))),

    // DoStmt
    _do_stmt: $ => seq(
      $.stmt, // should be expr???
      optional($.do_where),
    ),

    // DoWhere
    do_where: $ => seq(
      'where',
      $._lambda_clauses,
    ),

    // RecordAssignments
    record_assignments: $ => seq(
      'record',
      brace(optional($._record_assignments)),
    ),

    field_assignments: $ => seq(
      'record',
      $._atom_no_curly,
      brace(optional($._field_assignments)),
    ),

    // RecordAssignments1
    _record_assignments: $ => seq(
      repeat(seq($._record_assignment, ';')),
      $._record_assignment,
    ),


    // FieldAssignments1
    _field_assignments: $ => seq(
      repeat(seq($.field_assignment, ';')),
      $.field_assignment,
    ),

    // RecordAssignment
    _record_assignment: $ => choice(
      $.field_assignment,
      $.module_assignment,
    ),

    // FieldAssignment
    field_assignment: $ => seq(
      alias($.id, $.field_name),
      '=',
      $.expr,
    ),

    // ModuleAssignment
    module_assignment: $ => seq(
      $.module_name,
      optional($._atoms),
      optional($._import_directives),
    ),


    // //////////////////////////////////////////////////////////////////////
    // Bindings
    // //////////////////////////////////////////////////////////////////////

    // TypedBinding
    _typed_bindings: $ => repeat1($.typed_binding),
    typed_binding: $ => choice(
      maybeDotted(choice(
        paren($._application, ':', $.expr),
        brace($._binding_ids_and_absurds, ':', $.expr),
        brace_double($._binding_ids_and_absurds, ':', $.expr),
      )),
      paren($.attributes, $._application, ':', $.expr),
      brace($.attributes, $._binding_ids_and_absurds, ':', $.expr),
      brace_double($.attributes, $._binding_ids_and_absurds, ':', $.expr),
      paren($.open),
      paren('let', $._declarations),
    ),

    // TypedUntypedBindings1
    _typed_untyped_bindings: $ => repeat1($._typed_untyped_binding),
    _typed_untyped_binding: $ => choice(
      $.untyped_binding,
      $.typed_binding,
    ),

    // DomainFreeBinding / DomainFreeBindingAbsurd
    untyped_binding: $ => choice( // 13 variants
      maybeDotted(choice(
        $.bid,
        brace($._binding_ids_and_absurds),
        brace_double($._binding_ids_and_absurds),
      )),
      paren($._binding_ids_and_absurds),
      paren($.attributes, $._binding_ids_and_absurds),
      brace($.attributes, $._binding_ids_and_absurds),
      brace_double($.attributes, $._binding_ids_and_absurds),
    ),

    // //////////////////////////////////////////////////////////////////////
    // Literals
    // //////////////////////////////////////////////////////////////////////

    // -- Literals
    // <0,code> \'             { litChar }
    // <0,code,pragma_> \"     { litString }
    // <0,code> @integer       { literal LitNat }
    // <0,code> @float         { literal LitFloat }
    integer: _ => integer,
    string: _ => /\".*\"/,
    literal: _ => choice(
      integer,
      /\".*\"/,
    ),

    // //////////////////////////////////////////////////////////////////////
    // Comment
    // //////////////////////////////////////////////////////////////////////

    comment: _ => token(choice(
      prec(100, seq('--', /.*/)),
      '{--}',
      seq(
        '{-',
        /[^#]/,
        repeat(choice(
          /[^-]/, // anything but -
          /-[^}]/, // - not followed by }
        )),
        /-}\n*/, // eat newlines to prevent spurious `_newline`s affecting external parser
      ),
    )),

    // setN
    SetN: $ => prec.right(2, seq('Set', optional($.atom))),


    // //////////////////////////////////////////////////////////////////////
    // Unimplemented
    // //////////////////////////////////////////////////////////////////////


    // propN
    PropN: _ => 'propN',

  },
});


// //////////////////////////////////////////////////////////////////////
// Generic combinators
// //////////////////////////////////////////////////////////////////////

/**
 * Creates a rule to match one or more of the rules separated by `sep`.
 *
 * @param {RuleOrLiteral} sep
 *
 * @param {RuleOrLiteral} rule
 *
 * @returns {SeqRule}
 */
function sepR(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * Creates a rule that requires indentation before and dedentation after.
 *
 * @param {GrammarSymbols<any>} $
 *
 * @param {RuleOrLiteral[]} rule
 *
 * @returns {SeqRule}
 */
function indent($, ...rule) {
  return seq(
    $._indent,
    ...rule,
    $._dedent,
  );
}

// //////////////////////////////////////////////////////////////////////
// Language-specific combinators
// //////////////////////////////////////////////////////////////////////

/**
 * Creates a rule that matches a rule with a dot or two dots in front.
 *
 * @param {RuleOrLiteral} rule
 *
 * @returns {ChoiceRule}
 */
function maybeDotted(rule) {
  return choice(
    rule, // Relevant
    seq('.', rule), // Irrelevant
    seq('..', rule), // NonStrict
  );
}

/**
 * Flattens an array of arrays.
 *
 * @param {Array<Array<Array<string>>>} arrOfArrs
 *
 * @returns {Array<Array<string>>}
 */
function flatten(arrOfArrs) {
  return arrOfArrs.reduce((res, arr) => [...res, ...arr], []);
}

/**
 * A callback function that takes a left and right string and returns a rule.
 *
 * @callback encloseWithCallback
 * @param {string} left
 * @param {string} right
 * @returns {RuleOrLiteral}
 * @see encloseWith
 * @see enclose
 */

/**
 * Creates a rule that matches a sequence of rules enclosed by a pair of strings.
 *
 * @param {encloseWithCallback} fn
 *
 * @param {Array<Array<Array<string>>>} pairs
 *
 * @returns {ChoiceRule}
 */
function encloseWith(fn, ...pairs) {
  return choice(...flatten(pairs).map(([left, right]) => fn(left, right)));
}

/**
 *
 * @param {RuleOrLiteral} expr
 *
 * @param {Array<Array<Array<string>>>} pairs
 *
 * @returns {ChoiceRule}
 */
function enclose(expr, ...pairs) {
  return encloseWith((left, right) => seq(left, expr, right), ...pairs);
}

/**
 * Creates a rule that matches a sequence of rules enclosed by `(` and `)`.
 *
 * @param {RuleOrLiteral[]} rules
 *
 * @returns {ChoiceRule}
 */
function paren(...rules) {
  return enclose(seq(...rules), PAREN);
}

/**
 * Creates a rule that matches a sequence of rules enclosed by `{` and `}`.
 *
 * @param {RuleOrLiteral[]} rules
 *
 * @returns {ChoiceRule}
 */
function brace(...rules) {
  return enclose(seq(...rules), BRACE1);
}

/**
 * Creates a rule that matches a sequence of rules enclosed by `{{` and `}}`.
 *
 * @param {RuleOrLiteral[]} rules
 *
 * @returns {ChoiceRule}
 */
function brace_double(...rules) {
  return enclose(seq(...rules), BRACE2);
}

/**
 * Creates a rule that matches a sequence of rules enclosed by `(|` and `|)`.
 *
 * @param {RuleOrLiteral[]} rules
 *
 * @returns {ChoiceRule}
 */
function idiom(...rules) {
  return enclose(seq(...rules), IDIOM);
}
