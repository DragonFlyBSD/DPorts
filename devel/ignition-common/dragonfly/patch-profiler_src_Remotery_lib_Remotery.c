--- profiler/src/Remotery/lib/Remotery.c.orig
+++ profiler/src/Remotery/lib/Remotery.c
@@ -92,7 +92,7 @@
         #include <mach/mach.h>
         #include <sys/time.h>
     #else
-        #ifndef __FreeBSD__
+        #if !defined(__FreeBSD__) && !defined(__DragonFly__)
             #include <malloc.h>
         #endif
     #endif
@@ -113,7 +113,7 @@
 
     #ifdef RMT_PLATFORM_LINUX
         #include <time.h>
-        #ifdef __FreeBSD__
+        #if defined(__FreeBSD__) || defined(__DragonFly__)
             #include <pthread_np.h>
         #else
             #include <sys/prctl.h>
@@ -251,7 +251,7 @@
         clock_t time = clock();
 
         // CLOCKS_PER_SEC is 128 on FreeBSD, causing div/0
-        #ifdef __FreeBSD__
+        #if defined(__FreeBSD__) || defined(__DragonFly__)
             rmtU32 msTime = (rmtU32) (time * 1000 / CLOCKS_PER_SEC);
         #else
             rmtU32 msTime = (rmtU32) (time / (CLOCKS_PER_SEC / 1000));
@@ -665,7 +665,7 @@
     RMT_UNREFERENCED_PARAMETER(nb_attempts);
 
 #ifdef RMT_PLATFORM_LINUX
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
         char path[] = "/tmp/ring-buffer-XXXXXX";
     #else
         char path[] = "/dev/shm/ring-buffer-XXXXXX";
@@ -1170,7 +1170,7 @@
 typedef int errno_t;
 #endif
 
-#if (!defined(_WIN64) && !defined(__APPLE__) && !defined(_RSIZE_T_DEFINED)) || \
+#if (!defined(_WIN64) && !defined(__APPLE__) && !defined(_RSIZE_T_DEFINED) && !defined(_RSIZE_T_DECLARED)) || \
   (defined(__MINGW32__) && !(defined(RSIZE_T_DEFINED) || defined(_RSIZE_T_DEFINED)))
 typedef unsigned int rsize_t;
 #endif
@@ -4278,7 +4278,7 @@
 
     // Set the initial name to Thread0 etc. or use the existing Linux name.
     thread_sampler->name[0] = 0;
-    #if defined(RMT_PLATFORM_LINUX) && RMT_USE_POSIX_THREADNAMES && !defined(__FreeBSD__)
+    #if defined(RMT_PLATFORM_LINUX) && RMT_USE_POSIX_THREADNAMES && !defined(__FreeBSD__) && !defined(__DragonFly__)
     prctl(PR_GET_NAME,thread_sampler->name,0,0,0);
     #else
     {
@@ -5141,7 +5141,7 @@
         char name_clamp[16];
         name_clamp[0] = 0;
         strncat_s(name_clamp, sizeof(name_clamp), name, 15);
-        #ifdef __FreeBSD__
+        #if defined(__FreeBSD__) || defined(__DragonFly__)
             pthread_set_name_np(pthread_self(), name_clamp);
         #else
             prctl(PR_SET_NAME,name_clamp,0,0,0);
