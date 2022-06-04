--- src/rtc_base/byte_order.h.orig	2022-02-25 20:06:20 UTC
+++ src/rtc_base/byte_order.h
@@ -90,7 +90,7 @@
 
 #elif defined(WEBRTC_LINUX)
 #include <endian.h>
-#elif defined(WEBRTC_FREEBSD) || defined(WEBRTC_OPENBSD)
+#elif defined(WEBRTC_FREEBSD) || defined(WEBRTC_OPENBSD) || defined(WEBRTC_DRAGONFLY)
 #include <sys/endian.h>
 #else
 #error "Missing byte order functions for this arch."
