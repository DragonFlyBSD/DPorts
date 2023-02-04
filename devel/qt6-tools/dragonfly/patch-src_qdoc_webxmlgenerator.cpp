--- src/qdoc/webxmlgenerator.cpp.orig	2022-12-12 17:11:50 UTC
+++ src/qdoc/webxmlgenerator.cpp
@@ -689,11 +689,11 @@ const Atom *WebXMLGenerator::addAtomElem
                 writer.writeAttribute("path", (*maybe_resolved_file).get_path());
             else {
                 // TODO: [uncetnralized-admonition][failed-resolve-file]
-                QString details = std::transform_reduce(
+                QString details = transform_reduce(
                     file_resolver.get_search_directories().cbegin(),
                     file_resolver.get_search_directories().cend(),
                     u"Searched directories:"_qs,
-                    std::plus(),
+                    std::plus<>(),
                     [](const DirectoryPath& directory_path){ return " " + directory_path.value(); }
                 );
 
