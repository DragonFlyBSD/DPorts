--- compile_world.c.intermediate	2019-11-08 16:08:09.000000000 +0000
+++ compile_world.c
@@ -34,6 +34,7 @@
 #include <sys/mman.h>
 #include <stdio.h>
 #include <stdlib.h>
+#include <unistd.h>	/* for ftruncate() */
 #include "Sphere.h"
 #include "SphereDim.h"
 
