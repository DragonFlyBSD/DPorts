--- SP/code/zlib-1.2.8/ioapi.h.orig	2015-12-26 16:21:49.000000000 +0200
+++ SP/code/zlib-1.2.8/ioapi.h
@@ -55,7 +55,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
