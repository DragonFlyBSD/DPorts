--- third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc.orig
+++ third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc
@@ -22,7 +22,7 @@
 
 #if HAS_STRPTIME
 #if !defined(_XOPEN_SOURCE) && !defined(__FreeBSD__) && \
-    !defined(__OpenBSD__) && !defined(__APPLE__)
+    !defined(__OpenBSD__) && !defined(__APPLE__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 500  // Exposes definitions for SUSv2 (UNIX 98).
 #endif
 #endif
