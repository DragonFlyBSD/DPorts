--- libs/apto/include/apto/core/ListStorage.h.orig	2012-09-29 03:33:38 UTC
+++ libs/apto/include/apto/core/ListStorage.h
@@ -299,7 +299,7 @@ namespace Apto {
     typedef union {
       unsigned int index;
       struct {
-#if APTO_PLATFORM(LITTLE_ENDIAN)
+#if APTO_PLATFORM_LITTLE_ENDIAN
         unsigned int offset:6;
         unsigned int num:26;
 #else
