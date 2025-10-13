--- Source/bmalloc/bmalloc/AvailableMemory.cpp.orig	Mon Aug 19 06:28:40 2024
+++ Source/bmalloc/bmalloc/AvailableMemory.cpp	Wed Oct
@@ -212,7 +212,12 @@ MemoryStatus memoryStatus()
 
     size_t memoryFootprint = 0;
     if (!sysctl(mib, 4, &info, &infolen, nullptr, 0))
+# ifdef __DragonFly__
+        memoryFootprint = static_cast<size_t>(info.kp_vm_rssize) * vmPageSize();
+# else
         memoryFootprint = static_cast<size_t>(info.ki_rssize) * vmPageSize();
+# endif
+
 #endif
 
     double percentInUse = static_cast<double>(memoryFootprint) / static_cast<double>(availableMemory());
