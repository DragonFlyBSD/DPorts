--- kopen.c.orig	2017-10-23 17:10:17 UTC
+++ kopen.c
@@ -11,6 +11,7 @@
 #ifndef _WIN32
 #include <netdb.h>
 #include <arpa/inet.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #endif
 
