--- src/cpu.c.orig	2018-10-23 06:57:09 UTC
+++ src/cpu.c
@@ -53,6 +53,9 @@
 #ifdef HAVE_MACH_VM_MAP_H
 #include <mach/vm_map.h>
 #endif
+#ifdef HAVE_SYS_PARAM_H
+#include <sys/param.h>
+#endif
 
 #ifdef HAVE_LIBKSTAT
 #include <sys/sysinfo.h>
@@ -298,14 +301,26 @@ static int init(void) {
   }
 
 #ifdef HAVE_SYSCTL_KERN_CP_TIMES
+
   numcpu_size = sizeof(maxcpu);
 
   if (sysctlbyname("kern.smp.maxcpus", &maxcpu, &numcpu_size, NULL, 0) < 0) {
+    /*
+     * DragonFly BSD defines SMP_MAXCPU via sys/param.h (and FreeBSD doesn't).
+     * This #ifdef will pick up the case until that sysctl is available.
+     */
+#ifdef SMP_MAXCPU
+    if (maxcpu == 0)
+      maxcpu = SMP_MAXCPU;
+#else
     char errbuf[1024];
     WARNING("cpu plugin: sysctlbyname(kern.smp.maxcpus): %s",
             sstrerror(errno, errbuf, sizeof(errbuf)));
     return -1;
+#endif /* SMP_MAXCPU */
   }
+
+
 #else
   if (numcpu != 1)
     NOTICE("cpu: Only one processor supported when using `sysctlbyname' (found "
