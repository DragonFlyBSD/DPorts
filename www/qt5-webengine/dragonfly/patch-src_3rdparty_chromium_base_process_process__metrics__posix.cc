--- src/3rdparty/chromium/base/process/process_metrics_posix.cc.intermediate	2020-08-18 15:18:51.000000000 +0000
+++ src/3rdparty/chromium/base/process/process_metrics_posix.cc
@@ -20,7 +20,7 @@
 
 #if defined(OS_MACOSX)
 #include <malloc/malloc.h>
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 #include <stdlib.h>
 #else
 #include <malloc.h>
@@ -45,7 +45,7 @@ static const rlim_t kSystemDefaultMaxFds
 static const rlim_t kSystemDefaultMaxFds = 256;
 #elif defined(OS_SOLARIS)
 static const rlim_t kSystemDefaultMaxFds = 8192;
-#elif defined(OS_FREEBSD)
+#elif defined(OS_FREEBSD) || defined(OS_DRAGONFLY)
 static const rlim_t kSystemDefaultMaxFds = 8192;
 #elif defined(OS_NETBSD)
 static const rlim_t kSystemDefaultMaxFds = 1024;
