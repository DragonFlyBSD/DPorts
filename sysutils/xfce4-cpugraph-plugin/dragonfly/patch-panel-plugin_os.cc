--- panel-plugin/os.cc.orig	2021-10-01 16:44:42 UTC
+++ panel-plugin/os.cc
@@ -60,6 +60,13 @@
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
@@ -185,7 +192,7 @@ read_cpu_data (std::vector<CpuData> &dat
     return true;
 }
 
-#elif defined (__FreeBSD__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__)
 guint
 detect_cpu_number ()
 {
@@ -214,10 +221,16 @@ read_cpu_data (std::vector<CpuData> &dat
     gsize len = sizeof (max_cpu);
 
     data[0].load = 0;
+#ifdef __DragonFly__
+    if (sysctlbyname ("hw.ncpu", &max_cpu, &len, NULL, 0) < 0)
+#else
     if (sysctlbyname ("kern.smp.maxid", &max_cpu, &len, NULL, 0) < 0)
+#endif
         return false;
 
+#ifndef __DragonFly__
     max_cpu++; /* max_cpu is 0-based */
+#endif
     if (max_cpu < nb_cpu)
         return false; /* should not happen */
     len = sizeof (glong) * max_cpu * CPUSTATES;
