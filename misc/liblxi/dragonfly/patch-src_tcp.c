--- src/tcp.c.orig	2018-05-05 14:00:05 UTC
+++ src/tcp.c
@@ -32,6 +32,7 @@
 #include <stdlib.h>
 #include <string.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
