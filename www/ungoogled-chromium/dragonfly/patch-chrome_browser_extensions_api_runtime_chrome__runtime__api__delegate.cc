--- chrome/browser/extensions/api/runtime/chrome_runtime_api_delegate.cc.orig	2026-09-09 12:00:00 UTC
+++ chrome/browser/extensions/api/runtime/chrome_runtime_api_delegate.cc
@@ -371,6 +371,8 @@
     info->os = extensions::api::runtime::PlatformOs::kLinux;
   } else if (os == "freebsd") {
     info->os = extensions::api::runtime::PlatformOs::kLinux;
+  } else if (os == "dragonfly") {
+    info->os = extensions::api::runtime::PlatformOs::kLinux;
   } else if (os == "android") {
     info->os = extensions::api::runtime::PlatformOs::kAndroid;
   } else {
