--- include/LibreOfficeKit/LibreOfficeKitInit.h.intermediate	2016-11-16 19:06:34 UTC
+++ include/LibreOfficeKit/LibreOfficeKitInit.h
@@ -19,6 +19,7 @@ extern "C"
 
 #if defined(__linux__) || defined (__FreeBSD_kernel__) || defined(_AIX) ||\
     defined(_WIN32) || defined(__APPLE__) || defined (__NetBSD__) ||\
+    defined __DragonFly__ ||\
     defined (__sun) || defined(__OpenBSD__) || defined (__FreeBSD__)
 
 #include <stdio.h>
