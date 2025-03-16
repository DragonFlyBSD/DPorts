diff --git third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc
index e7e30a2fb780..e40d3448d11b 100644
--- third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc
+++ third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc
@@ -19,7 +19,8 @@
 #endif
 
 #if defined(HAS_STRPTIME) && HAS_STRPTIME
-#if !defined(_XOPEN_SOURCE) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(_XOPEN_SOURCE) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && \
+  !defined(__DragonFly__)
 #define _XOPEN_SOURCE 500  // Exposes definitions for SUSv2 (UNIX 98).
 #endif
 #endif
