# tree-sitter-agda
(WIP) Agda grammar for tree-sitter


## Conflicts to be resolved

1. The directive of instance constructor would conflict with the declaration of
instances.

```agda
record Pair (A B : Set) : Set where
    -- part of the directives
    instance
        constructor _,_
    -- NOT part of the directives
    instance
        a = b
```

## How to contribute

### Setup
This should do all the setup work:
```bash
npm install
```

To see if you have `tree-sitter` installed properly:
```bash
npx tree-sitter
```

### Developing

Run this after editting the grammar:
```bash
npm run iterate
```

### Test it on `language-atom`

First, go to the directory of `language-atom` and switch to the brach `tree-sitter`

```bash
git checkout tree-sitter
```

Then install `tree-sitter-agda`, however, for the time being,
`tree-sitter-agda` is not available on `npm`, so we would have
to specify the path manually in `package.json`

```json
  "dependencies": {
    "tree-sitter-agda": "file:PATH/TO/tree-sitter-agda"
  }
```

Rebuild the package to install `tree-sitter-agda` on `language-agda`
```bash
apm rebuild
```

### Coming back from `language-agda`

```bash
npm run rebuild
```
