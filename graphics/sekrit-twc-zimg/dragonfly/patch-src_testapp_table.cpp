--- src/testapp/table.cpp.orig	2016-01-22 18:12:28 UTC
+++ src/testapp/table.cpp
@@ -26,15 +26,15 @@ filter_uptr make_filter(double, double)
 
 filter_uptr make_bicubic_filter(double b, double c)
 {
-	b = isnan(b) ? 1.0 / 3.0 : b;
-	c = isnan(c) ? 1.0 / 3.0 : c;
+	b = std::isnan(b) ? 1.0 / 3.0 : b;
+	c = std::isnan(c) ? 1.0 / 3.0 : c;
 
 	return filter_uptr{ new zimg::resize::BicubicFilter{ b, c } };
 }
 
 filter_uptr make_lanczos_filter(double taps, double)
 {
-	taps = isnan(taps) ? 4.0 : taps;
+	taps = std::isnan(taps) ? 4.0 : taps;
 	return filter_uptr{ new zimg::resize::LanczosFilter{ static_cast<int>(std::floor(taps)) } };
 }
 
