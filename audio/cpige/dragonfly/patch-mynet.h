--- mynet.h.orig	2006-08-20 14:51:17 UTC
+++ mynet.h
@@ -10,6 +10,7 @@
 #else
  #include <netdb.h>
  #include <netinet/in.h>
+ #include <sys/select.h>
  #include <sys/socket.h>
  #include <arpa/inet.h>
 #endif
