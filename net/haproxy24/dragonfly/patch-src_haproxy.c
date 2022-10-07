--- src/haproxy.c.orig	2022-10-05 21:49:52.304023000 +0200
+++ src/haproxy.c	2022-10-05 21:50:50.112718000 +0200
@@ -3427,7 +3427,7 @@
 		if (prctl(PR_SET_DUMPABLE, 1, 0, 0, 0) == -1)
 			ha_warning("[%s.main()] Failed to set the dumpable flag, "
 				   "no core will be dumped.\n", argv[0]);
-#elif defined(USE_PROCCTL)
+#elif defined(USE_PROCCTL) && defined(PROC_TRACE_CTL) && defined(PROC_TRACE_CTL_ENABLE)
 		int traceable = PROC_TRACE_CTL_ENABLE;
 		if (procctl(P_PID, getpid(), PROC_TRACE_CTL, &traceable) == -1)
 			ha_warning("[%s.main()] Failed to set the traceable flag, "
