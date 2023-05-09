--- src/3rdparty/chromium/base/task/sequence_manager/task_queue_impl.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/base/task/sequence_manager/task_queue_impl.cc
@@ -21,6 +21,10 @@
 #include "base/trace_event/base_tracing.h"
 #include "build/build_config.h"
 
+#if defined(__GNUC__)
+#pragma GCC diagnostic ignored "-Wunused-variable"
+#endif
+
 namespace base {
 namespace sequence_manager {
 
