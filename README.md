# Agda Grammar for tree-sitter

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

### Setup

```bash
npm install
```

To see if you have `tree-sitter` installed:
```bash
npx tree-sitter
```

### Develop

Run this every time you edit the grammar:
```bash
npm run iterate
```

### Test it with `language-agda` on Atom

First, you should have [`language-agda`](https://github.com/banacorn/language-agda) in development mode.

```bash
apm dev language-agda
```

Visit the directory of `language-agda` (perhaps somewhere in `~/github/language-agda`) and switch to the branch `tree-sitter`

```bash
git checkout tree-sitter
```

Then install `tree-sitter-agda`, however, for the time being,
`tree-sitter-agda` is not available on `npm`, so you should specify the path manually in `package.json`

```json
  "dependencies": {
    "tree-sitter-agda": "file:PATH/TO/tree-sitter-agda"
  }
```

Rebuild the package to make `tree-sitter-agda` work with `language-agda`
```bash
cd ~/github/language-agda
apm rebuild
```

### Coming back from `language-agda`

Unfortunately, `apm rebuild` would mess with your build on `tree-sitter-agda` and render it incompatible with Node. Rebuild `tree-sitter-agda` after you came back from `language-agda`.

```bash
npm run rebuild
```
