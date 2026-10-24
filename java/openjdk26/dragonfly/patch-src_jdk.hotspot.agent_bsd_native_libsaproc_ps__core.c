--- src/jdk.hotspot.agent/bsd/native/libsaproc/ps_core.c.orig
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/ps_core.c
@@ -31,7 +31,9 @@
 #include <errno.h>
 #include "libproc_impl.h"
 #include "ps_core_common.h"
+#ifndef __DragonFly__
 #include "proc_service.h"
+#endif
 
 #ifdef __APPLE__
 #include "sun_jvm_hotspot_debugger_amd64_AMD64ThreadContext.h"
