diff --git base/process/process_metrics_posix.cc base/process/process_metrics_posix.cc
index a6b05390dc0..6c3fe006d63 100644
--- src/3rdparty/chromium/base/process/process_metrics_posix.cc
+++ src/3rdparty/chromium/base/process/process_metrics_posix.cc
@@ -20,7 +20,7 @@
 
 #if BUILDFLAG(IS_APPLE)
 #include <malloc/malloc.h>
-#elif BUILDFLAG(IS_OPENBSD)
+#elif BUILDFLAG(IS_OPENBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <stdlib.h>
 #else
 #include <malloc.h>
@@ -57,6 +57,8 @@ static const rlim_t kSystemDefaultMaxFds = 8192;
 static const rlim_t kSystemDefaultMaxFds = 1024;
 #elif BUILDFLAG(IS_OPENBSD)
 static const rlim_t kSystemDefaultMaxFds = 256;
+#elif BUILDFLAG(IS_DRAGONFLY)
+static const rlim_t kSystemDefaultMaxFds = 1024;
 #elif BUILDFLAG(IS_ANDROID)
 static const rlim_t kSystemDefaultMaxFds = 1024;
 #elif BUILDFLAG(IS_AIX)
