--- src/modules/module-rt.c.orig	2022-07-16 02:20:49 UTC
+++ src/modules/module-rt.c
@@ -205,6 +205,8 @@ static pid_t _gettid(void)
 	return (pid_t) gettid();
 #elif defined(__linux__)
 	return syscall(SYS_gettid);
+#elif defined(__DragonFly__)
+	return syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__) || defined(__MidnightBSD__)
 	long pid;
 	thr_self(&pid);
