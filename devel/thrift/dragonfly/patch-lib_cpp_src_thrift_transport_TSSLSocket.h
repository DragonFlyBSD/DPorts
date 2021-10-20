--- lib/cpp/src/thrift/transport/TSSLSocket.h.orig	2017-12-03 19:11:36 UTC
+++ lib/cpp/src/thrift/transport/TSSLSocket.h
@@ -24,6 +24,7 @@
 #include <thrift/transport/TSocket.h>
 
 #include <openssl/ssl.h>
+#include <sys/socket.h>
 #include <string>
 #include <thrift/concurrency/Mutex.h>
 #include <thrift/stdcxx.h>
