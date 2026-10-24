--- sapi/cli/php_cli_server.c.orig	2026-06-30 11:28:16 UTC
+++ sapi/cli/php_cli_server.c
@@ -2475,7 +2475,7 @@ static void php_cli_server_worker_install_pdeathsig(vo
 	// Ignore failure to register PDEATHSIG, it's not available on all platforms anyway
 #if defined(HAVE_PRCTL)
 	prctl(PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
 	int signal = SIGTERM;
 	procctl(P_PID, 0, PROC_PDEATHSIG_CTL, &signal);
 #endif
