--- src/options.c.orig	2004-09-30 10:29:05 UTC
+++ src/options.c
@@ -18,6 +18,7 @@
  **********************************************************************/
 #include <config.h>
 
+#include <stdlib.h> /* for atol() */
 #include <time.h>
 #include <errno.h>
 #include <unistd.h>
