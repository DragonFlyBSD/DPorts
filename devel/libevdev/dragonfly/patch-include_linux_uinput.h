--- include/linux/uinput.h.orig	Fri May 31 05:24:44 2024
+++ include/linux/uinput.h	Sun Apr
@@ -2,4 +2,6 @@
 #include "linux/uinput.h"
 #elif __FreeBSD__
 #include "freebsd/uinput.h"
+#elif __DragonFly__
+#include "dragonfly/uinput.h"
 #endif
