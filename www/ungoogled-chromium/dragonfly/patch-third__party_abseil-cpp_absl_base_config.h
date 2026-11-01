--- third_party/abseil-cpp/absl/base/config.h.orig	2026-09-09 12:00:00 UTC
+++ third_party/abseil-cpp/absl/base/config.h
@@ -380,7 +380,7 @@
     defined(__myriad2__) || defined(__HAIKU__) || defined(__OpenBSD__) || \
     defined(__NetBSD__) || defined(__QNX__) || defined(__VXWORKS__) ||    \
     defined(__hexagon__) || defined(__XTENSA__) ||                        \
-    defined(_WASI_EMULATED_MMAN)
+    defined(_WASI_EMULATED_MMAN) || defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
@@ -392,7 +392,7 @@
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
