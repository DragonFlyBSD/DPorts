--- src/file/mount_getfsstat.c.orig	2022-10-20 15:27:41.638922000 +0200
+++ src/file/mount_getfsstat.c	2022-10-20 17:03:42.097801000 +0200
@@ -28,7 +28,6 @@
 #include <stdlib.h>
 #include <string.h>
 
-#define __BSD_VISIBLE 1
 #include <sys/types.h>
 #include <sys/stat.h>
 #ifdef HAVE_GETFSSTAT
