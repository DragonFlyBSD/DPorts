--- include/tscpp/api/utils.h.orig	2019-01-18 22:13:53 UTC
+++ include/tscpp/api/utils.h
@@ -27,6 +27,9 @@
 #include <string>
 #include <netinet/in.h>
 #include <arpa/inet.h>
+#ifdef __DragonFly__
+#include <sys/socket.h> // for sockaddr
+#endif
 #include <cstdint>
 
 #ifndef ATSCPPAPI_UNUSED
