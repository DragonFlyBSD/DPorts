--- src/canvas/triangle_renderer.cpp.orig	2025-12-03 22:56:50 UTC
+++ src/canvas/triangle_renderer.cpp
@@ -3,6 +3,7 @@
 #include "gl_util.hpp"
 #include <glm/gtc/type_ptr.hpp>
 #include "bitmap_font_util.hpp"
+#include <cmath> // for std::isnan()
 #include <range/v3/view.hpp>
 #include "common/layer_provider.hpp"
 
@@ -488,17 +489,17 @@
                 else if (tri_info.flags & TriangleInfo::FLAG_BUTT) {
                     ty = Type::LINE_BUTT;
                 }
-                else if (!isnan(tri.y2)) {
+                else if (!std::isnan(tri.y2)) {
                     ty = Type::TRIANGLE;
                 }
-                else if (isnan(tri.y2) && tri.x2 == 0) {
+                else if (std::isnan(tri.y2) && tri.x2 == 0) {
                     ty = Type::LINE0;
                 }
-                else if (isnan(tri.y1) && isnan(tri.x2) && isnan(tri.y2)) {
+                else if (std::isnan(tri.y1) && std::isnan(tri.x2) && std::isnan(tri.y2)) {
                     ty = Type::CIRCLE;
                 }
 
-                else if (isnan(tri.y2)) {
+                else if (std::isnan(tri.y2)) {
                     ty = Type::LINE;
                 }
                 else {
