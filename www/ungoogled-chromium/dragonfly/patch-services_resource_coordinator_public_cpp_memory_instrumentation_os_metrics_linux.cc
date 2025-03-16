diff --git services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
index cba7a22dada9..7aa8877b3421 100644
--- services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
+++ services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
@@ -10,6 +10,7 @@
 #include <dlfcn.h>
 #include <fcntl.h>
 #include <stdint.h>
+
 #include <sys/prctl.h>
 
 #include <memory>
