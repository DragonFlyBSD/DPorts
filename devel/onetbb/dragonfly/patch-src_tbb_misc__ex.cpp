--- src/tbb/misc_ex.cpp.orig	2021-10-04 09:50:18 UTC
+++ src/tbb/misc_ex.cpp
@@ -41,6 +41,10 @@
 #include <cerrno>
 #elif __sun
 #include <sys/sysinfo.h>
+#elif __DragonFly__
+#include <cerrno>
+#include <cstring>
+#include <sched.h>
 #elif __FreeBSD__
 #include <cerrno>
 #include <cstring>
@@ -139,6 +143,12 @@ static void initialize_hardware_concurre
     int numMasks = 1;
     int maxProcs = sysconf(_SC_NPROCESSORS_ONLN);
     basic_mask_t* processMask;
+#ifdef __DragonFly__
+    // DragonFly uses static array (usually 256 bit long) in cpu_set_t
+    processMask = new cpu_set_t;
+    int pid = getpid();
+    err = sched_getaffinity( pid, sizeof(cpu_set_t), processMask );
+#else
     const std::size_t BasicMaskSize =  sizeof(basic_mask_t);
     for (;;) {
         const int curMaskSize = BasicMaskSize * numMasks;
@@ -149,7 +159,7 @@ static void initialize_hardware_concurre
         err = cpuset_getaffinity( CPU_LEVEL_WHICH, CPU_WHICH_PID, -1, curMaskSize, processMask );
         if ( !err || errno != ERANGE || curMaskSize * CHAR_BIT >= 16 * 1024 )
             break;
-#else /* __unix__ */
+#else /* __unix__  */
         int pid = getpid();
         err = sched_getaffinity( pid, curMaskSize, processMask );
         if ( !err || errno != EINVAL || curMaskSize * CHAR_BIT >= 256 * 1024 )
@@ -158,7 +168,15 @@ static void initialize_hardware_concurre
         delete[] processMask;
         numMasks <<= 1;
     }
+#endif
     if ( !err ) {
+#ifdef __DragonFly__
+      num_masks = 1; // static array
+      for ( size_t i = 0; availableProcs < maxProcs && i < sizeof(cpu_set_t); ++i ) {
+         if ( CPU_ISSET( i, processMask ) )
+             ++availableProcs;
+      }
+#else
         // We have found the mask size and captured the process affinity mask into processMask.
         num_masks = numMasks; // do here because it's needed for affinity_helper to work
 #if __unix__
@@ -186,6 +204,7 @@ static void initialize_hardware_concurre
                     ++availableProcs;
             }
         }
+#endif
         process_mask = processMask;
     }
     else {
