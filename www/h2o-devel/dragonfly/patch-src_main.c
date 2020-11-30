--- src/main.c.orig	2019-08-12 14:11:53 UTC
+++ src/main.c
@@ -68,6 +68,10 @@
 #endif
 #include "standalone.h"
 
+#if defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
+
 #ifdef TCP_FASTOPEN
 #define H2O_DEFAULT_LENGTH_TCP_FASTOPEN_QUEUE 4096
 #else
