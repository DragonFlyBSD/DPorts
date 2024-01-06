--- src/qdoc/webxmlgenerator.cpp.orig	2023-09-24 09:45:36 UTC
+++ src/qdoc/webxmlgenerator.cpp
@@ -693,7 +693,7 @@ const Atom *WebXMLGenerator::addAtomElem
                 writer.writeAttribute("path", (*maybe_resolved_file).get_path());
             else {
                 // TODO: [uncetnralized-admonition][failed-resolve-file]
-                QString details = std::transform_reduce(
+                QString details = transform_reduce(
                     file_resolver.get_search_directories().cbegin(),
                     file_resolver.get_search_directories().cend(),
                     u"Searched directories:"_s,
