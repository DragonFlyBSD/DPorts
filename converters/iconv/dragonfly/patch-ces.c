--- lib/ces.c.orig	2000-11-26 15:16:52 UTC
+++ lib/ces.c
@@ -36,6 +36,7 @@
 #include <limits.h>	/* PATH_MAX */
 #include <stdio.h>	/* snprintf */
 #include <stdlib.h>	/* free, malloc */
+#include <string.h>	/* strcmp */
 #include <unistd.h>	/* issetugid */
 
 #define ICONV_INTERNAL
