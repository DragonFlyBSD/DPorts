--- src/3rdparty/chromium/components/update_client/update_query_params.cc.intermediate	2026-09-17 10:33:47 UTC
+++ src/3rdparty/chromium/components/update_client/update_query_params.cc
@@ -41,6 +41,8 @@ const char kOs[] =
     "openbsd";
 #elif defined(OS_FREEBSD)
     "freebsd";
+#elif defined(OS_DRAGONFLY)
+    "dragonfly";
 #else
 #error "unknown os"
 #endif
