--- extra/abseil/abseil-cpp-20230802.1/absl/base/config.h.orig	2026-06-30 16:11:51 UTC
+++ extra/abseil/abseil-cpp-20230802.1/absl/base/config.h
@@ -408,11 +408,12 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
 #ifdef ABSL_HAVE_MMAP
 #error ABSL_HAVE_MMAP cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(_AIX) || defined(__ros__) || defined(__native_client__) ||    \
-    defined(__asmjs__) || defined(__wasm__) || defined(__Fuchsia__) ||    \
-    defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||       \
-    defined(__HAIKU__) || defined(__OpenBSD__) || defined(__NetBSD__) ||  \
-    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__)
+    defined(__DragonFly__) || defined(_AIX) || defined(__ros__) ||         \
+    defined(__native_client__) || defined(__asmjs__) || defined(__wasm__) || \
+    defined(__Fuchsia__) || defined(__sun) || defined(__ASYLO__) ||       \
+    defined(__myriad2__) || defined(__HAIKU__) || defined(__OpenBSD__) || \
+    defined(__NetBSD__) || defined(__QNX__) || defined(__VXWORKS__) ||    \
+    defined(__hexagon__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
