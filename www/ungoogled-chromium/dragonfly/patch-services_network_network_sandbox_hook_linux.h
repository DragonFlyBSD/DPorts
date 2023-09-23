diff --git services/network/network_sandbox_hook_linux.h services/network/network_sandbox_hook_linux.h
index 9d39bb72c6c..835492c5ba9 100644
--- services/network/network_sandbox_hook_linux.h
+++ services/network/network_sandbox_hook_linux.h
@@ -6,7 +6,7 @@
 #define SERVICES_NETWORK_NETWORK_SANDBOX_HOOK_LINUX_H_
 
 #include "base/component_export.h"
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include "sandbox/policy/sandbox.h"
 #else
 #include "sandbox/policy/linux/sandbox_linux.h"
