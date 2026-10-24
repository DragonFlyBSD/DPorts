--- third_party/abseil-cpp/absl/base/internal/raw_logging.cc.orig	2026-09-09 12:00:00 UTC
+++ third_party/abseil-cpp/absl/base/internal/raw_logging.cc
@@ -43,7 +43,7 @@
 // this, consider moving both to config.h instead.
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) ||     \
     defined(__hexagon__) || defined(__Fuchsia__) || defined(__OpenBSD__) || \
-    defined(__EMSCRIPTEN__) || defined(__ASYLO__)
+    defined(__EMSCRIPTEN__) || defined(__ASYLO__) || defined(__DragonFly__)
 
 #include <unistd.h>
 
@@ -56,7 +56,8 @@
 // ABSL_HAVE_SYSCALL_WRITE is defined when the platform provides the syscall
 //   syscall(SYS_write, /*int*/ fd, /*char* */ buf, /*size_t*/ len);
 // for low level operations that want to avoid libc.
-#if (defined(__linux__) || defined(__FreeBSD__)) && !defined(__ANDROID__)
+#if (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && \
+    !defined(__ANDROID__)
 #include <sys/syscall.h>
 #define ABSL_HAVE_SYSCALL_WRITE 1
 #define ABSL_LOW_LEVEL_WRITE_SUPPORTED 1
