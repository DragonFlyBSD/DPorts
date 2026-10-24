--- os-posix.c.orig	2026-04-05 23:16:59 UTC
+++ os-posix.c
@@ -1,4 +1,6 @@
+#ifndef __DragonFly__
 #define _POSIX_C_SOURCE 200809L
+#endif
 #include <errno.h>
 #include <stdbool.h>
 #include <stdint.h>
