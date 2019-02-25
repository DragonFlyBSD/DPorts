--- include/opendht/infohash.h~	2018-12-28 17:38:15.000000000 +0100
+++ include/opendht/infohash.h	2019-02-23 18:49:49.603517000 +0100
@@ -25,6 +25,7 @@
 
 #ifndef _WIN32
 #include <netinet/in.h>
+#include <sys/socket.h>
 #include <netdb.h>
 #ifdef __ANDROID__
 typedef uint16_t in_port_t;
