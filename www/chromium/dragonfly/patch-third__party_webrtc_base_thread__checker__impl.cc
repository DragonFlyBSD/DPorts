--- third_party/webrtc/base/thread_checker_impl.cc.intermediate	2015-04-30 12:00:47 UTC
+++ third_party/webrtc/base/thread_checker_impl.cc
@@ -21,7 +21,7 @@
 #if defined(WEBRTC_BSD)
 #include <pthread_np.h>
 #include <sys/param.h>
-#include <sys/thr.h>
+#include <sys/syscall.h>
 #endif
 
 namespace rtc {
@@ -34,13 +34,7 @@ PlatformThreadId CurrentThreadId() {
 #if defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   ret = pthread_mach_thread_np(pthread_self());
 #elif defined(WEBRTC_BSD)
-#  if __FreeBSD_version < 900031
-  long lwpid;
-  thr_self(&lwpid);
-  ret = static_cast<int>(lwpid);
-#  else
-  ret = static_cast<int>(pthread_getthreadid_np());
-#  endif
+  ret = syscall(SYS_lwp_gettid);
 #elif defined(WEBRTC_LINUX)
   ret =  syscall(__NR_gettid);
 #elif defined(WEBRTC_ANDROID)
