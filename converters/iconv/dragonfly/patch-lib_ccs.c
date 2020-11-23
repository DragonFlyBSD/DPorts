--- lib/ccs.c.orig	2000-11-26 15:16:20 UTC
+++ lib/ccs.c
@@ -35,7 +35,7 @@
 #include <stdio.h>		/* snprintf */
 #include <stdlib.h>		/* free, malloc */
 #include <string.h>		/* strncmp */
-#include <machine/endian.h>	/* ntohl, ntohs */
+#include <arpa/inet.h>		/* ntohl, ntohs */
 
 #define ICONV_INTERNAL
 #include <iconv.h>	/* iconv_ccs */
