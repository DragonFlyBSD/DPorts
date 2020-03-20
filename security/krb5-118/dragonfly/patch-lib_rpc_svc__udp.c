--- lib/rpc/svc_udp.c.orig	2020-02-12 17:21:58 UTC
+++ lib/rpc/svc_udp.c
@@ -43,8 +43,8 @@ static char sccsid[] = "@(#)svc_udp.c 1.
 
 #include "k5-platform.h"
 #include <unistd.h>
-#include <gssrpc/rpc.h>
 #include <sys/socket.h>
+#include <gssrpc/rpc.h>
 #ifdef HAVE_SYS_UIO_H
 #include <sys/uio.h>
 #endif
