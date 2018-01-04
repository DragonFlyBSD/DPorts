--- src/appleseed/foundation/utility/minizip/ioapi.c.orig	2017-07-27 18:53:21.000000000 +0300
+++ src/appleseed/foundation/utility/minizip/ioapi.c
@@ -14,7 +14,7 @@
         #define _CRT_SECURE_NO_WARNINGS
 #endif
 
-#if defined(__APPLE__) || defined(IOAPI_NO_64)
+#if defined(__APPLE__) || defined(IOAPI_NO_64) || defined(__DragonFly__)
 // In darwin and perhaps other BSD variants off_t is a 64 bit value, hence no need for specific 64 bit functions
 #define FOPEN_FUNC(filename, mode) fopen(filename, mode)
 #define FTELLO_FUNC(stream) ftello(stream)
