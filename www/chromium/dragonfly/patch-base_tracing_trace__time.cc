diff --git base/tracing/trace_time.cc base/tracing/trace_time.cc
index b1c86d1dd764..157581e05354 100644
--- base/tracing/trace_time.cc
+++ base/tracing/trace_time.cc
@@ -8,7 +8,7 @@
 #include "build/build_config.h"
 #include "third_party/perfetto/include/perfetto/base/time.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #define CLOCK_BOOTTIME CLOCK_UPTIME
 #endif
 
