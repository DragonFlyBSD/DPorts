--- src/tools.h.intermediate	2019-05-07 20:34:13.000000000 +0000
+++ src/tools.h
@@ -113,7 +113,7 @@ INLINE long double get_now_real(void) {
 }
 
 INLINE pid_t get_thread_id(void) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	return pthread_getthreadid_np();
 #else
 	return syscall(SYS_gettid);
