--- src/ChezScheme/zlib/contrib/minizip/ioapi.h.orig
+++ src/ChezScheme/zlib/contrib/minizip/ioapi.h
@@ -50,7 +50,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(__DragonFly__) || defined(MINIZIP_FOPEN_NO_64)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
