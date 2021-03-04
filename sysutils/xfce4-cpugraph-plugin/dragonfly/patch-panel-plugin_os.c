--- panel-plugin/os.c.orig	2021-02-14 17:45:27 UTC
+++ panel-plugin/os.c
@@ -52,6 +52,13 @@
 #include <nlist.h>
 #endif
 
+#if defined(__DragonFly__)
+#include <sys/resource.h>
+#include <sys/param.h>
+#include <sys/sched.h>
+#include <sys/sysctl.h>
+#endif
+
 #if defined (__NetBSD__)
 #include <sys/param.h>
 #include <sys/sched.h>
@@ -172,7 +179,7 @@ read_cpu_data (CpuData *data, guint nb_c
     return TRUE;
 }
 
-#elif defined (__FreeBSD__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__)
 guint
 detect_cpu_number (void)
 {
@@ -197,10 +204,16 @@ read_cpu_data (CpuData *data, guint nb_c
     gsize len = sizeof (max_cpu);
 
     data[0].load = 0;
+#ifdef __DragonFly__
+    if (sysctlbyname ("hw.ncpu", &max_cpu, &len, NULL, 0) < 0)
+#else
     if (sysctlbyname ("kern.smp.maxid", &max_cpu, &len, NULL, 0) < 0)
+#endif
         return FALSE;
 
+#ifndef __DragonFly__
     max_cpu++; /* max_cpu is 0-based */
+#endif
     if (max_cpu < nb_cpu)
         return FALSE; /* should not happen */
     len = sizeof (glong) * max_cpu * CPUSTATES;
