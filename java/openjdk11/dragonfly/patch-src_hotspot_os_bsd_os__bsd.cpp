--- src/hotspot/os/bsd/os_bsd.cpp.intermediate	2020-01-05 09:35:07.634116000 +0000
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -121,7 +121,7 @@
 #include <lwp.h>
 #endif
 
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 # include <pthread_np.h>
 #endif
 
@@ -200,7 +200,7 @@ julong os::Bsd::available_memory() {
   if (kerr == KERN_SUCCESS) {
     available = vmstat.free_count * os::vm_page_size();
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
     "vm.stats.vm.v_cache_count",
@@ -208,7 +208,11 @@ julong os::Bsd::available_memory() {
   };
   size_t size;
   julong free_pages;
+#ifdef __DragonFly__
+  u_long i, npages;
+#else
   u_int i, npages;
+#endif
 
   for (i = 0, free_pages = 0; i < sizeof(vm_stats) / sizeof(vm_stats[0]); i++) {
     size = sizeof(npages);
@@ -1181,7 +1185,7 @@ pid_t os::Bsd::gettid() {
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -3584,6 +3588,10 @@ int os::active_processor_count() {
     return ActiveProcessorCount;
   }
 
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
+
 #ifdef __FreeBSD__
   int online_cpus = 0;
   cpuset_t mask;
