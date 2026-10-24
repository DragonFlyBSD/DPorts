--- src/OpenThreads/pthreads/PThread.cpp.orig
+++ src/OpenThreads/pthreads/PThread.cpp
@@ -21,7 +21,7 @@
 #include <sys/types.h>
 #include <unistd.h>
 #include <pthread.h>
-#if defined(HAVE_PTHREAD_SETAFFINITY_NP) && defined(__FreeBSD__)
+#if defined(HAVE_PTHREAD_SETAFFINITY_NP) && (defined(__FreeBSD__) || defined(__DragonFly__))
     #include <pthread_np.h>
 #endif
 #include <limits.h>
@@ -41,7 +41,7 @@
 #if defined(HAVE_THREE_PARAM_SCHED_SETAFFINITY) || defined(HAVE_TWO_PARAM_SCHED_SETAFFINITY)
 #    include <sched.h>
 #endif
-#if defined (__FreeBSD__) || defined (__APPLE__) || defined (__MACH__)
+#if defined (__FreeBSD__) || defined (__DragonFly__) || defined (__APPLE__) || defined (__MACH__)
     #include <sys/types.h>
 #if !defined (__GNU__)
     #include <sys/sysctl.h>
@@ -472,7 +472,8 @@
   return (size_t)gettid();
 #elif defined(__linux__)
   return (size_t)::syscall(SYS_gettid);
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif (defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) &&	\
+  !defined(__DragonFly__)
   long  tid;
   syscall(SYS_thr_self, &tid);
   return (size_t)tid;
@@ -1026,10 +1027,10 @@
    if (ret == -1)
       return 0;
    return ret;
-#elif defined(__FreeBSD__) || defined(__APPLE__) || defined(__MACH__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__) || defined(__MACH__)
    uint64_t num_cpus = 0;
    size_t num_cpus_length = sizeof(num_cpus);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
    sysctlbyname("hw.ncpu", &num_cpus, &num_cpus_length, NULL, 0);
 #else
    sysctlbyname("hw.activecpu", &num_cpus, &num_cpus_length, NULL, 0);
