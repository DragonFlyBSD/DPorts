--- test/common/utils_concurrency_limit.h.orig	2020-12-08 11:00:57 UTC
+++ test/common/utils_concurrency_limit.h
@@ -33,6 +33,10 @@
 #include <sys/sysinfo.h>
 #include <string.h>
 #include <sched.h>
+#elif __DragonFly__
+#include <unistd.h>
+#include <string.h>
+#include <sched.h>
 #elif __FreeBSD__
 #include <unistd.h>
 #include <errno.h>
@@ -82,7 +86,7 @@ static int get_max_procs() {
                 ++nproc;
         }
         maxProcs = nproc;
-#elif __linux__
+#elif __linux__ || __DragonFly__
         cpu_set_t mask;
         int result = 0;
         sched_getaffinity(0, sizeof(cpu_set_t), &mask);
@@ -99,7 +103,7 @@ static int get_max_procs() {
 }
 
 int get_start_affinity_process() {
-#if __linux__
+#if __linux__ || __DragonFly__
     cpu_set_t mask;
     sched_getaffinity(0, sizeof(cpu_set_t), &mask);
 
@@ -135,7 +139,7 @@ int limit_number_of_threads( int max_thr
     }
     bool err = !SetProcessAffinityMask(GetCurrentProcess(), mask);
 #else
-#if __linux__
+#if __linux__ || __DragonFly__
     using mask_t = cpu_set_t;
 #define setaffinity(mask) sched_setaffinity(getpid(), sizeof(mask_t), &mask)
 #else /*__FreeBSD*/
