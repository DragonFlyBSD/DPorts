--- Wnn/jlib/jl.c.intermediate	2020-11-23 19:04:34.000000000 +0000
+++ Wnn/jlib/jl.c
@@ -140,6 +140,14 @@ Comments on Modifications:
 	Nihongo Henkan Hi-level Library
 */
 
+#if defined(__DragonFly__)
+#include <stdlib.h>
+#include <string.h>
+#include <unistd.h>
+#include <sys/stat.h>
+#include <time.h>
+#endif
+
 #include "commonhd.h"
 #include "config.h"
 #include <stdio.h>
