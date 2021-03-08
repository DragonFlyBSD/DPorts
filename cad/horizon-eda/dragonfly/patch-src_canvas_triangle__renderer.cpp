--- src/canvas/triangle_renderer.cpp.orig	2021-01-29 20:49:36 UTC
+++ src/canvas/triangle_renderer.cpp
@@ -3,6 +3,7 @@
 #include "gl_util.hpp"
 #include <glm/gtc/type_ptr.hpp>
 #include "bitmap_font_util.hpp"
+#include <cmath> // for std::isnan()
 
 namespace horizon {
 
@@ -459,17 +460,17 @@ void TriangleRenderer::push()
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
