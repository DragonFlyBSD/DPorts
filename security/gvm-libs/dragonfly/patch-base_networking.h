--- base/networking.h.intermediate	2021-03-10 13:50:11.000000000 +0000
+++ base/networking.h
@@ -29,6 +29,7 @@
 
 #include <netinet/in.h>
 #include <netdb.h> /* for struct in6_addr */
+#include <sys/socket.h> /* for struct sockaddr_storage */
 
 /**
  * @brief Possible port types.
