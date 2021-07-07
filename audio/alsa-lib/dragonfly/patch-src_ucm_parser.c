--- src/ucm/parser.c.orig	2021-07-07 14:52:08.093737000 +0200
+++ src/ucm/parser.c	2021-07-07 14:52:27.843274000 +0200
@@ -1925,7 +1925,7 @@
 		snprintf(filename, sizeof(filename), "%s/ucm2",
 			 snd_config_topdir());
 
-#if defined(_GNU_SOURCE) && !defined(__NetBSD__) && !defined(__FreeBSD__) && !defined(__sun) && !defined(ANDROID)
+#if defined(_GNU_SOURCE) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__FreeBSD__) && !defined(__sun) && !defined(ANDROID)
 #define SORTFUNC	versionsort
 #else
 #define SORTFUNC	alphasort
