--- detail-domain.c.intermediate	2020-11-23 06:24:58.000000000 +0000
+++ detail-domain.c
@@ -32,6 +32,7 @@
  */
 #include "tcpview.h"
 #include <netdb.h>
+#include <arpa/inet.h>
 #include <arpa/nameser.h>
 
 #ifndef T_TXT
