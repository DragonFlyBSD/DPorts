--- src/rtpp_network_io.h.orig
+++ src/rtpp_network_io.h
@@ -29,6 +29,8 @@
 #ifndef _RTPP_NETWORK_IO_H_
 #define _RTPP_NETWORK_IO_H_
 
+#include <time.h>
+
 struct sockaddr;
 struct timeval;
 
