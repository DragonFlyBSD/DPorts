--- src/conn_sock.c.orig	2026-10-26 03:22:00 UTC
+++ src/conn_sock.c
@@ -121,7 +121,7 @@ static void set_socket_buffers(G_GNUC_UNUSED int fd)
 
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 // FreeBSD earlier than 13.1-RELEASE doesn't have O_PATH
 #ifndef O_PATH
@@ -140,10 +140,29 @@ static void bind_relative_to_dir(int dir_fd, int sock_fd, const char *path)
 	strncpy(addr.sun_path, path, sizeof(addr.sun_path) - 1);
 	addr.sun_path[sizeof(addr.sun_path) - 1] = '\0';
 	ndebugf("addr{sun_family=AF_UNIX, sun_path=%s}", addr.sun_path);
+#if defined(__DragonFly__)
+	/* No bindat(): bind the relative name from inside dir_fd instead. */
+	int cwd_fd = -1;
+	if (dir_fd != AT_FDCWD) {
+		cwd_fd = open(".", O_RDONLY | O_DIRECTORY | O_CLOEXEC);
+		if (cwd_fd == -1 || fchdir(dir_fd) == -1)
+			pexit("Failed to change to the console-socket directory");
+	}
+	if (bind(sock_fd, (struct sockaddr *)&addr, sizeof(addr)) == -1)
+		pexit("Failed to bind to console-socket");
+	if (fchmodat(AT_FDCWD, addr.sun_path, 0700, AT_SYMLINK_NOFOLLOW))
+		pexit("Failed to change console-socket permissions");
+	if (cwd_fd != -1) {
+		if (fchdir(cwd_fd) == -1)
+			pexit("Failed to change back to the working directory");
+		close(cwd_fd);
+	}
+#else
 	if (bindat(dir_fd, sock_fd, (struct sockaddr *)&addr, sizeof(addr)) == -1)
 		pexit("Failed to bind to console-socket");
 	if (fchmodat(dir_fd, addr.sun_path, 0700, AT_SYMLINK_NOFOLLOW))
 		pexit("Failed to change console-socket permissions");
+#endif
 }
 
 static void set_socket_buffers(int fd)
