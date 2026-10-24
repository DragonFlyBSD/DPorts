--- src/vspipe/vsjson.cpp.orig	2025-11-23 18:49:38 UTC
+++ src/vspipe/vsjson.cpp
@@ -19,7 +19,7 @@
 */
 
 #include "vsjson.h"
-#include <charconv>
+#include <cstdio>
 
 static bool isAsciiPrintable(const std::string &s) {
     for (const auto c : s)
@@ -30,8 +30,12 @@ static bool isAsciiPrintable(const std::string &s) {
 
 static std::string doubleToString(double v) {
     char buffer[100];
-    auto res = std::to_chars(buffer, buffer + sizeof(buffer), v, std::chars_format::fixed);
-    return std::string(buffer, res.ptr - buffer);
+    int len = std::snprintf(buffer, sizeof(buffer), "%f", v);
+    if (len < 0)
+        return std::string();
+    if (static_cast<size_t>(len) >= sizeof(buffer))
+        len = sizeof(buffer) - 1;
+    return std::string(buffer, static_cast<size_t>(len));
 }
 
 std::string escapeJSONString(const std::string &s) {
