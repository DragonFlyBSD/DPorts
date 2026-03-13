--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/raw_logging.cc.orig	Tue Mar 18 19:28:59 2025
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/raw_logging.cc	Thu Nov
@@ -44,7 +44,7 @@
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(__hexagon__) || defined(__Fuchsia__) ||                     \
     defined(__native_client__) || defined(__OpenBSD__) ||               \
-    defined(__EMSCRIPTEN__) || defined(__ASYLO__)
+	defined(__EMSCRIPTEN__) || defined(__ASYLO__) || defined(__DragonFly__)
 
 #include <unistd.h>
 
@@ -57,7 +57,8 @@
 // ABSL_HAVE_SYSCALL_WRITE is defined when the platform provides the syscall
 //   syscall(SYS_write, /*int*/ fd, /*char* */ buf, /*size_t*/ len);
 // for low level operations that want to avoid libc.
-#if (defined(__linux__) || defined(__FreeBSD__)) && !defined(__ANDROID__)
+#if (defined(__linux__) || defined(__FreeBSD__)) && !defined(__ANDROID__) || \
+	defined(__DragonFly__)
 #include <sys/syscall.h>
 #define ABSL_HAVE_SYSCALL_WRITE 1
 #define ABSL_LOW_LEVEL_WRITE_SUPPORTED 1
