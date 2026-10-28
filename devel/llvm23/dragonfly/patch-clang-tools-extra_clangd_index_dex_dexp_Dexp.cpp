--- clang-tools-extra/clangd/index/dex/dexp/Dexp.cpp.orig
+++ clang-tools-extra/clangd/index/dex/dexp/Dexp.cpp
@@ -362,13 +362,16 @@
   const char *Description;
   std::function<std::unique_ptr<Command>()> Implementation;
 } CommandInfo[] = {
-    {"find", "Search for symbols with fuzzyFind", std::make_unique<FuzzyFind>},
+    {"find", "Search for symbols with fuzzyFind",
+     []() -> std::unique_ptr<Command> { return std::make_unique<FuzzyFind>(); }},
     {"lookup", "Dump symbol details by ID or qualified name",
-     std::make_unique<Lookup>},
-    {"refs", "Find references by ID or qualified name", std::make_unique<Refs>},
+     []() -> std::unique_ptr<Command> { return std::make_unique<Lookup>(); }},
+    {"refs", "Find references by ID or qualified name",
+     []() -> std::unique_ptr<Command> { return std::make_unique<Refs>(); }},
     {"relations", "Find relations by ID and relation kind",
-     std::make_unique<Relations>},
-    {"export", "Export index", std::make_unique<Export>},
+     []() -> std::unique_ptr<Command> { return std::make_unique<Relations>(); }},
+    {"export", "Export index",
+     []() -> std::unique_ptr<Command> { return std::make_unique<Export>(); }},
 };
 
 std::unique_ptr<SymbolIndex> openIndex(llvm::StringRef Index) {
