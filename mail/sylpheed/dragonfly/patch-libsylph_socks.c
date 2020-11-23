--- libsylph/socks.c.orig	2014-02-28 09:04:04 UTC
+++ libsylph/socks.c
@@ -28,6 +28,7 @@
 #  include <ws2tcpip.h>
 #endif
 
+#include <arpa/inet.h>
 #include "socket.h"
 #include "socks.h"
 #include "utils.h"
