#include <tree_sitter/parser.h>
#include <vector>
#include <cwctype>
#include <cassert>
#include <cstring>
#include <stdint.h>

namespace {

    using std::vector;

    enum TokenType {
        NEWLINE,
    };

    struct Scanner {
        Scanner() {
            counter = 0;
            deserialize(NULL, 0);
        }

        unsigned serialize(char *buffer) {
            return 0;
        }

        void deserialize(const char *buffer, unsigned length) {
        }

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
