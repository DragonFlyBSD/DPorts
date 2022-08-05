--- cdgaiji.c.orig	1996-06-29 16:25:22 UTC
+++ cdgaiji.c
@@ -9,6 +9,8 @@
 #include <string.h>
 #include <ctype.h>
 #include <fcntl.h>
+#include <unistd.h>
+#include <stdlib.h>
 #ifdef  MSC
 #include <sys/types.h>
 #define size_t  off_t
