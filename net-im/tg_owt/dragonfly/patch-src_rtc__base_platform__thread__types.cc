--- src/rtc_base/platform_thread_types.cc.orig	2022-02-25 20:06:20 UTC
+++ src/rtc_base/platform_thread_types.cc
@@ -29,6 +29,10 @@ typedef HRESULT(WINAPI* RTC_SetThreadDes
 #include <pthread_np.h>
 #endif
 
+#if defined(WEBRTC_DRAGONFLY)
+#include <pthread_np.h>
+#endif
+
 namespace rtc {
 
 PlatformThreadId CurrentThreadId() {
@@ -45,6 +49,8 @@ PlatformThreadId CurrentThreadId() {
   return syscall(__NR_gettid);
 #elif defined(WEBRTC_FREEBSD)
   return pthread_getthreadid_np();
+#elif defined(WEBRTC_DRAGONFLY)
+  return (long)pthread_getthreadid_np();
 #elif defined(__EMSCRIPTEN__)
   return static_cast<PlatformThreadId>(pthread_self());
 #else
@@ -113,7 +119,7 @@ void SetCurrentThreadName(const char* na
 #pragma warning(pop)
 #elif defined(WEBRTC_LINUX) || defined(WEBRTC_ANDROID)
   prctl(PR_SET_NAME, reinterpret_cast<unsigned long>(name));  // NOLINT
-#elif defined(WEBRTC_FREEBSD)
+#elif defined(WEBRTC_FREEBSD) || defined(WEBRTC_DRAGONFLY)
   pthread_setname_np(pthread_self(), name);
 #elif defined(WEBRTC_OPENBSD)
   pthread_set_name_np(pthread_self(), name);
