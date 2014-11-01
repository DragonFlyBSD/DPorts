--- bsdinfo.c.orig	2012-06-18 19:18:21 UTC
+++ bsdinfo.c
@@ -35,7 +35,11 @@
 #include <unistd.h>
 #include <sys/timespec.h>
 #include <time.h>
+#ifdef __DragonFly__
+#include <sys/user.h>
+#else
 #include <sys/proc.h>
+#endif
 #include <kvm.h>
 #include <vm/vm_param.h>
 #include <string.h>
@@ -57,7 +61,11 @@
     execf = NULL;
     coref = _PATH_DEVNULL;
     kd = kvm_openfiles(execf, coref, NULL, O_RDONLY, buf);
+#ifdef __DragonFly__
+    plist = kvm_getprocs(kd, KERN_PROC_ALL, 0, &nproc);
+#else
     plist = kvm_getprocs(kd, KERN_PROC_PROC, 0, &nproc);
+#endif
 
     for (i = 0, kp = plist; i < nproc; i++, kp++) proc_count++;
     
