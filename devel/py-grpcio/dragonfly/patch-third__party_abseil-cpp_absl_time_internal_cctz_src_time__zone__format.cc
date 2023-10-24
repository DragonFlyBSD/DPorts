--- third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc.orig	2023-10-24 08:24:24 UTC
+++ third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc
@@ -19,7 +19,8 @@
 #endif
 
 #if defined(HAS_STRPTIME) && HAS_STRPTIME
-#if !defined(_XOPEN_SOURCE) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(_XOPEN_SOURCE) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && \
+  !defined(__DragonFly__)
 #define _XOPEN_SOURCE 500  // Exposes definitions for SUSv2 (UNIX 98).
 #endif
 #endif
