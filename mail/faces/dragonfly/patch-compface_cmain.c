--- compface/cmain.c.intermediate	2013-01-03 23:34:22.000000000 +0100
+++ compface/cmain.c	2013-01-03 23:36:20.354349000 +0100
@@ -14,6 +14,8 @@
  */
 
 #include <fcntl.h>
+#include <string.h>
+#include <unistd.h>
 #include "compface.h"
 
 /* the buffer is longer than needed to handle sparse input formats */
@@ -31,7 +33,12 @@
 
 /* error handling definitions follow */
 
+#ifdef __DragonFly__
+#include <errno.h>
+extern int sys_nerr;
+#else
 extern int errno, sys_nerr;
+#endif
 extern char *sys_errlist[];
 
 extern void exit P((int)) ;
