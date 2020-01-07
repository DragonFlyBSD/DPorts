--- src/main.c.intermediate	2019-12-30 21:37:35.000000000 +0000
+++ src/main.c
@@ -18,8 +18,10 @@
    Modified by Glenn Washburn <gwashburn@Crossroads.com>
 	   (added support for extended attributes.)
  */
+#ifndef __DragonFly__
 #define _XOPEN_SOURCE 500
 #define _BSD_SOURCE 1
+#endif
 #include <fuse.h>
 #include <stdio.h>
 #include <unistd.h>
@@ -865,7 +867,7 @@ static int mhdd_mknod(const char *path,
 	return -errno;
 }
 
-#if _POSIX_SYNCHRONIZED_IO + 0 > 0 || defined(__FreeBSD__)
+#if _POSIX_SYNCHRONIZED_IO + 0 > 0 || defined(__FreeBSD__) || defined(__DragonFly__)
 #undef HAVE_FDATASYNC
 #else
 #define HAVE_FDATASYNC 1
