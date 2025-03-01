--- src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h.orig	Fri Feb 28 19:38:18 2025
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/base/config.h	Fri Feb
@@ -418,7 +418,8 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
     defined(__asmjs__) || defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || \
     defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||          \
     defined(__HAIKU__) || defined(__OpenBSD__) || defined(__NetBSD__) ||     \
-    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__)
+    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__) || \
+    defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -430,7 +431,8 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || \
+    defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
