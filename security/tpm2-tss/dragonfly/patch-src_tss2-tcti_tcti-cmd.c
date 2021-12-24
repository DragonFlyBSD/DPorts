--- src/tss2-tcti/tcti-cmd.c.orig	2021-05-10 15:40:45 UTC
+++ src/tss2-tcti/tcti-cmd.c
@@ -16,7 +16,7 @@
 #include <unistd.h>
 #include <signal.h>
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 #include <sys/procctl.h>
 #else
 #include <sys/prctl.h>
@@ -186,7 +186,7 @@ static void pipe_close (int pipefd[2])
     errno = rc;
 }
 
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 static int set_exit_with_parent (void)
 {
     const int sig = SIGTERM;
