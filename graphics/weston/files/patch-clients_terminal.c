--- clients/terminal.c.orig	2015-10-02 23:29:10 +0200
+++ clients/terminal.c
@@ -32,12 +32,19 @@
 #include <unistd.h>
 #include <math.h>
 #include <time.h>
+#if defined(__FreeBSD__)
+#include <libutil.h>
+#else
 #include <pty.h>
+#endif
 #include <ctype.h>
 #include <cairo.h>
+#if !defined(__FreeBSD__)
 #include <sys/epoll.h>
+#endif
 #include <wchar.h>
 #include <locale.h>
+#include <errno.h>
 
 #include <linux/input.h>
 
@@ -454,6 +461,7 @@
 	int scrolling;
 	int send_cursor_position;
 	int fd, master;
+	struct event *masterev;
 	uint32_t modifiers;
 	char escape[MAX_ESCAPE+1];
 	int escape_length;
@@ -2985,7 +2993,7 @@
 static void
 terminal_destroy(struct terminal *terminal)
 {
-	display_unwatch_fd(terminal->display, terminal->master);
+	event_free(terminal->masterev);
 	window_destroy(terminal->window);
 	close(terminal->master);
 	wl_list_remove(&terminal->link);
@@ -2998,20 +3006,16 @@
 }
 
 static void
-io_handler(struct task *task, uint32_t events)
+io_handler(evutil_socket_t fd, short what, void *arg)
 {
+	struct task *task = (struct task *)arg;
 	struct terminal *terminal =
 		container_of(task, struct terminal, io_task);
 	char buffer[256];
 	int len;
 
-	if (events & EPOLLHUP) {
-		terminal_destroy(terminal);
-		return;
-	}
-
 	len = read(terminal->master, buffer, sizeof buffer);
-	if (len < 0)
+	if (len <= 0)
 		terminal_destroy(terminal);
 	else
 		terminal_data(terminal, buffer, len);
@@ -3028,19 +3032,20 @@
 		setenv("TERM", option_term, 1);
 		setenv("COLORTERM", option_term, 1);
 		if (execl(path, path, NULL)) {
-			printf("exec failed: %m\n");
+			printf("exec failed: %s\n", strerror(errno));
 			exit(EXIT_FAILURE);
 		}
 	} else if (pid < 0) {
-		fprintf(stderr, "failed to fork and create pty (%m).\n");
+		fprintf(stderr, "failed to fork and create pty (%s).\n",
+		    strerror(errno));
 		return -1;
 	}
 
 	terminal->master = master;
 	fcntl(master, F_SETFL, O_NONBLOCK);
 	terminal->io_task.run = io_handler;
-	display_watch_fd(terminal->display, terminal->master,
-			 EPOLLIN | EPOLLHUP, &terminal->io_task);
+	terminal->masterev = display_watch_fd(terminal->display,
+	    terminal->master, EV_PERSIST | EV_READ, &terminal->io_task);
 
 	if (option_fullscreen)
 		window_set_fullscreen(terminal->window, 1);
@@ -3093,7 +3098,8 @@
 
 	d = display_create(&argc, argv);
 	if (d == NULL) {
-		fprintf(stderr, "failed to create display: %m\n");
+		fprintf(stderr, "failed to create display: %s\n",
+		    strerror(errno));
 		return -1;
 	}
 
