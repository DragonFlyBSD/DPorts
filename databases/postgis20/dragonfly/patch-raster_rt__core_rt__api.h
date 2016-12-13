--- raster/rt_core/rt_api.h.orig	2014-07-06 20:37:19.000000000 +0300
+++ raster/rt_core/rt_api.h
@@ -42,7 +42,7 @@
 #endif
 
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)    /* seems to work like Linux... */
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) /* seems to work like Linux... */
 #if !defined(LINUX)
 #define LINUX
 #endif
