--- src/3rdparty/chromium/third_party/webrtc/rtc_base/byteorder.h.intermediate	2019-05-06 14:03:51.000000000 +0000
+++ src/3rdparty/chromium/third_party/webrtc/rtc_base/byteorder.h
@@ -79,7 +79,7 @@
 #error WEBRTC_ARCH_BIG_ENDIAN or WEBRTC_ARCH_LITTLE_ENDIAN must be defined.
 #endif  // defined(WEBRTC_ARCH_LITTLE_ENDIAN)
 #elif defined(WEBRTC_POSIX)
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <endian.h>
