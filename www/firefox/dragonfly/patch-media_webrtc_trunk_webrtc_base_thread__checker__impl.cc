--- media/webrtc/trunk/webrtc/base/thread_checker_impl.cc.orig	2016-05-12 20:13:19.000000000 +0300
+++ media/webrtc/trunk/webrtc/base/thread_checker_impl.cc
@@ -22,6 +22,11 @@
 #include <lwp.h>
 #elif defined(__FreeBSD__)
 #include <pthread_np.h>
+#elif defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
 #endif
 
 namespace rtc {
