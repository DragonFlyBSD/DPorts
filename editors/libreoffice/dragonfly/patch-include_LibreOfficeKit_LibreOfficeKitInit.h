--- include/LibreOfficeKit/LibreOfficeKitInit.h.orig	2023-05-03 09:24:26.102706000 +0200
+++ include/LibreOfficeKit/LibreOfficeKitInit.h	2023-05-03 09:24:51.873130000 +0200
@@ -20,6 +20,7 @@
 
 #if defined(__linux__) || defined (__FreeBSD__) || defined(_AIX) ||\
     defined(_WIN32) || defined(__APPLE__) || defined (__NetBSD__) ||\
+    defined(__DragonFly__) ||\
     defined (__sun) || defined(__OpenBSD__) || defined(__EMSCRIPTEN__)
 
 #include <stdio.h>
