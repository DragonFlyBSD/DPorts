--- wrt400n.c.intermediate	2020-11-20 16:38:20.000000000 +0000
+++ wrt400n.c
@@ -14,6 +14,7 @@
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/stat.h>
+#include <arpa/inet.h> /* for htonl() */
 
 #include "cyg_crc.h"
 
