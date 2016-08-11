--- src/s_nan.c.orig	2016-08-06 18:00:31.000000000 +0300
+++ src/s_nan.c
@@ -36,7 +36,7 @@
 
 #include "math_private.h"
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 static __inline int digittoint(int c) {
 	if ('0' <= c && c <= '9')
 		return (c - '0');
