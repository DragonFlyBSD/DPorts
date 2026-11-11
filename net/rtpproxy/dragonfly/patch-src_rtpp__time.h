--- src/rtpp_time.h.orig
+++ src/rtpp_time.h
@@ -32,6 +32,8 @@
 #ifndef _RTPP_TIME_H_
 #define _RTPP_TIME_H_
 
+#include <time.h>
+
 #if defined(CLOCK_UPTIME_PRECISE)
 # define RTPP_CLOCK_MONO CLOCK_UPTIME_PRECISE
 # define RTPP_MCLOCK_NAME "CLOCK_UPTIME_PRECISE"
