--- src/3rdparty/chromium/services/network/network_sandbox_hook_linux.h.intermediate	Fri Nov  7 11:45:41 2025
+++ src/3rdparty/chromium/services/network/network_sandbox_hook_linux.h	Sat Nov
@@ -6,7 +6,7 @@
 #define SERVICES_NETWORK_NETWORK_SANDBOX_HOOK_LINUX_H_
 
 #include "base/component_export.h"
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include "sandbox/policy/sandbox.h"
 #else
 #include "sandbox/policy/linux/sandbox_linux.h"
