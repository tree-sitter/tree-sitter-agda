package tree_sitter_agda_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_agda "github.com/tree-sitter/tree-sitter-agda/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_agda.Language())
	if language == nil {
		t.Errorf("Error loading Agda grammar")
	}
}
