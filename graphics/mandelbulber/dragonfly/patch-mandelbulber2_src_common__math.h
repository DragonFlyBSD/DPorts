--- mandelbulber2/src/common_math.h.orig	2021-08-26 15:48:46 UTC
+++ mandelbulber2/src/common_math.h
@@ -40,6 +40,7 @@
 #endif
 
 #include "algebra.hpp"
+#include <cmath> // std::min()
 
 extern unsigned int gRandomSeed;
 
