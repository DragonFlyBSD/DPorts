--- src/hotspot/os/bsd/os_perf_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_perf_bsd.cpp
@@ -322,7 +322,7 @@
     if (sysctl(mib, miblen, &cpu_load_info, &length, nullptr, 0) == -1) {
       return OS_ERR;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     size_t alllength = length * _num_procs;
     long *allcpus = NEW_C_HEAP_ARRAY(long, CPUSTATES * _num_procs, mtInternal);
 
@@ -501,7 +501,7 @@
   }
 
   long jvm_context_switches = ((task_events_info_t)task_info_data)->csw;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   unsigned int jvm_context_switches = 0;
   size_t length = sizeof(jvm_context_switches);
   if (sysctlbyname("vm.stats.sys.v_swtch", &jvm_context_switches, &length, nullptr, 0) == -1) {
