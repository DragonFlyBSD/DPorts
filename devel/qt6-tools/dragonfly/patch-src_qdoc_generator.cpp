--- src/qdoc/generator.cpp.orig	2023-09-24 09:45:36 UTC
+++ src/qdoc/generator.cpp
@@ -962,7 +962,7 @@ void Generator::generateFileList(const E
         auto maybe_resolved_file{file_resolver.resolve(path)};
         if (!maybe_resolved_file) {
             // TODO: [uncentralized-admonition][failed-resolve-file]
-            QString details = std::transform_reduce(
+            QString details = transform_reduce(
                 file_resolver.get_search_directories().cbegin(),
                 file_resolver.get_search_directories().cend(),
                 u"Searched directories:"_s,
