--- src/CpuAffinitySet.cc.orig	2018-07-15 20:46:55 UTC
+++ src/CpuAffinitySet.cc
@@ -37,7 +37,12 @@ CpuAffinitySet::apply()
     } else {
         cpu_set_t cpuSet;
         memcpy(&cpuSet, &theCpuSet, sizeof(cpuSet));
+#ifdef __DragonFly__
+	/* on DragonFly this macro implemented as do {...} while (0) */
+        CPU_AND(&cpuSet, &cpuSet, &theOrigCpuSet);
+#else
         (void) CPU_AND(&cpuSet, &cpuSet, &theOrigCpuSet);
+#endif
         if (CPU_COUNT(&cpuSet) <= 0) {
             debugs(54, DBG_IMPORTANT, "ERROR: invalid CPU affinity for process "
                    "PID " << getpid() << ", may be caused by an invalid core in "
