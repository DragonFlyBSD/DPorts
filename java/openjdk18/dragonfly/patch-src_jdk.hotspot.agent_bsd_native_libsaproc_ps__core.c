--- src/jdk.hotspot.agent/bsd/native/libsaproc/ps_core.c.orig	2021-09-14 03:59:48 UTC
+++ src/jdk.hotspot.agent/bsd/native/libsaproc/ps_core.c
@@ -30,7 +30,9 @@
 #include <stddef.h>
 #include "libproc_impl.h"
 #include "ps_core_common.h"
+#ifndef __DragonFly__
 #include "proc_service.h"
+#endif
 
 #ifdef __APPLE__
 #include "sun_jvm_hotspot_debugger_amd64_AMD64ThreadContext.h"
