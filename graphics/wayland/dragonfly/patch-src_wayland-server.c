--- src/wayland-server.c.orig	2022-10-31 16:48:01.102621000 +0100
+++ src/wayland-server.c	2022-11-01 14:08:34.644016000 +0100
@@ -40,7 +40,6 @@
 #include <assert.h>
 #include <sys/time.h>
 #include <fcntl.h>
-#include <sys/eventfd.h>
 #include <sys/file.h>
 #include <sys/stat.h>
 
@@ -1075,10 +1074,6 @@
 		return NULL;
 	}
 
-	display->terminate_efd = eventfd(0, EFD_CLOEXEC | EFD_NONBLOCK);
-	if (display->terminate_efd < 0)
-		goto err_eventfd;
-
 	display->term_source = wl_event_loop_add_fd(display->loop,
 						    display->terminate_efd,
 						    WL_EVENT_READABLE,
@@ -1109,10 +1104,6 @@
 
 err_term_source:
 	close(display->terminate_efd);
-err_eventfd:
-	wl_event_loop_destroy(display->loop);
-	free(display);
-	return NULL;
 }
 
 static void
