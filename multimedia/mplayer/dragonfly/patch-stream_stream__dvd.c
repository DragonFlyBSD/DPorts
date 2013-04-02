--- stream/stream_dvd.c.orig	2012-10-21 14:56:50.000000000 +0000
+++ stream/stream_dvd.c
@@ -45,7 +45,6 @@
 
 static char* dvd_device_current;
 static int dvd_title;
-int dvd_angle=1;
 
 #define	LIBDVDREAD_VERSION(maj,min,micro)	((maj)*10000 + (min)*100 + (micro))
 /*
