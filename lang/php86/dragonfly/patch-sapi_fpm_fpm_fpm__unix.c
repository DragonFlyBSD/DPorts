--- sapi/fpm/fpm/fpm_unix.c.orig	2026-06-30 11:28:16 UTC
+++ sapi/fpm/fpm/fpm_unix.c
@@ -507,7 +507,7 @@ int fpm_unix_init_child(struct fpm_worker_pool_s *wp) 
 	}
 #endif
 
-#ifdef HAVE_PROCCTL
+#if defined(HAVE_PROCCTL) && defined(PROC_TRACE_CTL)
 	int dumpable = PROC_TRACE_CTL_ENABLE;
 	if (wp->config->process_dumpable && -1 == procctl(P_PID, getpid(), PROC_TRACE_CTL, &dumpable)) {
 		zlog(ZLOG_SYSERROR, "[pool %s] failed to procctl(PROC_TRACE_CTL)", wp->config->name);
