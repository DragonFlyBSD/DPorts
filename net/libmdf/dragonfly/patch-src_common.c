--- src/common.c.orig	2017-09-05 09:33:51 UTC
+++ src/common.c
@@ -16,6 +16,7 @@
 
 */
 
+#include <sys/select.h>
 #include "common.h"
 #include "encode.h"
 #include "crypt.h"
