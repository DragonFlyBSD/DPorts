--- lib/atscppapi/src/include/atscppapi/utils.h.orig	2016-02-03 04:35:34.000000000 +0200
+++ lib/atscppapi/src/include/atscppapi/utils.h
@@ -29,6 +29,9 @@
 #include <string>
 #include <netinet/in.h>
 #include <arpa/inet.h>
+#ifdef __DragonFly__
+#include <sys/socket.h> // for sockaddr
+#endif
 #include <stdint.h>
 
 #ifndef ATSCPPAPI_UNUSED
