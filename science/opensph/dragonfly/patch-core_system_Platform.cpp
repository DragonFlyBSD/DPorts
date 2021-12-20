--- core/system/Platform.cpp.intermediate	2021-12-20 11:44:27.000000000 +0000
+++ core/system/Platform.cpp
@@ -117,18 +117,18 @@ private:
 
 public:
     CpuUsage() {
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
         FILE* file;
 #endif
         struct tms timeSample;
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
         char line[128];
 #endif
 
         lastCpu = times(&timeSample);
         lastSysCpu = timeSample.tms_stime;
         lastUserCpu = timeSample.tms_utime;
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
         file = fopen("/proc/cpuinfo", "r");
         numProcessors = 0;
         while (fgets(line, 128, file) != NULL) {
