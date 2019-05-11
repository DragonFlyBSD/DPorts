--- BaseTools/Source/C/GenFv/GenFvInternalLib.c.orig	2019-03-08 15:44:59 UTC
+++ BaseTools/Source/C/GenFv/GenFvInternalLib.c
@@ -18,7 +18,7 @@ WITHOUT WARRANTIES OR REPRESENTATIONS OF
 // Include files
 //
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <uuid.h>
 #elif defined(__GNUC__)
 #include <uuid/uuid.h>
