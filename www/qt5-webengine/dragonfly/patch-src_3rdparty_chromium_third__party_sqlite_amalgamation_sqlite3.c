--- src/3rdparty/chromium/third_party/sqlite/amalgamation/sqlite3.c.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/third_party/sqlite/amalgamation/sqlite3.c
@@ -35875,7 +35875,7 @@ SQLITE_API int sqlite3_fullsync_count =
 ** fsync(). If you know that your system does support fdatasync() correctly,
 ** then simply compile with -Dfdatasync=fdatasync or -DHAVE_FDATASYNC
 */
-#if !defined(fdatasync) && !HAVE_FDATASYNC
+#if (!defined(fdatasync) && !HAVE_FDATASYNC) || defined(__DragonFly__)
 # define fdatasync fsync
 #endif
 
