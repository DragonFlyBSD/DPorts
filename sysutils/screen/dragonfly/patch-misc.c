--- misc.c.orig
+++ misc.c
@@ -33,6 +33,9 @@
 #include <poll.h>
 #include <sys/types.h>
 #include <sys/user.h>
+#ifdef __DragonFly__
+#include <sys/sysctl.h>
+#endif
 #include <sys/stat.h>		/* mkdir() declaration */
 #include <signal.h>
 #include <libutil.h>
@@ -249,9 +252,18 @@
   int pid = atoi(fifo);
   if (pid <= 0) return 0;
 
+#ifdef __DragonFly__
+  /* no kinfo_getproc() in DragonFly's libutil */
+  int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, pid };
+  struct kinfo_proc kp;
+  size_t len = sizeof(kp);
+  if (sysctl(mib, 4, &kp, &len, NULL, 0) == -1 || len == 0) return 0;
+  return kp.kp_start.tv_sec;
+#else
   struct kinfo_proc * kip = kinfo_getproc(pid);
   if (kip == 0) return 0;
   time_t start = kip->ki_start.tv_sec;
   free (kip);
   return start;
+#endif
 }
