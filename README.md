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
