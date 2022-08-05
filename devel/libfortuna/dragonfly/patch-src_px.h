--- src/px.h.orig	2015-04-27 18:17:43.000000000 +0300
+++ src/px.h
@@ -35,7 +35,9 @@
 #include <stdlib.h>
 #include <sys/types.h>
 #include <sys/param.h>
+#ifndef __DragonFly__
 #include <malloc_np.h>
+#endif
 #include "c.h"
 
 /* keep debug messages? */
