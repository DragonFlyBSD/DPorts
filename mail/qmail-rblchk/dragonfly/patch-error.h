--- error.h.orig	2005-08-16 16:39:04.000000000 +0300
+++ error.h
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
