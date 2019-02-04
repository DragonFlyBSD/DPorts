--- xbmc/utils/CPUInfo.cpp.orig	2018-08-04 15:43:53.321204000 +0200
+++ xbmc/utils/CPUInfo.cpp	2018-08-04 15:47:17.215616000 +0200
@@ -37,7 +37,7 @@
 #include "linux/LinuxResourceCounter.h"
 #endif
 
-#if defined(TARGET_FREEBSD)
+#if defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #include <sys/resource.h>
@@ -237,7 +237,7 @@ CCPUInfo::CCPUInfo(void)
   }
   else
     m_cpuQueryLoad = nullptr;
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   size_t len;
   int i;
   char cpumodel[512];
@@ -564,6 +564,14 @@ float CCPUInfo::getCPUFrequency()
   if (sysctlbyname("dev.cpu.0.freq", &hz, &len, NULL, 0) != 0)
     hz = 0;
   return (float)hz;
+#elif defined(TARGET_DRAGONFLY)
+  int hz = 0;
+  size_t len = sizeof(hz);
+  if (sysctlbyname("hw.acpi.cpu.px_dom0.select", &hz, &len, NULL, 0) != 0)
+    hz = 0;
+  else
+    hz *= 1000000;
+  return (float)hz;
 #else
   int value = 0;
   if (m_fCPUFreq && !m_cpuInfoForFreq)
@@ -733,7 +741,7 @@ bool CCPUInfo::readProcStat(unsigned lon
   else
     for (std::map<int, CoreInfo>::iterator it = m_cores.begin(); it != m_cores.end(); ++it)
       it->second.m_fPct = double(m_lastUsedPercentage); // use CPU average as fallback
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   long *cptimes;
   size_t len;
   int i;
