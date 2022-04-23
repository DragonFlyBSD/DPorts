--- src/System/Link/socket_notifier.cpp.orig	2015-06-15 08:44:50 UTC
+++ src/System/Link/socket_notifier.cpp
@@ -17,6 +17,7 @@
 #include <fcntl.h>
 #include <sys/wait.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <netdb.h>
