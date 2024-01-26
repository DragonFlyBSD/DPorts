diff --git third_party/abseil-cpp/absl/base/config.h third_party/abseil-cpp/absl/base/config.h
index 6c776a27da1..9f21ac2d1be 100644
--- third_party/abseil-cpp/absl/base/config.h
+++ third_party/abseil-cpp/absl/base/config.h
@@ -418,7 +418,8 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] != 'h' ||
     defined(__asmjs__) || defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || \
     defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||          \
     defined(__HAIKU__) || defined(__OpenBSD__) || defined(__NetBSD__) ||     \
-    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__)
+    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__) ||	     \
+    defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -430,7 +431,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] != 'h' ||
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
