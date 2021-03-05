--- deps/v8/src/base/sys-info.cc.orig	2021-02-09 14:11:20 UTC
+++ deps/v8/src/base/sys-info.cc
@@ -63,7 +63,7 @@ int64_t SysInfo::AmountOfPhysicalMemory(
     return 0;
   }
   return memsize;
-#elif V8_OS_FREEBSD
+#elif V8_OS_FREEBSD || __DragonFly__
   int pages, page_size;
   size_t size = sizeof(pages);
   sysctlbyname("vm.stats.vm.v_page_count", &pages, &size, nullptr, 0);
