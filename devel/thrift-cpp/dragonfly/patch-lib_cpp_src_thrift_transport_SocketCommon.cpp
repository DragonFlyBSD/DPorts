--- lib/cpp/src/thrift/transport/SocketCommon.cpp.intermediate	2021-12-16 06:55:40.000000000 +0000
+++ lib/cpp/src/thrift/transport/SocketCommon.cpp
@@ -39,6 +39,7 @@
 #include <sys/un.h>
 #endif
 
+#include <cstring> // for memcpy()
 #include <string>
 
 #include <thrift/transport/PlatformSocket.h>
