--- deps/v8/third_party/abseil-cpp/absl/base/internal/sysinfo.cc.orig	Mon Feb  3 15:50:45 2025
+++ deps/v8/third_party/abseil-cpp/absl/base/internal/sysinfo.cc	Mon Jun
@@ -30,11 +30,11 @@
 #include <sys/syscall.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if (__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -444,7 +444,7 @@ pid_t GetTID() {
   return static_cast<pid_t>(tid);
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 pid_t GetTID() { return static_cast<pid_t>(pthread_getthreadid_np()); }
 
