--- jef/ini_sort.c.orig	2013-10-03 12:22:51.000000000 +0300
+++ jef/ini_sort.c
@@ -17,7 +17,7 @@
 */
 
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # define _GNU_SOURCE
 # define HAVE_GETLINE
 #endif
