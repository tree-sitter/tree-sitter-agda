#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cassert>

namespace {

    using std::vector;

    enum TokenType {
        NEWLINE,
    };

    struct Scanner {
        Scanner() {
            deserialize(NULL, 0);
        }

        unsigned serialize(char *buffer) {
            size_t i = 0;
            buffer[i++] = queued_dedent_count;

            vector<uint16_t>::iterator
            iter = indent_length_stack.begin() + 1,
            end = indent_length_stack.end();
            for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter) {
                buffer[i++] = *iter;
            }

            return i;
        }

        void deserialize(const char *buffer, unsigned length) {
            queued_dedent_count = 0;
            indent_length_stack.clear();
            indent_length_stack.push_back(0);

            if (length > 0) {
                size_t i = 0;
                queued_dedent_count = buffer[i++];
                while (i < length) indent_length_stack.push_back(buffer[i++]);
            }
        }

        void advance(TSLexer *lexer) {
            lexer->advance(lexer, false);
        }

        // returns True if newline \n were skipped
        bool skipJunk(TSLexer *lexer) {
            bool skippedNewline = false;
            while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' || lexer->lookahead == '\n') {
                if (lexer->lookahead == '\n') {
                    skippedNewline = true;
                    lexer->advance(lexer, true);
                    // mark the end of the last lexeme
                    lexer->mark_end(lexer);
                } else {
                    lexer->advance(lexer, true);
                }
            }
            return skippedNewline;
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {

            // skip spaces and newline
            skipJunk(lexer);

            // in case of EOF
            if (lexer->lookahead == 0) {
                return false;
            }

            printf("\ncolumn before [%c]: %i \n", lexer->lookahead, lexer->get_column(lexer));


            return false;
        }

        vector<uint16_t> indent_length_stack;
        uint32_t queued_dedent_count;
    };

}

extern "C" {

    void *tree_sitter_agda_external_scanner_create() {
        return new Scanner();
    }

    bool tree_sitter_agda_external_scanner_scan(void *payload, TSLexer *lexer,
        const bool *valid_symbols) {
            Scanner *scanner = static_cast<Scanner *>(payload);
            return scanner->scan(lexer, valid_symbols);
        }

        unsigned tree_sitter_agda_external_scanner_serialize(void *payload, char *buffer) {
            Scanner *scanner = static_cast<Scanner *>(payload);
            return scanner->serialize(buffer);
        }

        void tree_sitter_agda_external_scanner_deserialize(void *payload,
            const char *buffer,
            unsigned length) {
                Scanner *scanner = static_cast<Scanner *>(payload);
                scanner->deserialize(buffer, length);
            }

            void tree_sitter_agda_external_scanner_destroy(void *payload) {
                Scanner *scanner = static_cast<Scanner *>(payload);
                delete scanner;
            }

        }
