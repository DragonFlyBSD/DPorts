--- src/hotspot/os/bsd/os_bsd.cpp.intermediate	2020-01-15 07:35:52.000000000 +0000
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -96,17 +96,17 @@
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
 #endif
 
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 # include <pthread_np.h>
 #endif
 
@@ -180,7 +180,7 @@ julong os::Bsd::available_memory() {
   if (kerr == KERN_SUCCESS) {
     available = vmstat.free_count * os::vm_page_size();
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
     "vm.stats.vm.v_cache_count",
@@ -188,7 +188,11 @@ julong os::Bsd::available_memory() {
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
@@ -1146,7 +1150,7 @@ pid_t os::Bsd::gettid() {
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -3471,6 +3475,10 @@ int os::active_processor_count() {
     return ActiveProcessorCount;
   }
 
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
+
 #ifdef __FreeBSD__
   int online_cpus = 0;
   cpuset_t mask;
