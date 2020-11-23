--- Wnn/jlib/jl.c.orig	2000-09-01 09:58:55 UTC
+++ Wnn/jlib/jl.c
@@ -141,6 +141,14 @@ Comments on Modifications:
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
