srsly?

--- misc-utils/ddate.c.intermediate	2016-07-13 10:02:23 UTC
+++ misc-utils/ddate.c
@@ -64,10 +64,10 @@
 #include <time.h>
 #include <stdio.h>
 
+#include "../config.h"
 #include "../include/nls.h"
 #include "../include/closestream.h"
 #include "../include/c.h"
-#include "../config.h"
 
 #ifndef __GNUC__
 #define inline /* foo */
