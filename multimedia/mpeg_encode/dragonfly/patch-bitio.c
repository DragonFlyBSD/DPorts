--- bitio.c.orig	1995-06-21 18:36:12 UTC
+++ bitio.c
@@ -80,6 +80,8 @@
  *==============*/
 
 #include <assert.h>
+#include <time.h>
+#include <unistd.h>
 #include "all.h"
 #include "byteorder.h"
 #include "bitio.h"
