--- extra/abseil/abseil-cpp-20230802.1/absl/base/internal/sysinfo.cc.orig	2026-06-30 16:11:51 UTC
+++ extra/abseil/abseil-cpp-20230802.1/absl/base/internal/sysinfo.cc
@@ -34,7 +34,7 @@
 #include <sys/sysctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -440,7 +440,7 @@ pid_t GetTID() {
   return static_cast<pid_t>(tid);
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 pid_t GetTID() { return static_cast<pid_t>(pthread_getthreadid_np()); }
 
