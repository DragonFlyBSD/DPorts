--- third_party/zlib/contrib/minizip/ioapi.h.orig	2021-09-19 10:01:32 UTC
+++ third_party/zlib/contrib/minizip/ioapi.h
@@ -50,7 +50,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
