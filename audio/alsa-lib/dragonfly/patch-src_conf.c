--- src/conf.c.orig	2021-07-07 14:55:01.709681000 +0200
+++ src/conf.c	2021-07-07 14:55:16.979329000 +0200
@@ -3875,7 +3875,7 @@
 			int n;
 
 #ifndef DOC_HIDDEN
-#if defined(_GNU_SOURCE) && !defined(__NetBSD__) && !defined(__FreeBSD__) && !defined(__sun) && !defined(ANDROID)
+#if defined(_GNU_SOURCE) && !defined(__DragonFly__) && !defined(__NetBSD__) && !defined(__FreeBSD__) && !defined(__sun) && !defined(ANDROID)
 #define SORTFUNC	versionsort
 #else
 #define SORTFUNC	alphasort
