--- util/iconv.c.orig	2000-11-12 21:15:32 UTC
+++ util/iconv.c
@@ -35,6 +35,7 @@
 #include <stdio.h>	/* FILE, fclose, ferror, fopen, fread, stdin,
                            vfprintf */
 #include <stdlib.h>	/* exit */
+#include <string.h>	/* strlen */
 #include <unistd.h>	/* getopt */
 
 #include "iconv_stream.h"
