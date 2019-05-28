--- src/srun/libsrun/srun_job.c.intermediate	2019-05-28 15:48:44.000000000 +0000
+++ src/srun/libsrun/srun_job.c
@@ -113,7 +113,7 @@ static int shepherd_fd = -1;
 static pthread_t signal_thread = (pthread_t) 0;
 static int pty_sigarray[] = { SIGWINCH, 0 };
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define __environ environ
 extern char **environ;
 #endif
