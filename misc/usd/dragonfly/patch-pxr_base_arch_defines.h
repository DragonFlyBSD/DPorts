--- pxr/base/arch/defines.h.intermediate	2022-01-26 05:43:19.000000000 +0000
+++ pxr/base/arch/defines.h
@@ -34,7 +34,7 @@ PXR_NAMESPACE_OPEN_SCOPE
 
 #if defined(__linux__)
 #define ARCH_OS_LINUX
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #define ARCH_OS_FREEBSD
 #elif defined(__APPLE__)
 #include "TargetConditionals.h"
