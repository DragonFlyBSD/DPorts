--- src/callbacks.c.intermediate	2016-08-11 08:13:23 UTC
+++ src/callbacks.c
@@ -14,6 +14,11 @@
 #include <dev/ppbus/ppbconf.h>
 #endif
 
+#ifdef __DragonFly__
+#include <dev/misc/ppi/ppi.h>
+#include <bus/ppbus/ppbconf.h>
+#define USE_PPI_DEV
+#endif
 
 #ifdef __GLIBC__
 #include <sys/io.h>
