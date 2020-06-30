--- src/OpenThreads/pthreads/PThread.cpp.orig	2020-01-31 11:03:07 UTC
+++ src/OpenThreads/pthreads/PThread.cpp
@@ -472,7 +472,8 @@ size_t Thread::CurrentThreadId()
   return (size_t)gettid();
 #elif defined(__linux__)
   return (size_t)::syscall(SYS_gettid);
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif (defined(__FreeBSD__) || defined(__FreeBSD_kernel__)) &&	\
+  !defined(__DragonFly__)
   long  tid;
   syscall(SYS_thr_self, &tid);
   return (size_t)tid;
