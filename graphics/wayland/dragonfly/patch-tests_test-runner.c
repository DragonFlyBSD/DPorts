--- tests/test-runner.c.orig
+++ tests/test-runner.c
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
@@ -327,14 +336,10 @@
 	if (isatty(fileno(stderr)))
 		is_atty = 1;
 
-	if (is_debugger_attached()) {
-		fd_leak_check_enabled = 0;
-		timeouts_enabled = 0;
-	} else {
-		fd_leak_check_enabled = !getenv("WAYLAND_TEST_NO_LEAK_CHECK");
-		timeouts_enabled = !getenv("WAYLAND_TEST_NO_TIMEOUTS");
-	}
 
+	fd_leak_check_enabled = !getenv("WAYLAND_TEST_NO_LEAK_CHECK");
+	timeouts_enabled = !getenv("WAYLAND_TEST_NO_TIMEOUTS");
+
 	if (argc == 2 && strcmp(argv[1], "--help") == 0)
 		usage(argv[0], EXIT_SUCCESS);
 
@@ -374,12 +379,28 @@
 			abort();
 		}
 
+		fprintf(stderr, "test \"%s\":\t", t->name);
+#ifdef __DragonFly__
 		if (WIFEXITED(info)) {
+			fprintf(stderr, "exit status %d", WEXITSTATUS(info));
 			if (WEXITSTATUS(info) == EXIT_SUCCESS)
 				success = !t->must_fail;
 			else
 				success = t->must_fail;
+		} else if (WIFSIGNALED(info) || WCOREDUMP(info)) {
+			fprintf(stderr, "signal %d", WTERMSIG(info));
+			if (t->must_fail)
+				success = 1;
+		}
+#else
+ 	
 
+		if (WIFEXITED(info)) {
+			if (WEXITSTATUS(info) == EXIT_SUCCESS)
+				success = !t->must_fail;
+			else
+				success = t->must_fail;
+
 			stderr_set_color(success ? GREEN : RED);
 			fprintf(stderr, "test \"%s\":\texit status %d",
 				t->name, WEXITSTATUS(info));
@@ -392,6 +413,7 @@
 			fprintf(stderr, "test \"%s\":\tsignal %d",
 				t->name, WTERMSIG(info));
 		}
+#endif
 
 		if (success) {
 			pass++;
