--- jpeg.c.orig	1995-08-04 23:35:07 UTC
+++ jpeg.c
@@ -65,6 +65,7 @@
  *==============*/
 
 #include <stdio.h>
+#include <unistd.h>	/* for lseek() */
 #include "all.h"
 #include "mtypes.h"
 #include "frames.h"
