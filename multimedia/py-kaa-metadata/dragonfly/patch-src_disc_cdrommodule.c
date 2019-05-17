--- src/disk/cdrommodule.c.orig	2008-10-10 21:24:47 UTC
+++ src/disc/cdrommodule.c
@@ -28,7 +28,7 @@
 #include <linux/cdrom.h>
 #endif
 
-#if defined(sun) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(sun) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/cdio.h>
 #endif
 
@@ -38,7 +38,7 @@
  * so that we don't have to repeat the code.
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #define CDDB_TOC_HEADER_STRUCT ioc_toc_header 
 #define CDDB_STARTING_TRACK_FIELD starting_track 
