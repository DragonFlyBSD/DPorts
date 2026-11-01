--- net/cookies/cookie_util.cc.orig	2026-09-19 23:28:10 UTC
+++ net/cookies/cookie_util.cc
@@ -853,7 +853,7 @@
 
 void ParseRequestCookieLine(std::string_view header_value,
                             ParsedRequestCookies* parsed_cookies) {
-  std::string::const_iterator i = header_value.begin();
+  std::string_view::const_iterator i = header_value.begin();
   while (i != header_value.end()) {
     // Here we are at the beginning of a cookie.
 
@@ -862,7 +862,7 @@
     if (i == header_value.end()) return;
 
     // Find cookie name.
-    std::string::const_iterator cookie_name_beginning = i;
+    std::string_view::const_iterator cookie_name_beginning = i;
     while (i != header_value.end() && *i != '=') ++i;
     auto cookie_name = std::string_view(cookie_name_beginning, i);
 
@@ -871,7 +871,7 @@
     // Cookies may have no value, in this case '=' may or may not be there.
     if (i != header_value.end() && i + 1 != header_value.end()) {
       ++i;  // Skip '='.
-      std::string::const_iterator cookie_value_beginning = i;
+      std::string_view::const_iterator cookie_value_beginning = i;
       if (*i == '"') {
         ++i;  // Skip '"'.
         while (i != header_value.end() && *i != '"') ++i;
