--- vendor/libbase/threads.cpp.orig
+++ vendor/libbase/threads.cpp
@@ -21,7 +21,7 @@
 
 #if defined(__APPLE__)
 #include <pthread.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #elif defined(__linux__) && !defined(__ANDROID__)
 #include <syscall.h>
@@ -39,7 +39,7 @@
   uint64_t tid;
   pthread_threadid_np(NULL, &tid);
   return tid;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return pthread_getthreadid_np();
 #elif defined(__linux__)
   return syscall(__NR_gettid);
