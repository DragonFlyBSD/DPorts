--- lib/cpp/src/thrift/transport/TSSLSocket.h.orig	2013-08-15 14:04:29.000000000 +0000
+++ lib/cpp/src/thrift/transport/TSSLSocket.h
@@ -26,6 +26,8 @@
 #include <thrift/concurrency/Mutex.h>
 #include <thrift/transport/TSocket.h>
 
+#include <sys/socket.h>
+
 namespace apache { namespace thrift { namespace transport {
 
 class AccessManager;
