--- ./util/symlinks.c.orig	2012-12-31 20:24:56.552623000 +0100
+++ ./util/symlinks.c	2012-12-31 20:36:41.373607000 +0100
@@ -22,8 +22,12 @@
 #include <errno.h>
 
 #ifndef S_ISLNK
+#ifdef __DragonFly__
+#define S_ISLNK(m)	(((m) & 0170000) == 0120000)
+#else
 #define S_ISLNK(mode) (((mode) & (_S_IFMT)) == (_S_IFLNK))
 #endif
+#endif
 
 #ifndef PATH_MAX
 #define PATH_MAX 1024
