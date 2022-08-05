--- iphash.c.orig	2003-08-20 14:31:51 UTC
+++ iphash.c
@@ -25,6 +25,7 @@
 #include <fcntl.h>
 #include <unistd.h>
 #include <time.h>
+#include <netinet/in.h>
 #include "lib.h"
 #include "iphash.h"
 #define CLASS_SIZE (256 * sizeof(struct entry*))
