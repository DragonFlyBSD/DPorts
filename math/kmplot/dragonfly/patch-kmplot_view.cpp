--- kmplot/view.cpp.orig	2011-07-27 20:40:47.403563000 +0200
+++ kmplot/view.cpp	2013-01-14 18:35:28.952689000 +0100
@@ -90,6 +90,11 @@
 #endif
 
 
+#ifdef __DragonFly__
+#define isnan(x) __isnanf(x)
+#define isinf(x) __isinff(x)
+#endif
+
 #ifdef __osf__
 #include <nan.h>
 #define isnan(x) IsNAN(x)
