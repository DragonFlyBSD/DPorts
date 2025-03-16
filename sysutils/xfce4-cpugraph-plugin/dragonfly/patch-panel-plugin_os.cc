--- panel-plugin/os.cc.orig	Sun Dec  3 14:03:14 2023
+++ panel-plugin/os.cc	Sun Mar
@@ -61,6 +61,13 @@ using namespace std;
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
@@ -165,7 +172,7 @@ read_cpu_data (unordered_map<guint, CpuData> &data, un
     fclose (fStat);
 }
 
-#elif defined (__FreeBSD__)
+#elif defined (__FreeBSD__) || defined(__DragonFly__)
 static guint
 detect_cpu_number ()
 {
@@ -194,10 +201,16 @@ read_cpu_data (unordered_map<guint, CpuData> &data)
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
