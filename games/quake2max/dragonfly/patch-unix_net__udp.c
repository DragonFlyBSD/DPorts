--- unix/net_udp.c.orig	2002-12-13 11:59:20 UTC
+++ unix/net_udp.c
@@ -26,6 +26,7 @@ Foundation, Inc., 59 Temple Place - Suit
 #include <sys/time.h>
 #include <netinet/in.h>
 #include <netdb.h>
+#include <arpa/inet.h> /* for inet_addr() */
 #include <sys/param.h>
 #include <sys/ioctl.h>
 #include <sys/uio.h>
