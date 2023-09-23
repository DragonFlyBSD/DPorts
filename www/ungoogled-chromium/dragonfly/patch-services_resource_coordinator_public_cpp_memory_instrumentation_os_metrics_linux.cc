diff --git services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
index 91435102c3b..80745b20033 100644
--- services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
+++ services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
@@ -5,6 +5,7 @@
 #include <dlfcn.h>
 #include <fcntl.h>
 #include <stdint.h>
+
 #include <sys/prctl.h>
 
 #include <memory>
