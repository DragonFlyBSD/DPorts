--- src/os/base.cc.orig
+++ src/os/base.cc
@@ -269,6 +269,8 @@
     pid_t native_id = syscall(SYS_gettid);
 #elif defined(__FreeBSD__)
     int native_id = pthread_getthreadid_np();
+#elif defined(__DragonFly__)
+    lwpid_t native_id = lwp_gettid();
 #elif defined(__OpenBSD__)
     pid_t native_id = getthrid();
 #elif defined(_AIX)
