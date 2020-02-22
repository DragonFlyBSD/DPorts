--- contrib/librdns/rdns.h.orig	2020-02-04 16:00:17 UTC
+++ contrib/librdns/rdns.h
@@ -31,6 +31,7 @@
 #include <stdint.h>
 #include <stdbool.h>
 #include <stdarg.h>
+#include <sys/socket.h>	/* for struct sockaddr */
 #include <netinet/in.h>
 #include <arpa/inet.h>
 
