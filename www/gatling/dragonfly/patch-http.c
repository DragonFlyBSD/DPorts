--- http.c.orig	2016-10-04 19:13:02.000000000 +0300
+++ http.c
@@ -2,7 +2,7 @@
 #define _ATFILE_SOURCE
 #define _DEFAULT_SOURCE
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE 500
 #endif
 
