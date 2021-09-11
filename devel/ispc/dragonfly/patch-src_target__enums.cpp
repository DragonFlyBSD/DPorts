--- src/target_enums.cpp.orig	2020-12-19 00:48:42 UTC
+++ src/target_enums.cpp
@@ -329,6 +329,8 @@ TargetOS ParseOS(std::string os) {
         return TargetOS::custom_linux;
     } else if (os == "freebsd") {
         return TargetOS::freebsd;
+    } else if (os == "dragonfly") {
+        return TargetOS::dragonfly;
     } else if (os == "macos") {
         return TargetOS::macos;
     } else if (os == "android") {
@@ -353,6 +355,8 @@ std::string OSToString(TargetOS os) {
         return "Linux (custom)";
     case TargetOS::freebsd:
         return "FreeBSD";
+    case TargetOS::dragonfly:
+        return "DragonFly";
     case TargetOS::macos:
         return "macOS";
     case TargetOS::android:
@@ -379,6 +383,8 @@ std::string OSToLowerString(TargetOS os)
         return "custom_linux";
     case TargetOS::freebsd:
         return "freebsd";
+    case TargetOS::dragonfly:
+        return "dragonfly";
     case TargetOS::macos:
         return "macos";
     case TargetOS::android:
@@ -402,6 +408,8 @@ TargetOS GetHostOS() {
     return TargetOS::linux;
 #elif defined(ISPC_HOST_IS_FREEBSD) && !defined(ISPC_FREEBSD_TARGET_OFF)
     return TargetOS::freebsd;
+#elif defined(ISPC_HOST_IS_DRAGONFLY) && !defined(ISPC_DRAGONFLY_TARGET_OFF)
+    return TargetOS::dragonfly;
 #elif defined(ISPC_HOST_IS_APPLE) && !defined(ISPC_MACOS_TARGET_OFF)
     return TargetOS::macos;
 #else
