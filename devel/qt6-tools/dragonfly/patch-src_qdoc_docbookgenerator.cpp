--- src/qdoc/docbookgenerator.cpp.orig	2024-01-06 17:20:15 UTC
+++ src/qdoc/docbookgenerator.cpp
@@ -3351,7 +3351,7 @@ void DocBookGenerator::generateFileList(
         auto maybe_resolved_file{file_resolver.resolve(path)};
         if (!maybe_resolved_file) {
             // TODO: [uncentralized-admonition][failed-resolve-file]
-            QString details = std::transform_reduce(
+            QString details = transform_reduce(
                 file_resolver.get_search_directories().cbegin(),
                 file_resolver.get_search_directories().cend(),
                 u"Searched directories:"_s,
