--- stream/stream_dvd.c.orig	2012-06-02 18:35:44.000000000 +0200
+++ stream/stream_dvd.c	2013-01-16 02:03:33.485038000 +0100
@@ -44,7 +44,6 @@
 #include "libmpdemux/demuxer.h"
 
 static char* dvd_device_current;
-int dvd_angle=1;
 
 #define	LIBDVDREAD_VERSION(maj,min,micro)	((maj)*10000 + (min)*100 + (micro))
 /*
