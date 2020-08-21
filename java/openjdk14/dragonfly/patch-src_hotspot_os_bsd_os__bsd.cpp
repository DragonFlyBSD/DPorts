--- src/hotspot/os/bsd/os_bsd.cpp.intermediate	2020-08-21 11:15:01.000000000 +0000
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -97,11 +97,11 @@
 # include <time.h>
 # include <unistd.h>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   #include <elf.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   #include <pthread_np.h>
   #include <sys/link_elf.h>
   #include <vm/vm_param.h>
@@ -186,7 +186,7 @@ julong os::Bsd::available_memory() {
   if (kerr == KERN_SUCCESS) {
     available = vmstat.free_count * os::vm_page_size();
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
     "vm.stats.vm.v_cache_count",
@@ -194,7 +194,11 @@ julong os::Bsd::available_memory() {
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
@@ -1185,7 +1189,7 @@ pid_t os::Bsd::gettid() {
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -3340,6 +3344,10 @@ int os::active_processor_count() {
     return ActiveProcessorCount;
   }
 
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
+
 #ifdef __FreeBSD__
   int online_cpus = 0;
   cpuset_t mask;
