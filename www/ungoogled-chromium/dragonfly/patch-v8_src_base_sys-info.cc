diff --git v8/src/base/sys-info.cc v8/src/base/sys-info.cc
index 708c341c5eec..9a707380dec6 100644
--- v8/src/base/sys-info.cc
+++ v8/src/base/sys-info.cc
@@ -72,7 +72,7 @@ int64_t SysInfo::AmountOfPhysicalMemory() {
     return 0;
   }
   return memsize;
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
   int pages, page_size;
   size_t size = sizeof(pages);
   sysctlbyname("vm.stats.vm.v_page_count", &pages, &size, nullptr, 0);
