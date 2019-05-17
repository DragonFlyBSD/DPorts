--- cacheprobe.c.orig	2015-08-11 19:36:52 UTC
+++ cacheprobe.c
@@ -22,14 +22,16 @@
 
 #include "dvdisaster.h"
 
-#ifdef SYS_LINUX
+#if defined(SYS_LINUX) || defined(__DragonFly__)
 int ProbeCacheLineSize()
 {  int cl_size = 0;
 
    cl_size = sysconf(_SC_LEVEL1_DCACHE_LINESIZE);
 
+#ifndef __DragonFly__
    if(!cl_size)
      cl_size = sysconf(_SC_LEVEL2_CACHE_LINESIZE);
+#endif
 
    if(cl_size < 16)
      cl_size = 64;
@@ -38,7 +40,7 @@ int ProbeCacheLineSize()
 }
 #endif
 
-#ifdef SYS_FREEBSD
+#if defined(SYS_FREEBSD) && !defined(__DragonFly__)
 #include <sys/param.h>
 
 int ProbeCacheLineSize()
