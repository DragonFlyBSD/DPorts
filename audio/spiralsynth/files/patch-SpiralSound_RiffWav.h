$FreeBSD: head/audio/spiralsynth/files/patch-SpiralSound_RiffWav.h 340725 2014-01-22 17:40:44Z mat $

--- SpiralSound/RiffWav.h.orig	Sun Nov 26 15:52:45 2000
+++ SpiralSound/RiffWav.h	Mon Feb  9 12:05:58 2004
@@ -17,6 +17,7 @@
 */ 
 
 #include <string>
+using namespace std;
 
 #ifndef WAVFILE
 #define WAVFILE
