diff --git third_party/sqlite/src/amalgamation/sqlite3.c third_party/sqlite/src/amalgamation/sqlite3.c
index 2a7e95805a61..05ce5a1bc1bd 100644
--- third_party/sqlite/src/amalgamation/sqlite3.c
+++ third_party/sqlite/src/amalgamation/sqlite3.c
@@ -14486,7 +14486,8 @@ struct fts5_api {
 ** But _XOPEN_SOURCE define causes problems for Mac OS X, so omit
 ** it.
 */
-#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && !defined(__FreeBSD__) && \
+    !defined(__DragonFly__)
 #  define _XOPEN_SOURCE 600
 #endif
 
