--- src/affinity.c.orig	2018-12-02 10:58:48 UTC
+++ src/affinity.c
@@ -40,6 +40,10 @@ static int pthread_setaffinity_np (pthre
 }
 #endif
 
+#if defined (__DragonFly__)
+#include <pthread_np.h>
+#endif
+
 #if defined (__FreeBSD__)
 #include <pthread_np.h>
 typedef cpuset_t cpu_set_t;
