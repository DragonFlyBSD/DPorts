--- src/rtc_base/platform_thread_types.cc.orig	2021-10-21 06:15:41 UTC
+++ src/rtc_base/platform_thread_types.cc
@@ -30,6 +30,10 @@ typedef HRESULT(WINAPI* RTC_SetThreadDes
 #include <pthread_np.h>
 #endif
 
+#if defined(WEBRTC_DRAGONFLY)
+#include <pthread_np.h>
+#endif
+
 namespace rtc {
 
 PlatformThreadId CurrentThreadId() {
@@ -48,6 +52,8 @@ PlatformThreadId CurrentThreadId() {
   long tid;
   thr_self(&tid);
   return tid;
+#elif defined(WEBRTC_DRAGONFLY)
+  return (long)pthread_getthreadid_np();
 #elif defined(__EMSCRIPTEN__)
   return static_cast<PlatformThreadId>(pthread_self());
 #else
@@ -116,7 +122,7 @@ void SetCurrentThreadName(const char* na
 #pragma warning(pop)
 #elif defined(WEBRTC_LINUX) || defined(WEBRTC_ANDROID)
   prctl(PR_SET_NAME, reinterpret_cast<unsigned long>(name));  // NOLINT
-#elif defined(WEBRTC_FREEBSD)
+#elif defined(WEBRTC_FREEBSD) || defined(WEBRTC_DRAGONFLY)
   pthread_setname_np(pthread_self(), name);
 #elif defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   pthread_setname_np(name);
