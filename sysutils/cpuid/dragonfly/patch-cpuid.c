--- cpuid.c.intermediate	2022-01-24 04:44:39.000000000 +0000
+++ cpuid.c
@@ -119,7 +119,9 @@ typedef off_t off64_t;
 #include <strings.h>
 #include <pthread.h>
 #else
+#ifdef __FreeBSD__
 #include <sys/cpuset.h>
+#endif
 #include <sched.h>
 #endif
 
