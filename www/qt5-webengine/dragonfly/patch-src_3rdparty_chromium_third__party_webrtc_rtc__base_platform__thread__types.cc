--- src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread_types.cc.intermediate	2019-05-06 14:03:51.000000000 +0000
+++ src/3rdparty/chromium/third_party/webrtc/rtc_base/platform_thread_types.cc
@@ -11,7 +11,7 @@
 #include "rtc_base/platform_thread_types.h"
 
 #if defined(WEBRTC_LINUX)
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/prctl.h>
 #endif
 #include <sys/syscall.h>
@@ -29,9 +29,9 @@ PlatformThreadId CurrentThreadId() {
   return gettid();
 #elif defined(WEBRTC_FUCHSIA)
   return zx_thread_self();
-#elif defined(WEBRTC_LINUX) && !defined(__FreeBSD__)
+#elif defined(WEBRTC_LINUX) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   return syscall(__NR_gettid);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return reinterpret_cast<uint64_t>(pthread_self());
 #else
   // Default implementation for nacl and solaris.
@@ -59,7 +59,7 @@ bool IsThreadRefEqual(const PlatformThre
 }
 
 void SetCurrentThreadName(const char* name) {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #if defined(WEBRTC_WIN)
   struct {
     DWORD dwType;
