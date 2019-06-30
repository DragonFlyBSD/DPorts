--- misc/fts.c.intermediate	2019-06-13 12:04:25.000000000 +0000
+++ misc/fts.c
@@ -32,7 +32,7 @@ static char sccsid[] = "@(#)fts.c	8.6 (B
 #endif /* LIBC_SCCS and not lint */
 
 /* Conditional to set up proper fstat64 implementation */
-#if defined(hpux) || defined(__FreeBSD__) || defined(sun)
+#if defined(hpux) || defined(__FreeBSD__) ||  defined(sun) || defined(__DragonFly__)
 #   define FTS_FSTAT64(_fd, _sbp)   fstat((_fd), (_sbp))
 #else
 #   define FTS_FSTAT64(_fd, _sbp)   fstat64((_fd), (_sbp))
@@ -66,6 +66,10 @@ static char sccsid[] = "@(#)fts.c	8.6 (B
 #if defined(__APPLE__)
 #   define __errno_location()	(__error())
 #endif
+#if defined(__DragonFly__)
+#   define dirfd(dirp)		-1
+#   define stat64		stat
+#endif
 
 #include <stdlib.h>
 #include <string.h>
