--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/sysinfo.cc.orig	Sat Mar  1 14:18:07 2025
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/sysinfo.cc	Sat Mar
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
