--- src/utils/os_divers.c.intermediate	2021-03-12 07:29:48.000000000 +0000
+++ src/utils/os_divers.c
@@ -1725,6 +1725,9 @@ Bool gf_sys_get_rti_os(u32 refresh_time_
 	length = sizeof(kinfo);
 
 	if (sysctl(mib, 4, &kinfo, &length, NULL, 0) == 0) {
+#ifdef __DragonFly__
+#define ki_rusage kp_ru
+#endif
 		process_u_k_time = (u64)(kinfo.ki_rusage.ru_utime.tv_usec + kinfo.ki_rusage.ru_stime.tv_usec) +
 			(u64)(kinfo.ki_rusage.ru_utime.tv_sec + kinfo.ki_rusage.ru_stime.tv_sec) * (u64)1000000;
 	}
