--- ifformat.c.orig	2020-02-01 17:05:20 UTC
+++ ifformat.c
@@ -29,6 +29,9 @@
 
 #include <stdlib.h>
 #include <string.h>
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#endif
 #include "fileformats.h"
 #include "loadsavefuncs.h"
 #include "io.h"
