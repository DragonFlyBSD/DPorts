--- libs/process/src/pid.cpp.orig	Thu Dec  5 00:53:35 2024
+++ libs/process/src/pid.cpp	Mon Apr
@@ -37,6 +37,7 @@
 #endif
 
 #if (defined(__DragonFly__) ||  defined(__OpenBSD__))
+#include <fcntl.h>
 #include <sys/types.h>
 #include <sys/param.h>
 #include <sys/sysctl.h>
