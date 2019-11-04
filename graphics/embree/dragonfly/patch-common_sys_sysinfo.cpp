--- common/sys/sysinfo.cpp.bak	2015-10-16 13:01:59.000000000 +0300
+++ common/sys/sysinfo.cpp
@@ -30,6 +30,8 @@ namespace embree
     return "Linux (32bit)";
 #elif defined(__LINUX__) && defined(__X86_64__)
     return "Linux (64bit)";
+#elif defined(__DRAGONFLY__) && defined(__X86_64__)
+    return "DragonFly (64bit)";
 #elif defined(__FREEBSD__) && !defined(__X86_64__)
     return "FreeBSD (32bit)";
 #elif defined(__FREEBSD__) && defined(__X86_64__)
@@ -410,6 +412,28 @@ namespace embree
     return std::string(buf);
   }
 }
+
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
+    if (sysctl(mib, 4, buf, &len, 0x0, 0) == -1) *buf = '\0';
+    return std::string(buf);
+  }
+}
 
 #endif
 
