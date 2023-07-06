// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterAgda",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterAgda", targets: ["TreeSitterAgda"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterAgda",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "corpus",
                    "grammar.js",
                    "LICENSE",
                    "package.json",
                    "README.md",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.cc",
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
