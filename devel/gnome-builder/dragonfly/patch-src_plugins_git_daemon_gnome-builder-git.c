--- src/plugins/git/daemon/gnome-builder-git.c.orig	2021-05-05 20:59:41 UTC
+++ src/plugins/git/daemon/gnome-builder-git.c
@@ -30,7 +30,7 @@
 #include <sys/prctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/procctl.h>
 #endif
 
@@ -85,7 +85,7 @@ main (gint argc,
 
 #ifdef __linux__
   prctl (PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(PROC_PDEATHSIG_CTL)
   procctl (P_PID, 0, PROC_PDEATHSIG_CTL, &(int){ SIGTERM });
 #else
 # warning "Please submit a patch to support parent-death signal on your OS"
