--- src/as-system-info.c.orig	2023-11-11 18:48:36 UTC
+++ src/as-system-info.c
@@ -49,7 +49,7 @@
 
 #if defined(__linux__)
 #include <sys/sysinfo.h>
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -470,7 +470,7 @@ as_get_physical_memory_total (void)
 	if (si.mem_unit > 0)
 		return (si.totalram * si.mem_unit) / MB_IN_BYTES;
 	return 0;
-#elif defined(__FreeBSD__) || defined(__NetBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 	unsigned long physmem;
 	size_t len = sizeof (physmem);
 	int mib[2] = { CTL_HW, HW_PHYSMEM };
