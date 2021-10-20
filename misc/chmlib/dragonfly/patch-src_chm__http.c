--- src/chm_http.c.orig	2009-05-23 15:08:18 UTC
+++ src/chm_http.c
@@ -43,6 +43,7 @@
 #include <sys/socket.h>
 #include <sys/types.h>
 #include <netinet/in.h>
+#include <arpa/inet.h>
 
 /* threading includes */
 #include <pthread.h>
