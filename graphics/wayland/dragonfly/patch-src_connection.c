--- src/connection.c.orig	2022-10-22 10:58:12.859174000 +0200
+++ src/connection.c	2022-11-01 18:50:36.315356000 +0100
@@ -38,6 +38,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <time.h>
+#include <poll.h>
 #include <ffi.h>
 
 #include "wayland-util.h"
@@ -306,7 +307,10 @@
 
 		msg.msg_iov = iov;
 		msg.msg_iovlen = count;
-		msg.msg_control = (clen > 0) ? cmsg : NULL;
+		if (clen == 0)
+			msg.msg_control = NULL;
+		else
+			msg.msg_control = cmsg;
 		msg.msg_controllen = clen;
 
 		do {
@@ -376,11 +380,25 @@
 wl_connection_write(struct wl_connection *connection,
 		    const void *data, size_t count)
 {
-	if (connection->out.head - connection->out.tail +
+	struct pollfd pfd;
+
+	while (connection->out.head - connection->out.tail +
 	    count > ARRAY_LENGTH(connection->out.data)) {
-		connection->want_flush = 1;
-		if (wl_connection_flush(connection) < 0)
-			return -1;
+		if (wl_connection_flush(connection) < 0) {
+			if (errno == EAGAIN) {
+				pfd.fd = connection->fd;
+				pfd.events = POLLWRNORM;
+				pfd.revents = 0;
+				int ret;
+				do {
+					ret = poll(&pfd, 1, -1);
+				} while (ret == -1 && errno == EINTR);
+			} else {
+				wl_log("%s: wl_connection_flush failed: %s\n",
+				    __func__, strerror(errno));
+				return -1;
+			}
+		}
 	}
 
 	if (ring_buffer_put(&connection->out, data, count) < 0)
