--- src/hotspot/os/bsd/os_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -103,7 +103,7 @@
   #include <elf.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   #include <pthread_np.h>
   #include <sys/link_elf.h>
   #include <vm/vm_param.h>
@@ -205,7 +205,7 @@
   } else {
     return false;
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
     "vm.stats.vm.v_cache_count",
@@ -213,7 +213,11 @@
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
@@ -992,7 +996,7 @@
   mach_port_deallocate(mach_task_self(), port);
   return (pid_t)port;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -1451,7 +1455,7 @@
 }
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 struct loaded_modules_info_param {
   os::LoadedModulesCallbackFunc callback;
   void *param;
@@ -1493,7 +1497,7 @@
 #endif
 
 int os::get_loaded_modules_info(os::LoadedModulesCallbackFunc callback, void *param) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct loaded_modules_info_param callback_param = {callback, param};
   return dl_iterate_phdr(&dl_iterate_callback, &callback_param);
 #elif defined(RTLD_DI_LINKMAP)
@@ -2365,6 +2369,10 @@
   online_cpus = sysconf(_SC_NPROCESSORS_ONLN);
   if (online_cpus >= 1)
     return online_cpus;
+#endif
+
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
 #endif
 
   return _processor_count;
@@ -2418,7 +2426,7 @@
     char buf[MAXTHREADNAMESIZE];
     (void) os::snprintf(buf, sizeof(buf), "Java: %s", name);
     pthread_setname_np(buf);
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     pthread_set_name_np(pthread_self(), name);
 #elif defined(__NetBSD__)
     pthread_setname_np(pthread_self(), "%s", const_cast<char *>(name));
