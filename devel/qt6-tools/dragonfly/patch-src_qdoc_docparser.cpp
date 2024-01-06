--- src/qdoc/docparser.cpp.orig	2023-09-24 09:45:36 UTC
+++ src/qdoc/docparser.cpp
@@ -1883,7 +1883,7 @@ void DocParser::quoteFromFile(const QStr
         // issued).
         // The current format is based on what was used before, review
         // it when it is moved out.
-        QString details = std::transform_reduce(
+        QString details = transform_reduce(
             (*file_resolver).get_search_directories().cbegin(),
             (*file_resolver).get_search_directories().cend(),
             u"Searched directories:"_s,
