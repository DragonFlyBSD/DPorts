renderers/ParticleRenderer.cpp:150:63: error: no matching function for call to 'pow(float, double)'
     float actScaleFov = pow(10.f, ceil(log10(minimalScaleFov)));
../lib/math/MathUtils.h:218:10: note:   template argument deduction/substitution failed:
renderers/ParticleRenderer.cpp:150:63: note:   deduced conflicting types for parameter 'T' ('float' and 'double')
     float actScaleFov = pow(10.f, ceil(log10(minimalScaleFov)));

--- gui/renderers/ParticleRenderer.cpp.orig	2019-05-19 05:31:21 UTC
+++ gui/renderers/ParticleRenderer.cpp
@@ -147,7 +147,7 @@ static void drawKey(IRenderContext& cont
 
     const float dFov_dPx = 1.f / wtp;
     const float minimalScaleFov = dFov_dPx * 16;
-    float actScaleFov = pow(10.f, ceil(log10(minimalScaleFov)));
+    float actScaleFov = pow(10.f, (float)ceil(log10(minimalScaleFov)));
     const float scaleSize = actScaleFov / dFov_dPx;
     const Coords lineStart = keyStart + Coords(75, 30);
     context.drawLine(lineStart + Coords(-scaleSize / 2, 0), lineStart + Coords(scaleSize / 2, 0));
