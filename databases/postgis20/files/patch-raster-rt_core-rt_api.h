--- raster/rt_core/rt_api.h.orig	2014-05-04 12:08:37.000000000 -0500
+++ raster/rt_core/rt_api.h	2015-04-01 10:14:53.481229000 -0500
@@ -42,7 +42,7 @@
 #endif
 
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)    /* seems to work like Linux... */
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)   /* seems to work like Linux... */
 #if !defined(LINUX)
 #define LINUX
 #endif
