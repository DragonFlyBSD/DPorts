--- src/plugins/git/daemon/gnome-builder-git.c.orig	2020-06-26 23:12:33 UTC
+++ src/plugins/git/daemon/gnome-builder-git.c
@@ -30,7 +30,7 @@
 #include <sys/prctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/procctl.h>
 #endif
 
@@ -85,10 +85,14 @@ main (gint argc,
 
 #ifdef __linux__
   prctl (PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(PROC_PDEATHSIG_CTL)
   procctl (P_PID, 0, PROC_PDEATHSIG_CTL, &(int){ SIGTERM });
 #else
+#ifdef PROC_PDEATHSIG_CTL
 #error "Please submit a patch to support parent-death signal on your OS"
+#else
+#warning "PROC_PDEATHSIG_CTL missing"
+#endif
 #endif
 
   signal (SIGPIPE, SIG_IGN);
