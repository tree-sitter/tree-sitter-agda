# Agda Grammar for tree-sitter

[![CI][ci]](https://github.com/tree-sitter/tree-sitter-agda/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
[![crates][crates]](https://crates.io/crates/tree-sitter-agda)
[![npm][npm]](https://www.npmjs.com/package/tree-sitter-agda)

Syntax highlighting and code folding done right (with context-free grammar, finally!)

![tree-sitter](https://i.imgur.com/7Pfmqjv.png)

## How to contribute

- [documentation](http://tree-sitter.github.io/tree-sitter/)

Install dependencies:

```bash
npm install
```

To see if you have `tree-sitter` installed:

```bash
npx tree-sitter
```

To generate the parser:

```bash
npx tree-sitter generate
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

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter/tree-sitter-agda/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-agda?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-agda?logo=rust
