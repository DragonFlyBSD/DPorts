--- backend/epsonds.c.intermediate	2019-06-07 20:23:06.000000000 +0000
+++ backend/epsonds.c
@@ -41,6 +41,7 @@
 #include "sane/config.h"
 
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <ctype.h>
 #include <unistd.h>
