--- deps/v8/third_party/abseil-cpp/absl/base/config.h.orig	2025-06-13 19:53:56.148952000 +0200
+++ deps/v8/third_party/abseil-cpp/absl/base/config.h	2025-06-13 19:54:47.279917000 +0200
@@ -412,6 +412,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #ifdef ABSL_HAVE_MMAP
 #error ABSL_HAVE_MMAP cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) ||    \
+    defined(__DragonFly__) || \
     defined(_AIX) || defined(__ros__) || defined(__native_client__) ||       \
     defined(__asmjs__) || defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || \
     defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||          \
@@ -427,8 +428,9 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #ifdef ABSL_HAVE_PTHREAD_GETSCHEDPARAM
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
+    defined(__DragonFly__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
