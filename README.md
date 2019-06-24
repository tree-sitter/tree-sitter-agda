# Reproducing Issue-314

```bash
npm install
npx tree-sitter generate
npx tree-sitter parse test/example.txt
```

The parser would parse lines of `hello`

```js
module.exports = grammar({
  name: 'agda',

  externals: $ => [
    $.newline,
  ],

  rules: {
    source_file: $ => repeat($.hello),

    // 'hello' followed by newline
    hello: $ => seq('hello', $.newline)
  }
});
```

The file `test/example.txt` consists of 10 lines of hello:

```
hello
hello
hello
hello
hello
hello
hello
hello
hello
hello
```

The scanner would call `get_column` after encountering the 4th `hello`

```c
bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[NEWLINE]) {
        counter++;
        // report `get_column` if counter > 3
        if (counter > 3) {
            printf("#%d: colomn %d\n", counter, lexer->get_column(lexer));
        } else {
            printf("#%d: noop\n", counter);
        }

        lexer->result_symbol = NEWLINE;
        return true;
    }
    return false;
}

int counter;
```

There's no problem with the readings from `get_column`, but the line numbers of the parsing result are off after the 4th `hello`.

```
#1: noop
#2: noop
#3: noop
#4: colomn 5
#5: colomn 5
#6: colomn 5
#7: colomn 5
#8: colomn 5
#9: colomn 5
#10: colomn 5
(source_file [0, 0] - [17, 0]
  (hello [0, 0] - [0, 5]
    (newline [0, 5] - [0, 5]))
  (hello [1, 0] - [1, 5]
    (newline [1, 5] - [1, 5]))
  (hello [2, 0] - [2, 5]
    (newline [2, 5] - [2, 5]))
  (hello [3, 0] - [4, 4]
    (newline [3, 5] - [4, 4]))
  (hello [5, 0] - [6, 4]
    (newline [5, 5] - [6, 4]))
  (hello [7, 0] - [8, 4]
    (newline [7, 5] - [8, 4]))
  (hello [9, 0] - [10, 4]
    (newline [9, 5] - [10, 4]))
  (hello [11, 0] - [12, 4]
    (newline [11, 5] - [12, 4]))
  (hello [13, 0] - [14, 4]
    (newline [13, 5] - [14, 4]))
  (hello [15, 0] - [16, 4]
    (newline [15, 5] - [16, 4])))
```
