--- Sources/Core/Math.h.orig	2014-06-23 14:55:03.000000000 +0300
+++ Sources/Core/Math.h
@@ -25,6 +25,7 @@
 #include <string>
 #include <stdint.h>		// uint32_t --> msvc
 #include <algorithm>	// std::max / std::min
+#include <cmath> // for std::isnan
 
 #ifdef _MSC_VER
 #define isnan _isnan
