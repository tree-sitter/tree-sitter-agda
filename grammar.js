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

    // _const_forall: $ => token(choice('forall', '∀')),
    _ARROW: $ => token(choice('->','→')),
    // _const_lambda: $ => token(choice('\\','λ')),
    // _const_ellipsis: $ => token(choice('...','…')),

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
        $._arg_type_sig_block,
    ),

    // ArgTypeSignatures
    _arg_type_sig_block: $ => block($, $.arg_type_sig),

    // ArgTypeSigs
    arg_type_sig: $ => choice(
      seq(
          optional('overlap'),
          $._modal_arg_ids,
          ':',
          $.expr,
      ),
      seq(
          'instance',
          $._arg_type_sig_block
      ),
    ),

    // ModalArgIds
    _modal_arg_ids: $ => seq(repeat($._attribute), $._arg_ids1),

    // Attribute
    _attribute: $ => seq('@', $._expr_or_attr),

    ////////////////////////////////////////////////////////////////////////
    // Names
    ////////////////////////////////////////////////////////////////////////

    // Id
    id: $ => ID,

    // QId
    qid: $ => QID,

    // SpaceIds
    ids1: $ => repeat1($.id),

    // MaybeDottedId
    _maybe_dotted_id: $ => maybeDotted($.id),
    _maybe_dotted_ids1: $ => repeat1($._maybe_dotted_id),

    // ArgIds
    _arg_ids1: $ => repeat1($._arg_id),
    _arg_id: $ => choice(
      $._maybe_dotted_id,

      enclose($._maybe_dotted_ids1, BRACE1),
      enclose($._maybe_dotted_ids1, BRACE2),

      seq('.', enclose($.ids1, BRACE1)),
      seq('.', enclose($.ids1, BRACE2)),

      seq('..', enclose($.ids1, BRACE1)),
      seq('..', enclose($.ids1, BRACE2)),
    ),

    // CommaBIdAndAbsurds
    _binding_ids_and_absurds: $ => choice(
      $.Application,
      seq($.qid, '=', $.qid),
      seq($.qid, '=', '_'  ),
      seq('-'  , '=', $.qid),
      seq('-'  , '=', '_'  ),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Expressions (terms and types)
    ////////////////////////////////////////////////////////////////////////

    // Expr
    expr: $ => choice(
      seq($.typed_bindings1, $._ARROW, $.expr),
      seq(optional($.Attributes1), $._application3, $._ARROW, $.expr),
      seq($._expr1, '=', $.expr),
      prec(-1, $._expr1), // lowest precedence
    ),

    ////////////////////////////////////////////////////////////////////////
    // Bindings
    ////////////////////////////////////////////////////////////////////////

    // TypedBinding
    typed_bindings1: $ => repeat1($.typed_binding),
    typed_binding: $ => choice(
      maybeDotted(choice(
        enclose(seq($.Application             , ':', $.expr), PAREN),
        enclose(seq($._binding_ids_and_absurds, ':', $.expr), BRACE1),
        enclose(seq($._binding_ids_and_absurds, ':', $.expr), BRACE2),
      )),
      enclose(seq($.Attributes1, $.Application             , ':', $.expr), PAREN),
      enclose(seq($.Attributes1, $._binding_ids_and_absurds, ':', $.expr), BRACE1),
      enclose(seq($.Attributes1, $._binding_ids_and_absurds, ':', $.expr), BRACE2),
      enclose($.Open, PAREN),
      enclose(seq('let', $._declaration_block), PAREN),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Unimplemented
    ////////////////////////////////////////////////////////////////////////

    // Application
    Application: $ => 'Application',

    // Open
    Open: $ => 'Open',

    // Expr1
    _expr1: $ => 'Expr1',

    // Attributes1
    Attributes1: $ => 'Attributes1',

    // Application3
    _application3: $ => 'Application3',

    // ExprOrAttr
    _expr_or_attr: $ => 'ExprOrAttr',


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
