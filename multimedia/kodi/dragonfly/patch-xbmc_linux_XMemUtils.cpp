--- xbmc/linux/XMemUtils.cpp.orig	2018-08-04 15:01:57.886726000 +0200
+++ xbmc/linux/XMemUtils.cpp	2018-08-04 15:02:18.867181000 +0200
@@ -55,7 +55,7 @@ void _aligned_free(void *p) {
 
 #ifndef TARGET_WINDOWS
 
-#if defined(TARGET_POSIX) && !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD)
+#if defined(TARGET_POSIX) && !defined(TARGET_DARWIN) && !defined(TARGET_FREEBSD) && !defined(TARGET_DRAGONFLY)
 static FILE* procMeminfoFP = NULL;
 #endif
 
@@ -114,7 +114,7 @@ void GlobalMemoryStatusEx(LPMEMORYSTATUS
           lpBuffer->ullAvailVirtual  = lpBuffer->ullAvailPhys; // FIXME.
       }
   }
-#elif defined(TARGET_FREEBSD)
+#elif defined(TARGET_FREEBSD) || defined(TARGET_DRAGONFLY)
   /* sysctl hw.physmem */
   size_t physmem = 0, mem_free = 0, pagesize = 0, swap_free = 0;
   size_t mem_avail = 0, mem_inactive = 0, mem_cache = 0, len = 0;
