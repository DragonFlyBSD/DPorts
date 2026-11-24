--- src/lib/srdb1/db_ut.c.orig
+++ src/lib/srdb1/db_ut.c
@@ -31,7 +31,7 @@
  */
 
 
-#if defined(__OS_darwin) || defined(__OS_freebsd)
+#if defined(__OS_darwin) || defined(__OS_freebsd) || defined(__OS_dragonfly)
 #include "../../core/pvar.h"
 #endif
 
