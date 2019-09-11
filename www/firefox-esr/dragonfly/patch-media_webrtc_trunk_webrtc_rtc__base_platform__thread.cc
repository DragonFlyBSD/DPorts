--- media/webrtc/trunk/webrtc/rtc_base/platform_thread.cc.orig	2019-02-27 22:18:27 UTC
+++ media/webrtc/trunk/webrtc/rtc_base/platform_thread.cc
@@ -24,6 +24,11 @@
 #include <pthread_np.h>
 #elif defined(__NetBSD__) // WEBRTC_BSD
 #include <lwp.h>
+#elif defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
 #endif
 
 namespace rtc {
