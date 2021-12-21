--- source/app/MLTextUtils.cpp.orig	2021-04-07 17:33:36 UTC
+++ source/app/MLTextUtils.cpp
@@ -124,9 +124,9 @@ TextFragment floatNumberToText(float f,
   float value = f;
   const int p = std::min(precision, kMaxPrecision);
   const float epsilon =
-      std::max(fabs(f * powersOfTen[kTableZeroOffset - p]), std::numeric_limits<float>::min());
+      std::max((float)fabs(f * powersOfTen[kTableZeroOffset - p]), std::numeric_limits<float>::min());
 
-  if (isnan(f))
+  if (std::isnan(f))
   {
     *writePtr++ = 'n';
     *writePtr++ = 'a';
