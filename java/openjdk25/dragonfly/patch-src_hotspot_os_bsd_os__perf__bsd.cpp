--- src/hotspot/os/bsd/os_perf_bsd.cpp.orig	2021-09-14 03:59:48 UTC
+++ src/hotspot/os/bsd/os_perf_bsd.cpp
@@ -325,7 +325,7 @@ int CPUPerformanceInterface::CPUPerforma
     if (sysctl(mib, miblen, &cpu_load_info, &length, NULL, 0) == -1) {
       return OS_ERR;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     size_t alllength = length * _num_procs;
     long *allcpus = NEW_C_HEAP_ARRAY(long, CPUSTATES * _num_procs, mtInternal);
 
@@ -504,7 +504,7 @@ int CPUPerformanceInterface::CPUPerforma
   }
 
   long jvm_context_switches = ((task_events_info_t)task_info_data)->csw;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   unsigned int jvm_context_switches = 0;
   size_t length = sizeof(jvm_context_switches);
   if (sysctlbyname("vm.stats.sys.v_swtch", &jvm_context_switches, &length, NULL, 0) == -1) {
