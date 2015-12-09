--- src/mem_freebsd.c.orig	2015-12-09 16:52:57.988978000 +0100
+++ src/mem_freebsd.c	2015-12-09 17:04:53.296123000 +0100
@@ -11,6 +11,7 @@
 #endif
 
 #include <sys/types.h>
+#include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
@@ -49,9 +50,8 @@ static void getsysctl(const char *name,
 void mem_getusage(int *per_mem, int *per_swap, const struct mem_options *opts)
 {
 	u_int mtotal, mwired, mcached, mfree, mused;
-#ifdef DEBUG
+	u_int sfree, sused_anon, sused_cache;
 	u_int pagesize;
-#endif
 	u_int new_swappgsin, new_swappgsout;
 	static int swap_firsttime = 1;
 	static int swappgsin = -1;
@@ -66,54 +66,12 @@ void mem_getusage(int *per_mem, int *per
 	GETSYSCTL("vm.stats.vm.v_wire_count", mwired);
 	GETSYSCTL("vm.stats.vm.v_cache_count", mcached);
 	GETSYSCTL("vm.stats.vm.v_free_count", mfree);
-#ifdef DEBUG
-	GETSYSCTL("hw.pagesize", pagesize);
-#endif
-
-	/* get swap usage */
-	/* only calculate when first time or when changes took place         */
-	/* do not call it more than 1 time per 2 seconds                     */
-	/* otherwise it can eat up to 50% of CPU time on heavy swap activity */
-	cur_time = time(NULL);
-
-	GETSYSCTL("vm.stats.vm.v_swappgsin", new_swappgsin);
-	GETSYSCTL("vm.stats.vm.v_swappgsout", new_swappgsout);
-
-	if (swap_firsttime ||
-	    (((new_swappgsin > swappgsin) || (new_swappgsout > swappgsout))
-	     && cur_time > last_time_swap + 1)) {
-		int mib[2], n;
-		size_t mibsize, size;
-		struct xswdev xsw;
-
-		mibsize = sizeof(mib) / sizeof(mib[0]);
-		if (sysctlnametomib("vm.swap_info", mib, &mibsize) == -1) {
-			fprintf(stderr, "sysctlnametomib() failed: %s\n", strerror(errno));
-			exit(1);
-		}
-
-		swapmax = 0;
-		swapused = 0;
-
-		for (n = 0; ; n++) {
-			mib[mibsize] = n;
-			size = sizeof(xsw);
-			if (sysctl(mib, mibsize + 1, &xsw, &size, NULL, 0) == -1) {
-				if (errno == ENOENT)
-					break;
-				fprintf(stderr, "sysctl() failed: %s\n", strerror(errno));
-				exit(1);
-			}
-			swapmax += xsw.xsw_nblks;
-			swapused += xsw.xsw_used;
-		}
 
-		swap_firsttime = 0;
-		last_time_swap = cur_time;
-	}
+	GETSYSCTL("vm.swap_anon_use", sused_anon);
+	GETSYSCTL("vm.swap_cache_use", sused_cache);
+	GETSYSCTL("vm.swap_size", sfree);
 
-	swappgsin = new_swappgsin;
-	swappgsout = new_swappgsout;
+	pagesize = getpagesize();
 
 #ifdef DEBUG
 	printf("-------------------\n");
@@ -130,6 +88,8 @@ void mem_getusage(int *per_mem, int *per
 		mused -= mwired;
 	if (opts->ignore_cached)
 		mused -= mcached;
+	swapused = (sused_anon + sused_cache) * pagesize;
+	swapmax = sfree * pagesize + swapused;
 	*per_mem = 100 * (double) mused / (double) mtotal;
 	*per_swap = 100 * (double) swapused / (double) swapmax;
 
