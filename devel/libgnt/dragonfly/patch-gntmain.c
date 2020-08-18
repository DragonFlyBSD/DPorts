--- gntmain.c.orig	2020-06-10 02:21:05 UTC
+++ gntmain.c
@@ -21,7 +21,7 @@
  */
 
 #define _GNU_SOURCE
-#if (defined(__APPLE__) || defined(__unix__)) && !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if (defined(__APPLE__) || defined(__unix__)) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 #define _XOPEN_SOURCE_EXTENDED
 #endif
 
