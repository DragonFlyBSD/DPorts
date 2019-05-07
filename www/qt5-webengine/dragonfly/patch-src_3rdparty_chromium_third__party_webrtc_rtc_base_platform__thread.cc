--- src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread.cc.intermediate	2019-05-06 14:03:51.000000000 +0000
+++ src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread.cc
@@ -15,7 +15,7 @@
 #include "rtc_base/timeutils.h"
 
 #if defined(WEBRTC_LINUX)
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #endif
 #include <sys/syscall.h>
