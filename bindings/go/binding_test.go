package tree_sitter_proto_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-proto"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_proto.Language())
	if language == nil {
		t.Errorf("Error loading Proto grammar")
	}
}
