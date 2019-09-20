// identifier: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
const ID = /([^\s\\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*/;
// qualified identifier: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
const QID = /(([^\s;\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*\.)*([^\s;\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*/;

const BRACE1 = [['{', '}']];
const BRACE2 = [['{{', '}}'], ['⦃', '⦄']];
// const BRACES = [...BRACE1, ...BRACE2];
const IDIOM = [['(|', '|)'], ['⦇', '⦈']];
const PAREN = [['(', ')']];

// numbers and literals
const number = /0x[0-9a-fA-F]+|[0-9]+/;
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;
const exponent = /[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+)/;
const float = /(\-?(0x[0-9a-fA-F]+|[0-9]+)\.(0x[0-9a-fA-F]+|[0-9]+)([eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))?)|((0x[0-9a-fA-F]+|[0-9]+)[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))/;


module.exports = grammar({
  name: 'agda',

  word: $ => $.id,

    extras: $ => [
        $.comment,
        // $.pragma,
        /\s|\\n/,
    ],

  externals: $ => [
      $._newline,
      $._indent,
      $._dedent
  ],

  conflicts: $ => [
    // [$.qid, $.field_assignment],
    // [$.let],
  ],

  rules: {
    source_file: $ => repeat(seq($._declaration, $._newline)),



    ////////////////////////////////////////////////////////////////////////
    // Constants
    ////////////////////////////////////////////////////////////////////////

    _FORALL: $ => token(choice('forall', '∀')),
    _ARROW: $ => token(choice('->','→')),
    _LAMBDA: $ => token(choice('\\','λ')),
    _ELLIPSIS: $ => token(choice('...','…')),

    ////////////////////////////////////////////////////////////////////////
    // Top-level Declarations
    ////////////////////////////////////////////////////////////////////////

    // Declarations
    // indented, 1 or more declarations
    _declaration_block: $ => block($, $._declaration),

    // Declarations0: use `optional($._declaration_block)` instead
    // _declaration_block0: $ => block($, optional($._declaration)),

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
        $.module_macro,
        $.module,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Field
    ////////////////////////////////////////////////////////////////////////

    // Fields
    fields: $ => seq(
        'field',
        $._signature_block,
    ),

    // ArgTypeSignatures
    _signature_block: $ => block($, $.signature),

    // ArgTypeSigs
    signature: $ => choice(
      seq(
          optional('overlap'),
          $._modal_arg_ids,
          ':',
          $.expr,
      ),
      seq(
          'instance',
          $._signature_block
      ),
    ),

    // ModalArgIds
    _modal_arg_ids: $ => seq(repeat($.attribute), $._arg_ids),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Functions
    ////////////////////////////////////////////////////////////////////////

    // FunClause = LHS + RHS
    function: $ => seq(
      optional($.attributes),
      $.lhs,
      optional($.rhs),
      optional($.where)
    ),

    // LHS
    lhs: $ => seq(
      $._with_exprs,
      optional($.rewrite_equations),
      optional($.with_expressions)
    ),

    // RHS
    rhs: $ => choice(
      seq('=', $.expr),
      seq(':', $.expr),
    ),

    // WithExpressions
    with_expressions: $ => seq('with', $.expr),

    // RewriteEquations
    rewrite_equations: $ => seq('rewrite', $._with_exprs),

    // WhereClause
    where: $ => seq(
      optional(seq(
        'module',
        $.bid
      )),
      'where',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Data
    ////////////////////////////////////////////////////////////////////////

    data: $ => seq(
      choice('data', 'codata'),
      $.id,
      optional($._typed_untyped_bindings),
      optional(seq(':', $.expr)),
      'where',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Data Signature
    ////////////////////////////////////////////////////////////////////////

    data_signature: $ => seq(
      'data',
      $.id,
      optional($._typed_untyped_bindings),
      ':',
      $.expr,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Record
    ////////////////////////////////////////////////////////////////////////

    record: $ => seq(
      'record',
      $._atom_no_curly,
      optional($._typed_untyped_bindings),
      optional(seq(':', $.expr)),
      $.record_declarations_block,
    ),

    // RecordDeclarations
    record_declarations_block: $ => seq(
      'where',
      indent($,
        // RecordDirectives
        repeat(seq($._record_directive, $._newline)),
        repeat(seq($._declaration, $._newline)),
      ),
    ),

    // RecordDirective
    _record_directive: $ => choice(
        $.record_constructor,
        $.record_constructor_instance,
        $.record_induction,
        $.record_eta
    ),
    // RecordConstructorName
    record_constructor: $ => seq('constructor', $.id),

    // Declaration of record constructor name.
    record_constructor_instance: $ => seq(
        'instance',
        block($, $.record_constructor),
    ),

    // RecordInduction
    record_induction: $ => choice(
        'inductive',
        'coinductive'
    ),

    // RecordEta
    record_eta: $ => choice(
        'eta-equality',
        'no-eta-equality'
    ),


    ////////////////////////////////////////////////////////////////////////
    // Declaration: Record Signature
    ////////////////////////////////////////////////////////////////////////

    record_signature: $ => seq(
      'record',
      $._atom_no_curly,
      optional($._typed_untyped_bindings),
      ':',
      $.expr
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Infix
    ////////////////////////////////////////////////////////////////////////

    infix: $ => seq(
      choice('infix', 'infixl', 'infixr'),
      $.integer,
      repeat1($.bid),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Generalize
    ////////////////////////////////////////////////////////////////////////

    generalize: $ => seq(
      'variable',
      optional($._signature_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Mutual
    ////////////////////////////////////////////////////////////////////////

    mutual: $ => seq(
      'mutual',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Abstract
    ////////////////////////////////////////////////////////////////////////

    abstract: $ => seq(
      'abstract',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Private
    ////////////////////////////////////////////////////////////////////////

    private: $ => seq(
      'private',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Instance
    ////////////////////////////////////////////////////////////////////////

    instance: $ => seq(
      'instance',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Macro
    ////////////////////////////////////////////////////////////////////////

    macro: $ => seq(
      'macro',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Postulate
    ////////////////////////////////////////////////////////////////////////

    postulate: $ => seq(
      'postulate',
      optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Primitive
    ////////////////////////////////////////////////////////////////////////

    primitive: $ => seq(
      'primitive',
      optional($._type_signature_block)
    ),

    // TypeSignatures
    _type_signature_block: $ => block($, $.type_signature),

    // TypeSigs
    type_signature: $ => seq(
      $._ids,
      ':',
      $.expr
    ),

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Open
    ////////////////////////////////////////////////////////////////////////

    open: $ => seq(
      choice(
        seq(        'import'),
        seq('open', 'import'),
        seq('open'          ),
      ),
      $.module_name,
      optional($._atoms),
      optional($._import_directives),
    ),

    // ModuleName
    module_name: $ => prec.left(alias($.qid, 'module_name')),

    // ImportDirectives and shit
    _import_directives: $ => repeat1($.import_directive),
    import_directive: $ => choice(
      'public',
      seq('using', '(', $._comma_import_names ,')'),
      seq('hiding', '(', $._comma_import_names ,')'),
      seq('renaming', '(', sepR(';', $.renaming) ,')'),
      seq('using', '(' ,')'),
      seq('hiding', '(' ,')'),
      seq('renaming', '(' ,')')
    ),

    // CommaImportNames
    _comma_import_names: $ => sepR(';', $._import_name),

    // Renaming
    renaming: $ => seq(
        optional('module'),
        $.id,
        'to',
        $.id
    ),

    // ImportName
    _import_name: $ => seq(
        optional('module'), $.id
    ),


    ////////////////////////////////////////////////////////////////////////
    // Declaration: Module Macro
    ////////////////////////////////////////////////////////////////////////

    // ModuleMacro
    module_macro: $ => seq(
      choice(
        seq('module', alias($.qid, $.module_name)),
        seq('open', 'module', alias($.qid, $.module_name)),
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

    ////////////////////////////////////////////////////////////////////////
    // Declaration: Module
    ////////////////////////////////////////////////////////////////////////

    // Module
    module: $ => seq(
        'module',
        alias(choice($.qid, '_'), $.module_name),
        optional($._typed_untyped_bindings),
        'where',
        optional($._declaration_block)
    ),

    ////////////////////////////////////////////////////////////////////////
    // Names
    ////////////////////////////////////////////////////////////////////////

    // Id
    id: $ => token(ID),

    // QId
    qid: $ => prec.left(alias(choice(QID, $.id), 'qid')),

    // BId
    bid: $ => alias(choice('_', $.id), 'bid'),

    // SpaceIds
    _ids: $ => repeat1($.id),

    // MaybeDottedId
    _maybe_dotted_id: $ => maybeDotted($.id),
    _maybe_dotted_ids: $ => repeat1($._maybe_dotted_id),

    // ArgIds
    _arg_ids: $ => repeat1($._arg_id),
    _arg_id: $ => choice(
      $._maybe_dotted_id,

      brace($._maybe_dotted_ids),
      brace_double($._maybe_dotted_ids),

      seq('.', brace($._ids)),
      seq('.', brace_double($._ids)),

      seq('..', brace($._ids)),
      seq('..', brace_double($._ids)),
    ),

    // CommaBIds / CommaBIdAndAbsurds
    _binding_ids_and_absurds: $ => prec(-1, choice(
      $._application,
      seq($.qid, '=', $.qid),
      seq($.qid, '=', '_'  ),
      seq('-'  , '=', $.qid),
      seq('-'  , '=', '_'  ),
    )),

    // Attribute
    attribute: $ => seq('@', $._expr_or_attr),
    attributes: $ => repeat1($.attribute),

    ////////////////////////////////////////////////////////////////////////
    // Expressions (terms and types)
    ////////////////////////////////////////////////////////////////////////

    // Expr
    expr: $ => choice(
      seq($._typed_bindings, $._ARROW, $.expr),
      seq(optional($.attributes), $._atoms, $._ARROW, $.expr),
      seq($._with_exprs, '=', $.expr),
      prec(-1, $._with_exprs), // lowest precedence
    ),
    stmt: $ => choice(
      seq($._typed_bindings, $._ARROW, $.expr),
      seq(optional($.attributes), $._atoms, $._ARROW, $.expr),
      seq($._with_exprs, '=', $.expr),
      prec(-1, $._with_exprs_stmt), // lowest precedence
    ),

    // WithExprs/Expr1
    _with_exprs: $ => seq(
      repeat(seq($._atoms, '|')),
      $._application,
    ),
    _with_exprs_stmt: $ => seq(
      repeat(seq($._atoms, '|')),
      $._application_stmt,
    ),

    // ExprOrAttr
    _expr_or_attr: $ => choice(
      $.literal,
      $.qid,
      paren($.expr),
    ),

    // Application
    _application: $ => seq(
      optional($._atoms),
      $._expr2,
    ),
    _application_stmt: $ => seq(
      optional($._atoms),
      $._expr2_stmt,
    ),

    // Expr
    _expr2_without_let: $ => choice(
      $.lambda,
      alias($.lambda_extended_or_absurd, $.lambda),
      $.forall,
      $.do,
      prec(-1, $.atom),
      seq('quoteGoal', $.id, 'in', $.expr),
      seq('tactic', $._atoms),
      seq('tactic', $._atoms, '|', $._with_exprs),
    ),
    _expr2: $ => choice(
      $._expr2_without_let,
      $.let,
    ),
    _expr2_stmt: $ => choice(
      $._expr2_without_let,
      alias($.let_in_do, $.let),
    ),

    // Expr3
    atom: $ => choice(
      $._atom_curly,
      $._atom_no_curly,
    ),
    // Application3 / OpenArgs
    _atoms: $ => repeat1($.atom),

    _atom_curly: $ => brace(optional($.expr)),

    _atom_no_curly: $ => choice(
      '_',
      'Prop',
      'Set',
      'quote',
      'quoteTerm',
      'quoteContext',
      'unquote',
      $.SetN,
      $.PropN,
      brace_double($.expr),
      idiom($.expr),
      seq('(', ')'),
      seq('{{', '}}'),
      seq('⦃', '⦄'),
      seq($.id, '@', $.atom),
      seq('.', $.atom),
      $.record_assignments,
      alias($.field_assignments, $.record_assignments),
      $._ELLIPSIS,
      $._expr_or_attr
    ),

    // ForallBindings
    forall: $ => seq($._FORALL, $._typed_untyped_bindings, $._ARROW, $.expr),

    // LetBody
    let: $ => prec.right(seq(
      'let',
      // declarations
      optional($._indent),
      repeat(seq($._declaration, $._newline)),
      $._declaration,
      // in case that there's a newline between declarations and $._let_body
      optional($._newline),

      $._let_body
    )),

    // special `let...in` in do statements
    let_in_do: $ => prec.right(seq(
      'let',
      // declarations
      optional($._indent),
      repeat(seq($._declaration, $._newline)),
      $._declaration,
      //
      choice(
        seq($._newline, $._dedent),
        // covers the newline between declarations and $._let_body
        seq($._newline, $._let_body),
        // covers the rest of the cases
        $._let_body,
      )
    )),

    _let_body: $ => seq(
      'in',
      $.expr
    ),

    // LamBindings
    lambda: $ => seq(
      $._LAMBDA,
      $._lambda_bindings,
      $._ARROW,
      $.expr
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
        seq('where', $._lambda_clauses),
        // AbsurdLamBindings
        $._lambda_bindings,
      )
    ),

    // bunch of `$._lambda_clause_maybe_absurd` sep by ';'
    _lambda_clauses: $ => prec.left(seq(
      repeat(seq($._lambda_clause_maybe_absurd, ';')),
      $._lambda_clause_maybe_absurd
    )),

    // AbsurdLamBindings | AbsurdLamClause
    _lambda_clause_maybe_absurd: $ => prec.left(choice(
      $.lambda_clause_absurd,
      $.lambda_clause,
    )),

    // AbsurdLamClause
    lambda_clause_absurd: $ => seq(
      optional($.CatchallPragma),
      $._application,
    ),

    // NonAbsurdLamClause
    lambda_clause: $ => seq(
      optional($.CatchallPragma),
      optional($._atoms),   // Application3PossiblyEmpty
      $._ARROW,
      $.expr,
    ),

    // DoStmts
    do: $ => seq('do',
      block($, $._do_stmt)
    ),

    // DoStmt
    _do_stmt: $ => seq(
      $.stmt,
      optional($.do_where)
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
      $.id,
      '=',
      $.expr
    ),

    // ModuleAssignment
    module_assignment: $ => seq(
      $.module_name,
      optional($._atoms),
      optional($._import_directives),
    ),


    ////////////////////////////////////////////////////////////////////////
    // Bindings
    ////////////////////////////////////////////////////////////////////////

    // TypedBinding
    _typed_bindings: $ => repeat1($.typed_binding),
    typed_binding: $ => choice(
      maybeDotted(choice(
        paren(       seq($._application            , ':', $.expr)),
        brace(       seq($._binding_ids_and_absurds, ':', $.expr)),
        brace_double(seq($._binding_ids_and_absurds, ':', $.expr)),
      )),
      paren(       seq($.attributes, $._application            , ':', $.expr)),
      brace(       seq($.attributes, $._binding_ids_and_absurds, ':', $.expr)),
      brace_double(seq($.attributes, $._binding_ids_and_absurds, ':', $.expr)),
      paren($.Open),
      paren(seq('let', $._declaration_block)),
    ),

    // TypedUntypedBindings1
    _typed_untyped_bindings: $ => repeat1($._typed_untyped_binding),
    _typed_untyped_binding: $ => choice(
      $.untyped_binding,
      $.typed_binding
    ),

    // DomainFreeBinding / DomainFreeBindingAbsurd
    untyped_binding: $ => choice( // 13 variants
      maybeDotted(choice(
        $.bid,
        brace($._binding_ids_and_absurds),
        brace_double($._binding_ids_and_absurds),
      )),
      paren(seq(              $._binding_ids_and_absurds)),
      paren(seq($.attributes, $._binding_ids_and_absurds)),
      brace(seq($.attributes, $._binding_ids_and_absurds)),
      brace_double(seq($.attributes, $._binding_ids_and_absurds)),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Literals
    ////////////////////////////////////////////////////////////////////////

    // -- Literals
    // <0,code> \'             { litChar }
    // <0,code,pragma_> \"     { litString }
    // <0,code> @integer       { literal LitNat }
    // <0,code> @float         { literal LitFloat }
    integer: $ => integer,
    string: $ => /\".*\"/,
    literal: $ => choice(
        integer,
        /\".*\"/,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Comment
    ////////////////////////////////////////////////////////////////////////

    comment: $ => token(choice(
        prec(100, seq('--', /.*/)),
        seq('{--}'),
        seq(
            '{-',
            /[^#]/,
            repeat(choice(
                /[^-]/,     // anything but -
                /-[^}]/,    // - not followed by }
            )),
            /-}/
        )
    )),


    ////////////////////////////////////////////////////////////////////////
    // Unimplemented
    ////////////////////////////////////////////////////////////////////////

    // setN
    SetN: $ => 'setN',

    // propN
    PropN: $ => 'propN',

    // Literal
    Literal: $ => 'Literal',

    // Open
    Open: $ => 'Open',
    // CatchallPragma
    CatchallPragma: $ => 'CatchallPragma',
  }
});


////////////////////////////////////////////////////////////////////////
// Generic combinators
////////////////////////////////////////////////////////////////////////

function sepR(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)))
}

function sepL(sep, rule) {
    return seq(repeat(seq(rule, sep)), rule)
}

function indent($, ...rule) {
    return seq(
        $._indent,
        ...rule,
        $._dedent
    );
}

// 1 or more $RULE ending with a NEWLINE
function block($, rules) {
    return indent($, repeat1(seq(rules, $._newline)));
}

////////////////////////////////////////////////////////////////////////
// Language-specific combinators
////////////////////////////////////////////////////////////////////////

function maybeDotted(rule) {
    return choice(
        rule,               // Relevant
        seq('.', rule),     // Irrelevant
        seq('..', rule),    // NonStrict
    );
}

function flatten(arrOfArrs) {
  return arrOfArrs.reduce((res, arr) => [...res, ...arr], []);
}

function encloseWith(fn, ...pairs) {
  return choice(...flatten(pairs).map(([left, right]) => fn(left, right)));
}

function enclose(expr, ...pairs) {
  return encloseWith((left, right) => seq(left, expr, right), ...pairs);
}

function paren(...rules) {
  return enclose(seq(...rules), PAREN);
}

function brace(...rules) {
  return enclose(seq(...rules), BRACE1);
}

function brace_double(...rules) {
  return enclose(seq(...rules), BRACE2);
}

function idiom(...rules) {
  return enclose(seq(...rules), IDIOM);
}
