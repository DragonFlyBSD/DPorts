--- interface/cdda_interface.h.intermediate	2013-01-17 17:42:35.944424000 +0100
+++ interface/cdda_interface.h	2013-01-17 17:43:23.404490000 +0100
@@ -21,7 +21,7 @@
 #include <sys/types.h>
 #include <signal.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #include <camlib.h>
 #endif
@@ -58,7 +58,7 @@
   int cdda_fd;
 
   int drive_type;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   struct cam_device *dev;
   union ccb *ccb;
 #endif
@@ -98,7 +98,7 @@
   unsigned char *sg;
   unsigned char *sg_buffer;
   unsigned char inqbytes[4];
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   unsigned char *sg_buffer;
 #endif
 
