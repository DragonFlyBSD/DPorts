--- unix/unix_udp.c.intermediate	2020-11-24 08:11:54.000000000 +0000
+++ unix/unix_udp.c
@@ -29,6 +29,7 @@ Foundation, Inc., 59 Temple Place - Suit
 #include <sys/time.h>
 #include <netinet/in.h>
 #include <netdb.h>
+#include <arpa/inet.h> /* for inet_addr() */
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <sys/uio.h>
