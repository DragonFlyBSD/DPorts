--- include/LibreOfficeKit/LibreOfficeKitInit.h.orig
+++ include/LibreOfficeKit/LibreOfficeKitInit.h
@@ -20,6 +20,7 @@
 
 #if defined(__linux__) || defined (__FreeBSD__) ||\
     defined(_WIN32) || defined(__APPLE__) || defined (__NetBSD__) ||\
+    defined(__DragonFly__) ||\
     defined (__sun) || defined(__OpenBSD__) || defined(__EMSCRIPTEN__)
 
 #include <stdio.h>
