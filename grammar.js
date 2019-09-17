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

    // -- Top-level definitions.
    // Declaration :: { [Declaration] }
    // Declaration
    //     : Fields        {  $1  }
    //     | FunClause     {  $1  }  -- includes type signatures
    //     | Data          { [$1] }
    //     | DataSig       { [$1] }  -- lone data type signature in mutual block
    //     | Record        { [$1] }
    //     | RecordSig     { [$1] }  -- lone record signature in mutual block
    //     | Infix         { [$1] }
    //     | Generalize    {  $1  }
    //     | Mutual        { [$1] }
    //     | Abstract      { [$1] }
    //     | Private       { [$1] }
    //     | Instance      { [$1] }
    //     | Macro         { [$1] }
    //     | Postulate     { [$1] }
    //     | Primitive     { [$1] }
    //     | Open          {  $1  }
    // --    | Import      { [$1] }
    //     | ModuleMacro   { [$1] }
    //     | Module        { [$1] }
    //     | Pragma        { [$1] }
    //     | Syntax        { [$1] }
    //     | PatternSyn    { [$1] }
    //     | UnquoteDecl   { [$1] }

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
    _arg_type_sig_block: $ => block($, $.type_sig),

    // ArgTypeSigs
    type_sig: $ => choice(
      seq(
          optional('overlap'),
          $._modal_arg_ids,
          ':',
          $.expr,
      ),
      seq(
          'instance',
          $._type_sig_block
      ),
    ),

    // ModalArgIds
    _modal_arg_ids: $ => seq(repeat($._attribute), $._arg_ids1),

    // Attribute
    _attribute: $ => seq('@', $._expr_or_attr),

    ////////////////////////////////////////////////////////////////////////
    // Expressions (terms and types)
    ////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////
    // Names
    ////////////////////////////////////////////////////////////////////////

    // Id
    id: $ => ID,

    // SpaceIds
    _spaces_ids: $ => repeat1($.id),

    // ArgIds
    _arg_ids1: $ => repeat1($._arg_id),
    _arg_id: $ => choice(
      $._maybe_dotted_id,

      enclose($._maybe_dotted_ids, BRACE1),
      enclose($._maybe_dotted_ids, BRACE2),

      seq('.', enclose($._spaces_ids, BRACE1)),
      seq('.', enclose($._spaces_ids, BRACE2)),

      seq('..', enclose($._spaces_ids, BRACE1)),
      seq('..', enclose($._spaces_ids, BRACE2)),
    ),

    ////////////////////////////////////////////////////////////////////////
    // Temp
    ////////////////////////////////////////////////////////////////////////


    // MaybeDottedId
    _maybe_dotted_id: $ => 'MaybeDottedId',

    // MaybeDottedIds
    _maybe_dotted_ids: $ => 'MaybeDottedIds',

    // ArgTypeSignatures
    _type_sig_block: $ => 'ArgTypeSignatures',

    // Expr
    expr: $ => 'Expr',

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
