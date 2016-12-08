--- third_party/webrtc/base/platform_thread.cc.intermediate	2016-11-29 15:18:26.000000000 +0200
+++ third_party/webrtc/base/platform_thread.cc
@@ -21,8 +21,10 @@
 #include <pthread.h>
 #include <pthread_np.h>
 #include <sys/syscall.h>
+#ifndef __DragonFly__
 #include <sys/thr.h>
 #endif
+#endif
 
 namespace rtc {
 
@@ -34,7 +36,11 @@ PlatformThreadId CurrentThreadId() {
 #if defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   ret = pthread_mach_thread_np(pthread_self());
 #elif defined(WEBRTC_BSD)
+# ifndef __DragonFly__
   ret = reinterpret_cast<int>(pthread_getthreadid_np());
+# else
+  ret = syscall(SYS_lwp_gettid);
+# endif
 #elif defined(WEBRTC_LINUX)
   ret =  syscall(__NR_gettid);
 #elif defined(WEBRTC_ANDROID)
