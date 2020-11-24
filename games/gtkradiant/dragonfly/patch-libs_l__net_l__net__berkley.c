--- libs/l_net/l_net_berkley.c.intermediate	2020-11-24 08:03:48.000000000 +0000
+++ libs/l_net/l_net_berkley.c
@@ -43,6 +43,7 @@ Foundation, Inc., 51 Franklin St, Fifth
 #include <netinet/tcp.h>
 #include <errno.h>
 #include <netdb.h>
+#include <arpa/inet.h> /* for inet_addr() */
 #define SOCKET_ERROR -1
 #define INVALID_SOCKET -1
 
