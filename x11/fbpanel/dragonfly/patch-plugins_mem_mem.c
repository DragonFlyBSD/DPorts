--- plugins/mem/mem.c.intermediate	2022-02-09 12:55:47.000000000 +0000
+++ plugins/mem/mem.c
@@ -9,7 +9,7 @@
 #include <string.h>
 #include <strings.h>
 
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <sys/sysctl.h>
 #include <sys/resource.h>
 #include <vm/vm_param.h>
@@ -120,7 +120,7 @@ mem_usage()
     stats.swap.total = mt[MT_SwapTotal].val;
     stats.swap.used = mt[MT_SwapTotal].val - mt[MT_SwapFree].val;
 }
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 
 static void
 mem_usage()
@@ -128,7 +128,7 @@ mem_usage()
 	static unsigned long realmem;
 	static int	mib_freecount[4], mib_cachecount[4], mib_inactivecount[4],
 			mib_swapinfo[16], init = 0, pagesize;
-	static u_int	mib_free_size, mib_cache_size, mib_inactive_size,
+	static size_t	mib_free_size, mib_cache_size, mib_inactive_size,
 			mib_swapinfo_size;
 	struct xswdev	xsw;
 	long		scale;
@@ -139,7 +139,11 @@ mem_usage()
 	if (init == 0) {
 		//initialize meminfo
 		len = sizeof(unsigned long);
+#ifdef __DragonFly__
+		if (sysctlbyname("hw.physmem", &realmem, &len, NULL, 0) == -1) {
+#else
 		if (sysctlbyname("hw.realmem", &realmem, &len, NULL, 0) == -1) {
+#endif
 			DBG("Can't get hw.realmem");
 			return;
 		}
@@ -164,11 +168,13 @@ mem_usage()
 			return;
 		}
 		//initialize swapinfo
+#ifndef __DragonFly__
 		mib_swapinfo_size = sizeof(mib_swapinfo) / sizeof(mib_swapinfo[0]);
 		if (sysctlnametomib("vm.swap_info", mib_swapinfo, &mib_swapinfo_size) == -1) {
 			DBG("Can't get mib for swapinfo");
 			return;
 		}
+#endif
 		init = 1;
 	}
 	//get current meminfo
@@ -197,6 +203,7 @@ mem_usage()
 	stats.mem.used = (realmem - pagesize * (freecount + cachecount + inactivecount)) / 1024;
 
 	//get swapinfo
+#ifndef __DragonFly__
 	scale = pagesize / 1024;
 	for (n = 0;; ++n) {
 		mib_swapinfo[mib_swapinfo_size] = n;
@@ -212,6 +219,7 @@ mem_usage()
 		stats.swap.total += xsw.xsw_nblks * scale;
 		stats.swap.used += xsw.xsw_used * scale;
 	}
+#endif
 }
 #else
 static void
