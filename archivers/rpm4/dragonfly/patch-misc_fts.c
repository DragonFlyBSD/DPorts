--- misc/fts.c.orig	2023-02-11 22:38:19 UTC
+++ misc/fts.c
@@ -37,7 +37,8 @@ static char sccsid[] = "@(#)fts.c	8.6 (B
 #endif
 
 /* Conditional to set up proper fstat64 implementation */
-#if defined(hpux) || defined(sun) || defined(__FreeBSD__) || (defined(__APPLE__) && defined(_DARWIN_FEATURE_ONLY_64_BIT_INODE))
+#if defined(hpux) || defined(sun) || defined(__FreeBSD__) || defined(__DragonFly__) || \
+	(defined(__APPLE__) && defined(_DARWIN_FEATURE_ONLY_64_BIT_INODE))
 #   define FTS_FSTAT64(_fd, _sbp)   fstat((_fd), (_sbp))
 #else
 #   define FTS_FSTAT64(_fd, _sbp)   fstat64((_fd), (_sbp))
@@ -74,6 +75,10 @@ static char sccsid[] = "@(#)fts.c	8.6 (B
 #		define stat64	stat
 #endif
 #endif
+#if defined(__DragonFly__)
+#   define dirfd(dirp)		-1
+#   define stat64		stat
+#endif
 
 #include <fcntl.h>
 #include <stdlib.h>
