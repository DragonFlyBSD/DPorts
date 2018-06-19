--- src/3rdparty/chromium/third_party/webrtc/base/platform_thread.cc.intermediate	2018-05-26 13:48:34.000000000 +0000
+++ src/3rdparty/chromium/third_party/webrtc/base/platform_thread.cc
@@ -12,7 +12,7 @@
 
 #include "webrtc/base/checks.h"
 
-#if defined(WEBRTC_LINUX) && !defined(__FreeBSD__)
+#if defined(WEBRTC_LINUX) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #include <sys/syscall.h>
 #endif
@@ -21,8 +21,10 @@
 #include <pthread.h>
 #include <pthread_np.h>
 #include <sys/syscall.h>
+#if !defined(__DragonFly__)
 #include <sys/thr.h>
 #endif
+#endif
 
 namespace rtc {
 
