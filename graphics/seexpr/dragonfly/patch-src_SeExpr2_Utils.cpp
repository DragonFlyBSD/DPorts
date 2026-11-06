--- src/SeExpr2/Utils.cpp.orig	2020-09-28 13:04:00 UTC
+++ src/SeExpr2/Utils.cpp
@@ -40,7 +40,7 @@ double_t SeExpr2::Utils::atof(const char *num)
 double_t SeExpr2::Utils::atof(const std::string &num)
 {
     int64_t v;
-    auto [p, ec] = std::from_chars(val.data(), val.data() + val.size(), v);
+    auto [p, ec] = std::from_chars(num.data(), num.data() + num.size(), v);
     if (ec == std::errc()) {
         return v;
     } else if (ec == std::errc::result_out_of_range) {
