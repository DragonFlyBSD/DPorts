--- src/envelope.cpp.orig	2019-08-09 08:41:12 UTC
+++ src/envelope.cpp
@@ -26,6 +26,7 @@
 
 #include <iomanip>
 #include <math.h>
+#include <cmath>	// for std::llround()
 
 Envelope::Envelope(const RkRect &area)
         : drawingArea{area}
