--- BaseTools/Source/C/GenFv/GenFvInternalLib.c.orig	2016-05-25 20:12:18.000000000 +0300
+++ BaseTools/Source/C/GenFv/GenFvInternalLib.c
@@ -17,7 +17,7 @@ WITHOUT WARRANTIES OR REPRESENTATIONS OF
 // Include files
 //
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <uuid.h>
 #elif defined(__GNUC__)
 #include <uuid/uuid.h>
