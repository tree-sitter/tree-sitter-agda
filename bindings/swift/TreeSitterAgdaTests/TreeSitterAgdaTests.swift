import XCTest
import SwiftTreeSitter
import TreeSitterAgda

final class TreeSitterAgdaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_agda())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Agda grammar")
    }
}
