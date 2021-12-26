 error: no matching function for call to 'min(double, float)'

--- src/canvas/render.cpp.orig	2021-09-07 17:16:05 UTC
+++ src/canvas/render.cpp
@@ -604,7 +604,7 @@ void Canvas::render(const Arc &arc, bool
     draw_arc2(c, radius0, a0, a1, co, arc.layer, arc.width);
     Coordf t(radius0, radius0);
     if (interactive) {
-        const float ax = std::min(asin(arc.width / 2 / radius0), static_cast<float>((2 * M_PI - dphi) / 2 - .1e-4));
+        const float ax = std::min((float)asin(arc.width / 2 / radius0), static_cast<float>((2 * M_PI - dphi) / 2 - .1e-4));
         selectables.append_arc(arc.uuid, ObjectType::ARC, c, radius0 - arc.width / 2, radius0 + arc.width / 2, a0 - ax,
                                a1 + ax, 0, arc.layer);
     }
