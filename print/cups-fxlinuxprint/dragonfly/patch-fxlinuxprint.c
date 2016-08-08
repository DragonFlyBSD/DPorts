--- fxlinuxprint.c.intermediate	2016-08-06 20:27:26 UTC
+++ fxlinuxprint.c
@@ -583,7 +583,14 @@ int fxExecFilter (char* arg[])
 	int status;
 	int	rtn = 0;
 
+#ifdef __DragonFly__
+	struct sigaction ignore_action;
+	ignore_action.sa_handler = SIG_IGN;
+	ignore_action.sa_flags = SA_RESTART;
+	sigaction(SIGCHLD, &ignore_action, NULL);
+#else
 	sigignore (SIGCHLD);
+#endif
 
 	switch (pid=fork()) {
 	case -1:	// error
