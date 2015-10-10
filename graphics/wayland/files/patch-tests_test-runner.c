--- tests/test-runner.c
+++ tests/test-runner.c
@@ -28,6 +28,7 @@
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <signal.h>
 #include <sys/types.h>
 #include <sys/wait.h>
 #include <sys/stat.h>
@@ -37,7 +38,9 @@
 #include <errno.h>
 #include <limits.h>
 #include <sys/ptrace.h>
+#ifndef __DragonFly__
 #include <sys/prctl.h>
+#endif
 #ifndef PR_SET_PTRACER
 # define PR_SET_PTRACER 0x59616d61
 #endif
@@ -307,17 +310,22 @@ is_debugger_attached(void)
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
@@ -331,6 +339,7 @@ is_debugger_attached(void)
 			/* Signal to client that parent is ready by passing '+' */
 			write(pipefd[1], "+", 1);
 		}
+#endif
 		close(pipefd[1]);
 
 		waitpid(pid, &status, 0);
@@ -345,7 +354,11 @@ int main(int argc, char *argv[])
 	const struct test *t;
 	pid_t pid;
 	int total, pass;
+#ifdef __DragonFly__
+	int status;
+#else
 	siginfo_t info;
+#endif
 
 	/* Load system malloc, free, and realloc */
 	sys_calloc = dlsym(RTLD_NEXT, "calloc");
@@ -394,6 +407,12 @@ int main(int argc, char *argv[])
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
 			fprintf(stderr, "waitid failed: %m\n");
@@ -401,7 +420,20 @@ int main(int argc, char *argv[])
 
 			abort();
 		}
+#endif
 
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
 		switch (info.si_code) {
 		case CLD_EXITED:
 			if (info.si_status == EXIT_SUCCESS)
@@ -425,6 +457,7 @@ int main(int argc, char *argv[])
 
 			break;
 		}
+#endif
 
 		if (success) {
 			pass++;
