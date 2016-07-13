--- qfilelog.c.orig	2001-06-12 23:41:47.000000000 +0200
+++ qfilelog.c
@@ -4,7 +4,11 @@
 #include <string.h>
 #include <unistd.h>
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 #define PAUSE sleep(60)
 
