--- globals.h.intermediate	2013-08-19 08:22:06.102501000 +0000
+++ globals.h
@@ -8,6 +8,7 @@ Please read the file COPYRIGHT for furth
 */
 
 #include "patchlevel.h"
+#include <errno.h>
  
 #if HAVE_SYS_PARAM_H
 # include <sys/param.h>
@@ -48,7 +49,6 @@ void add_crs A((char *from, char *to, in
 void strip_crs A((char *from, char *to, int *sizep)) ;
 void background A((void)) ;
 
-extern int errno ;
 
 /* global variables */
 extern int serverflag ;
