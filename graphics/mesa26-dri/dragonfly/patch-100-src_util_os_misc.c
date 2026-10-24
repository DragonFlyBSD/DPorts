--- src/util/os_misc.c.orig	2026-07-02 19:34:59 UTC
+++ src/util/os_misc.c
@@ -452,6 +452,49 @@ os_get_available_system_memory(uint64_t *size)

    *size = MIN2(mem_available, rl.rlim_cur);
    return true;
+#elif DETECT_OS_DRAGONFLY
+   uint64_t free_count = 0;
+   uint64_t inactive_count = 0;
+   uint64_t cache_count = 0;
+   uint64_t page_size = 0;
+   size_t len;
+
+   /*
+    * Ownership:
+    *   The VM counters are copied out by sysctl; Mesa owns only these local
+    *   scalar snapshots.
+    *
+    * Lifetime:
+    *   The values are an instantaneous estimate for Vulkan heap budgeting.
+    *   They are not cached and callers must tolerate normal VM drift after
+    *   this function returns.
+    *
+    * Threading:
+    *   sysctlbyname() is called without Mesa-side global state, so concurrent
+    *   callers only race with the kernel's changing VM counters.
+    */
+   len = sizeof(free_count);
+   if (sysctlbyname("vm.stats.vm.v_free_count", &free_count,
+         &len, NULL, 0) == -1)
+      return false;
+
+   len = sizeof(inactive_count);
+   if (sysctlbyname("vm.stats.vm.v_inactive_count", &inactive_count,
+         &len, NULL, 0) == -1)
+      return false;
+
+   len = sizeof(cache_count);
+   if (sysctlbyname("vm.stats.vm.v_cache_count", &cache_count,
+         &len, NULL, 0) == -1)
+      return false;
+
+   len = sizeof(page_size);
+   if (sysctlbyname("vm.stats.vm.v_page_size", &page_size,
+         &len, NULL, 0) == -1 || page_size == 0)
+      return false;
+
+   *size = (free_count + inactive_count + cache_count) * page_size;
+   return true;
 #elif DETECT_OS_WINDOWS
    MEMORYSTATUSEX status;
    BOOL ret;
