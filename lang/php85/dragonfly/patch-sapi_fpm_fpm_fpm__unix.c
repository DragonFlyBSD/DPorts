--- sapi/fpm/fpm/fpm_unix.c.orig	2026-07-28 13:06:52 UTC
+++ sapi/fpm/fpm/fpm_unix.c
@@ -508,10 +508,12 @@ int fpm_unix_init_child(struct fpm_worker_pool_s *wp) 
 #endif
 
 #ifdef HAVE_PROCCTL
+#if defined(PROC_TRACE_CTL) && defined(PROC_TRACE_CTL_ENABLE)
 	int dumpable = PROC_TRACE_CTL_ENABLE;
 	if (wp->config->process_dumpable && -1 == procctl(P_PID, getpid(), PROC_TRACE_CTL, &dumpable)) {
 		zlog(ZLOG_SYSERROR, "[pool %s] failed to procctl(PROC_TRACE_CTL)", wp->config->name);
 	}
+#endif
 #endif
 
 #ifdef HAVE_SETPFLAGS
