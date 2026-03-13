--- absl/time/internal/cctz/src/time_zone_lookup_test.cc.orig	Mon Feb  3 15:50:45 2025
+++ absl/time/internal/cctz/src/time_zone_lookup_test.cc	Mon Jun
@@ -927,7 +927,7 @@ TEST(MakeTime, SysSecondsLimits) {
     const time_zone cut = LoadZone("libc:UTC");
     const year_t max_tm_year = year_t{std::numeric_limits<int>::max()} + 1900;
     tp = convert(civil_second(max_tm_year, 12, 31, 23, 59, 59), cut);
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__EMSCRIPTEN__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__EMSCRIPTEN__) || defined(__DragonFly__)
     // Some gmtime_r() impls fail on extreme positive values.
 #else
     EXPECT_EQ("2147485547-12-31T23:59:59+00:00",
