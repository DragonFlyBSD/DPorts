--- net_udp.c.intermediate	2020-11-24 08:00:40.000000000 +0000
+++ net_udp.c
@@ -25,6 +25,7 @@ Foundation, Inc., 59 Temple Place - Suit
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <netdb.h>
+#include <arpa/inet.h> /* for inet_addr() */
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <errno.h>
