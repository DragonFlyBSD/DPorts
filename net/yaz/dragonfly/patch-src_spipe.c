--- src/spipe.c.orig	2018-04-16 15:46:16 UTC
+++ src/spipe.c
@@ -45,6 +45,9 @@
 #if HAVE_NETINET_TCP_H
 #include <netinet/tcp.h>
 #endif
+#if HAVE_SYS_SELECT_H
+#include <sys/select.h>
+#endif
 #if HAVE_SYS_SOCKET_H
 #include <sys/socket.h>
 #endif
