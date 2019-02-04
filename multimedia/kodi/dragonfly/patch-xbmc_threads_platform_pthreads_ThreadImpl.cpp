--- xbmc/threads/platform/pthreads/ThreadImpl.cpp.orig	2018-08-04 15:21:31.462153000 +0200
+++ xbmc/threads/platform/pthreads/ThreadImpl.cpp	2018-08-04 15:24:00.625385000 +0200
@@ -36,6 +36,9 @@
 #endif
 #include <pthread_np.h>
 #endif
+#if defined(TARGET_DRAGONFLY)
+#include <pthread_np.h>
+#endif
 
 #include <signal.h>
 
@@ -67,6 +70,8 @@ void CThread::SetThreadInfo()
 #else
   m_ThreadOpaque.LwpId = pthread_getthreadid_np();
 #endif
+#elif defined(TARGET_DRAGONFLY)
+  m_ThreadOpaque.LwpId = pthread_getthreadid_np();
 #elif defined(TARGET_ANDROID)
   m_ThreadOpaque.LwpId = gettid();
 #else
