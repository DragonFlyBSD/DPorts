--- unix/cdrommodule.c.orig	2003-09-01 02:24:30.000000000 +0300
+++ unix/cdrommodule.c
@@ -29,7 +29,7 @@
 #include <linux/cdrom.h>
 #endif
 
-#if defined(sun) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(sun) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/cdio.h>
 #endif
 
@@ -45,7 +45,7 @@
  * so that we don't have to repeat the code.
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define CDDB_TOC_HEADER_STRUCT ioc_toc_header 
 #define CDDB_STARTING_TRACK_FIELD starting_track 
