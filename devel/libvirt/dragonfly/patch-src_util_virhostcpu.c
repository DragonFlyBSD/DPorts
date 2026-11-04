--- src/util/virhostcpu.c.orig	2026-10-01 09:02:52 UTC
+++ src/util/virhostcpu.c
@@ -32,7 +32,7 @@
 # include <linux/kvm.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 # include <sys/time.h>
 # include <sys/types.h>
 # include <sys/sysctl.h>
@@ -56,7 +56,7 @@
 #define MSR_DEVICE "/dev/cpu/0/msr"
 
 
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 static int
 virHostCPUGetCountAppleFreeBSD(void)
 {
@@ -71,13 +71,18 @@
 
     return ncpu;
 }
-#endif /* defined(__FreeBSD__) || defined(__APPLE__) */
+#endif /* defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__) */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define BSD_CPU_STATS_ALL 4
 # define BSD_MEMORY_STATS_ALL 4
 
-# define TICK_TO_NSEC (1000ull * 1000ull * 1000ull / (stathz ? stathz : hz))
+# if defined(__DragonFly__)
+/* DragonFly's kern.cp_time(s) count microseconds, not stathz ticks. */
+#  define TICK_TO_NSEC 1000ull
+# else
+#  define TICK_TO_NSEC (1000ull * 1000ull * 1000ull / (stathz ? stathz : hz))
+# endif
 
 static int
 virHostCPUGetStatsFreeBSD(int cpuNum,
@@ -138,7 +143,7 @@
             return -1;
         }
 
-        offset = cpu_times_num * CPUSTATES;
+        offset = cpuNum * CPUSTATES;
     }
 
     cpu_times_size = sizeof(long) * cpu_times_num * CPUSTATES;
@@ -163,8 +168,12 @@
         }
 
         param->value = 0;
-        for (j = 0; j < G_N_ELEMENTS(cpu_map[i].idx); j++)
+        for (j = 0; j < G_N_ELEMENTS(cpu_map[i].idx); j++) {
+            /* Unused slots are 0, i.e. CP_USER, which only comes first. */
+            if (j > 0 && cpu_map[i].idx[j] == CP_USER)
+                break;
             param->value += cpu_times[offset + cpu_map[i].idx[j]] * TICK_TO_NSEC;
+        }
     }
 
     return 0;
@@ -972,7 +981,7 @@
  cleanup:
     VIR_FORCE_FCLOSE(cpuinfo);
     return ret;
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
     unsigned long cpu_freq;
     size_t cpu_freq_len = sizeof(cpu_freq);
 
@@ -985,7 +994,7 @@
     *cores = *cpus;
     *threads = 1;
 
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
     /* dev.cpu.%d.freq reports current active CPU frequency. It is provided by
      * the cpufreq(4) framework. However, it might be disabled or no driver
      * available. In this case fallback to "hw.clockrate" which reports boot time
@@ -1014,7 +1023,7 @@
     *mhz = cpu_freq / 1000000;
 # endif
 
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
 #  define FILL_DATA_SYSCTL(var, sysctl, error_msg) \
     do { \
         size_t _len = sizeof(*var); \
@@ -1024,10 +1033,17 @@
         } \
     } while (0)
 
+#  if defined(__DragonFly__)
+    FILL_DATA_SYSCTL(sockets, "hw.cpu_topology_phys_ids", _("cannot obtain CPU package count"));
+    FILL_DATA_SYSCTL(cores, "hw.cpu_topology_core_ids", _("cannot obtain CPU core count"));
+    FILL_DATA_SYSCTL(threads, "hw.cpu_topology_ht_ids",
+                      _("cannot obtain CPU threads per core"));
+#  else
     FILL_DATA_SYSCTL(nodes, "vm.ndomains", _("cannot obtain NUMA domain count"));
     FILL_DATA_SYSCTL(cores, "kern.smp.cores", _("cannot obtain CPU core count"));
     FILL_DATA_SYSCTL(threads, "kern.smp.threads_per_core",
                       _("cannot obtain CPU threads per core"));
+#  endif
 # endif /* __FreeBSD__ */
 
     return 0;
@@ -1059,7 +1075,7 @@
 
         return ret;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     return virHostCPUGetStatsFreeBSD(cpuNum, params, nparams);
 #else
     virReportError(VIR_ERR_NO_SUPPORT, "%s",
@@ -1074,7 +1090,7 @@
 {
 #if defined(__linux__)
     return virHostCPUCountLinux();
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
     return virHostCPUGetCountAppleFreeBSD();
 #else
     virReportError(VIR_ERR_NO_SUPPORT, "%s",
@@ -1118,7 +1134,7 @@
     virFileReadValueBitmap(&ret, "%s/cpu/online", SYSFS_SYSTEM_PATH);
 
     return ret;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     virBitmap *ret = NULL;
     int ncpus = virHostCPUGetCountAppleFreeBSD();
 
