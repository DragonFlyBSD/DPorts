--- third_party/webrtc/base/thread_checker_impl.cc.intermediate	2015-08-06 07:14:42 UTC
+++ third_party/webrtc/base/thread_checker_impl.cc
@@ -20,7 +20,7 @@
 
 #if defined(WEBRTC_BSD)
 #include <pthread_np.h>
-#include <sys/thr.h>
+#include <sys/syscall.h>
 #endif
 
 namespace rtc {
@@ -33,7 +33,7 @@ PlatformThreadId CurrentThreadId() {
 #if defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   ret = pthread_mach_thread_np(pthread_self());
 #elif defined(WEBRTC_BSD)
-  ret = static_cast<int>(pthread_getthreadid_np());
+  ret = syscall(SYS_lwp_gettid);
 #elif defined(WEBRTC_LINUX)
   ret =  syscall(__NR_gettid);
 #elif defined(WEBRTC_ANDROID)
