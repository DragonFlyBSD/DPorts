diff --git third_party/blink/renderer/platform/wtf/math_extras.h third_party/blink/renderer/platform/wtf/math_extras.h
index 7473f4cfdc0..f7f9af6f6d2 100644
--- third_party/blink/renderer/platform/wtf/math_extras.h
+++ third_party/blink/renderer/platform/wtf/math_extras.h
@@ -128,7 +128,7 @@ constexpr float Grad2turn(float g) {
   return g * (1.0f / 400.0f);
 }
 
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Winvalid-constexpr"
 #endif
@@ -139,7 +139,7 @@ constexpr double RoundHalfTowardsPositiveInfinity(double value) {
 constexpr float RoundHalfTowardsPositiveInfinity(float value) {
   return std::floor(value + 0.5f);
 }
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 #pragma clang diagnostic pop
 #endif
 
