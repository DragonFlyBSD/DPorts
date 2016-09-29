--- runtime/os-unix.c.orig	2016-06-01 22:59:38.000000000 +0300
+++ runtime/os-unix.c
@@ -432,6 +432,7 @@ COMMON_SYSDEP void __cilkrts_idle(void)
 #elif defined(__MIC__)
     _mm_delay_32(1024);
 #elif defined(__linux__) || \
+      defined(__DragonFly__) || \
       defined(__APPLE__) || \
       defined(__CYGWIN__)
       
@@ -468,7 +469,7 @@ COMMON_SYSDEP void __cilkrts_yield(void)
     // giving up the processor and latency starting up when work becomes
     // available
     _mm_delay_32(1024);
-#elif defined(__linux__)
+#elif defined(__linux__) || defined(__DragonFly__)
     // On Linux, call pthread_yield (which in turn will call sched_yield)
     // to yield quantum.
     pthread_yield();
