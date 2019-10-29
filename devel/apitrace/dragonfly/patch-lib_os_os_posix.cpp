--- lib/os/os_posix.cpp.orig	2017-10-13 17:18:18 UTC
+++ lib/os/os_posix.cpp
@@ -43,6 +43,10 @@
 #include <linux/limits.h> // PATH_MAX
 #endif
 
+#if defined(__DragonFly__)
+#include <limits.h> // PATH_MAX
+#endif
+
 #ifdef __APPLE__
 #include <sys/syslimits.h> // PATH_MAX
 #include <mach-o/dyld.h>
