--- Source/WTF/wtf/unix/MemoryPressureHandlerUnix.cpp.orig	Mon Aug 19 06:28:38 2024
+++ Source/WTF/wtf/unix/MemoryPressureHandlerUnix.cpp	Mon Oct
@@ -28,7 +28,9 @@
 #include "config.h"
 #include <wtf/MemoryPressureHandler.h>
 
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 #include <unistd.h>
 #include <wtf/Logging.h>
 #include <wtf/MainThread.h>
@@ -129,7 +131,12 @@ static size_t processMemoryUsage()
     if (sysctl(mib, 4, &info, &infolen, nullptr, 0))
         return 0;
 
+#ifdef __FreeBSD__
     return static_cast<size_t>(info.ki_rssize - info.ki_tsize) * pageSize;
+#else
+    return static_cast<size_t>(info.kp_vm_rssize - info.kp_vm_tsize) * pageSize;
+#endif
+
 #elif OS(QNX)
     int fd = open("/proc/self/ctl", O_RDONLY);
     if (fd == -1)
