--- contrib/unzip/ioapi.h.orig	2024-05-13 11:45:14 UTC
+++ contrib/unzip/ioapi.h
@@ -50,7 +50,8 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64) || \
+    defined(__DragonFly__)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
