--- liboriutil/thread_posix.cc.orig	2014-01-17 06:40:03 UTC
+++ liboriutil/thread_posix.cc
@@ -150,6 +150,8 @@ threadid_t Thread::getID() {
     return pthread_mach_thread_np(pthread_self());
 #elif defined(__linux__)
     return ::syscall(SYS_gettid);
+#elif defined(__DragonFly__)
+    return ::syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__)
     long lwtid;
     thr_self(&lwtid);
