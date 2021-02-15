--- router/src/io/src/thread_affinity.cc.orig	2020-09-23 12:37:48 UTC
+++ router/src/io/src/thread_affinity.cc
@@ -36,7 +36,9 @@
 #include <sys/types.h>  // cpuset_t, must be before sys/cpuset.h
 
 #include <pthread_np.h>  // pthread_setaffinity_np
+#ifndef __DragonFly__
 #include <sys/cpuset.h>  // CPU_SET
+#endif
 #elif defined(_WIN32)
 #include <Windows.h>
 #elif defined(__sun)
