diff --git components/update_client/update_query_params.cc components/update_client/update_query_params.cc
index 2e70a2d5a3e3..41561ad8fe8a 100644
--- components/update_client/update_query_params.cc
+++ components/update_client/update_query_params.cc
@@ -41,6 +41,8 @@ const char kOs[] =
     "openbsd";
 #elif defined(OS_FREEBSD)
     "freebsd";
+#elif defined(OS_DRAGONFLY)
+    "dragonfly";
 #else
 #error "unknown os"
 #endif
