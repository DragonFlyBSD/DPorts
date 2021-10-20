--- recvnet.c.orig	2004-01-31 12:40:51 UTC
+++ recvnet.c
@@ -6,6 +6,7 @@
 #include <stdlib.h>
 #include <unistd.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
