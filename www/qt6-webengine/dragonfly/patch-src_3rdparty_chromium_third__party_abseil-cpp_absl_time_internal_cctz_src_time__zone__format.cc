--- src/3rdparty/chromium/third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc.intermediate	2024-01-27 00:43:10 UTC
+++ src/3rdparty/chromium/third_party/abseil-cpp/absl/time/internal/cctz/src/time_zone_format.cc
@@ -19,7 +19,8 @@
 #endif
 
 #if defined(HAS_STRPTIME) && HAS_STRPTIME
-#if !defined(_XOPEN_SOURCE) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
+#if !defined(_XOPEN_SOURCE) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && \
+    !defined(__DragonFly__)	
 #define _XOPEN_SOURCE  // Definedness suffices for strptime.
 #endif
 #endif
