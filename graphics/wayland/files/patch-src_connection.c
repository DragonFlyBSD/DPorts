--- src/connection.c.orig	2015-06-13 00:31:24 +0200
+++ src/connection.c
@@ -39,6 +39,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <time.h>
+#include <poll.h>
 #include <ffi.h>
 
 #include "wayland-util.h"
@@ -293,7 +294,10 @@
 		msg.msg_namelen = 0;
 		msg.msg_iov = iov;
 		msg.msg_iovlen = count;
-		msg.msg_control = (clen > 0) ? cmsg : NULL;
+		if (clen == 0)
+			msg.msg_control = NULL;
+		else
+			msg.msg_control = cmsg;
 		msg.msg_controllen = clen;
 		msg.msg_flags = 0;
 
@@ -302,8 +306,10 @@
 				      MSG_NOSIGNAL | MSG_DONTWAIT);
 		} while (len == -1 && errno == EINTR);
 
-		if (len == -1)
+		if (len == -1) {
+//			warn("%s: sendmsg", __func__);
 			return -1;
+		}
 
 		close_fds(&connection->fds_out, MAX_FDS_OUT);
 
@@ -358,11 +364,28 @@
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
+//				wl_log("%s: wl_connection_flush failed, "
+//				    "retrying: %s\n", __func__,
+//				    strerror(errno));
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
 
 	if (wl_buffer_put(&connection->out, data, count) < 0)
@@ -570,7 +593,7 @@
 			fd = args[i].h;
 			dup_fd = wl_os_dupfd_cloexec(fd, 0);
 			if (dup_fd < 0) {
-				wl_log("dup failed: %m");
+				wl_log("dup failed: %s\n", strerror(errno));
 				abort();
 			}
 			closure->args[i].h = dup_fd;
