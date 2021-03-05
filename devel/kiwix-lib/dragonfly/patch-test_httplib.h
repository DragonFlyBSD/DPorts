First include system types header before using non standard headers.

--- test/httplib.h.orig	2020-11-17 14:42:13.000000000 +0000
+++ test/httplib.h
@@ -113,6 +113,7 @@ using socket_t = SOCKET;
 
 #else // not _WIN32
 
+#include <sys/types.h>
 #include <arpa/inet.h>
 #include <cstring>
 #include <ifaddrs.h>
