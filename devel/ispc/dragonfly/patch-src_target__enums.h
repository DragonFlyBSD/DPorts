--- src/target_enums.h.orig	2022-01-15 08:35:15 UTC
+++ src/target_enums.h
@@ -44,7 +44,7 @@ namespace ispc {
 
 enum class CallingConv { uninitialized, defaultcall, x86_vectorcall };
 
-enum class TargetOS { windows, linux, custom_linux, freebsd, macos, android, ios, ps4, ps5, web, error };
+enum class TargetOS { windows, linux, custom_linux, freebsd, dragonfly, macos, android, ios, ps4, ps5, web, error };
 
 TargetOS ParseOS(std::string os);
 std::string OSToString(TargetOS os);
