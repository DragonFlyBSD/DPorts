--- src/unpack.c.orig	2015-08-06 20:35:06.000000000 +0300
+++ src/unpack.c
@@ -22,7 +22,7 @@
 #include "types.h"
 #include "shell.h"
 
-#if !defined(__GLIBC__) && !defined(__NEWLIB__)
+#if !defined(__GLIBC__) && !defined(__NEWLIB__) && !defined(__DragonFly__)
 static inline void *mempcpy(void *dest, const void *src, size_t n)
 {
     memcpy(dest, src, n);
