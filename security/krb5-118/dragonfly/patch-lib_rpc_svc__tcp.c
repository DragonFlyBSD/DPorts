--- lib/rpc/svc_tcp.c.orig	2020-02-12 17:21:58 UTC
+++ lib/rpc/svc_tcp.c
@@ -45,8 +45,8 @@ static char sccsid[] = "@(#)svc_tcp.c 1.
 
 #include "k5-platform.h"
 #include <unistd.h>
-#include <gssrpc/rpc.h>
 #include <sys/socket.h>
+#include <gssrpc/rpc.h>
 #include <port-sockets.h>
 #include <socket-utils.h>
 /*extern bool_t abort();
