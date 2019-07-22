--- layers/parameter_validation_utils.cpp.orig	2019-06-13 14:59:29 UTC
+++ layers/parameter_validation_utils.cpp
@@ -21,6 +21,8 @@
 
 #define NOMINMAX
 
+#include <cmath>     // for std::isnan()
+
 #include <math.h>
 
 #include "chassis.h"
