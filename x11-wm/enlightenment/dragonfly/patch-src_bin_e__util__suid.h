--- src/bin/e_util_suid.h.orig
+++ src/bin/e_util_suid.h
@@ -14,6 +14,9 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <unistd.h>
+#ifdef __DragonFly__
+extern char **environ;
+#endif
 #include <string.h>
 #include <sys/types.h>
 #include <sys/stat.h>
@@ -137,7 +140,7 @@ e_setuid_setup(uid_t *caller_uid, gid_t
    // die with parent - special as this is setuid
 #ifdef HAVE_PRCTL
    prctl(PR_SET_PDEATHSIG, SIGTERM);
-#elif defined(HAVE_PROCCTL)
+#elif defined(HAVE_PROCCTL) && defined(PROC_PDEATHSIG_CTL)
    int sig = SIGTERM;
    procctl(P_PID, 0, PROC_PDEATHSIG_CTL, &sig);
 #endif
