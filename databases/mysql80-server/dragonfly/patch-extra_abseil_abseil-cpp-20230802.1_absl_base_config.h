--- extra/abseil/abseil-cpp-20230802.1/absl/base/config.h.orig	2026-04-07 15:27:15 UTC
+++ extra/abseil/abseil-cpp-20230802.1/absl/base/config.h
@@ -412,7 +412,8 @@
     defined(__asmjs__) || defined(__wasm__) || defined(__Fuchsia__) ||    \
     defined(__sun) || defined(__ASYLO__) || defined(__myriad2__) ||       \
     defined(__HAIKU__) || defined(__OpenBSD__) || defined(__NetBSD__) ||  \
-    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__)
+    defined(__QNX__) || defined(__VXWORKS__) || defined(__hexagon__) ||   \
+    defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -424,7 +425,7 @@
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
