--- src/target_registry.cpp.orig	2020-12-19 00:48:42 UTC
+++ src/target_registry.cpp
@@ -161,6 +161,7 @@ const BitcodeLib *TargetLibRegistry::get
     case TargetOS::linux:
     case TargetOS::custom_linux:
     case TargetOS::freebsd:
+    case TargetOS::dragonfly:
     case TargetOS::macos:
     case TargetOS::android:
     case TargetOS::ios:
