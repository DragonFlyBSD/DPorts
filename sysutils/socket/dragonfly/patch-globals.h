--- globals.h.orig	2018-01-27 18:00:57 UTC
+++ globals.h
@@ -48,7 +48,11 @@ void add_crs A((char *from, char *to, in
 void strip_crs A((char *from, char *to, int *sizep)) ;
 void background A((void)) ;
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno ;
+#endif
 
 /* global variables */
 extern int serverflag ;
