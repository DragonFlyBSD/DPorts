--- Source/WTF/wtf/unix/MemoryPressureHandlerUnix.cpp.orig	2022-08-31 07:59:55 UTC
+++ Source/WTF/wtf/unix/MemoryPressureHandlerUnix.cpp
@@ -28,7 +28,6 @@
 #include "config.h"
 #include <wtf/MemoryPressureHandler.h>
 
-#include <malloc.h>
 #include <unistd.h>
 #include <wtf/Logging.h>
 #include <wtf/MainThread.h>
@@ -126,7 +125,11 @@ static size_t processMemoryUsage()
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
