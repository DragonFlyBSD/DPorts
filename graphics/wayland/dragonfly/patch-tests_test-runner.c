--- tests/test-runner.c.orig	2022-11-01 14:11:31.710109000 +0100
+++ tests/test-runner.c	2022-11-01 14:24:36.312796000 +0100
@@ -29,6 +29,7 @@
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <signal.h>
 #include <sys/types.h>
 #include <sys/wait.h>
 #include <sys/stat.h>
@@ -42,7 +43,9 @@
 #ifdef HAVE_SYS_PROCCTL_H
 #include <sys/procctl.h>
 #elif defined(HAVE_SYS_PRCTL_H)
+#ifndef __DragonFly__
 #include <sys/prctl.h>
+#endif
 #ifndef PR_SET_PTRACER
 # define PR_SET_PTRACER 0x59616d61
 #endif
@@ -276,17 +279,22 @@
 		close(pipefd[0]);
 		if (buf == '-')
 			_exit(1);
+#ifndef __DragonFly__
 		if (ptrace(PTRACE_ATTACH, ppid, NULL, NULL) != 0)
 			_exit(1);
+#endif
 		if (!waitpid(-1, NULL, 0))
 			_exit(1);
+#ifndef __DragonFly__
 		ptrace(PTRACE_CONT, NULL, NULL);
 		ptrace(PTRACE_DETACH, ppid, NULL, NULL);
+#endif
 		_exit(0);
 	} else {
 		close(pipefd[0]);
 
 		/* Enable child to ptrace the parent process */
+#ifndef __DragonFly__
 		rc = prctl(PR_SET_PTRACER, pid);
 		if (rc != 0 && errno != EINVAL) {
 			/* An error prevents us from telling if a debugger is attached.
@@ -300,6 +308,7 @@
 			/* Signal to client that parent is ready by passing '+' */
 			write(pipefd[1], "+", 1);
 		}
+#endif
 		close(pipefd[1]);
 
 		waitpid(pid, &status, 0);
@@ -315,18 +324,16 @@
 	const struct test *t;
 	pid_t pid;
 	int total, pass;
+#ifdef __DragonFly__
+	int status;
+#else
 	siginfo_t info;
+#endif
 
 	if (isatty(fileno(stderr)))
 		is_atty = 1;
-
-	if (is_debugger_attached()) {
-		fd_leak_check_enabled = 0;
-		timeouts_enabled = 0;
-	} else {
-		fd_leak_check_enabled = !getenv("WAYLAND_TEST_NO_LEAK_CHECK");
-		timeouts_enabled = !getenv("WAYLAND_TEST_NO_TIMEOUTS");
-	}
+	fd_leak_check_enabled = !getenv("WAYLAND_TEST_NO_LEAK_CHECK");
+	timeouts_enabled = !getenv("WAYLAND_TEST_NO_TIMEOUTS");
 
 	if (argc == 2 && strcmp(argv[1], "--help") == 0)
 		usage(argv[0], EXIT_SUCCESS);
@@ -358,6 +365,12 @@
 		if (pid == 0)
 			run_test(t); /* never returns */
 
+#ifdef __DragonFly__
+		if (wait(&status)) {
+			fprintf(stderr, "waitid failed: %m\n");
+			abort();
+		}
+#else
 		if (waitid(P_PID, pid, &info, WEXITED)) {
 			stderr_set_color(RED);
 			fprintf(stderr, "waitid failed: %s\n",
@@ -366,6 +379,21 @@
 
 			abort();
 		}
+#endif
+
+		fprintf(stderr, "test \"%s\":\t", t->name);
+#ifdef __DragonFly__
+		if (WIFEXITED(status)) {
+			fprintf(stderr, "exit status %d", WEXITSTATUS(status));
+			if (WEXITSTATUS(status) == EXIT_SUCCESS)
+				success = 1;
+			break;
+		} else if (WIFSIGNALED(status) || WCOREDUMP(status)) {
+			fprintf(stderr, "signal %d", WTERMSIG(status));
+			break;
+		}
+#else
+ 	
 
 		switch (info.si_code) {
 		case CLD_EXITED:
@@ -390,6 +418,7 @@
 
 			break;
 		}
+#endif
 
 		if (success) {
 			pass++;
