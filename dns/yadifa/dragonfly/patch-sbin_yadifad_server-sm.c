--- sbin/yadifad/server-sm.c.orig	2020-12-09 09:23:22 UTC
+++ sbin/yadifad/server-sm.c
@@ -65,7 +65,10 @@
 #include <sched.h>
 #endif
 
-#if defined __FreeBSD__
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#include <pthread_np.h>
+#elif defined __FreeBSD__
 #include <sys/param.h>
 #include <sys/cpuset.h>
 typedef cpuset_t cpu_set_t;
