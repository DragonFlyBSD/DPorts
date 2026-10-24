--- src/3rdparty/chromium/third_party/sqlite/src/amalgamation/sqlite3.c.intermediate	Thu Nov  6 22:15:25 2025
+++ src/3rdparty/chromium/third_party/sqlite/src/amalgamation/sqlite3.c	Thu Nov
@@ -14049,7 +14049,7 @@ struct fts5_api {
 ** But _XOPEN_SOURCE define causes problems for Mac OS X, so omit
 ** it.
 */
-#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(_XOPEN_SOURCE) && !defined(__DARWIN__) && !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #  define _XOPEN_SOURCE 600
 #endif
 
