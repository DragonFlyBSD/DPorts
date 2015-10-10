--- tests/test-compositor.c
+++ tests/test-compositor.c
@@ -99,13 +99,34 @@ client_destroyed(struct wl_listener *listener, void *data)
 {
 	struct display *d;
 	struct client_info *ci;
+#ifdef __DragonFly__
+	int status;
+#else
 	siginfo_t status;
+#endif
 
 	ci = wl_container_of(listener, ci, destroy_listener);
 	d = ci->display;
 
+#ifdef __DragonFly__
+	assert(waitpid(ci->pid, &status, 0) != -1);
+#else
 	assert(waitid(P_PID, ci->pid, &status, WEXITED) != -1);
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
@@ -121,6 +142,7 @@ client_destroyed(struct wl_listener *listener, void *data)
 		ci->exit_code = status.si_status;
 		break;
 	}
+#endif
 
 	++d->clients_terminated_no;
 	if (d->clients_no == d->clients_terminated_no) {
