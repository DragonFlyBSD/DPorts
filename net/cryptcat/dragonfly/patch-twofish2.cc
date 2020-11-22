--- twofish2.cc.orig	2004-12-18 04:34:27 UTC
+++ twofish2.cc
@@ -176,7 +176,7 @@ static int MDS[4][256]; // blank final
 
 /* Initial endian patch provided by Renzo Davoli <renzo@cs.unibo.it> */
 
-#if defined(__BYTE_ORDER)
+#if defined(__BYTE_ORDER) && !defined(BYTE_ORDER)
 #define BYTE_ORDER    __BYTE_ORDER
 #define BIG_ENDIAN    __BIG_ENDIAN
 #define LITTLE_ENDIAN __LITTLE_ENDIAN
