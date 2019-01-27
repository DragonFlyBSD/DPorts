--- framework/minizip/ioapi.h.orig	2018-12-15 04:49:59 UTC
+++ framework/minizip/ioapi.h
@@ -59,7 +59,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
