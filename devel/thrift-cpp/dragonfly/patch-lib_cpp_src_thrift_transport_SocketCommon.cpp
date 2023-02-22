--- lib/cpp/src/thrift/transport/SocketCommon.cpp.orig	2023-02-07 15:42:35.548616000 +0100
+++ lib/cpp/src/thrift/transport/SocketCommon.cpp	2023-02-07 15:43:01.108966000 +0100
@@ -24,6 +24,7 @@
 #include <thrift/transport/TTransportException.h>
 #include <thrift/TOutput.h>
 
+#include <cstring> // for memcpy()
 #include <cstring>
 
 #include <sys/types.h>
