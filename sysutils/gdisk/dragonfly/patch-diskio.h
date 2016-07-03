--- diskio.h.orig	2014-03-02 19:57:37.000000000 +0200
+++ diskio.h
@@ -29,7 +29,7 @@
 #include <sys/dkio.h>
 #endif
 
-#if defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined (__APPLE__)
+#if defined (__DragonFly__) || defined (__FreeBSD__) || defined (__FreeBSD_kernel__) || defined (__APPLE__)
 #define fstat64 fstat
 #define stat64 stat
 #endif
