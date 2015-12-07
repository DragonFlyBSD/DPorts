--- framework/minizip/ioapi.h.orig	2015-10-09 17:06:49.000000000 +0300
+++ framework/minizip/ioapi.h
@@ -59,7 +59,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
