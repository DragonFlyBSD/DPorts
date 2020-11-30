--- src/haproxy.c.orig	2019-11-25 16:38:19 UTC
+++ src/haproxy.c
@@ -52,6 +52,9 @@
 #include <grp.h>
 #ifdef USE_CPU_AFFINITY
 #include <sched.h>
+#ifdef __DragonFly__
+#include <pthread_np.h>
+#endif
 #ifdef __FreeBSD__
 #include <sys/param.h>
 #include <sys/cpuset.h>
