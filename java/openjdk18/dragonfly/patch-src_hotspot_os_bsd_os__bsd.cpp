--- src/hotspot/os/bsd/os_bsd.cpp.intermediate	2021-12-17 11:51:10.000000000 +0000
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -100,7 +100,7 @@
   #include <elf.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   #include <pthread_np.h>
   #include <sys/link_elf.h>
   #include <vm/vm_param.h>
@@ -179,7 +179,7 @@ julong os::Bsd::available_memory() {
   if (kerr == KERN_SUCCESS) {
     available = vmstat.free_count * os::vm_page_size();
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
     "vm.stats.vm.v_cache_count",
@@ -187,7 +187,11 @@ julong os::Bsd::available_memory() {
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
@@ -940,7 +944,7 @@ pid_t os::Bsd::gettid() {
   mach_port_deallocate(mach_task_self(), port);
   return (pid_t)port;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -1346,7 +1350,7 @@ static int iter_callback(struct dl_phdr_
 }
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct loaded_modules_info_param {
   os::LoadedModulesCallbackFunc callback;
   void *param;
@@ -1388,7 +1392,7 @@ static int dl_iterate_callback(struct dl
 #endif
 
 int os::get_loaded_modules_info(os::LoadedModulesCallbackFunc callback, void *param) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct loaded_modules_info_param callback_param = {callback, param};
   return dl_iterate_phdr(&dl_iterate_callback, &callback_param);
 #elif defined(RTLD_DI_LINKMAP)
@@ -2262,6 +2266,10 @@ int os::active_processor_count() {
     return online_cpus;
 #endif
 
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
+
   return _processor_count;
 }
 
@@ -2313,7 +2321,7 @@ void os::set_native_thread_name(const ch
     char buf[MAXTHREADNAMESIZE];
     snprintf(buf, sizeof(buf), "Java: %s", name);
     pthread_setname_np(buf);
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     pthread_set_name_np(pthread_self(), name);
 #elif defined(__NetBSD__)
     pthread_setname_np(pthread_self(), "%s", name);
