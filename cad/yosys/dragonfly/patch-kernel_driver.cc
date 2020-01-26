--- kernel/driver.cc.orig	2019-08-26 08:37:53 UTC
+++ kernel/driver.cc
@@ -34,13 +34,13 @@
 #include <limits.h>
 #include <errno.h>
 
-#if defined (__linux__) || defined(__FreeBSD__)
+#if defined (__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/resource.h>
 #  include <sys/types.h>
 #  include <unistd.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/sysctl.h>
 #  include <sys/user.h>
 #endif
@@ -571,14 +571,19 @@
 					sz_resident * (getpagesize() / 1024.0 / 1024.0));
 			stats_divider = "\n";
 		}
-#  elif defined(__FreeBSD__)
+#  elif defined(__FreeBSD__) || defined(__DragonFly__)
 		pid_t pid = getpid();
 		int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PID, (int)pid};
 		struct kinfo_proc kip;
 		size_t kip_len = sizeof(kip);
 		if (sysctl(mib, 4, &kip, &kip_len, NULL, 0) == 0) {
+#ifdef __DragonFly__
+			vm_size_t sz_total = kip.kp_vm_map_size;
+			segsz_t sz_resident = kip.kp_vm_rssize;
+#else
 			vm_size_t sz_total = kip.ki_size;
 			segsz_t sz_resident = kip.ki_rssize;
+#endif
 			meminfo = stringf(", MEM: %.2f MB total, %.2f MB resident",
 				(int)sz_total / 1024.0 / 1024.0,
 				(int)sz_resident * (getpagesize() / 1024.0 / 1024.0));
@@ -627,7 +632,7 @@
 		}
 	}
 
-#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__))
+#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__))
 	if (getenv("YOSYS_COVER_DIR") || getenv("YOSYS_COVER_FILE"))
 	{
 		string filename;
