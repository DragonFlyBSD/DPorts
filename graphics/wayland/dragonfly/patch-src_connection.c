--- src/connection.c.orig	2024-08-24 15:43:55 UTC
+++ src/connection.c
@@ -39,6 +39,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <time.h>
+#include <poll.h>
 #include <ffi.h>
 
 #include "wayland-util.h"
@@ -485,7 +486,10 @@ wl_connection_flush(struct wl_connection
 		msg.msg_namelen = 0;
 		msg.msg_iov = iov;
 		msg.msg_iovlen = count;
-		msg.msg_control = (clen > 0) ? cmsg : NULL;
+		if (clen == 0)
+			msg.msg_control = NULL;
+		else
+			msg.msg_control = cmsg;
 		msg.msg_controllen = clen;
 
 		do {
