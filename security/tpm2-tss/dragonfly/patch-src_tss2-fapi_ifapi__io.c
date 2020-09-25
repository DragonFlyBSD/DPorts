--- src/tss2-fapi/ifapi_io.c.orig	2020-08-04 18:27:24 UTC
+++ src/tss2-fapi/ifapi_io.c
@@ -18,7 +18,7 @@
 #include <sys/types.h>
 #include <dirent.h>
 /* Need for some libc-versions */
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
