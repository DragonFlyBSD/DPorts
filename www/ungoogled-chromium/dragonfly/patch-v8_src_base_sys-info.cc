diff --git v8/src/base/sys-info.cc v8/src/base/sys-info.cc
index 096be2012410..a0f2b514cd3d 100644
--- v8/src/base/sys-info.cc
+++ v8/src/base/sys-info.cc
@@ -74,7 +74,7 @@ int64_t SysInfo::AmountOfPhysicalMemory() {
     return 0;
   }
   return memsize;
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || V8_OS_DRAGONFLYBSD
   int pages, page_size;
   size_t size = sizeof(pages);
   sysctlbyname("vm.stats.vm.v_page_count", &pages, &size, nullptr, 0);
