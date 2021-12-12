--- src/system_wrappers/source/cpu_info.cc.orig	2021-10-21 06:15:41 UTC
+++ src/system_wrappers/source/cpu_info.cc
@@ -12,8 +12,9 @@
 
 #if defined(WEBRTC_WIN)
 #include <windows.h>
-#elif defined(WEBRTC_LINUX) || defined(WEBRTC_FREEBSD)
+#elif defined(WEBRTC_LINUX) || defined(WEBRTC_FREEBSD) || defined(WEBRTC_DRAGONFLY)
 #include <unistd.h>
+#include <sys/sysctl.h>
 #elif defined(WEBRTC_MAC)
 #include <sys/sysctl.h>
 #elif defined(WEBRTC_FUCHSIA)
@@ -36,6 +37,12 @@ static int DetectNumberOfCores() {
     RTC_LOG(LS_ERROR) << "Failed to get number of cores";
     number_of_cores = 1;
   }
+#elif defined(WEBRTC_DRAGONFLY)
+  size_t len = sizeof(number_of_cores);
+  if (0 != sysctlbyname("hw.ncpu", &number_of_cores, &len, NULL, 0)) {
+    RTC_LOG(LS_ERROR) << "Failed to get number of cores";
+    number_of_cores = 1;
+  }
 #elif defined(WEBRTC_MAC) || defined(WEBRTC_IOS)
   int name[] = {CTL_HW, HW_AVAILCPU};
   size_t size = sizeof(number_of_cores);
