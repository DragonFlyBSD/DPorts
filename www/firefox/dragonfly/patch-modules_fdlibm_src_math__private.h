--- modules/fdlibm/src/math_private.h.intermediate	2021-11-21 00:41:32 UTC
+++ modules/fdlibm/src/math_private.h
@@ -32,6 +32,7 @@
 
 #ifdef __LP64__
 typedef double __double_t;
+typedef float __float_t;
 #else
 typedef long double __double_t;
 #endif
