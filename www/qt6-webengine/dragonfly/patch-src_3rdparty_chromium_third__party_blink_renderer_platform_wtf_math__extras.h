--- src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/math_extras.h.orig	Sat Mar  1 12:15:32 2025
+++ src/3rdparty/chromium/third_party/blink/renderer/platform/wtf/math_extras.h	Sat Mar
@@ -135,7 +135,7 @@ inline double RoundHalfTowardsPositiveInfinity(double 
 inline float RoundHalfTowardsPositiveInfinity(float value) {
   return std::floor(value + 0.5f);
 }
-#if defined(OS_FREEBSD)
+#if defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 #pragma clang diagnostic pop
 #endif
 
