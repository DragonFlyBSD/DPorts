--- public/oriutil/thread.h.orig	2014-01-17 06:40:03 UTC
+++ public/oriutil/thread.h
@@ -40,7 +40,7 @@
 #if defined(__APPLE__)
 #include "mach/mach_types.h"
 typedef mach_port_t threadid_t;
-#elif defined(__linux__)
+#elif defined(__linux__) || defined(__DragonFly__)
 typedef pid_t threadid_t;
 #elif defined(__FreeBSD__)
 #include <sys/thr.h>
