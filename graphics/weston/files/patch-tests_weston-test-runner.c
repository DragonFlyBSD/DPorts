--- tests/weston-test-runner.c.orig	2015-10-02 20:46:25 +0200
+++ tests/weston-test-runner.c
@@ -34,6 +34,10 @@
 #include <errno.h>
 #include <signal.h>
 
+#if defined(__FreeBSD__)
+#include <sys/wait.h>
+#endif
+
 #include "weston-test-runner.h"
 
 #define SKIP 77
@@ -77,7 +81,11 @@
 	int success = 0;
 	int skip = 0;
 	int hardfail = 0;
+#if defined(__FreeBSD__)
+	int status;
+#else
 	siginfo_t info;
+#endif
 
 	pid_t pid = fork();
 	assert(pid >= 0);
@@ -85,16 +93,36 @@
 	if (pid == 0)
 		run_test(t, test_data); /* never returns */
 
+#if defined(__FreeBSD__)
+	if (wait(&status)) {
+		fprintf(stderr, "wait failed: %s\n", strerror(errno));
+		abort();
+	}
+#else
 	if (waitid(P_ALL, 0, &info, WEXITED)) {
 		fprintf(stderr, "waitid failed: %m\n");
 		abort();
 	}
+#endif
 
 	if (test_data)
 		fprintf(stderr, "test \"%s/%i\":\t", t->name, iteration);
 	else
 		fprintf(stderr, "test \"%s\":\t", t->name);
 
+#if defined(__FreeBSD__)
+	if (WIFEXITED(status)) {
+		fprintf(stderr, "exit status %d", WEXITSTATUS(status));
+		if (WEXITSTATUS(status) == EXIT_SUCCESS)
+			success = 1;
+		else if (WEXITSTATUS(status) == SKIP)
+			skip = 1;
+	} else if (WIFSIGNALED(status)) {
+		fprintf(stderr, "signal %d", WTERMSIG(status));
+		if (WTERMSIG(status) != SIGABRT)
+			hardfail = 1;
+	}
+#else
 	switch (info.si_code) {
 	case CLD_EXITED:
 		fprintf(stderr, "exit status %d", info.si_status);
@@ -110,6 +138,7 @@
 			hardfail = 1;
 		break;
 	}
+#endif
 
 	if (t->must_fail)
 		success = !success;
@@ -155,7 +184,7 @@
 		const char *testname = argv[1];
 		if (strcmp(testname, "--help") == 0 ||
 		    strcmp(testname, "-h") == 0) {
-			fprintf(stderr, "Usage: %s [test-name]\n", program_invocation_short_name);
+			fprintf(stderr, "Usage: %s [test-name]\n", getprogname());
 			list_tests();
 			exit(EXIT_SUCCESS);
 		}
