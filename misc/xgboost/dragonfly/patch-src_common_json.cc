--- src/common/json.cc.intermediate	2019-12-24 17:51:26.000000000 +0000
+++ src/common/json.cc
@@ -630,7 +630,7 @@ Json JsonReader::ParseNumber() {
     // multiply zero by inf which gives nan.
     if (f != 0.0) {
       // Only use exp10 from libc on gcc+linux
-#if !defined(__GNUC__) || defined(_WIN32) || defined(__APPLE__) || defined(__FreeBSD__)
+#if !defined(__GNUC__) || defined(_WIN32) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define exp10(val) std::pow(10, (val))
 #endif  // !defined(__GNUC__) || defined(_WIN32) || defined(__APPLE__)
       f *= exp10(exponent);
