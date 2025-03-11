diff --git third_party/abseil-cpp/absl/base/internal/sysinfo.cc third_party/abseil-cpp/absl/base/internal/sysinfo.cc
index af3ec2ac43cc..97a28aa1f0c7 100644
--- third_party/abseil-cpp/absl/base/internal/sysinfo.cc
+++ third_party/abseil-cpp/absl/base/internal/sysinfo.cc
@@ -30,7 +30,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 
@@ -446,7 +446,7 @@ pid_t GetTID() {
   return static_cast<pid_t>(tid);
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 pid_t GetTID() { return static_cast<pid_t>(pthread_getthreadid_np()); }
 
