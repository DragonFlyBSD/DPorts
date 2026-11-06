--- src/fusepod_util.h.orig	2026-11-06 02:58:09 UTC
+++ src/fusepod_util.h
@@ -26,7 +26,7 @@ using std::vector;
  * Function object which return compares 2 strings ignoring case.
  */
 struct ltcasestr {
-    bool operator () (const char * a, const char * b) {
+    bool operator () (const char * a, const char * b) const {
         return strcasecmp (a, b) < 0;
     }
 };
