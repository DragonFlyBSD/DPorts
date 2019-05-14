--- tools/mouse-dpi-tool.c.orig	2019-05-02 15:11:57.000000000 +0300
+++ tools/mouse-dpi-tool.c	2019-05-14 13:33:52.197067000 +0300
@@ -26,7 +26,13 @@
 #endif
 
 #include <libevdev/libevdev.h>
+#if defined(__DragonFly__)
+#include <sys/types.h>
+#include <sys/event.h>
+#include <sys/time.h>
+#else
 #include <sys/signalfd.h>
+#endif
 #include <errno.h>
 #include <fcntl.h>
 #include <limits.h>
@@ -145,6 +151,88 @@ handle_event(struct measurements *m, con
 	return 0;
 }
 
+#if defined(__DragonFly__)
+static int
+mainloop(struct libevdev *dev, struct dimensions *dim) {
+	int kq, nev;
+	struct kevent change[2];
+	struct kevent events[2];
+	int libevdev_fd;
+	struct sigaction sa;
+
+	memset(&sa, 0, sizeof(struct sigaction));
+	sa.sa_handler = SIG_IGN;
+	sigaction(SIGINT, &sa, NULL);
+
+	kq = kqueue();
+	if (kq == -1) {
+		fprintf(stderr, "Error initializing kqueue: %s\n",
+		        strerror(errno));
+		return (EXIT_FAILURE);
+	}
+
+	libevdev_fd = libevdev_get_fd(dev);
+	EV_SET(&change[0], libevdev_fd, EVFILT_READ, EV_ADD | EV_ENABLE, 0, 0,
+	       NULL);
+	EV_SET(&change[1], SIGINT, EVFILT_SIGNAL, EV_ADD | EV_ENABLE, 0, 0,
+	       NULL);
+
+	if (kevent(kq, change, 2, NULL, 0, NULL) == -1) {
+		fprintf(stderr, "Error adding events: %s\n", strerror(errno));
+		close(kq);
+		return (EXIT_FAILURE);
+	}
+
+	for (;;) {
+		struct input_event ev;
+		int rc;
+
+		nev = kevent(kq, NULL, 0, events, 2, NULL);
+
+		if (nev == 0) {
+			break;
+		} else if (nev == -1) {
+			if (errno == EINTR) {
+				continue;
+			} else {
+				fprintf(stderr, "Error from kqueue: %s\n",
+				    strerror(errno));
+				return (EXIT_FAILURE);
+			}
+		} else if (nev > 0) {
+			for (int i = 0; i < nev; i++) {
+				if ((events[i].filter == EVFILT_SIGNAL) &&
+				    (events[i].data > 0)) {
+				    goto out;
+				}
+			}
+		}
+
+		/* now let's find read events */
+		if (nev > 0) {
+			for (int i = 0; i < nev; i++) {
+				if (events[i].filter == EVFILT_READ) {
+					do {
+						rc = libevdev_next_event(dev, LIBEVDEV_READ_FLAG_NORMAL, &ev);
+						if (rc == LIBEVDEV_READ_STATUS_SYNC) {
+							fprintf(stderr, "Error: cannot keep up\n");
+							return 1;
+						} else if (rc != -EAGAIN && rc < 0) {
+							fprintf(stderr, "Error: %s\n", strerror(-rc));
+							return 1;
+						} else if (rc == LIBEVDEV_READ_STATUS_SUCCESS) {
+							handle_event(dim, &ev);
+						}
+					} while (rc != -EAGAIN);
+				}
+			}
+		}
+	}
+
+out:
+	return 0;
+}
+#else  /* Linux */
 static int
 mainloop(struct libevdev *dev, struct measurements *m) {
 	struct pollfd fds[2];
@@ -183,6 +271,7 @@ mainloop(struct libevdev *dev, struct me
 
 	return 0;
 }
+#endif
 
 static inline double
 mean_frequency(struct measurements *m)
