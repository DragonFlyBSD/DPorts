--- src/limiter.cpp.orig	2019-08-09 08:41:12 UTC
+++ src/limiter.cpp
@@ -26,6 +26,7 @@
 #include "geonkick_api.h"
 
 #include <RkTimer.h>
+#include <cmath>	// for std::fabs()
 
 extern unsigned char rk_meter_scale_png[];
 
