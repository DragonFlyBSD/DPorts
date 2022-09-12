--- Source/WTF/wtf/unix/MemoryPressureHandlerUnix.cpp.intermediate	2020-11-06 00:13:25 UTC
+++ Source/WTF/wtf/unix/MemoryPressureHandlerUnix.cpp
@@ -130,7 +130,11 @@ static size_t processMemoryUsage()
     if (sysctl(mib, 4, &info, &infolen, nullptr, 0))
         return 0;
 
+#ifdef __DragonFly__
+    return static_cast<size_t>(info.kp_vm_rssize - info.kp_vm_tsize) * pageSize;
+#else
     return static_cast<size_t>(info.ki_rssize - info.ki_tsize) * pageSize;
+#endif
 #else
 #error "Missing a platform specific way of determining the memory usage"
 #endif
