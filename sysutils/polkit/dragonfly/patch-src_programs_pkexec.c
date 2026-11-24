--- src/programs/pkexec.c.orig
+++ src/programs/pkexec.c
@@ -33,7 +33,7 @@
 #include <sys/prctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <signal.h>
 #include <sys/procctl.h>
 #endif
@@ -790,7 +790,7 @@
       g_printerr ("prctl(PR_SET_PDEATHSIG, SIGTERM) failed: %s\n", g_strerror (errno));
       goto out;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   int _sig = SIGTERM;
   if (procctl (P_PID, 0, PROC_PDEATHSIG_CTL, &_sig) != 0)
     {
