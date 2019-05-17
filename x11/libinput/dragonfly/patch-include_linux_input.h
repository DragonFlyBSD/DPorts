--- include/linux/input.h.orig	2019-05-13 15:11:33.654432000 +0300
+++ include/linux/input.h	2019-05-13 15:10:26.744052000 +0300
@@ -2,4 +2,6 @@
 #include "linux/input.h"
 #elif __FreeBSD__
 #include "freebsd/input.h"
+#elif __DragonFly__
+#include "dragonfly/input.h"
 #endif
