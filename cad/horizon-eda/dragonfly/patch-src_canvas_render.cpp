--- src/canvas/render.cpp.orig	2025-12-03 22:56:50 UTC
+++ src/canvas/render.cpp
@@ -741,7 +741,7 @@
         const auto ri = radius0 - arc.width / 2;
 
         if (ri > 0) {
-            const float ax = std::min(asin(arc.width / 2 / radius0), static_cast<float>((2 * M_PI - dphi) / 2 - .1e-4));
+            const float ax = std::min((float)asin(arc.width / 2 / radius0), static_cast<float>((2 * M_PI - dphi) / 2 - .1e-4));
             selectables.append_arc(arc.uuid, ObjectType::ARC, c, ri, radius0 + arc.width / 2, a0 - ax, a1 + ax, 0,
                                    arc.layer);
         }
