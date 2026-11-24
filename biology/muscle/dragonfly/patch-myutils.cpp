--- myutils.cpp.orig
+++ myutils.cpp
@@ -1050,7 +1050,7 @@
 		g_PeakMemUseBytes = Bytes;
 	return Bytes;
 	}
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
 #include <sys/sysctl.h>
@@ -1079,7 +1079,11 @@
 
 	// Resident set size in pages → convert to bytes
 	long page_size = getpagesize();
+#ifdef __DragonFly__
+	double bytes = (double)kp.kp_vm_rssize * page_size;
+#else
 	double bytes = (double)kp.ki_rssize * page_size;
+#endif
 
 	if (bytes > g_PeakMemUseBytes)
 		g_PeakMemUseBytes = bytes;
