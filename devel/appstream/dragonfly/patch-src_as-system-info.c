--- src/as-system-info.c.orig	2023-02-10 19:54:13 UTC
+++ src/as-system-info.c
@@ -45,7 +45,7 @@
 
 #if defined(__linux__)
 #include <sys/sysinfo.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -405,7 +405,7 @@ as_get_physical_memory_total (void)
 	if (si.mem_unit > 0)
 		return (si.totalram * si.mem_unit) / MB_IN_BYTES;
 	return 0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	unsigned long physmem;
 	sysctl ((int[]){ CTL_HW, HW_PHYSMEM }, 2, &physmem, &(size_t){ sizeof (physmem) }, NULL, 0);
 	return physmem / MB_IN_BYTES;
