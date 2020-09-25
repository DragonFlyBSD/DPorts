--- BaseTools/Source/C/GenFv/GenFvInternalLib.c.orig	2020-06-02 07:05:21 UTC
+++ BaseTools/Source/C/GenFv/GenFvInternalLib.c
@@ -13,7 +13,7 @@ SPDX-License-Identifier: BSD-2-Clause-Pa
 // Include files
 //
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <uuid.h>
 #elif defined(__GNUC__)
 #include <uuid/uuid.h>
