--- include/linux/input.h.orig	Fri May 31 05:24:44 2024
+++ include/linux/input.h	Sun Apr
@@ -2,4 +2,6 @@
 #include "linux/input.h"
 #elif __FreeBSD__
 #include "freebsd/input.h"
+#elif __DragonFly__
+#include "dragonfly/input.h"
 #endif
