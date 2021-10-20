--- logrotate.c.intermediate	2020-09-25 22:38:19 UTC
+++ logrotate.c
@@ -1,6 +1,6 @@
 #include "queue.h"
 /* alloca() is defined in stdlib.h in NetBSD */
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #include <alloca.h>
 #endif
 #include <limits.h>
