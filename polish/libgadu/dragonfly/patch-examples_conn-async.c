--- examples/conn-async.c.orig	2017-01-21 17:57:03 UTC
+++ examples/conn-async.c
@@ -27,6 +27,7 @@
 #include <errno.h>
 #include <string.h>
 #include <time.h>
+#include <sys/select.h>
 #include "libgadu.h"
 #include "network.h"
 
