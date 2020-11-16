--- include/swoole.h.orig	2020-10-15 02:50:51 UTC
+++ include/swoole.h
@@ -590,6 +590,9 @@ int swoole_daemon(int nochdir, int noclo
 #include <pthread_np.h>
 typedef cpuset_t cpu_set_t;
 #endif
+#ifdef __DragonFly__
+#include <pthread_np.h>
+#endif
 int swoole_set_cpu_affinity(cpu_set_t *set);
 #endif
 
