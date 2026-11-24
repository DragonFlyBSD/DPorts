--- afedrinet/afedrinet_io.c.orig
+++ afedrinet/afedrinet_io.c
@@ -22,6 +22,7 @@
 #define QUISK_SHUT_BOTH	SD_BOTH
 #else
 #include <sys/socket.h>
+#include <netinet/in.h>
 #include <arpa/inet.h>
 #define SOCKET  int
 #define INVALID_SOCKET	-1
