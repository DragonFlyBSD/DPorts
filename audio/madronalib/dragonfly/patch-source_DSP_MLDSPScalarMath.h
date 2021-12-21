--- source/DSP/MLDSPScalarMath.h.orig	2021-04-07 17:33:36 UTC
+++ source/DSP/MLDSPScalarMath.h
@@ -11,6 +11,7 @@
 #include <stdint.h>
 #include <stdlib.h>
 
+#include <cmath>
 #include <limits>
 
 #ifdef WIN32
@@ -119,13 +120,13 @@ inline int ilog2(int x)
   return b;
 }
 
-inline int isNaN(float x) { return isnan(x); }
+inline int isNaN(float x) { return std::isnan(x); }
 
-inline int isNaN(double x) { return isnan(x); }
+inline int isNaN(double x) { return std::isnan(x); }
 
-inline int isInfinite(float x) { return isinf(x); }
+inline int isInfinite(float x) { return std::isinf(x); }
 
-inline int isInfinite(double x) { return isinf(x); }
+inline int isInfinite(double x) { return std::isinf(x); }
 
 inline float smoothstep(float a, float b, float x)
 {
