--- cpp/src/IceGrid/PlatformInfo.cpp.orig	2013-10-04 15:48:14 UTC
+++ cpp/src/IceGrid/PlatformInfo.cpp
@@ -24,7 +24,7 @@
 #   include <pdhmsg.h> // For PDH_MORE_DATA
 #else
 #   include <sys/utsname.h>
-#   if defined(__APPLE__) || defined(__FreeBSD__)
+#   if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #      include <sys/sysctl.h>
 #   elif defined(__sun)
 #      include <sys/loadavg.h>
@@ -222,7 +222,7 @@
     SYSTEM_INFO sysInfo;
     GetSystemInfo(&sysInfo);
     _nProcessorThreads = sysInfo.dwNumberOfProcessors;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     static int ncpu[2] = { CTL_HW, HW_NCPU };
     size_t sz = sizeof(_nProcessorThreads);
     if(sysctl(ncpu, 2, &_nProcessorThreads, &sz, 0, 0) == -1)
@@ -440,7 +440,7 @@
     info.avg1 = static_cast<float>(_last1Total) / _usages1.size() / 100.0f;
     info.avg5 = static_cast<float>(_last5Total) / _usages5.size() / 100.0f;
     info.avg15 = static_cast<float>(_last15Total) / _usages15.size() / 100.0f;
-#elif defined(__sun) || defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__sun) || defined(__linux) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
     //
     // We use the load average divided by the number of
     // processors to figure out if the machine is busy or
