--- jit/zend_jit_perf_dump.c.orig	2020-10-13 21:58:13 UTC
+++ jit/zend_jit_perf_dump.c
@@ -27,6 +27,9 @@
 #include <sys/syscall.h>
 #elif defined(__darwin__)
 # include <pthread.h>
+#elif defined(__DragonFly__)
+# include <sys/syscall.h>
+# include <sys/sysctl.h>
 #elif defined(__FreeBSD__)
 # include <sys/thr.h>
 # include <sys/sysctl.h>
@@ -124,7 +127,7 @@ static void zend_jit_perf_jitdump_open(v
 	fd = open("/proc/self/exe", O_RDONLY);
 #elif defined(__NetBSD__)
 	fd = open("/proc/curproc/exe", O_RDONLY);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	char path[PATH_MAX];
 	size_t pathlen = sizeof(path);
 	int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
@@ -218,6 +221,8 @@ static void zend_jit_perf_jitdump_regist
 		uint64_t thread_id_u64;
 		pthread_threadid_np(NULL, &thread_id_u64);
 		thread_id = (uint32_t) thread_id_u64;
+#elif defined(__DragonFly__)
+		thread_id = syscall(SYS_lwp_gettid);
 #elif defined(__FreeBSD__)
 		long tid;
 		thr_self(&tid);
