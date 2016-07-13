--- camserv/main_loop.c.orig	2002-09-16 00:05:23.000000000 +0200
+++ camserv/main_loop.c
@@ -14,7 +14,11 @@
 #include "list.h"
 #include "log.h"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 static int Abort = 0;
 
