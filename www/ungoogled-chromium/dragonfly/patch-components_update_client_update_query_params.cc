diff --git components/update_client/update_query_params.cc components/update_client/update_query_params.cc
index 5b17a2bcebc3..e6e55ff24cf5 100644
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
