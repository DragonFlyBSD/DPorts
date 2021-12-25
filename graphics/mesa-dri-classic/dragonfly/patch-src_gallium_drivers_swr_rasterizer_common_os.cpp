--- src/gallium/drivers/swr/rasterizer/common/os.cpp.orig	2020-09-28 22:52:11 UTC
+++ src/gallium/drivers/swr/rasterizer/common/os.cpp
@@ -33,6 +33,10 @@
 #if defined(__APPLE__) || defined(FORCE_LINUX) || defined(__linux__) || defined(__gnu_linux__)
 #include <pthread.h>
 #endif // Linux
+#if defined(__DragonFly__)
+#include <pthread.h>
+#include <pthread_np.h>
+#endif
 
 #if defined(_MSC_VER)
 static const DWORD MS_VC_EXCEPTION = 0x406D1388;
@@ -108,6 +112,8 @@ void SWR_API SetCurrentThreadName(const
 
 #if defined(FORCE_LINUX) || defined(__linux__) || defined(__gnu_linux__)
     pthread_setname_np(pthread_self(), pThreadName);
+#elif defined(__DragonFly__)
+    pthread_set_name_np(pthread_self(), pThreadName);
 #endif // Linux
 }
 
