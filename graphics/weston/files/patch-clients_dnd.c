--- clients/dnd.c.orig	2015-10-03 11:49:25 +0200
+++ clients/dnd.c
@@ -28,12 +28,12 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
+#include <errno.h>
 #include <fcntl.h>
 #include <unistd.h>
 #include <math.h>
 #include <sys/time.h>
 #include <cairo.h>
-#include <sys/epoll.h>
 #include <stdbool.h>
 
 #include <wayland-client.h>
@@ -732,7 +732,8 @@
 
 	d = display_create(&argc, argv);
 	if (d == NULL) {
-		fprintf(stderr, "failed to create display: %m\n");
+		fprintf(stderr, "failed to create display: %s\n",
+		    strerror(errno));
 		return -1;
 	}
 
