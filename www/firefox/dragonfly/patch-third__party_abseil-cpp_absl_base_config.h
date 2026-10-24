--- third_party/abseil-cpp/absl/base/config.h.orig	2026-09-04 00:01:28 UTC
+++ third_party/abseil-cpp/absl/base/config.h
@@ -375,11 +375,11 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
 #ifdef ABSL_HAVE_MMAP
 #error ABSL_HAVE_MMAP cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(_AIX) || defined(__ros__) || defined(__asmjs__) ||            \
-    defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || defined(__sun) ||  \
-    defined(__myriad2__) || defined(__HAIKU__) || defined(__OpenBSD__) || \
-    defined(__NetBSD__) || defined(__QNX__) || defined(__VXWORKS__) ||    \
-    defined(__hexagon__) || defined(__XTENSA__) ||                        \
+    defined(__DragonFly__) || defined(_AIX) || defined(__ros__) ||         \
+    defined(__asmjs__) || defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || \
+    defined(__sun) || defined(__myriad2__) || defined(__HAIKU__) ||        \
+    defined(__OpenBSD__) || defined(__NetBSD__) || defined(__QNX__) ||     \
+    defined(__VXWORKS__) || defined(__hexagon__) || defined(__XTENSA__) || \
     defined(_WASI_EMULATED_MMAN)
 #define ABSL_HAVE_MMAP 1
 #endif
