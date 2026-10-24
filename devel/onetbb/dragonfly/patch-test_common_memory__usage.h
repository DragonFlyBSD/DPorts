--- test/common/memory_usage.h.orig	2026-09-01 11:08:27 UTC
+++ test/common/memory_usage.h
@@ -112,7 +112,7 @@ namespace utils {
         if (stat == peakUsage)
             ASSERT(size, "VmPeak not supported.");
         return size;
-#elif __unix__ && !defined(__QNX__)
+#elif __unix__ && !defined(__QNX__) && !defined(__DragonFly__)
         long unsigned size = 0;
         FILE* fst = fopen("/proc/self/status", "r");
         ASSERT(fst != nullptr, nullptr);
