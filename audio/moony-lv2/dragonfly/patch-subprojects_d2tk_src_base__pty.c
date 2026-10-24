--- subprojects/d2tk/src/base_pty.c.intermediate	2026-09-05 09:17:29 UTC
+++ subprojects/d2tk/src/base_pty.c
@@ -388,7 +388,19 @@ _clone(void *data)
 	envp[envc++] = "TERM=xterm-256color";
 	envp[envc] = NULL;
 
+	/* DragonFly libc lacks execvpe(): emulate via environ swap + execvp.
+	 * Safe under vfork: parent is suspended until exec/_exit, and environ
+	 * is restored if execvp returns. */
+#if defined(__DragonFly__)
+	{
+		char **old_environ = environ;
+		environ = envp;
+		execvp(argv[0], argv);
+		environ = old_environ;
+	}
+#else
 	execvpe(argv[0], argv, envp);
+#endif
 	_exit(EXIT_FAILURE);
 
 	return 0;
