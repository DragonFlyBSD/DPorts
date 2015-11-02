--- lib/cpp/src/thrift/transport/TSSLSocket.h.orig	2015-08-18 18:49:52 UTC
+++ lib/cpp/src/thrift/transport/TSSLSocket.h
@@ -25,6 +25,7 @@
 #include <openssl/ssl.h>
 #include <thrift/concurrency/Mutex.h>
 #include <thrift/transport/TSocket.h>
+#include <sys/socket.h>
 
 namespace apache {
 namespace thrift {
