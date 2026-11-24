--- port.h.orig
+++ port.h
@@ -29,6 +29,7 @@
 #ifdef WIN32
 #include <ws2tcpip.h>
 #else
+#include <sys/socket.h>
 #include <netdb.h>
 #endif
 
