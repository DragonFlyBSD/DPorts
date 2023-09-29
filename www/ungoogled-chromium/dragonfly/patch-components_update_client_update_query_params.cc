diff --git components/update_client/update_query_params.cc components/update_client/update_query_params.cc
index 2d86bd82ee3..8cd0505921d 100644
--- components/update_client/update_query_params.cc
+++ components/update_client/update_query_params.cc
@@ -44,6 +44,8 @@ const char kOs[] =
     "openbsd";
 #elif defined(OS_FREEBSD)
     "freebsd";
+#elif defined(OS_DRAGONFLY)
+    "dragonfly";
 #else
 #error "unknown os"
 #endif
