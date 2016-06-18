--- loadfile.c.orig	1995-04-01 14:17:21.000000000 +0300
+++ loadfile.c
@@ -3,7 +3,11 @@
 #include <sys/stat.h>
 #include <sys/fcntl.h>
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern errno;
+#endif
 
 char *loadfile(path)
 char *path;
