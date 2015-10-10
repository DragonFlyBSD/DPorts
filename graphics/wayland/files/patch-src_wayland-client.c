--- src/wayland-client.c.orig	2015-08-25 05:38:19 +0200
+++ src/wayland-client.c
@@ -598,7 +598,7 @@
 
 	closure = wl_closure_marshal(&proxy->object, opcode, args, message);
 	if (closure == NULL) {
-		wl_log("Error marshalling request: %m\n");
+		wl_log("Error marshalling request: %s\n", strerror(errno));
 		abort();
 	}
 
@@ -606,7 +606,7 @@
 		wl_closure_print(closure, &proxy->object, true);
 
 	if (wl_closure_send(closure, proxy->display->connection)) {
-		wl_log("Error sending request: %m\n");
+		wl_log("Error sending request: %s\n", strerror(errno));
 		abort();
 	}
 
@@ -1558,10 +1558,20 @@
 	 * returning an error.  When the compositor sends an error it
 	 * will close the socket, and if we bail out here we don't get
 	 * a chance to process the error. */
-	ret = wl_connection_flush(display->connection);
-	if (ret < 0 && errno != EAGAIN && errno != EPIPE) {
-		display_fatal_error(display, errno);
-		goto err_unlock;
+	while (wl_connection_flush(display->connection) < 0) {
+		if (errno == EPIPE)
+			break;
+		if (errno == EAGAIN) {
+			pfd[0].fd = display->fd;
+			pfd[0].events = POLLWRNORM;
+			pfd[0].revents = 0;
+			do {
+				ret = poll(pfd, 1, -1);
+			} while (ret == -1 && errno == EINTR);
+		} else {
+			display_fatal_error(display, errno);
+			goto err_unlock;
+		}
 	}
 
 	display->reader_count++;
