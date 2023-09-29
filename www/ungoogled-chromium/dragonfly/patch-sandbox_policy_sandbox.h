diff --git sandbox/policy/sandbox.h sandbox/policy/sandbox.h
index 44f331a70fb..db461c5b0a7 100644
--- sandbox/policy/sandbox.h
+++ sandbox/policy/sandbox.h
@@ -16,6 +16,8 @@
 #include "sandbox/policy/openbsd/sandbox_openbsd.h"
 #elif BUILDFLAG(IS_FREEBSD)
 #include "sandbox/policy/freebsd/sandbox_freebsd.h"
+#elif BUILDFLAG(IS_DRAGONFLY)
+#include "sandbox/policy/dragonfly/sandbox_dragonfly.h"
 #endif
 
 namespace sandbox {
