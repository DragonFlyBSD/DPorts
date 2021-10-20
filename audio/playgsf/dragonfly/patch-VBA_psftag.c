--- VBA/psftag.c.intermediate	2019-11-08 15:53:27.000000000 +0000
+++ VBA/psftag.c
@@ -7,6 +7,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
+#include <unistd.h>	/* for truncate() */
 
 #include "psftag.h"
 
