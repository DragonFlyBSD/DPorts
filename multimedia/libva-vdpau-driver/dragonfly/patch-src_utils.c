--- src/utils.c.orig	2012-10-05 15:02:58 UTC
+++ src/utils.c
@@ -20,6 +20,7 @@
 
 #include "sysdeps.h"
 #include "utils.h"
+#include <sys/select.h>
 #include <time.h>
 #include <errno.h>
 
