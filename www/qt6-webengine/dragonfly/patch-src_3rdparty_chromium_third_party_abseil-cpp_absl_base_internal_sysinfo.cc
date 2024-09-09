diff --git third_party/abseil-cpp/absl/base/internal/sysinfo.cc third_party/abseil-cpp/absl/base/internal/sysinfo.cc
index 41c488ddd27..3042b63d2f8 100644
--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/sysinfo.cc
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/sysinfo.cc
@@ -30,7 +30,7 @@
 #include <sys/syscall.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 
