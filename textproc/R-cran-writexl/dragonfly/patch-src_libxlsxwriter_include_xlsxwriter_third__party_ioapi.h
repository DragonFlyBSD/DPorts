--- src/libxlsxwriter/include/xlsxwriter/third_party/ioapi.h.orig	2026-10-23 00:00:00 UTC
+++ src/libxlsxwriter/include/xlsxwriter/third_party/ioapi.h
@@ -56,7 +56,7 @@
 #define ftello64 ftell
 #define fseeko64 fseek
 #else
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64)
 #define fopen64 fopen
 #define ftello64 ftello
 #define fseeko64 fseeko
