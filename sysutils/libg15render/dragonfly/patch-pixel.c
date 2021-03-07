--- pixel.c.orig	2006-12-29 21:12:37 UTC
+++ pixel.c
@@ -18,6 +18,9 @@
 
 #include <fcntl.h>
 #include "libg15render.h"
+#include <math.h> /* for abs(), ceil() */
+#include <stdlib.h> /* for malloc() */
+#include <unistd.h> /* for read(),  close() */
 
 void
 swap (int *x, int *y)
