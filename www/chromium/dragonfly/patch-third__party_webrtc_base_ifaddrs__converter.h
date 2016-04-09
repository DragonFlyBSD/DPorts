--- third_party/webrtc/base/ifaddrs_converter.h.orig	2016-03-28 19:05:45 UTC
+++ third_party/webrtc/base/ifaddrs_converter.h
@@ -14,6 +14,7 @@
 #if defined(WEBRTC_ANDROID)
 #include "webrtc/base/ifaddrs-android.h"
 #else
+#include <sys/types.h>
 #include <ifaddrs.h>
 #endif  // WEBRTC_ANDROID
 
