--- tg_owt/src/rtc_base/ifaddrs_converter.h.orig	2020-08-30 09:41:57 UTC
+++ tg_owt/src/rtc_base/ifaddrs_converter.h
@@ -14,6 +14,7 @@
 #if defined(WEBRTC_ANDROID)
 #include "rtc_base/ifaddrs_android.h"
 #else
+#include <sys/types.h>
 #include <ifaddrs.h>
 #endif  // WEBRTC_ANDROID
 
