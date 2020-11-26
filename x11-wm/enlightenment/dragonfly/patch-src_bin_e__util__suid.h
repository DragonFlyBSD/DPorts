--- src/bin/e_util_suid.h.orig	2020-07-26 16:39:12 UTC
+++ src/bin/e_util_suid.h
@@ -137,7 +137,7 @@ e_setuid_setup(uid_t *caller_uid, gid_t
    // die with parent - special as this is setuid
 #ifdef HAVE_PRCTL
    prctl(PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    int sig = SIGTERM;
    procctl(P_PID, 0, PROC_PDEATHSIG_CTL, &sig);
 #endif
