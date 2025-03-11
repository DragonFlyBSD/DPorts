diff --git third_party/abseil-cpp/absl/base/internal/raw_logging.cc third_party/abseil-cpp/absl/base/internal/raw_logging.cc
index d32b40a8bb7f..3e8f41087c4f 100644
--- third_party/abseil-cpp/absl/base/internal/raw_logging.cc
+++ third_party/abseil-cpp/absl/base/internal/raw_logging.cc
@@ -44,7 +44,8 @@
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(__hexagon__) || defined(__Fuchsia__) ||                     \
     defined(__native_client__) || defined(__OpenBSD__) ||               \
-    defined(__EMSCRIPTEN__) || defined(__ASYLO__)
+    defined(__EMSCRIPTEN__) || defined(__ASYLO__) || \
+    defined(__DragonFly__)
 
 #include <unistd.h>
 
@@ -57,7 +58,8 @@
 // ABSL_HAVE_SYSCALL_WRITE is defined when the platform provides the syscall
 //   syscall(SYS_write, /*int*/ fd, /*char* */ buf, /*size_t*/ len);
 // for low level operations that want to avoid libc.
-#if (defined(__linux__) || defined(__FreeBSD__)) && !defined(__ANDROID__)
+#if (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && \
+    !defined(__ANDROID__)
 #include <sys/syscall.h>
 #define ABSL_HAVE_SYSCALL_WRITE 1
 #define ABSL_LOW_LEVEL_WRITE_SUPPORTED 1
