--- com_err/et/error_table.h.orig	2015-07-06 07:48:40.000000000 +0300
+++ com_err/et/error_table.h
@@ -63,8 +63,12 @@ int __far __pascal MessageBox (void __fa
 #else
 #define INTERFACE
 #define INTERFACE_C
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
 #endif
+#endif
 
 struct error_table {
     char const * const * msgs;
