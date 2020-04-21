--- src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread_types.cc.orig	2020-04-21 11:28:35 UTC
+++ src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread_types.cc
@@ -11,7 +11,7 @@
 #include "rtc_base/platform_thread_types.h"
 
 #if defined(WEBRTC_LINUX)
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #else
 #include <pthread_np.h>
@@ -33,6 +33,8 @@ PlatformThreadId CurrentThreadId() {
   return zx_thread_self();
 #elif defined(__FreeBSD__)
   return pthread_getthreadid_np();
+#elif defined(__DragonFly__)
+  return reinterpret_cast<uint64_t>(pthread_self());
 #elif defined(WEBRTC_LINUX)
   return syscall(__NR_gettid);
 #elif defined(__EMSCRIPTEN__)
@@ -63,7 +65,7 @@ bool IsThreadRefEqual(const PlatformThre
 }
 
 void SetCurrentThreadName(const char* name) {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #if defined(WEBRTC_WIN)
   struct {
     DWORD dwType;
