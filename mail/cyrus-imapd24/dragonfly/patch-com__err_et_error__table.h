--- com_err/et/error_table.h.orig	2012-12-01 19:57:54.000000000 +0000
+++ com_err/et/error_table.h
@@ -63,7 +63,7 @@ int __far __pascal MessageBox (void __fa
 #else
 #define INTERFACE
 #define INTERFACE_C
-extern int errno;
+#include <errno.h>
 #endif
 
 struct error_table {
