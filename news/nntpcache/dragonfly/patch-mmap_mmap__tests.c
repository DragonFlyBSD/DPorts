Fix for races on multi core systems.
Provided-by: Matthew Dillon

--- mmap/mmap_tests.c.orig	2004-04-11 11:43:51 UTC
+++ mmap/mmap_tests.c
@@ -238,7 +238,7 @@
 #  define POINTER_CAST unsigned int
 #endif
 
-int caught_sigquit;
+volatile int caught_sigquit;
 
 void sigquit (int sig)
 {
@@ -246,6 +246,12 @@ void sigquit (int sig)
 	signal (SIGQUIT, sigquit);
 }
 
+void sigquit2 (int sig)
+{
+	caught_sigquit++;
+	signal (SIGQUIT, sigquit);
+}
+
 void sigalrm (int sig)
 {
 	caught_sigquit++;
@@ -272,6 +278,7 @@ test_child(char *p, char *msg)
 	char *cm = "child_magic";
 	pid_t pid;
 	int ws;
+	int mask;
 	fflush (stdout);
 	if (!setjmp(jmp))
 		strcpy (p, im);
@@ -284,14 +291,17 @@ test_child(char *p, char *msg)
 		return;
 	if (pid==0)
 	{
+			signal (SIGQUIT, sigquit2);
 		if (!setjmp(jmp))
 			if (strcmp(p, im)==0)
 				printf("%s_CHILD_INHERIT " POINTER_FMT "\n", msg, (POINTER_CAST)p);
 		alarm(5);
 		kill (getppid(), SIGQUIT);
+		mask = sigblock(sigmask(SIGQUIT));
 		while (!caught_sigquit)
-			pause ();
+			sigpause (0);
 		caught_sigquit = 0;
+		sigsetmask(mask);
 		if (!setjmp(jmp))
 			if (strcmp(p, pm)==0)
 				printf("%s_CHILD_READ_PARENT_WRITE " POINTER_FMT "\n", msg, (POINTER_CAST)p);
@@ -303,15 +313,18 @@ test_child(char *p, char *msg)
 	}
 	/* parent */
 	alarm(5);
+	mask = sigblock(sigmask(SIGQUIT));
 	while (!caught_sigquit)
-		pause ();
+		sigpause (0);
 	caught_sigquit = 0;
+	sigsetmask(mask);
 	if (!setjmp(jmp))
 		strcpy (p, pm);
 	alarm(5);
 	kill (pid, SIGQUIT);
+	mask = sigblock(sigmask(SIGQUIT));
 	while (!caught_sigquit)
-		pause ();
+		sigpause (0);
 	if (!setjmp(jmp))
 		if (strcmp(p, cm)==0)
 			printf("%s_PARENT_READ_CHILD_WRITE " POINTER_FMT "\n", msg, (POINTER_CAST)p);
