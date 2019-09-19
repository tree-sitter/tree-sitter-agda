// identifier: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
const ID = /([^\s\\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*/;
// qualified identifier: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names
const QID = /(([^\s;\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*\.)*([^\s;\.\"\(\)\{\}@\'\\_]|\\[^\sa-zA-Z]|_[^\s;\.\"\(\)\{\}@])[^\s;\.\"\(\)\{\}@]*/;

const BRACE1 = [['{', '}']];
const BRACE2 = [['{{', '}}'], ['⦃', '⦄']];
// const BRACES = [...BRACE1, ...BRACE2];
const IDIOM = [['(|', '|)'], ['⦇', '⦈']];
const PAREN = [['(', ')']];

module.exports = grammar({
  name: 'agda',

  word: $ => $.id,

  externals: $ => [
      $._newline,
      $._indent,
      $._dedent
  ],

  conflicts: $ => [
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
        choice($.id, '_')
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
    // Names
    ////////////////////////////////////////////////////////////////////////

    // Id
    id: $ => token(ID),

    // QId
    qid: $ => alias(choice(QID, $.id), 'qid'),

    // BId
    bid: $ => alias(choice('_', $.id), 'bid'),

    // SpaceIds
    ids: $ => repeat1($.id),

    // MaybeDottedId
    _maybe_dotted_id: $ => maybeDotted($.id),
    _maybe_dotted_ids: $ => repeat1($._maybe_dotted_id),

    // ArgIds
    _arg_ids: $ => repeat1($._arg_id),
    _arg_id: $ => choice(
      $._maybe_dotted_id,

      brace($._maybe_dotted_ids),
      brace_double($._maybe_dotted_ids),

      seq('.', brace($.ids)),
      seq('.', brace_double($.ids)),

      seq('..', brace($.ids)),
      seq('..', brace_double($.ids)),
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

    // WithExprs/Expr1
    _with_exprs: $ => seq(
      repeat(seq($._atoms, '|')),
      $._application,
    ),

    // ExprOrAttr
    _expr_or_attr: $ => choice(
      $.qid,
      $.Literal,
      paren($.expr),
    ),

    // Application
    _application: $ => seq(
      optional($._atoms),
      $._expr2,
    ),

    // Expr
    _expr2: $ => choice(
      seq($._LAMBDA, $.LamBindings, $.expr),
      $.ExtendedOrAbsurdLam,
      $.forall,
      $.let,
      seq('do', $.DoBlock),
      prec(-1, $.atom),
      seq('quoteGoal', $.id, 'in', $.expr),
      seq('tactic', $._atoms),
      seq('tactic', $._atoms, '|', $._with_exprs),
    ),

    // Expr3
    atom: $ => choice(
      $._atom_curly,
      $._atom_no_curly,
    ),
    // Application3
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
      seq('record', brace($.RecordAssignments)),
      seq('record', $._atom_no_curly, brace($.FieldAssignments)),
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
      //
      choice(
        // covers the part without $._let_body
        $._newline,
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
    // Unimplemented
    ////////////////////////////////////////////////////////////////////////

    // RecordAssignments
    RecordAssignments: $ => 'RecordAssignments',

    // FieldAssignments
    FieldAssignments: $ => 'FieldAssignments',

    // setN
    SetN: $ => 'setN',

    // propN
    PropN: $ => 'propN',

    // Literal
    Literal: $ => 'Literal',

    // Open
    Open: $ => 'Open',

    // LamBindings
    LamBindings: $ => 'LamBindings',

    // ExtendedOrAbsurdLam
    ExtendedOrAbsurdLam: $ => 'ExtendedOrAbsurdLam',

    // LetBody
    LetBody: $ => 'LetBody',

    // DoStmts
    DoBlock: $ => 'DoBlock',
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
