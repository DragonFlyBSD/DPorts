--- common/commonutils.cpp.orig	2026-08-19 15:00:20 UTC
+++ common/commonutils.cpp
@@ -52,7 +52,7 @@
 #include "colorspace/colorspace.h"
 #include "mmath.h"
 #ifdef USE_GET_TOTAL_MEM
-#if (defined  __FreeBSD__ || defined __APPLE__)
+#if (defined  __FreeBSD__ || defined __DragonFly__ || defined __APPLE__)
 #include <sys/sysctl.h>
 #elif (defined  __GNUC__ && !defined  _WIN32)
 #include <sys/sysinfo.h>
@@ -4124,13 +4124,15 @@ double CommonUtils::get_total_memory()
 	{
 		total_gb = static_cast<double>(static_cast<long double>(memory_status.ullTotalPhys) / 1073741824.0L);
 	}
-#elif (defined __FreeBSD__ || defined __APPLE__)
+#elif (defined __FreeBSD__ || defined __DragonFly__ || defined __APPLE__)
 	unsigned long long ctlvalue;
 	size_t len = sizeof(ctlvalue);
 	int mib[2];
 	mib[0] = CTL_HW;
 #if (defined __FreeBSD__)
 	mib[1] = HW_REALMEM;
+#elif (defined __DragonFly__)
+	mib[1] = HW_PHYSMEM;
 #elif (defined __APPLE__)
 	mib[1] = HW_MEMSIZE;
 #endif
