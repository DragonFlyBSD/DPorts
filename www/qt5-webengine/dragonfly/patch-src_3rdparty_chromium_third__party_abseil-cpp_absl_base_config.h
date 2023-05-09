--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h
@@ -364,7 +364,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) ||   \
     defined(__ros__) || defined(__native_client__) || defined(__asmjs__) || \
     defined(__wasm__) || defined(__Fuchsia__) || defined(__sun) || \
-    defined(__ASYLO__)
+    defined(__ASYLO__) || defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -375,7 +375,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #ifdef ABSL_HAVE_PTHREAD_GETSCHEDPARAM
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(__ros__)
+    defined(__ros__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
