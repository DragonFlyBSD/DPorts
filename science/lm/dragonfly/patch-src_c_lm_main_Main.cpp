--- src/c/lm/main/Main.cpp.intermediate	2019-05-11 06:46:38.000000000 +0000
+++ src/c/lm/main/Main.cpp
@@ -49,7 +49,7 @@
 #include <sys/stat.h>
 #if defined(MACOSX)
 #include <sys/sysctl.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #elif defined(LINUX)
@@ -113,7 +113,7 @@ int getPhysicalCpuCores()
     size_t  physicalCpuCoresSize=sizeof(physicalCpuCores);
     sysctlbyname("hw.activecpu",&physicalCpuCores,&physicalCpuCoresSize,NULL,0);
     return physicalCpuCores;
-    #elif defined(__FreeBSD__)
+    #elif defined(__FreeBSD__) || defined(__DragonFly__)
     int	np = 0;
     size_t	len = sizeof(np);
     sysctlbyname("hw.ncpu",&np,&len,NULL,0);
