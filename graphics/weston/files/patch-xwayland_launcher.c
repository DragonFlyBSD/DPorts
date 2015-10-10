--- xwayland/launcher.c.orig	2015-10-01 22:57:02 +0200
+++ xwayland/launcher.c
@@ -62,6 +62,7 @@
 	char *xserver = NULL;
 	struct weston_config_section *section;
 
+#ifdef SOCK_CLOEXEC
 	if (socketpair(AF_UNIX, SOCK_STREAM | SOCK_CLOEXEC, 0, sv) < 0) {
 		weston_log("wl connection socketpair failed\n");
 		return 1;
@@ -71,6 +72,20 @@
 		weston_log("X wm connection socketpair failed\n");
 		return 1;
 	}
+#else
+	if (socketpair(AF_UNIX, SOCK_STREAM, 0, sv) < 0) {
+		weston_log("wl connection socketpair failed\n");
+		return 1;
+	}
+	fcntl(sv[0], F_SETFD, FD_CLOEXEC);
+	fcntl(sv[1], F_SETFD, FD_CLOEXEC);
+	if (socketpair(AF_UNIX, SOCK_STREAM, 0, wm) < 0) {
+		weston_log("X wm connection socketpair failed\n");
+		return 1;
+	}
+	fcntl(wm[0], F_SETFD, FD_CLOEXEC);
+	fcntl(wm[1], F_SETFD, FD_CLOEXEC);
+#endif
 
 	wxs->process.pid = fork();
 	switch (wxs->process.pid) {
@@ -123,9 +138,10 @@
 			  NULL) < 0)
 			weston_log("exec of '%s %s -rootless "
                                    "-listen %s -listen %s -wm %s "
-                                   "-terminate' failed: %m\n",
+                                   "-terminate' failed: %s\n",
                                    xserver, display,
-                                   abstract_fd, unix_fd, wm_fd);
+                                   abstract_fd, unix_fd, wm_fd,
+                                   strerror(errno));
 	fail:
 		_exit(EXIT_FAILURE);
 
@@ -214,16 +230,24 @@
 	socklen_t size, name_size;
 	int fd;
 
+#ifdef SOCK_CLOEXEC
 	fd = socket(PF_LOCAL, SOCK_STREAM | SOCK_CLOEXEC, 0);
 	if (fd < 0)
 		return -1;
+#else
+	fd = socket(PF_LOCAL, SOCK_STREAM, 0);
+	if (fd < 0)
+		return -1;
+	fcntl(fd, F_SETFD, FD_CLOEXEC);
+#endif
 
 	addr.sun_family = AF_LOCAL;
 	name_size = snprintf(addr.sun_path, sizeof addr.sun_path,
-			     "%c/tmp/.X11-unix/X%d", 0, display);
+			     "/tmp/.X11-unix/X%d", display);
 	size = offsetof(struct sockaddr_un, sun_path) + name_size;
 	if (bind(fd, (struct sockaddr *) &addr, size) < 0) {
-		weston_log("failed to bind to @%s: %m\n", addr.sun_path + 1);
+		weston_log("failed to bind to @%s: %s\n", addr.sun_path + 1,
+		    strerror(errno));
 		close(fd);
 		return -1;
 	}
@@ -243,9 +267,16 @@
 	socklen_t size, name_size;
 	int fd;
 
+#ifdef SOCK_CLOEXEC
 	fd = socket(PF_LOCAL, SOCK_STREAM | SOCK_CLOEXEC, 0);
 	if (fd < 0)
 		return -1;
+#else
+	fd = socket(PF_LOCAL, SOCK_STREAM, 0);
+	if (fd < 0)
+		return -1;
+	fcntl(fd, F_SETFD, FD_CLOEXEC);
+#endif
 
 	addr.sun_family = AF_LOCAL;
 	name_size = snprintf(addr.sun_path, sizeof addr.sun_path,
@@ -253,7 +284,8 @@
 	size = offsetof(struct sockaddr_un, sun_path) + name_size;
 	unlink(addr.sun_path);
 	if (bind(fd, (struct sockaddr *) &addr, size) < 0) {
-		weston_log("failed to bind to %s: %m\n", addr.sun_path);
+		weston_log("failed to bind to %s: %s\n", addr.sun_path,
+		    strerror(errno));
 		close(fd);
 		return -1;
 	}
@@ -370,7 +402,7 @@
 	if (create_lockfile(wxs->display, lockfile, sizeof lockfile) < 0) {
 		if (errno == EAGAIN) {
 			goto retry;
-		} else if (errno == EEXIST) {
+		} else if (errno == EEXIST || errno == EACCES) {
 			wxs->display++;
 			goto retry;
 		} else {
