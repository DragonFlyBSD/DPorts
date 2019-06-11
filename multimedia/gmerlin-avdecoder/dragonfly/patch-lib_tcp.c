--- lib/tcp.c.orig	2012-06-08 11:51:34 UTC
+++ lib/tcp.c
@@ -36,6 +36,7 @@
 #include <ws2spi.h>
 #include <ws2tcpip.h>
 #else
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
