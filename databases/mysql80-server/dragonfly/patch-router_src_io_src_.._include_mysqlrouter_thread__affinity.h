--- router/src/io/src/../include/mysqlrouter/thread_affinity.h.orig	2020-09-23 12:37:48 UTC
+++ router/src/io/src/../include/mysqlrouter/thread_affinity.h
@@ -34,7 +34,9 @@
 #elif defined(__FreeBSD__)
 #include <sys/types.h>  // must be before sys/cpuset.h for cpusetid_t
 
+#ifndef __DragonFly__
 #include <sys/cpuset.h>  // CPU_SETSIZE
+#endif
 #elif defined(_WIN32)
 #include <Windows.h>
 #endif
