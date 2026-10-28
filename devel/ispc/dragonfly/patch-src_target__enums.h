--- src/target_enums.h.orig	2026-10-26 01:17:16 UTC
+++ src/target_enums.h
@@ -18,7 +18,7 @@ namespace ispc {
 enum class CallingConv { uninitialized, defaultcall, x86_vectorcall };
 
 // TODO: linux is conflit with macro linux under some condition
-enum class TargetOS { windows, linux, custom_linux, freebsd, macos, android, ios, ps4, ps5, web, error };
+enum class TargetOS { windows, linux, custom_linux, freebsd, dragonfly, macos, android, ios, ps4, ps5, web, error };
 TargetOS operator++(TargetOS &, int);
 
 TargetOS ParseOS(std::string os);
