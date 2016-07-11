--- error.h.orig	1998-11-15 03:28:23.000000000 +0100
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
