--- torch/csrc/distributed/c10d/socket_fmt.h.orig
+++ torch/csrc/distributed/c10d/socket_fmt.h
@@ -20,6 +20,7 @@
 #include <ws2tcpip.h>
 #else
 #include <netinet/in.h>
+#include <sys/socket.h>
 #endif

 namespace c10d::detail {
