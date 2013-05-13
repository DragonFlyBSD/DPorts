--- spectrwm.c.intermediate	2013-05-13 22:59:32.079003000 +0000
+++ spectrwm.c
@@ -67,7 +67,7 @@
 #include "tree.h"
 #elif defined(__OpenBSD__)
 #include <sys/tree.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/tree.h>
 #else
 #include "tree.h"
