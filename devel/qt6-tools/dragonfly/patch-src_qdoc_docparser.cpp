--- src/qdoc/docparser.cpp.orig	2022-12-12 17:11:50 UTC
+++ src/qdoc/docparser.cpp
@@ -1866,11 +1866,11 @@ void DocParser::quoteFromFile(const QStr
         // issued).
         // The current format is based on what was used before, review
         // it when it is moved out.
-        QString details = std::transform_reduce(
+        QString details = transform_reduce(
             (*file_resolver).get_search_directories().cbegin(),
             (*file_resolver).get_search_directories().cend(),
             u"Searched directories:"_qs,
-            std::plus(),
+            std::plus<>(),
             [](const DirectoryPath& directory_path){ return " " + directory_path.value(); }
         );
 
