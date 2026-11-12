--- third_party/abseil-cpp/absl/base/internal/sysinfo.cc.orig	2026-09-04 00:01:29 UTC
+++ third_party/abseil-cpp/absl/base/internal/sysinfo.cc
@@ -443,7 +443,7 @@ pid_t GetTID() {
   return static_cast<pid_t>(tid);
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 pid_t GetTID() { return static_cast<pid_t>(pthread_getthreadid_np()); }
 
