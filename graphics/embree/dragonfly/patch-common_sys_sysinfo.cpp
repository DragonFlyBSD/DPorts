--- common/sys/sysinfo.cpp.orig	2021-05-08 12:26:07 UTC
+++ common/sys/sysinfo.cpp
@@ -5,6 +5,9 @@
 #include "intrinsics.h"
 #include "string.h"
 #include "ref.h"
+#if defined(__DragonFly__)
+#include <pthread_np.h>
+#endif
 #if defined(__FREEBSD__)
 #include <sys/cpuset.h>
 #include <pthread_np.h>
@@ -25,6 +28,8 @@ namespace embree
     return "Linux (32bit)";
 #elif defined(__LINUX__) && defined(__64BIT__)
     return "Linux (64bit)";
+#elif defined(__DRAGONFLY__) && defined(__X86_64__)
+    return "DragonFly (64bit)";
 #elif defined(__FREEBSD__) && !defined(__64BIT__)
     return "FreeBSD (32bit)";
 #elif defined(__FREEBSD__) && defined(__64BIT__)
@@ -536,6 +541,37 @@ namespace embree
   }
 }
 
+#endif
+
+////////////////////////////////////////////////////////////////////////////////
+/// DragonFly Platform
+////////////////////////////////////////////////////////////////////////////////
+
+#ifdef __DragonFly__
+
+#include <sys/sysctl.h>
+
+namespace embree
+{
+  std::string getExecutableFileName()
+  {
+    const int mib[4] = { CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1 };
+    char buf[1024];
+    size_t len = sizeof(buf);
+    if (sysctl(mib, 4, buf, &len, 0x0, 0) == -1)
+      return std::string();
+    return std::string(buf);
+  }
+
+  size_t getVirtualMemoryBytes() {
+    return 0;
+  }
+
+  size_t getResidentMemoryBytes() {
+    return 0;
+  }
+}
+
 #endif
 
 ////////////////////////////////////////////////////////////////////////////////
