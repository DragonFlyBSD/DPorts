--- third_party/libwebrtc/webrtc/rtc_base/platform_thread.cc.orig	2021-11-26 14:04:41 UTC
+++ third_party/libwebrtc/webrtc/rtc_base/platform_thread.cc
@@ -42,7 +42,7 @@ PlatformThreadId CurrentThreadId() {
 #elif defined(WEBRTC_LINUX)
   ret =  syscall(__NR_gettid);
 #elif defined(__DragonFly__) // WEBRTC_BSD
-  ret = lwp_gettid();
+  ret = pthread_getthreadid_np();
 #elif defined(__FreeBSD__) // WEBRTC_BSD
   ret = pthread_getthreadid_np();
 #elif defined(__NetBSD__) // WEBRTC_BSD
