--- src/replace/src/graphics.cpp.orig	2020-09-12 17:40:11 UTC
+++ src/replace/src/graphics.cpp
@@ -1,4 +1,5 @@
 #include <algorithm>
+#include <cmath>
 #include <cstdio>
 #include <limits>
 
@@ -91,7 +92,7 @@ void Graphics::drawObjects(gui::Painter&
     int max_len = std::numeric_limits<int>::max();
     for (auto& bin : nb_->bins()) {
       efMax
-          = std::max(efMax, hypot(bin->electroForceX(), bin->electroForceY()));
+          = std::max(efMax, (float)hypot(bin->electroForceX(), bin->electroForceY()));
       max_len = std::min({max_len, bin->dx(), bin->dy()});
     }
 
