--- app/MainWindow.cpp.orig	2021-12-15 19:48:54 UTC
+++ app/MainWindow.cpp
@@ -47,6 +47,7 @@
 
 // CLI
 #include <CLI11.hpp>
+#include <cmath> // for std::isinf()
 
 using namespace ospray_studio;
 using namespace ospray;
@@ -560,7 +561,7 @@ void MainWindow::updateCamera()
         camera["lookAt"].valueAs<vec3f>() - arcballCamera->eyePos());
     if (camera["adjustAperture"].valueAs<bool>()) {
       float oldFocusDistance = camera["focusDistance"].valueAs<float>();
-      if (!(isinf(oldFocusDistance) || isinf(focusDistance))) {
+      if (!(std::isinf(oldFocusDistance) || std::isinf(focusDistance))) {
         float apertureRadius = camera["apertureRadius"].valueAs<float>();
         camera["apertureRadius"] = apertureRadius *
           focusDistance / oldFocusDistance;
@@ -834,7 +835,7 @@ void MainWindow::display()
         float minDepth = rkcommon::math::inf;
         float maxDepth = rkcommon::math::neg_inf;
         for (auto depth : depthCopy) {
-          if (isinf(depth))
+          if (std::isinf(depth))
             continue;
           minDepth = std::min(minDepth, depth);
           maxDepth = std::max(maxDepth, depth);
