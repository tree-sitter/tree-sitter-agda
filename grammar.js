module.exports = grammar({
    name: 'agda',

    extras: $ => [
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
        source_file: $ => $.block,
        // repeat(choice($.line, $.block)),


        // line: $ => /[0-9]+/,
        line: $ => seq(
            prec.right(repeat1(/[0-9]+/)),
            // $._newline
        ),

        block: $ => seq(
            'do',
            $._indent,
            repeat(choice($.line, $.block)),
            $._dedent,
        )
        // block: $ => repeat()
    }
});
