--- src/libcec/platform/posix/serialport.cpp.orig	2018-08-05 09:47:43.717939000 +0200
+++ src/libcec/platform/posix/serialport.cpp	2018-08-05 09:47:51.408105000 +0200
@@ -38,7 +38,7 @@
 #include "../util/baudrate.h"
 #include <p8-platform/posix/os-socket.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef XCASE
 #define XCASE	0
 #endif
