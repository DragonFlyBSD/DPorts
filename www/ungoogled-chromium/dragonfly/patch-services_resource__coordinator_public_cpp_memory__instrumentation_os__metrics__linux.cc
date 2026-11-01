diff --git services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
index 03d5ed93c440..f5295c89e589 100644
--- services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
+++ services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
@@ -12,6 +12,7 @@
 #include <dlfcn.h>
 #include <fcntl.h>
 #include <stdint.h>
+
 #include <sys/prctl.h>
 
 #include <memory>
