--- pxr/base/arch/mallocHook.cpp.intermediate	2022-01-26 05:43:19.000000000 +0000
+++ pxr/base/arch/mallocHook.cpp
@@ -35,6 +35,8 @@
 
 #if defined(ARCH_OS_DARWIN)
 #   include <sys/malloc.h>
+#elif defined(__DragonFly__)
+#   include <stdlib.h>
 #else
 #   include <malloc.h>
 #endif /* defined(ARCH_OS_DARWIN) */
