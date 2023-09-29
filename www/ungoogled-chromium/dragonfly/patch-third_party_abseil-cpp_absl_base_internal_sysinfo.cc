diff --git third_party/abseil-cpp/absl/base/internal/sysinfo.cc third_party/abseil-cpp/absl/base/internal/sysinfo.cc
index 9c8fe993b68..7079875bce7 100644
--- third_party/abseil-cpp/absl/base/internal/sysinfo.cc
+++ third_party/abseil-cpp/absl/base/internal/sysinfo.cc
@@ -30,7 +30,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 
@@ -457,7 +457,7 @@ pid_t GetTID() {
   return getthrid();
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 pid_t GetTID() {
   return pthread_getthreadid_np();
