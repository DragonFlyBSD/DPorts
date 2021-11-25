--- src/absl/base/config.h.orig	2021-09-21 13:18:13 UTC
+++ src/absl/base/config.h
@@ -376,7 +376,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) ||   \
     defined(__ros__) || defined(__native_client__) || defined(__asmjs__) || \
     defined(__wasm__) || defined(__Fuchsia__) || defined(__sun) || \
-    defined(__ASYLO__) || defined(__myriad2__)
+    defined(__ASYLO__) || defined(__myriad2__) || defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -387,7 +387,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMES
 #ifdef ABSL_HAVE_PTHREAD_GETSCHEDPARAM
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
-    defined(__ros__)
+      defined(__ros__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
