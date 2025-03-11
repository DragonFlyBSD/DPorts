diff --git chrome/browser/extensions/api/runtime/chrome_runtime_api_delegate.cc chrome/browser/extensions/api/runtime/chrome_runtime_api_delegate.cc
index ce049dc56aed..04a7c211e937 100644
--- chrome/browser/extensions/api/runtime/chrome_runtime_api_delegate.cc
+++ chrome/browser/extensions/api/runtime/chrome_runtime_api_delegate.cc
@@ -287,6 +287,8 @@ bool ChromeRuntimeAPIDelegate::GetPlatformInfo(PlatformInfo* info) {
     info->os = extensions::api::runtime::PlatformOs::kLinux;
   } else if (strcmp(os, "freebsd") == 0) {
     info->os = extensions::api::runtime::PlatformOs::kLinux;
+  } else if (strcmp(os, "dragonfly") == 0) {
+    info->os = extensions::api::runtime::PlatformOs::kLinux;
   } else {
     NOTREACHED_IN_MIGRATION() << "Platform not supported: " << os;
     return false;
