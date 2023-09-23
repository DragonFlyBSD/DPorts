diff --git base/process/process_metrics_posix.cc base/process/process_metrics_posix.cc
index bdef95e4cc5..bc6d574db81 100644
--- base/process/process_metrics_posix.cc
+++ base/process/process_metrics_posix.cc
@@ -21,7 +21,7 @@
 
 #if BUILDFLAG(IS_APPLE)
 #include <malloc/malloc.h>
-#elif BUILDFLAG(IS_OPENBSD)
+#elif BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <stdlib.h>
 #else
 #include <malloc.h>
@@ -56,6 +56,8 @@ static const rlim_t kSystemDefaultMaxFds = 8192;
 static const rlim_t kSystemDefaultMaxFds = 1024;
 #elif BUILDFLAG(IS_OPENBSD)
 static const rlim_t kSystemDefaultMaxFds = 256;
+#elif BUILDFLAG(IS_DRAGONFLY)
+static const rlim_t kSystemDefaultMaxFds = 1024;
 #elif BUILDFLAG(IS_ANDROID)
 static const rlim_t kSystemDefaultMaxFds = 1024;
 #elif BUILDFLAG(IS_AIX)
