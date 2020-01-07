For initgroups() and RLIMIT_MEMLOCK visibility.

--- util-src/pposix.c.orig	2019-01-07 15:34:23 UTC
+++ util-src/pposix.c
@@ -30,9 +30,11 @@
 #define _DARWIN_C_SOURCE
 #endif
 #endif
+#ifndef __DragonFly__
 #ifndef _POSIX_C_SOURCE
 #define _POSIX_C_SOURCE 200809L
 #endif
+#endif
 
 #include <stdlib.h>
 #include <math.h>
@@ -68,7 +70,7 @@
 #define WITH_MALLINFO
 #endif
 
-#if defined(__FreeBSD__) && defined(RFPROC)
+#if (defined(__DragonFly__) || defined(__FreeBSD__)) && defined(RFPROC)
 /*
  * On FreeBSD, calling fork() is equivalent to rfork(RFPROC | RFFDG).
  *
