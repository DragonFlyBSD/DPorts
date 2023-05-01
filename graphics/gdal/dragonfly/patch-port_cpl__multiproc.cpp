--- port/cpl_multiproc.cpp.orig	2023-01-02 14:38:17 UTC
+++ port/cpl_multiproc.cpp
@@ -1426,6 +1426,12 @@ int CPLGetNumCPUs()
 #ifdef HAVE_SCHED_GETAFFINITY
     if (nCPUs > 1)
     {
+#ifdef __DragonFly__
+	cpu_set_t cpu_mask;
+
+	if (sched_getaffinity(0, sizeof(cpu_mask), &cpu_mask) == 0)
+		nCPUs = (uint32_t)CPU_COUNT(&cpu_mask);
+#else
         cpu_set_t *set = CPU_ALLOC(nCPUs);
         if (set)
         {
@@ -1437,6 +1443,7 @@ int CPLGetNumCPUs()
                 CPLDebug("CPL", "sched_getaffinity() failed");
             CPU_FREE(set);
         }
+#endif
     }
 #endif
 
