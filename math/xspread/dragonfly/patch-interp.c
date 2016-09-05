--- interp.c.intermediate	2016-09-05 09:47:30 UTC
+++ interp.c
@@ -33,7 +33,11 @@
 #include <setjmp.h>
 #include <ctype.h>
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;		/* set by math functions */
+#endif
 
 #include "sc.h"
 
