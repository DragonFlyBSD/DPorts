--- src/rtc_base/byte_order.h.orig	2021-12-08 15:56:53 UTC
+++ src/rtc_base/byte_order.h
@@ -90,7 +90,7 @@
 
 #elif defined(WEBRTC_LINUX)
 #include <endian.h>
-#elif defined(WEBRTC_FREEBSD)
+#elif defined(WEBRTC_FREEBSD) || defined(WEBRTC_DRAGONFLY)
 #include <sys/endian.h>
 #else
 #error "Missing byte order functions for this arch."
