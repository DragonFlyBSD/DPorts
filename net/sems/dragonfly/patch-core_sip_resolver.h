--- core/sip/resolver.h.orig	2019-08-08 09:53:18 UTC
+++ core/sip/resolver.h
@@ -42,6 +42,7 @@ using std::string;
 using std::vector;
 using std::map;
 
+#include <sys/socket.h> /* for sockaddr_storage */
 #include <netinet/in.h>
 
 #define DNS_CACHE_SIZE 128
