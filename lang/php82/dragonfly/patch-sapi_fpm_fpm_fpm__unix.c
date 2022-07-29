--- sapi/fpm/fpm/fpm_unix.c.orig	2022-06-07 15:53:41 UTC
+++ sapi/fpm/fpm/fpm_unix.c
@@ -431,11 +431,15 @@ int fpm_unix_init_child(struct fpm_worke
 #endif
 
 #ifdef HAVE_PROCCTL
+#ifdef __DragonFly__
+	zlog(ZLOG_SYSERROR, "[pool %s] failed to procctl(PROC_TRACE_CTL) because its not supported in DFly", wp->config->name);
+#else
 	int dumpable = PROC_TRACE_CTL_ENABLE;
 	if (wp->config->process_dumpable && -1 == procctl(P_PID, getpid(), PROC_TRACE_CTL, &dumpable)) {
 		zlog(ZLOG_SYSERROR, "[pool %s] failed to procctl(PROC_TRACE_CTL)", wp->config->name);
 	}
 #endif
+#endif
 
 #ifdef HAVE_SETPFLAGS
 	if (wp->config->process_dumpable && 0 > setpflags(__PROC_PROTECT, 0)) {
