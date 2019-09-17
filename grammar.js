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

    ////////////////////////////////////////////////////////////////////////
    // Expressions (terms and types)
    ////////////////////////////////////////////////////////////////////////

    // Expr
    expr: $ => choice(
      seq($._tele_arrow, $.expr),
      seq($._application3, $._ARROW, $.expr),
      seq($._attributes1, $._application3, $._ARROW, $.expr),
      seq($._expr1, '=', $.expr),
      prec(-1, $._expr1), // lowest precedence
    ),

    ////////////////////////////////////////////////////////////////////////
    // Temp
    ////////////////////////////////////////////////////////////////////////

    // Expr1
    _expr1: $ => 'Expr1',

    // Attributes1
    _attributes1: $ => 'Attributes1',

    // TeleArrow
    _tele_arrow: $ => 'TeleArrow',

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
