--- test/common/memory_usage.h.orig	2021-10-04 09:50:18 UTC
+++ test/common/memory_usage.h
@@ -93,7 +93,7 @@ namespace utils {
         bool status = GetProcessMemoryInfo(GetCurrentProcess(), &mem, sizeof(mem)) != 0;
         ASSERT(status, NULL);
         return stat == currentUsage ? mem.PagefileUsage : mem.PeakPagefileUsage;
-#elif __unix__
+#elif __unix__ && !defined(__DragonFly__)
         long unsigned size = 0;
         FILE* fst = fopen("/proc/self/status", "r");
         ASSERT(fst != nullptr, NULL);
