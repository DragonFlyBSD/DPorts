--- common/loop.c.orig	2019-05-24 12:25:19.603612000 +0300
+++ common/loop.c	2019-05-24 12:50:34.192349000 +0300
@@ -1,4 +1,9 @@
 #define _POSIX_C_SOURCE 200112L
+#if defined(__DragonFly__)
+#undef _POSIX_C_SOURCE
+#define _POSIX_C_SOURCE 200809
+#include <sys/types.h>
+#endif
 #include <limits.h>
 #include <string.h>
 #include <stdbool.h>
