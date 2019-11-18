--- sbin/yadifad/server-rw.c.orig	2019-02-11 12:45:56 UTC
+++ sbin/yadifad/server-rw.c
@@ -63,7 +63,10 @@
 #define _GNU_SOURCE 1
 #include <sched.h>
 
-#if defined __FreeBSD__
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#include <pthread_np.h>
+#elif defined __FreeBSD__
 #include <sys/param.h>
 #include <sys/cpuset.h>
 typedef cpuset_t cpu_set_t;
