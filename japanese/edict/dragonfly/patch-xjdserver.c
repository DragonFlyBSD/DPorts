--- xjdserver.c.orig
+++ xjdserver.c
@@ -29,6 +29,7 @@
 #include <netdb.h>
 #include <stdlib.h>
 #include <signal.h>
+#include <unistd.h>
 #include "xjdic.h"
 
 #define SVERBOSE 0
