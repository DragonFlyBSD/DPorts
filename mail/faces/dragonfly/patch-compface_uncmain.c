--- compface/uncmain.c.intermediate	2013-01-03 23:38:01.194490000 +0100
+++ compface/uncmain.c	2013-01-03 23:40:31.294700000 +0100
@@ -14,6 +14,8 @@
  */
 
 #include <fcntl.h>
+#include <string.h>
+#include <unistd.h>
 #include "compface.h"
 
 extern int xbitmap;
@@ -33,7 +35,12 @@
 
 /* error handling definitions follow */
 
+#ifdef __DragonFly__
+#include <errno.h>
+extern int sys_nerr;
+#else
 extern int errno, sys_nerr;
+#endif
 extern char *sys_errlist[];
 
 extern void exit P((int)) ;
