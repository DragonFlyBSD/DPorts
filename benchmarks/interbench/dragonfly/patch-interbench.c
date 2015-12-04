--- interbench.c.bak	2015-11-30 11:33:37.000000000 +0200
+++ interbench.c
@@ -46,7 +46,7 @@
 #include <sys/stat.h>
 #include <sys/mman.h>
 #include <sys/wait.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #endif
 #include "interbench.h"
@@ -1160,6 +1160,18 @@ void get_ram(void)
 
 	ud.ram = pagesize / 1024 * numpages;
 	ud.swap = swap / 1024;
+#elif defined(__DragonFly__)
+	long pagesize, numpages;
+	int swap;
+	size_t len = sizeof(swap);
+
+	pagesize = sysconf(_SC_PAGESIZE);
+	numpages = sysconf(_SC_PHYS_PAGES);
+	if (sysctlbyname("vm.swap_size", &swap, &len, NULL, 0) == -1)
+		swap = 0;
+
+	ud.ram = pagesize / 1024 * numpages;
+	ud.swap = swap / 1024 * pagesize;
 #else
 #error unsupported operating system
 #endif
