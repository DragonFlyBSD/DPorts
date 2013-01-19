--- error.h.orig	1998-06-15 12:53:16.000000000 +0200
+++ error.h	2013-01-19 11:02:40.022277000 +0100
@@ -1,7 +1,7 @@
 #ifndef ERROR_H
 #define ERROR_H
 
-extern int errno;
+#include <errno.h>
 
 extern int error_intr;
 extern int error_nomem;
