--- src/hotspot/os/bsd/os_bsd.cpp.intermediate	2021-03-12 09:05:53.000000000 +0000
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
@@ -1174,7 +1178,7 @@ pid_t os::Bsd::gettid() {
   mach_port_deallocate(mach_task_self(), port);
   return (pid_t)port;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -3359,6 +3363,10 @@ int os::active_processor_count() {
     return ActiveProcessorCount;
   }
 
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
+
 #ifdef __FreeBSD__
   int online_cpus = 0;
   cpuset_t mask;
@@ -3419,7 +3427,7 @@ void os::set_native_thread_name(const ch
     char buf[MAXTHREADNAMESIZE];
     snprintf(buf, sizeof(buf), "Java: %s", name);
     pthread_setname_np(buf);
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     pthread_set_name_np(pthread_self(), name);
 #elif defined(__NetBSD__)
     pthread_setname_np(pthread_self(), "%s", name);
