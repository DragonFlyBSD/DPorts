--- recmpeg.c.orig	2002-04-28 20:58:17 UTC
+++ recmpeg.c
@@ -41,6 +41,7 @@
 
 #include <netinet/in.h>
 #include <netdb.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <arpa/inet.h>
 
