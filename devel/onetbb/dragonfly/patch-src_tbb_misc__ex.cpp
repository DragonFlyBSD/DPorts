--- src/tbb/misc_ex.cpp.orig	2020-12-08 11:00:57 UTC
+++ src/tbb/misc_ex.cpp
@@ -39,6 +39,10 @@
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
@@ -63,7 +67,7 @@ static const dynamic_link_descriptor iom
 #endif
 
 static void set_thread_affinity_mask( std::size_t maskSize, const basic_mask_t* threadMask ) {
-#if __linux__
+#if __linux__ || __DragonFly__
     if( sched_setaffinity( 0, maskSize, threadMask ) )
 #else /* FreeBSD */
     if( cpuset_setaffinity( CPU_LEVEL_WHICH, CPU_WHICH_TID, -1, maskSize, threadMask ) )
@@ -76,7 +80,7 @@ static void set_thread_affinity_mask( st
 }
 
 static void get_thread_affinity_mask( std::size_t maskSize, basic_mask_t* threadMask ) {
-#if __linux__
+#if __linux__ || __DragonFly__
     if( sched_getaffinity( 0, maskSize, threadMask ) )
 #else /* FreeBSD */
     if( cpuset_getaffinity( CPU_LEVEL_WHICH, CPU_WHICH_TID, -1, maskSize, threadMask ) )
@@ -135,19 +139,24 @@ static void initialize_hardware_concurre
     int err;
     int availableProcs = 0;
     int numMasks = 1;
-#if __linux__
+#if __linux__ || __DragonFly__
     int maxProcs = sysconf(_SC_NPROCESSORS_ONLN);
     int pid = getpid();
 #else /* FreeBSD >= 7.1 */
     int maxProcs = sysconf(_SC_NPROCESSORS_ONLN);
 #endif
     basic_mask_t* processMask;
+#ifdef __DragonFly__
+    // DragonFly uses static array (usually 256 bit long) in cpu_set_t
+    processMask = new cpu_set_t;
+    err = sched_getaffinity( pid, sizeof(cpu_set_t), processMask );
+#else
     const std::size_t BasicMaskSize =  sizeof(basic_mask_t);
     for (;;) {
         const int curMaskSize = BasicMaskSize * numMasks;
         processMask = new basic_mask_t[numMasks];
         std::memset( processMask, 0, curMaskSize );
-#if __linux__
+#if __linux__ || __DragonFly__
         err = sched_getaffinity( pid, curMaskSize, processMask );
         if ( !err || errno != EINVAL || curMaskSize * CHAR_BIT >= 256 * 1024 )
             break;
@@ -160,7 +169,15 @@ static void initialize_hardware_concurre
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
 #if __linux__
@@ -188,6 +205,7 @@ static void initialize_hardware_concurre
                     ++availableProcs;
             }
         }
+#endif
         process_mask = processMask;
     }
     else {
