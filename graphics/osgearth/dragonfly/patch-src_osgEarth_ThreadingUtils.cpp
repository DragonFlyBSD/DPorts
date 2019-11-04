--- src/osgEarth/ThreadingUtils.cpp.orig	2019-04-19 16:45:18 UTC
+++ src/osgEarth/ThreadingUtils.cpp
@@ -20,7 +20,7 @@
 
 #ifdef _WIN32
     extern "C" unsigned long __stdcall GetCurrentThreadId();
-#elif defined(__APPLE__) || defined(__LINUX__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__ANDROID__)
+#elif defined(__APPLE__) || defined(__LINUX__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__ANDROID__) || defined(__DragonFly__)
 #   include <unistd.h>
 #   include <sys/syscall.h>
 #else
@@ -44,6 +44,8 @@ unsigned osgEarth::Threading::getCurrent
   return gettid();
 #elif __LINUX__
   return (unsigned)::syscall(SYS_gettid);
+#elif __DragonFly__
+  return (unsigned)::syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
   long  tid;
   syscall(SYS_thr_self, &tid);
