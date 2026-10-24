--- main.c.orig	2024-12-01 15:46:24 UTC
+++ main.c
@@ -13,6 +13,8 @@
 #include <stdbool.h>
 #ifdef __APPLE__
 #include "macos_endian.h"
+#else
+#include <endian.h>
 #endif
 
 int CopyArgument(char **dst, char *src);
