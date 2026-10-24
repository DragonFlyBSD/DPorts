--- src/unix/osd.c.orig	2022-07-26 00:00:00 UTC
+++ src/unix/osd.c
@@ -40,7 +40,7 @@
 #include <fcntl.h>
 #include <errno.h>
 #include <pthread.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 #include <string.h>
@@ -56,7 +56,7 @@
 #include "rdma/fi_errno.h"
 #include "rdma/providers/fi_log.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 typedef cpuset_t ofi_cpu_set_t;
 #elif defined __linux__
 typedef cpu_set_t ofi_cpu_set_t;
