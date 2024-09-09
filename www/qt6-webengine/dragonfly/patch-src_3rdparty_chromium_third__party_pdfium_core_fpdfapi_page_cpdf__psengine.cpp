--- src/3rdparty/chromium/third_party/pdfium/core/fpdfapi/page/cpdf_psengine.cpp.orig	2023-09-07 16:02:00 UTC
+++ src/3rdparty/chromium/third_party/pdfium/core/fpdfapi/page/cpdf_psengine.cpp
@@ -74,7 +74,7 @@ constexpr PDF_PSOpName kPsOpNames[] = {
 // Round half up is a nearest integer round with half-way numbers always rounded
 // up. Example: -5.5 rounds to -5.
 float RoundHalfUp(float f) {
-  if (isnan(f))
+  if (std::isnan(f))
     return 0;
   if (f > std::numeric_limits<float>::max() - 0.5f)
     return std::numeric_limits<float>::max();
