--- lib/cpp/src/thrift/transport/TSSLSocket.h.orig	2012-10-12 00:58:06.000000000 +0000
+++ lib/cpp/src/thrift/transport/TSSLSocket.h
@@ -23,6 +23,7 @@
 #include <string>
 #include <boost/shared_ptr.hpp>
 #include <openssl/ssl.h>
+#include <sys/socket.h>
 #include <thrift/concurrency/Mutex.h>
 #include "TSocket.h"
 
