--- content/services/isolated_xr_device/xr_sandbox_hook_linux.h.orig
+++ content/services/isolated_xr_device/xr_sandbox_hook_linux.h
@@ -9,7 +9,7 @@
 #include <string>
 #include <string_view>
 
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include "sandbox/policy/sandbox.h"
 #else
 #include "sandbox/policy/linux/sandbox_linux.h"
