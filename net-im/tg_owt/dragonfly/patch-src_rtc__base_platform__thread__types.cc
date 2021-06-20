--- src/rtc_base/platform_thread_types.cc.orig	2021-06-19 22:34:52 UTC
+++ src/rtc_base/platform_thread_types.cc
@@ -16,6 +16,8 @@
 
 #ifdef __FreeBSD__
 #include <sys/thr.h>
+#endif
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -42,10 +44,8 @@ PlatformThreadId CurrentThreadId() {
 #elif defined(WEBRTC_FUCHSIA)
   return zx_thread_self();
 #elif defined(WEBRTC_LINUX)
-#if defined(__FreeBSD__)
-  long id;
-  thr_self(&id);
-  return id;
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+  return pthread_getthreadid_np();
 #else
   return syscall(__NR_gettid);
 #endif
