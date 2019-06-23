--- parsemeta.c.intermediate	2019-06-07 19:58:58.000000000 +0000
+++ parsemeta.c
@@ -15,6 +15,7 @@
 #include <stdlib.h>
 #include INC_SYS_SELECT
 #include INC_STRINGS
+#include <sys/select.h>
 #include <sys/socket.h>
 #include INC_NETINET_IN
 #include <arpa/inet.h>
