--- src/ks_thread.c.orig
+++ src/ks_thread.c
@@ -74,6 +74,8 @@
 {
 #ifdef KS_PLAT_WIN
 	return GetCurrentThreadId();
+#elif defined(__DragonFly__)
+	return lwp_gettid();
 #elif defined(KS_PLAT_LIN)
 	return syscall(SYS_gettid);
 #elif defined(KS_PLAT_FBSD)
