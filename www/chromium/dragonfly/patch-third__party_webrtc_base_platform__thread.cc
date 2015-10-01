--- third_party/webrtc/base/platform_thread.cc.intermediate	2015-10-01 16:58:14 UTC
+++ third_party/webrtc/base/platform_thread.cc
@@ -23,7 +23,6 @@
 #include <pthread.h>
 #include <pthread_np.h>
 #include <sys/syscall.h>
-#include <sys/thr.h>
 #endif
 
 namespace rtc {
@@ -36,7 +35,7 @@ PlatformThreadId CurrentThreadId() {
 #if defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   ret = pthread_mach_thread_np(pthread_self());
 #elif defined(WEBRTC_BSD)
-  ret = static_cast<int>(pthread_getthreadid_np());
+  ret = syscall(SYS_lwp_gettid);
 #elif defined(WEBRTC_LINUX)
   ret =  syscall(__NR_gettid);
 #elif defined(WEBRTC_ANDROID)
