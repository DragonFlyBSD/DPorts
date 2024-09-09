diff --git services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
index 7ab571f333f..77fa8ae5faa 100644
--- src/3rdparty/chromium/services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
+++ src/3rdparty/chromium/services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_linux.cc
@@ -5,6 +5,7 @@
 #include <dlfcn.h>
 #include <fcntl.h>
 #include <stdint.h>
+
 #include <sys/prctl.h>
 
 #include <memory>
