--- misc.c.fbsd	Wed Aug 21 06:57:18 2024
+++ misc.c	Wed Aug
@@ -33,6 +33,11 @@
 #include <signal.h>
 #include <libutil.h>
 
+#include <kvm.h>
+#include <sys/sysctl.h>
+#include <sys/resource.h>
+#include <limits.h>
+
 #include "config.h"
 #include "screen.h"
 #include "extern.h"
@@ -728,11 +733,16 @@ SessionCreationTime(fifo)
 const char *fifo;
 {
   int pid = atoi(fifo);
+  int count = 0;
+  char errbuf[_POSIX2_LINE_MAX];
+  kvm_t *kd;
   if (pid <= 0) return 0;
 
-  struct kinfo_proc * kip = kinfo_getproc(pid);
-  if (kip == 0) return 0;
-  time_t start = kip->ki_start.tv_sec;
-  free (kip);
+  kd = kvm_openfiles(NULL, "/dev/null", NULL, 0, errbuf);
+  if (kd == NULL) return NULL;
+  const struct kinfo_proc * kp = kvm_getprocs(kd, KERN_PROC_PID, pid, &count);
+  time_t start = kp->kp_start.tv_sec;
+  kvm_close(kd);
+
   return start;
 }
