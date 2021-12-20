--- src/cpu.c.orig	2020-09-03 11:09:35 UTC
+++ src/cpu.c
@@ -53,6 +53,13 @@
 #ifdef HAVE_MACH_VM_MAP_H
 #include <mach/vm_map.h>
 #endif
+#ifdef HAVE_SYS_PARAM_H
+#include <sys/param.h>
+#endif
+
+#ifdef __DragonFly__
+#include <sys/resource.h>
+#endif
 
 #ifdef HAVE_LIBKSTAT
 #include <sys/sysinfo.h>
@@ -302,8 +309,17 @@ static int init(void) {
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
     WARNING("cpu plugin: sysctlbyname(kern.smp.maxcpus): %s", STRERRNO);
     return -1;
+#endif
   }
 #else
   if (numcpu != 1)
