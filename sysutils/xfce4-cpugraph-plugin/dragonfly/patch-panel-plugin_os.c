--- panel-plugin/os.c.orig	2019-07-02 23:18:51 UTC
+++ panel-plugin/os.c
@@ -50,6 +50,13 @@
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
@@ -192,6 +199,65 @@ read_cpu_data (CpuData *data, guint nb_c
     }
 
     data[0].load /= nb_cpu;
+    g_free (cp_time);
+    return TRUE;
+}
+
+#elif defined (__DragonFly__)
+guint
+detect_cpu_number ()
+{
+    static gint mib[] = {CTL_HW, HW_NCPU};
+    gint ncpu;
+    gsize len = sizeof (gint);
+
+    if (sysctl (mib, 2, &ncpu, &len, NULL, 0) < 0)
+        return 0;
+    else
+        return ncpu;
+}
+
+gboolean
+read_cpu_data (CpuData *data, guint nb_cpu)
+{
+    glong used, total;
+    glong *cp_time;
+    glong *cp_time1;
+    gint i;
+    gint max_cpu;
+    gsize len = sizeof (max_cpu);
+
+    data[0].load = 0;
+    if (sysctlbyname ("hw.ncpu", &max_cpu, &len, NULL, 0) < 0)
+        return FALSE;
+
+    if (max_cpu < nb_cpu)
+        return FALSE; /* should not happen */
+    len = sizeof (glong) * max_cpu * CPUSTATES;
+    cp_time = (glong *) g_malloc (len);
+
+    if (sysctlbyname ("kern.cp_times", cp_time, &len, NULL, 0) < 0) {
+        g_free (cp_time);
+        return FALSE;
+    }
+
+    for (i = 1; i <= nb_cpu; i++)
+    {
+        cp_time1 = &cp_time[CPUSTATES * (i - 1)];
+        used = cp_time1[CP_USER] + cp_time1[CP_NICE] + cp_time1[CP_SYS] + cp_time1[CP_INTR];
+        total = used + cp_time1[CP_IDLE];
+
+        if ((total - data[i].previous_total) != 0)
+            data[i].load = (CPU_SCALE * (used - data[i].previous_used)) /
+                           (total - data[i].previous_total);
+        else
+            data[i].load = 0;
+            data[i].previous_used = used;
+            data[i].previous_total = total;
+            data[0].load += data[i].load;
+    }
+
+    data[0].load /= nb_cpu;
     g_free (cp_time);
     return TRUE;
 }
