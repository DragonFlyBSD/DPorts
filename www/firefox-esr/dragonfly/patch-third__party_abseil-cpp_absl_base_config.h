--- third_party/abseil-cpp/absl/base/config.h.orig
+++ third_party/abseil-cpp/absl/base/config.h
@@ -377,7 +377,8 @@
     defined(__asmjs__) || defined(__EMSCRIPTEN__) || defined(__Fuchsia__) || \
     defined(__sun) || defined(__myriad2__) || defined(__HAIKU__) ||          \
     defined(__OpenBSD__) || defined(__NetBSD__) || defined(__QNX__) ||       \
-    defined(__VXWORKS__) || defined(__hexagon__) || defined(__XTENSA__)
+    defined(__VXWORKS__) || defined(__hexagon__) || defined(__XTENSA__) || \
+    defined(__DragonFly__)
 #define ABSL_HAVE_MMAP 1
 #endif
 
