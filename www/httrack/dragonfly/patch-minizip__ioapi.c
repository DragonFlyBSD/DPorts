--- src/minizip/ioapi.c.orig	2024-03-02 00:00:00.000000000 +0000
+++ src/minizip/ioapi.c	2024-03-02 00:00:00.000000000 +0000
@@ -15,7 +15,7 @@
         #define _CRT_SECURE_NO_WARNINGS
 #endif
 
-#if defined(__APPLE__) || defined(__ANDROID__) || defined(IOAPI_NO_64) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64)
+#if defined(__APPLE__) || defined(__ANDROID__) || defined(IOAPI_NO_64) || defined(__HAIKU__) || defined(MINIZIP_FOPEN_NO_64) || defined(__DragonFly__)
 // In darwin and perhaps other BSD variants off_t is a 64 bit value, hence no need for specific 64 bit functions
 #define FOPEN_FUNC(filename, mode) fopen(filename, mode)
 #define FTELLO_FUNC(stream) ftello(stream)
