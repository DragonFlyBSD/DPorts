diff --git third_party/sqlite/src/amalgamation/sqlite3.c third_party/sqlite/src/amalgamation/sqlite3.c
index 6bf7cecc94ec..fbe5412740b1 100644
--- third_party/sqlite/src/amalgamation/sqlite3.c
+++ third_party/sqlite/src/amalgamation/sqlite3.c
@@ -14119,7 +14119,8 @@ struct fts5_api {
 ** But _XOPEN_SOURCE define causes problems for Mac OS X, so omit
 ** it.
 */
-#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && !defined(__FreeBSD__) && \
+    !defined(__DragonFly__)
 #  define _XOPEN_SOURCE 600
 #endif
 
