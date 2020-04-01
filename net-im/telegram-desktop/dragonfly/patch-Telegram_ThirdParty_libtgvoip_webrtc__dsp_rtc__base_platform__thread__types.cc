--- Telegram/ThirdParty/libtgvoip/webrtc_dsp/rtc_base/platform_thread_types.cc.intermediate	2020-04-01 18:01:45 UTC
+++ Telegram/ThirdParty/libtgvoip/webrtc_dsp/rtc_base/platform_thread_types.cc
@@ -11,8 +11,10 @@
 #include "rtc_base/platform_thread_types.h"
 
 #if defined(WEBRTC_LINUX)
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__)
 #include <sys/thr.h>
+#elif defined(__DragonFly__)
+#include <pthread.h>
 #else
 #include <sys/prctl.h>
 #include <sys/syscall.h>
@@ -35,6 +37,8 @@ PlatformThreadId CurrentThreadId() {
   long tid;
   thr_self(&tid);
   return tid;
+#elif defined(__DragonFly__)
+  return reinterpret_cast<uint64_t>(pthread_self());
 #elif defined(WEBRTC_LINUX)
   return syscall(__NR_gettid);
 #else
