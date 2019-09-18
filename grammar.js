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

  conflicts: $ => [],

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

    // Declaration
    _declaration: $ => choice(
        $.fields,
    ),

    ////////////////////////////////////////////////////////////////////////
    // Field
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
    // Names
    ////////////////////////////////////////////////////////////////////////

    // Id
    id: $ => token(ID),

    // QId
    qid: $ => alias(choice(QID, $.id), 'qid'),

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

    // CommaBIdAndAbsurds
    _binding_ids_and_absurds: $ => prec(-1, choice(
      $._application,
      seq($.qid, '=', $.qid),
      seq($.qid, '=', '_'  ),
      seq('-'  , '=', $.qid),
      seq('-'  , '=', '_'  ),
    )),

    // Attribute
    attribute: $ => seq('@', $._expr_or_attr),
    attributes1: $ => repeat1($.attribute),

    ////////////////////////////////////////////////////////////////////////
    // Expressions (terms and types)
    ////////////////////////////////////////////////////////////////////////

    // Expr
    expr: $ => choice(
      seq($.typed_bindings1, $._ARROW, $.expr),
      seq(optional($.attributes1), $.atoms, $._ARROW, $.expr),
      seq($._with_exprs, '=', $.expr),
      prec(-1, $._with_exprs), // lowest precedence
    ),

    // WithExprs/Expr1
    _with_exprs: $ => seq(
      repeat(seq($.atoms, '|')),
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
      repeat($.atom),
      $._expr2,
    ),

    // Expr
    _expr2: $ => choice(
      seq($._LAMBDA, $.LamBindings, $.expr),
      $.ExtendedOrAbsurdLam,
      seq($._FORALL, $.ForallBindings, $.expr),
      seq('let', $._declaration_block, $.LetBody),
      seq('do', $.DoBlock),
      prec(-1, $.atom),
      seq('quoteGoal', $.id, 'in', $.expr),
      seq('tactic', $.atoms),
      seq('tactic', $.atoms, '|', $._with_exprs),
    ),

    // Expr3
    atom: $ => choice(
      $._atom_curly,
      $._atom_no_curly,
    ),
    // Application3
    atoms: $ => repeat1($.atom),

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

    ////////////////////////////////////////////////////////////////////////
    // Bindings
    ////////////////////////////////////////////////////////////////////////

    // TypedBinding
    typed_bindings1: $ => repeat1($.typed_binding),
    typed_binding: $ => choice(
      maybeDotted(choice(
        paren(       seq($._application            , ':', $.expr)),
        brace(       seq($._binding_ids_and_absurds, ':', $.expr)),
        brace_double(seq($._binding_ids_and_absurds, ':', $.expr)),
      )),
      paren(       seq($.attributes1, $._application            , ':', $.expr)),
      brace(       seq($.attributes1, $._binding_ids_and_absurds, ':', $.expr)),
      brace_double(seq($.attributes1, $._binding_ids_and_absurds, ':', $.expr)),
      paren($.Open),
      paren(seq('let', $._declaration_block)),
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

    // ForallBindings
    ForallBindings: $ => 'ForallBindings',

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
