--- hotspot/src/os/bsd/vm/os_bsd.cpp.orig	2023-07-31 09:58:34.951083000 +0200
+++ hotspot/src/os/bsd/vm/os_bsd.cpp	2023-07-31 09:58:56.321419000 +0200
@@ -104,13 +104,18 @@
 # include <sys/ioctl.h>
 # include <sys/syscall.h>
 
+#ifdef __DragonFly__
+# include <pthread_np.h>
+# include <vm/vm_param.h>
+#endif
+
 #ifdef __FreeBSD__
 # include <pthread_np.h>
 # include <sys/cpuset.h>
 # include <vm/vm_param.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 # include <elf.h>
 #endif
 
@@ -186,17 +191,21 @@ julong os::available_memory() {
 
 // available here means free
 julong os::Bsd::available_memory() {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
-#if __FreeBSD_version < 1200016
+#if defined(__DragonFly__) || __FreeBSD_version < 1200016
     "vm.stats.vm.v_cache_count",
 #endif
     "vm.stats.vm.v_inactive_count"
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
@@ -1276,8 +1285,8 @@ pid_t os::Bsd::gettid() {
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif defined(__FreeBSD__)
-#if __FreeBSD_version > 900030
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
+#if defined(__DragonFly__) || __FreeBSD_version > 900030
   return ::pthread_getthreadid_np();
 #else
   long tid;
@@ -2438,7 +2447,7 @@ static char* anon_mmap(char* requested_a
   if (fixed) {
     assert((uintptr_t)requested_addr % os::Bsd::page_size() == 0, "unaligned address");
     flags |= MAP_FIXED;
-#if !defined(__OpenBSD__) && !defined(__APPLE__)
+#if !defined(__OpenBSD__) && !defined(__APPLE__) && !defined(__DragonFly__)
   } else if (alignment_hint > 0) {
     flags |= MAP_ALIGNED(ffs(alignment_hint) - 1);
 #endif
@@ -4053,6 +4062,10 @@ int os::active_processor_count() {
     return online_cpus;
 #endif
 
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
+
   return _processor_count;
 }
 
@@ -4064,7 +4077,7 @@ void os::set_native_thread_name(const ch
     char buf[MAXTHREADNAMESIZE];
     snprintf(buf, sizeof(buf), "Java: %s", name);
     pthread_setname_np(buf);
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     pthread_set_name_np(pthread_self(), name);
 #elif defined(__NetBSD__)
     pthread_setname_np(pthread_self(), "%s", name);
