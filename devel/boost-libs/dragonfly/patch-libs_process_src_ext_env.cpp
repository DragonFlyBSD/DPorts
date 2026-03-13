--- libs/process/src/ext/env.cpp.orig	Thu Dec  5 00:53:35 2024
+++ libs/process/src/ext/env.cpp	Mon Apr
@@ -47,6 +47,7 @@
 #if defined(__DragonFly__)
 #include <algorithm>
 #include <cstring>
+#include <sys/sysctl.h>
 #include <sys/types.h>
 #include <kvm.h>
 #endif
