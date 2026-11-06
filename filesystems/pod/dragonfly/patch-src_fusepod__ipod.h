--- src/fusepod_ipod.h.orig	2026-11-06 02:58:09 UTC
+++ src/fusepod_ipod.h
@@ -51,7 +51,7 @@ struct NodeValue {
  */
 class Node {
     struct nodecomp {
-        bool operator () (const Node * a, const Node * b) {
+        bool operator () (const Node * a, const Node * b) const {
             return strcasecmp (a->value.text, b->value.text) < 0;
         }
     };
