--- kernel/driver.cc.orig	2019-02-13 00:35:21.000000000 +0000
+++ kernel/driver.cc	2019-02-13 09:08:11.000000000 +0000
@@ -549,8 +549,8 @@
 		struct kinfo_proc kip;
 		size_t kip_len = sizeof(kip);
 		if (sysctl(mib, 4, &kip, &kip_len, NULL, 0) == 0) {
-			vm_size_t sz_total = kip.ki_size;
-			segsz_t sz_resident = kip.ki_rssize;
+			vm_size_t sz_total = kip.kp_vm_map_size;
+			segsz_t sz_resident = kip.kp_vm_rssize;
 			meminfo = stringf(", MEM: %.2f MB total, %.2f MB resident",
 				(int)sz_total / 1024.0 / 1024.0,
 				(int)sz_resident * (getpagesize() / 1024.0 / 1024.0));
