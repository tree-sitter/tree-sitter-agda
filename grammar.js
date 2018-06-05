// Lexer: https://github.com/agda/agda/blob/master/src/full/Agda/Syntax/Parser/Lexer.x
// Names: http://wiki.portal.chalmers.se/agda/pmwiki.php?n=ReferenceManual.Names

// const white       = /[\ \t\n\f\v\r]/;
// const white_notab = /[\   \n\f\v\r]/;
// const white_nl    = /[\     \f\v\r]/;

// numbers and literals
const number = /0x[0-9a-fA-F]+|[0-9]+/;
const integer = /\-?(0x[0-9a-fA-F]+|[0-9]+)/;
const exponent = /[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+)/;
const float = /(\-?(0x[0-9a-fA-F]+|[0-9]+)\.(0x[0-9a-fA-F]+|[0-9]+)([eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))?)|((0x[0-9a-fA-F]+|[0-9]+)[eE][-+]?(0x[0-9a-fA-F]+|[0-9]+))/;

// names
const name = /([^\s\;\.\"\(\)\{\}\@\'\\\_]|\\[^\sa-zA-Z]|\_[^\s\;\.\"\(\)\{\}\@])[^\s\;\.\"\(\)\{\}\@]*/;
const qualified_name = /(([^\s\;\.\"\(\)\{\}\@\'\\\_]|\\[^\sa-zA-Z]|\_[^\s\;\.\"\(\)\{\}\@])[^\s\;\.\"\(\)\{\}\@]*\.)*([^\s\;\.\"\(\)\{\}\@\'\\\_]|\\[^\sa-zA-Z]|\_[^\s\;\.\"\(\)\{\}\@])[^\s\;\.\"\(\)\{\}\@]*/;

module.exports = grammar({
    name: 'agda',

    extras: $ => [
        $.comment,
        /\s|\\n/
    ],

    externals: $ => [
        $._newline,
        $._indent,
        $._dedent
    ],

    conflicts: $ => [
    ],

    rules: {
        source_file: $ => optional($._declarations1),

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
        // Declarations
        ////////////////////////////////////////////////////////////////////////

        $._declarations1: $ => repeat1($._declaration),

        $._declaration: $ => choice(
            
        ),
        // block: $ => repeat()
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

// indent and then dedent
function indent($, ...rules) {
    return seq(
        $._indent,
        seq(...rules),
        $._dedent
    );
}

////////////////////////////////////////////////////////////////////////
// Language-specific combinators
////////////////////////////////////////////////////////////////////////

function maybeDotted(rule) {
    return choice(
        rule,               // Relevant
        seq('.', rule),     // Irrelevant
        seq('..', rule),    // NonStrict
    )
}

function bracketed(rule) {
    return choice(
        seq('(', rule, ')'),    // (   )
        seq('{', rule, '}'),    // {   }
        seq('{{', rule, '}}'),  // {{ }}
    )
}
