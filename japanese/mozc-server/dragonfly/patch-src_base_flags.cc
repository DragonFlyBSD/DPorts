--- src/base/flags.cc.orig	2019-02-03 00:33:13.000000000 +0000
+++ src/base/flags.cc	2019-02-03 00:41:10.000000000 +0000
@@ -113,24 +113,24 @@
     return i;
 }
 template <> struct StrToNumberImpl<int> {
-  static int Do(const string &s) { return stoi(s); }
+  static int Do(const string &s) { return std::stoi(s); }
 };
 
 template <> struct StrToNumberImpl<long> {                  // NOLINT
-  static long Do(const string &s) { return stol(s); }  // NOLINT
+  static long Do(const string &s) { return std::stol(s); }  // NOLINT
 };
 
 template <> struct StrToNumberImpl<long long> {                   // NOLINT
-  static long long Do(const string &s) { return stoll(s); }  // NOLINT
+  static long long Do(const string &s) { return std::stoll(s); }  // NOLINT
 };
 
 template <> struct StrToNumberImpl<unsigned long> {                   // NOLINT
-  static unsigned long Do(const string &s) { return stoul(s); }  // NOLINT
+  static unsigned long Do(const string &s) { return std::stoul(s); }  // NOLINT
 };
 
 template <> struct StrToNumberImpl<unsigned long long> {  // NOLINT
   static unsigned long long Do(const string &s) {         // NOLINT
-    return stoull(s);
+    return std::stoull(s);
   }
 };
 #else
