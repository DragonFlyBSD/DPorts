$FreeBSD: head/audio/spiralsynth/files/patch-SpiralSound_SpiralInfo.h 340725 2014-01-22 17:40:44Z mat $

--- SpiralSound/SpiralInfo.h.orig	Sun Nov 26 15:52:46 2000
+++ SpiralSound/SpiralInfo.h	Mon Feb  9 13:31:38 2004
@@ -19,6 +19,7 @@
 #include <iostream.h>
 #include <string>
 #include <stdlib.h>
+using namespace std;
 
 #ifndef SpiralINFO
 #define SpiralINFO
