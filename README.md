# Agda Grammar for tree-sitter

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-agda.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-agda)

Syntax highlighting and code folding done right (with context-free grammar, finally!)

![tree-sitter](https://i.imgur.com/7Pfmqjv.png)

## Issues to be resolved

### Telescoping let-bindings

```agda
f x = let y = x in
      let y = x in y
```

Things get a lot more complicated as the body of the binding (starts with 'in')
[could be elided](https://github.com/agda/agda/issues/3113) following the introduction of [*do-notation*](https://agda.readthedocs.io/en/v2.5.4/language/syntactic-sugar.html#do-notation).

```agda
main = do
    let x = y
```

Other factors including:

* the bindings in between 'let' and 'in' could either be a single line or an indented block of top-level declarations
* 'in' or the body after it could be at different lines

## How to contribute

* [documentation](http://tree-sitter.github.io/tree-sitter/)

Install dependencies:

```bash
npm install
```

To see if you have `tree-sitter` installed:

```bash
npx tree-sitter
```

Run build to generate the parser:

```bash
npm run build
```

Run test to see if everything's okay:

```bash
npm test
```

You may wanna run this on the [language-agda](https://github.com/banacorn/language-agda)'s side:

```bash
npm install
apm rebuild
```
