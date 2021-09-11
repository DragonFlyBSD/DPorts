--- src/target_enums.h.orig	2020-12-19 00:48:42 UTC
+++ src/target_enums.h
@@ -42,7 +42,7 @@
 
 enum class CallingConv { uninitialized, defaultcall, x86_vectorcall };
 
-enum class TargetOS { windows, linux, custom_linux, freebsd, macos, android, ios, ps4, web, error };
+enum class TargetOS { windows, linux, custom_linux, freebsd, dragonfly, macos, android, ios, ps4, web, error };
 
 TargetOS ParseOS(std::string os);
 std::string OSToString(TargetOS os);
