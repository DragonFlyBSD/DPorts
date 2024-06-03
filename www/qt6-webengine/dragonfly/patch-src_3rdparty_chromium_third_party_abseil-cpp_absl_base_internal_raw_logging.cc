diff --git third_party/abseil-cpp/absl/base/internal/raw_logging.cc third_party/abseil-cpp/absl/base/internal/raw_logging.cc
index 6273e8471bc..d597220cfed 100644
--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/raw_logging.cc
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/internal/raw_logging.cc
@@ -39,7 +39,8 @@
 // this, consider moving both to config.h instead.
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(__Fuchsia__) || defined(__native_client__) ||               \
-    defined(__OpenBSD__) || defined(__EMSCRIPTEN__) || defined(__ASYLO__)
+    defined(__OpenBSD__) || defined(__EMSCRIPTEN__) || defined(__ASYLO__) || \
+    defined(__DragonFly__)
 
 #include <unistd.h>
 
@@ -52,7 +53,7 @@
 // ABSL_HAVE_SYSCALL_WRITE is defined when the platform provides the syscall
 //   syscall(SYS_write, /*int*/ fd, /*char* */ buf, /*size_t*/ len);
 // for low level operations that want to avoid libc.
-#if (defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)) && \
+#if (defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)) && \
     !defined(__ANDROID__)
 #include <sys/syscall.h>
 #define ABSL_HAVE_SYSCALL_WRITE 1
