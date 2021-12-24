--- toonz/sources/common/tsystem/tsystempd.cpp.orig	2021-04-10 13:00:20 UTC
+++ toonz/sources/common/tsystem/tsystempd.cpp
@@ -72,7 +72,11 @@
 #include <sys/sysctl.h>
 #include <string.h>
 #include <unistd.h>
+#ifdef __DragonFly__
+#include <sys/user.h>
+#else
 #include <sys/proc.h>
+#endif
 #include <sys/vmmeter.h>
 #include <vm/vm_param.h>
 #include <grp.h>
@@ -278,6 +282,11 @@ TINT64 TSystem::getFreeMemorySize(bool o
   }
   free(sysInfo);
 
+#elif defined(__DragonFly__)
+
+  // to be done...
+  totalFree = 512 * 1024;
+
 #elif defined(FREEBSD)
 
   TINT64 ret = 0;
@@ -434,6 +443,11 @@ TINT64 TSystem::getMemorySize(bool onlyP
   free(sysInfo);
   return ret;
 
+#elif defined(__DragonFly__)
+
+  // to be done...
+  return 512 * 1024;
+
 #elif defined(FREEBSD)
 
   TINT64 ret = 0;
