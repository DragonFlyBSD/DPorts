--- src/platform_posix.cc.orig	2018-07-10 15:40:31 UTC
+++ src/platform_posix.cc
@@ -8,7 +8,9 @@
 #include <pthread.h>
 #if defined(__FreeBSD__)
 #include <pthread_np.h>
+#ifndef __DragonFly__
 #include <sys/thr.h>
+#endif
 #elif defined(__OpenBSD__)
 #include <pthread_np.h>
 #endif
