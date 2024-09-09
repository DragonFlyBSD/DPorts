diff --git third_party/abseil-cpp/absl/base/config.h third_party/abseil-cpp/absl/base/config.h
index afb78bb61d2..60852b53082 100644
--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h
@@ -429,7 +429,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] != 'h' ||
     defined(__asmjs__) || defined(__wasm__) || defined(__Fuchsia__) ||    \
     defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||       \
     defined(__HAIKU__) || defined(__OpenBSD__) || defined(__NetBSD__) ||  \
-    defined(__QNX__)
+    defined(__QNX__) || defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -441,7 +441,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] != 'h' ||
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__)
+    defined(__NetBSD__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
