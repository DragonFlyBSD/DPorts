--- src/3rdparty/chromium/sandbox/policy/sandbox.h.intermediate	Thu Nov  6 22:59:39 2025
+++ src/3rdparty/chromium/sandbox/policy/sandbox.h	Thu Nov
@@ -16,6 +16,8 @@
 #include "sandbox/policy/openbsd/sandbox_openbsd.h"
 #elif BUILDFLAG(IS_FREEBSD)
 #include "sandbox/policy/freebsd/sandbox_freebsd.h"
+#elif BUILDFLAG(IS_DRAGONFLY)
+#include "sandbox/policy/dragonfly/sandbox_dragonfly.h"
 #endif
 
 namespace sandbox {
