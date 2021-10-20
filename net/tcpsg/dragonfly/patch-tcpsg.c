--- tcpsg.c.intermediate	2019-06-07 21:45:47.000000000 +0000
+++ tcpsg.c
@@ -38,6 +38,7 @@
 #include <sys/ipc.h>
 
 /* Network Headers */
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
