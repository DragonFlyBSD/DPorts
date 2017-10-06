--- tests/test-compositor.c.orig	2017-07-25 14:34:46.337944000 +0300
+++ tests/test-compositor.c	2017-07-25 14:33:46.687620000 +0300
@@ -97,12 +97,33 @@
 {
 	struct client_info *ci = data;
 	struct display *d;
-	siginfo_t status;
+#ifdef __DragonFly__
+	int status;
+#else
+ 	siginfo_t status;
+#endif
 
 	d = ci->display;
 
-	assert(waitid(P_PID, ci->pid, &status, WEXITED) != -1);
+#ifdef __DragonFly__
+	assert(waitpid(ci->pid, &status, 0) != -1);
+#else
+ 	assert(waitid(P_PID, ci->pid, &status, WEXITED) != -1);
+#endif
 
+#ifdef __DragonFly__
+	if (WIFEXITED(status)) {
+		if (WEXITSTATUS(status) != EXIT_SUCCESS)
+			fprintf(stderr, "Client '%s' exited with code %d\n",
+				ci->name, WEXITSTATUS(status));
+
+		ci->exit_code = WEXITSTATUS(status);
+	} else if (WIFSIGNALED(status) || WCOREDUMP(status)) {
+		fprintf(stderr, "Client '%s' was killed by signal %d\n",
+			ci->name, WTERMSIG(status));
+		ci->exit_code = WEXITSTATUS(status);
+	}
+#else
 	switch (status.si_code) {
 	case CLD_KILLED:
 	case CLD_DUMPED:
@@ -118,6 +139,7 @@
 		ci->exit_code = status.si_status;
 		break;
 	}
+#endif
 
 	++d->clients_terminated_no;
 	if (d->clients_no == d->clients_terminated_no) {
