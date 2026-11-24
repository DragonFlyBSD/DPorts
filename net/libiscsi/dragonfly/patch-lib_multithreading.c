--- lib/multithreading.c.orig
+++ lib/multithreading.c
@@ -156,6 +156,8 @@
         return tid;
 #elif defined(__FreeBSD__)
 	return pthread_getthreadid_np();
+#elif defined(__DragonFly__)
+	return lwp_gettid();
 #else
 #error "SYS_gettid unavailable on this system"
 #endif
