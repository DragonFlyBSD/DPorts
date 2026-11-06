--- src/hotspot/os/bsd/os_bsd.cpp.orig
+++ src/hotspot/os/bsd/os_bsd.cpp
@@ -127,7 +127,7 @@
 #include <lwp.h>
 #endif
 
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 # include <pthread_np.h>
 #endif
 
@@ -209,7 +209,7 @@
   if (kerr == KERN_SUCCESS) {
     available = vmstat.free_count * os::vm_page_size();
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   static const char *vm_stats[] = {
     "vm.stats.vm.v_free_count",
     "vm.stats.vm.v_cache_count",
@@ -217,7 +217,11 @@
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
@@ -1210,7 +1214,7 @@
   guarantee(retval != 0, "just checking");
   return retval;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   return ::pthread_getthreadid_np();
 #elif defined(__OpenBSD__)
   retval = getthrid();
@@ -1277,10 +1281,10 @@
   // the symbol address + symbol size. Since the jvm wants more
   // accurate symbol resolution, only return symbols that are
   // an exact match so that Decoder::decode can be called as a fallback.
-  if (info->dli_saddr != nullptr && info->dli_sname != nullptr &&
+  if (info->dli_saddr != NULL && info->dli_sname != NULL &&
       addr != info->dli_saddr) {
-    info->dli_saddr = nullptr;
-    info->dli_sname = nullptr;
+    info->dli_saddr = NULL;
+    info->dli_sname = NULL;
   }
   return ret;
 #endif
@@ -3719,6 +3723,10 @@
                   ActiveProcessorCount);
     return ActiveProcessorCount;
   }
+
+#ifdef __DragonFly__
+  return sysconf(_SC_NPROCESSORS_ONLN);
+#endif
 
 #ifdef __FreeBSD__
   int online_cpus = 0;
