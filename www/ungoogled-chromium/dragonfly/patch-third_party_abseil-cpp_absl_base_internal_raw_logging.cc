diff --git third_party/abseil-cpp/absl/base/internal/raw_logging.cc third_party/abseil-cpp/absl/base/internal/raw_logging.cc
index f567245a9ab..3d1bd9dd66f 100644
--- third_party/abseil-cpp/absl/base/internal/raw_logging.cc
+++ third_party/abseil-cpp/absl/base/internal/raw_logging.cc
@@ -43,7 +43,8 @@
 // this, consider moving both to config.h instead.
 #if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(__Fuchsia__) || defined(__native_client__) ||               \
-    defined(__OpenBSD__) || defined(__EMSCRIPTEN__) || defined(__ASYLO__)
+    defined(__OpenBSD__) || defined(__EMSCRIPTEN__) || defined(__ASYLO__) || \
+    defined(__DragonFly__)
 
 #include <unistd.h>
 
@@ -56,7 +57,7 @@
 // ABSL_HAVE_SYSCALL_WRITE is defined when the platform provides the syscall
 //   syscall(SYS_write, /*int*/ fd, /*char* */ buf, /*size_t*/ len);
 // for low level operations that want to avoid libc.
-#if (defined(__linux__) || defined(__FreeBSD__)) && \
+#if (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)) && \
     !defined(__ANDROID__)
 #include <sys/syscall.h>
 #define ABSL_HAVE_SYSCALL_WRITE 1
