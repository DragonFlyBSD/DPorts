diff --git base/posix/can_lower_nice_to.cc base/posix/can_lower_nice_to.cc
index ada0b21994e5..01bdff925827 100644
--- base/posix/can_lower_nice_to.cc
+++ base/posix/can_lower_nice_to.cc
@@ -11,7 +11,7 @@
 
 #include "build/build_config.h"
 
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
 #include <sys/param.h>
 #endif
 
