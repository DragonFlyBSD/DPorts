--- conversion/minctoecat/machine_indep.c.orig	2012-09-24 17:35:36 UTC
+++ conversion/minctoecat/machine_indep.c
@@ -1,7 +1,11 @@
 #include <stdlib.h>
 #include <string.h>
+#include <arpa/inet.h>
+#include <unistd.h> /* for swab() */
 #include "ecat_write.h"
 
+void swaw( short *from, short *to, int length);
+
 #define OK 0
 #define ERROR -1
 
