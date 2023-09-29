diff --git services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_bsd.cc services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_bsd.cc
index 8420decc95d..967bfebb833 100644
--- services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_bsd.cc
+++ services/resource_coordinator/public/cpp/memory_instrumentation/os_metrics_bsd.cc
@@ -17,6 +17,9 @@
 #elif BUILDFLAG(IS_FREEBSD)
 #include <sys/user.h>
 #define vm_rssize info.ki_rssize
+#elif BUILDFLAG(IS_DRAGONFLY)
+#include <sys/user.h>
+#define vm_rssize info.kp_vm_rssize
 #endif
 
 namespace memory_instrumentation {
@@ -33,7 +36,7 @@ bool OSMetrics::FillOSMemoryDump(base::ProcessId pid,
 #if BUILDFLAG(IS_OPENBSD)
   int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, process.Handle(),
                 static_cast<int>(length), 1 };
-#elif BUILDFLAG(IS_FREEBSD)
+#elif BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   int mib[] = { CTL_KERN, KERN_PROC, KERN_PROC_PID, process.Handle() };
 #endif
 
