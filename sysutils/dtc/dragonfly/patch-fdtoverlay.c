--- fdtoverlay.c.intermediate	2017-12-06 14:57:08 UTC
+++ fdtoverlay.c
@@ -26,9 +26,6 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
-#ifndef __FreeBSD__
-#include <alloca.h>
-#endif
 #include <inttypes.h>
 
 #include <libfdt.h>
