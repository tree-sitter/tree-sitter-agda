module.exports = grammar({
  name: 'agda',


  externals: $ => [
    $.newline,
    $.indent,
    $.dedent
  ],

  rules: {
    // 'hello' seperated by 'newline'
    source_file: $ => repeat($.hello),

    hello: $ => seq('hello', $.newline)
  }
});
