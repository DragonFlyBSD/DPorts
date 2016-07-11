--- error.h.orig	1999-03-14 20:51:04.000000000 +0100
+++ error.h	2016-07-11 17:18:47.000000000 +0300
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
