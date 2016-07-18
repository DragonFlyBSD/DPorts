--- src/zgv.h.orig	2005-01-21 06:57:32.000000000 +0200
+++ src/zgv.h
@@ -7,7 +7,7 @@
 #define ZGV_VER		"5.9"
 
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define OSTYPE_FREEBSD	1
 #else
 #define OSTYPE_LINUX	1
