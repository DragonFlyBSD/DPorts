--- src/modules/module-rtkit.c.orig	2021-11-10 11:07:00.390800000 +0100
+++ src/modules/module-rtkit.c	2021-11-10 11:06:44.291157000 +0100
@@ -186,6 +186,8 @@
 	return (pid_t) gettid();
 #elif defined(__linux__)
 	return syscall(SYS_gettid);
+#elif defined(__DragonFly__)
+	return syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__)
 	long pid;
 	thr_self(&pid);
