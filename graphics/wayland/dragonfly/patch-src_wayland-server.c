--- src/wayland-server.c.orig
+++ src/wayland-server.c
@@ -39,7 +39,6 @@
 #include <dlfcn.h>
 #include <sys/time.h>
 #include <fcntl.h>
-#include <sys/eventfd.h>
 #include <sys/file.h>
 #include <sys/stat.h>
 
@@ -109,7 +108,8 @@
 	wl_display_global_filter_func_t global_filter;
 	void *global_filter_data;
 
-	int terminate_efd;
+	int terminate_read_fd;
+	int terminate_write_fd;
 	struct wl_event_source *term_source;
 
 	size_t max_buffer_size;
@@ -1206,12 +1206,15 @@
 		return NULL;
 	}
 
-	display->terminate_efd = eventfd(0, EFD_CLOEXEC | EFD_NONBLOCK);
-	if (display->terminate_efd < 0)
-		goto err_eventfd;
+	int terminate_pipe[2];
+	if (pipe2(terminate_pipe, O_CLOEXEC | O_NONBLOCK) < 0)
+		goto err_pipe;
 
+	display->terminate_read_fd = terminate_pipe[0];
+	display->terminate_write_fd = terminate_pipe[1];
+
 	display->term_source = wl_event_loop_add_fd(display->loop,
-						    display->terminate_efd,
+						    display->terminate_read_fd,
 						    WL_EVENT_READABLE,
 						    handle_display_terminate,
 						    NULL);
@@ -1240,8 +1243,9 @@
 	return display;
 
 err_term_source:
-	close(display->terminate_efd);
-err_eventfd:
+	close(display->terminate_read_fd);
+	close(display->terminate_write_fd);
+err_pipe:
 	wl_event_loop_destroy(display->loop);
 	free(display);
 	return NULL;
@@ -1304,7 +1308,8 @@
 		wl_socket_destroy(s);
 	}
 
-	close(display->terminate_efd);
+	close(display->terminate_read_fd);
+	close(display->terminate_write_fd);
 	wl_event_source_remove(display->term_source);
 
 	wl_event_loop_destroy(display->loop);
@@ -1569,7 +1574,7 @@
 
 	display->run = false;
 
-	ret = write(display->terminate_efd, &terminate, sizeof(terminate));
+	ret = write(display->terminate_write_fd, &terminate, sizeof(terminate));
 	if (ret < 0 && errno != EAGAIN)
 		wl_abort("Write failed at shutdown\n");
 }
