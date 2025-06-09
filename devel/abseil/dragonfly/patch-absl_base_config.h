--- absl/base/config.h.orig	Mon Feb  3 15:50:45 2025
+++ absl/base/config.h	Mon Jun
@@ -380,7 +380,9 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
     defined(__asmjs__) || defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || \
     defined(__sun) || defined(__myriad2__) || defined(__HAIKU__) ||          \
     defined(__OpenBSD__) || defined(__NetBSD__) || defined(__QNX__) ||       \
-    defined(__VXWORKS__) || defined(__hexagon__) || defined(__XTENSA__)
+    defined(__VXWORKS__) || defined(__hexagon__) || defined(__XTENSA__) || \
+    defined(__DragonFly__)
+	
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -392,7 +394,7 @@ static_assert(ABSL_INTERNAL_INLINE_NAMESPACE_STR[0] !=
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
