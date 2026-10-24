--- deps/v8/third_party/abseil-cpp/absl/base/config.h.orig
+++ deps/v8/third_party/abseil-cpp/absl/base/config.h
@@ -375,6 +375,7 @@
 #ifdef ABSL_HAVE_MMAP
 #error ABSL_HAVE_MMAP cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
+    defined(__DragonFly__) || \
     defined(_AIX) || defined(__ros__) || defined(__asmjs__) ||            \
     defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || defined(__sun) ||  \
     defined(__myriad2__) || defined(__HAIKU__) || defined(__OpenBSD__) || \
@@ -392,7 +393,7 @@
 #error ABSL_HAVE_PTHREAD_GETSCHEDPARAM cannot be directly set
 #elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || \
     defined(_AIX) || defined(__ros__) || defined(__OpenBSD__) ||          \
-    defined(__NetBSD__) || defined(__VXWORKS__)
+    defined(__NetBSD__) || defined(__VXWORKS__) || defined(__DragonFly__)
 #define ABSL_HAVE_PTHREAD_GETSCHEDPARAM 1
 #endif
 
