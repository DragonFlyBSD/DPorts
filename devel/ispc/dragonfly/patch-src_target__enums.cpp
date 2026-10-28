--- src/target_enums.cpp.orig	2026-10-26 01:17:16 UTC
+++ src/target_enums.cpp
@@ -25,7 +25,9 @@ TargetOS operator++(TargetOS &os, int dummy) {
                   "Enum TargetOS is not sequential");
     static_assert(static_cast<underlying>(TargetOS::freebsd) == static_cast<underlying>(TargetOS::custom_linux) + 1,
                   "Enum TargetOS is not sequential");
-    static_assert(static_cast<underlying>(TargetOS::macos) == static_cast<underlying>(TargetOS::freebsd) + 1,
+    static_assert(static_cast<underlying>(TargetOS::dragonfly) == static_cast<underlying>(TargetOS::freebsd) + 1,
+                  "Enum TargetOS is not sequential");
+    static_assert(static_cast<underlying>(TargetOS::macos) == static_cast<underlying>(TargetOS::dragonfly) + 1,
                   "Enum TargetOS is not sequential");
     static_assert(static_cast<underlying>(TargetOS::android) == static_cast<underlying>(TargetOS::macos) + 1,
                   "Enum TargetOS is not sequential");
@@ -1013,6 +1015,8 @@ TargetOS ParseOS(std::string os) {
         return TargetOS::custom_linux;
     } else if (os == "freebsd") {
         return TargetOS::freebsd;
+    } else if (os == "dragonfly") {
+        return TargetOS::dragonfly;
     } else if (os == "macos") {
         return TargetOS::macos;
     } else if (os == "android") {
@@ -1039,6 +1043,8 @@ std::string OSToString(TargetOS os) {
         return "Linux (custom)";
     case TargetOS::freebsd:
         return "FreeBSD";
+    case TargetOS::dragonfly:
+        return "DragonFly";
     case TargetOS::macos:
         return "macOS";
     case TargetOS::android:
@@ -1067,6 +1073,8 @@ std::string OSToLowerString(TargetOS os) {
         return "custom_linux";
     case TargetOS::freebsd:
         return "freebsd";
+    case TargetOS::dragonfly:
+        return "dragonfly";
     case TargetOS::macos:
         return "macos";
     case TargetOS::android:
@@ -1092,6 +1100,8 @@ TargetOS GetHostOS() {
     return TargetOS::linux;
 #elif defined(ISPC_HOST_IS_FREEBSD) && !defined(ISPC_FREEBSD_TARGET_OFF)
     return TargetOS::freebsd;
+#elif defined(ISPC_HOST_IS_DRAGONFLY) && !defined(ISPC_DRAGONFLY_TARGET_OFF)
+    return TargetOS::dragonfly;
 #elif defined(ISPC_HOST_IS_APPLE) && !defined(ISPC_MACOS_TARGET_OFF)
     return TargetOS::macos;
 #else
