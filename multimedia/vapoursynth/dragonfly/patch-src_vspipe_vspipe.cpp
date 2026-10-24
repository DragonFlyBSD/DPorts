--- src/vspipe/vspipe.cpp.orig	2025-11-23 18:49:38 UTC
+++ src/vspipe/vspipe.cpp
@@ -281,8 +281,12 @@ static void outputFrame(const VSFrame *frame, VSPipeOu
 
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
 
 static void VS_CC frameDoneCallback(void *userData, const VSFrame *f, int n, VSNode *rnode, const char *errorMsg) {
