--- third_party/abseil-cpp/absl/base/config.h.orig	2023-06-14 20:44:24 UTC
+++ third_party/abseil-cpp/absl/base/config.h
@@ -429,7 +429,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
     defined(__asmjs__) || defined(__wasm__) || defined(__Fuchsia__) ||    \
     defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||       \
     defined(__HAIKU__) || defined(__OpenBSD__) || defined(__NetBSD__) ||  \
-    defined(__QNX__)
+    defined(__QNX__) || defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -441,7 +441,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__)
+    defined(__NetBSD__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
