--- MP/code/zlib-1.2.11/ioapi.h.orig	2017-07-06 15:26:34.000000000 +0000
+++ MP/code/zlib-1.2.11/ioapi.h	2017-07-06 15:26:56.000000000 +0000
@@ -55,7 +55,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
