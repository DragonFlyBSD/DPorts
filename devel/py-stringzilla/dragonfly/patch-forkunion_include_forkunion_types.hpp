--- forkunion/include/forkunion/types.hpp.orig	2026-07-29 17:53:47 UTC
+++ forkunion/include/forkunion/types.hpp
@@ -88,8 +88,14 @@
 #define FU_ON_FREEBSD 0
 #endif
 
-#define FU_ON_POSIX (FU_ON_LINUX || FU_ON_APPLE || FU_ON_FREEBSD)
+#if defined(__DragonFly__)
+#define FU_ON_DRAGONFLY 1
+#else
+#define FU_ON_DRAGONFLY 0
+#endif
 
+#define FU_ON_POSIX (FU_ON_LINUX || FU_ON_APPLE || FU_ON_FREEBSD || FU_ON_DRAGONFLY)
+
 #if FU_ON_LINUX && __has_include(<features.h>)
 #include <features.h> // `__GLIBC__`
 #endif
