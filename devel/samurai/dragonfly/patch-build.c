--- build.c.intermediate	2026-04-05 23:16:59 UTC
+++ build.c
@@ -1,4 +1,6 @@
+#ifndef __DragonFly__
 #define _POSIX_C_SOURCE 200809L
+#endif
 #include <errno.h>
 #include <fcntl.h>
 #include <inttypes.h>
