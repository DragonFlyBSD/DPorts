--- libcilkrts/runtime/os-unix.c.orig	2013-11-04 10:13:55.000000000 +0000
+++ libcilkrts/runtime/os-unix.c
@@ -56,6 +56,8 @@
     // Uses sysconf(_SC_NPROCESSORS_ONLN) in verbose output
 #elif defined  __FreeBSD__
 // No additional include files
+#elif defined __DragonFly__
+// No additional include files
 #elif defined __CYGWIN__
 // Cygwin on Windows - no additional include files
 #elif defined  __VXWORKS__
@@ -369,7 +371,7 @@ COMMON_SYSDEP int __cilkrts_hardware_cpu
     assert((unsigned)count == count);
 
     return count;
-#elif defined  __FreeBSD__ || defined __CYGWIN__
+#elif defined  __FreeBSD__ || defined __CYGWIN__ || defined __DragonFly__
     int ncores = sysconf(_SC_NPROCESSORS_ONLN);
 
     return ncores;
@@ -397,6 +399,8 @@ COMMON_SYSDEP void __cilkrts_yield(void)
     // On MacOS, call sched_yield to yield quantum.  I'm not sure why we
     // don't do this on Linux also.
     sched_yield();
+#elif defined(__DragonFly__)
+    sched_yield();
 #elif defined(__MIC__)
     // On MIC, pthread_yield() really trashes things.  Arch's measurements
     // showed that calling _mm_delay_32() (or doing nothing) was a better
