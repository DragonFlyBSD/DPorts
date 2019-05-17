--- src/c/lm/main/runSimulation.cpp.intermediate	2019-05-11 06:46:38.000000000 +0000
+++ src/c/lm/main/runSimulation.cpp
@@ -45,7 +45,7 @@
  */
 #if defined(MACOSX)
 #include <sys/sysctl.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #elif defined(LINUX)
@@ -152,7 +152,7 @@ void runSolver(char *simulationFilename,
     size_t  physicalCpuCoresSize=sizeof(physicalCpuCores);
     sysctlbyname("hw.activecpu",&physicalCpuCores,&physicalCpuCoresSize,NULL,0);
     numberCpuCores = physicalCpuCores;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     size_t	len = sizeof(numberCpuCores);
     sysctlbyname("hw.ncpu",&numberCpuCores,&len,NULL,0);
 #elif defined(LINUX)
