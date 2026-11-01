--- winpr/libwinpr/sysinfo/sysinfo.c.orig
+++ winpr/libwinpr/sysinfo/sysinfo.c
@@ -140,7 +140,7 @@
 		int mib[4];
 		size_t length = sizeof(numCPUs);
 		mib[0] = CTL_HW;
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 		mib[1] = HW_NCPU;
 #else
 		mib[1] = HW_AVAILCPU;
