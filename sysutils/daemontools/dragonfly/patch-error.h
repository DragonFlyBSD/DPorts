--- error.h.orig	2001-07-12 16:49:49.000000000 +0000
+++ error.h
@@ -3,7 +3,7 @@
 #ifndef ERROR_H
 #define ERROR_H
 
-extern int errno;
+#include <errno.h>
 
 extern int error_intr;
 extern int error_nomem;
