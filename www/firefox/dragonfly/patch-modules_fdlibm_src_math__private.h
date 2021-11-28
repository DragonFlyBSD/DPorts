--- modules/fdlibm/src/math_private.h.orig	2021-11-27 00:04:29 UTC
+++ modules/fdlibm/src/math_private.h
@@ -32,6 +32,9 @@
 
 #ifdef __LP64__
 typedef double __double_t;
+#ifndef __float_t
+typedef float __float_t;
+#endif
 #else
 typedef long double __double_t;
 #endif
