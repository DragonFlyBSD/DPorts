--- src/target_registry.cpp.orig	2026-10-26 01:17:16 UTC
+++ src/target_registry.cpp
@@ -228,6 +228,7 @@ static const BitcodeLib *lGetTargetLib(const std::map<uint32_t, const BitcodeLib
     case TargetOS::linux:
     case TargetOS::custom_linux:
     case TargetOS::freebsd:
+    case TargetOS::dragonfly:
     case TargetOS::macos:
     case TargetOS::android:
     case TargetOS::ios:
