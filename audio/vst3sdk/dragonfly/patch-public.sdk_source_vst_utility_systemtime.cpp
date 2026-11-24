--- public.sdk/source/vst/utility/systemtime.cpp.orig
+++ public.sdk/source/vst/utility/systemtime.cpp
@@ -112,6 +112,9 @@
 #elif SMTG_OS_LINUX
 //------------------------------------------------------------------------
 #include <time.h>
+#ifndef CLOCK_BOOTTIME
+#define CLOCK_BOOTTIME CLOCK_UPTIME	/* DragonFly */
+#endif
 static uint64_t getUptimeByClockGettime ()
 {
 	struct timespec time_spec;
