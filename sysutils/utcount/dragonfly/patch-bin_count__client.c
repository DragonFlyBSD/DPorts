--- bin/count_client.c.orig	2003-04-29 09:20:22 UTC
+++ bin/count_client.c
@@ -5,6 +5,7 @@
 #include <unistd.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
+#include <arpa/inet.h> /* for inet_addr() */
 
 int main(int argc, char **argv) {
 	register int sock;
