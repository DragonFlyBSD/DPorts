diff --git v8/src/base/sys-info.cc v8/src/base/sys-info.cc
index c6c84e5f12b..a26cadba1e5 100644
--- v8/src/base/sys-info.cc
+++ v8/src/base/sys-info.cc
@@ -71,7 +71,7 @@ int64_t SysInfo::AmountOfPhysicalMemory() {
     return 0;
   }
   return memsize;
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
   int pages, page_size;
   size_t size = sizeof(pages);
   sysctlbyname("vm.stats.vm.v_page_count", &pages, &size, nullptr, 0);
