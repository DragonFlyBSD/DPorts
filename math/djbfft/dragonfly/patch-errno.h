--- error.h.orig	1999-09-30 22:25:58.000000000 +0200
+++ error.h	2013-01-01 13:30:13.142464000 +0100
@@ -1,7 +1,11 @@
 #ifndef ERROR_H
 #define ERROR_H
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 extern int error_intr;
 extern int error_nomem;
