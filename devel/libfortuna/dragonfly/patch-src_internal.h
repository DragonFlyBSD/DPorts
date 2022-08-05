--- src/internal.h.orig	2015-04-27 18:17:43.000000000 +0300
+++ src/internal.h
@@ -33,7 +33,9 @@
 #define __INTERNAL_H
 
 #include <stdlib.h>
+#ifndef __DragonFly__
 #include <malloc_np.h>
+#endif
 #include <time.h>
 
 #include "px.h"
