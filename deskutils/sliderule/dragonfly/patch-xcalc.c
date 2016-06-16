--- xcalc.c.orig	1997-08-03 20:59:00.000000000 +0300
+++ xcalc.c
@@ -44,7 +44,11 @@ static char *rcsid_xcalc_c = "$XConsorti
 /* program icon */
 #include "icon"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 
 /* constants used for setting up the calculator.  changing them would 
