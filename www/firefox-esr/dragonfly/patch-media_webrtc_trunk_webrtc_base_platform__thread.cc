--- media/webrtc/trunk/webrtc/base/platform_thread.cc.orig	2017-04-11 04:15:16 UTC
+++ media/webrtc/trunk/webrtc/base/platform_thread.cc
@@ -19,6 +19,11 @@
 
 #if defined(__NetBSD__)
 #include <lwp.h>
+#elif defined(__DragonFly__)
+#include <sys/param.h>
+#if __DragonFly_version >= 400709
+#include <sys/lwp.h>
+#endif
 #elif defined(__FreeBSD__)
 #include <pthread_np.h>
 #endif
