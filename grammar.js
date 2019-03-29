const name = /[^\s]+/;

module.exports = grammar({
    name: 'agda',

    word: $ => $.name,

    extras: $ => [
        /\s|\\n/,
    ],

    externals: $ => [
        $._newline,
    ],

    rules: {
        source_file: $ => repeat($.sentence),

        name: $ => name,
        sentence: $ => seq($.name, $._newline),
    }
});
