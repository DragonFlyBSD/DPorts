--- test/common/utils_concurrency_limit.h.orig	2022-01-25 05:51:44. UTC
+++ test/common/utils_concurrency_limit.h
@@ -37,6 +37,11 @@
 #endif
 #include <string.h>
 #include <sched.h>
+#if __DragonFly__
+#include <unistd.h>
+#include <string.h>
+#include <sched.h>
+#endif
 #if __FreeBSD__
 #include <errno.h>
 #include <sys/param.h>
@@ -85,7 +90,7 @@ static int get_max_procs() {
                 ++nproc;
         }
         maxProcs = nproc;
-#elif __linux__
+#elif __linux__ || __DragonFly__
         cpu_set_t mask;
         int result = 0;
         sched_getaffinity(0, sizeof(cpu_set_t), &mask);
@@ -102,7 +107,7 @@ static int get_max_procs() {
 }
 
 int get_start_affinity_process() {
-#if __linux__
+#if __linux__ || __DragonFly__
     cpu_set_t mask;
     sched_getaffinity(0, sizeof(cpu_set_t), &mask);
 
@@ -138,7 +143,7 @@ int limit_number_of_threads( int max_thr
     }
     bool err = !SetProcessAffinityMask(GetCurrentProcess(), mask);
 #else
-#if __linux__
+#if __linux__ || __DragonFly__
     using mask_t = cpu_set_t;
 #define setaffinity(mask) sched_setaffinity(getpid(), sizeof(mask_t), &mask)
 #else /*__FreeBSD*/
