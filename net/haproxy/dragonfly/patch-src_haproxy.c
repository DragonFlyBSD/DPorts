--- src/haproxy.c.orig	2021-10-01 15:54:02 UTC
+++ src/haproxy.c
@@ -3401,7 +3401,7 @@ int main(int argc, char **argv)
 		if (prctl(PR_SET_DUMPABLE, 1, 0, 0, 0) == -1)
 			ha_warning("[%s.main()] Failed to set the dumpable flag, "
 				   "no core will be dumped.\n", argv[0]);
-#elif defined(USE_PROCCTL)
+#elif defined(USE_PROCCTL) && !defined(__DragonFly__)
 		int traceable = PROC_TRACE_CTL_ENABLE;
 		if (procctl(P_PID, getpid(), PROC_TRACE_CTL, &traceable) == -1)
 			ha_warning("[%s.main()] Failed to set the traceable flag, "
