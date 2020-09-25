--- config.c.intermediate	2020-09-25 22:37:39 UTC
+++ config.c
@@ -1,6 +1,6 @@
 #include "queue.h"
 /* Alloca is defined in stdlib.h in NetBSD */
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #include <limits.h>
