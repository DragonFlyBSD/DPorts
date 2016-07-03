--- gtk-helper/gtk-helper.c.orig	2016-03-15 09:14:35.000000000 +0200
+++ gtk-helper/gtk-helper.c
@@ -29,7 +29,11 @@
 
 #include "gtk-helper.h"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 /* Message buffer for xwarn* and xerr* */
 static char msgbuf[1024];
