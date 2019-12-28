--- include/spdlog/details/thread_pool-inl.h.orig	2019-10-06 10:13:26 UTC
+++ include/spdlog/details/thread_pool-inl.h
@@ -8,6 +8,7 @@
 #endif
 
 #include "spdlog/common.h"
+#include <cassert>
 
 namespace spdlog {
 namespace details {
