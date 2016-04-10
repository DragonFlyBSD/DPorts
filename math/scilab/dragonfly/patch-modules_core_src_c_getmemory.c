--- modules/core/src/c/getmemory.c.orig	2015-03-31 09:31:23 UTC
+++ modules/core/src/c/getmemory.c
@@ -144,7 +144,7 @@ int getfreememory(void)
            fall back to inaccurate sysconf() */
         return (sysconf(_SC_AVPHYS_PAGES) * sysconf(_SC_PAGESIZE)) / kooctet;
     }
-#elif defined(__NetBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
     {
         /* This works on *bsd.  */
         int mib[2];
@@ -185,7 +185,7 @@ int getfreememory(void)
 
         return 0;
     }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     int avphys_pages;
     size_t oldlenp = sizeof (avphys_pages);
     sysctlbyname("vm.stats.vm.v_free_count", &avphys_pages, &oldlenp, NULL, NULL);
