--- shims/sys/epoll.h.orig	2017-02-04 10:53:33 UTC
+++ shims/sys/epoll.h
@@ -0,0 +1,110 @@
+#include <sys/types.h>
+#include <sys/event.h>
+#include <sys/stat.h>
+#include <errno.h>
+#include <string.h>
+
+#define	EPOLL_CLOEXEC	0
+#define	EPOLLIN		1	/* Only EPOLLIN is supported */
+#define	EPOLL_CTL_ADD	1
+#define	EPOLL_CTL_DEL	2
+
+/*
+ * Exact copy of struct kevent from sys/event.h with
+ * some fields renamed for epoll compatibility.
+ */
+typedef union epoll_data {
+	typeof(((struct kevent *)0)->udata)	ptr;
+} epoll_data_t;
+
+struct epoll_event {
+	typeof(((struct kevent *)0)->ident)	ident;
+	typeof(((struct kevent *)0)->filter)	filter;
+	typeof(((struct kevent *)0)->flags)	flags;
+	typeof(((struct kevent *)0)->fflags)	events;
+	typeof(((struct kevent *)0)->data)	unused;
+	epoll_data_t				data;
+};
+
+/* timerfd_create() shim returns result of open("/dev/zero", ...) */
+static int
+fd_is_timerfd(int fd)
+{
+	struct stat st;
+	static dev_t devzero_dev;
+	static ino_t devzero_ino;
+
+	if (devzero_dev == 0 && devzero_ino == 0) {
+		memset(&st, 0, sizeof(struct stat));
+		if (stat("/dev/zero", &st) == -1)
+			return (0);
+		devzero_dev = st.st_dev;
+		devzero_ino = st.st_ino;
+	}
+
+	memset(&st, 0, sizeof(struct stat));
+	if (fstat(fd, &st) == -1)
+		return (0);
+
+	return (st.st_dev == devzero_dev && st.st_ino == devzero_ino);
+}
+
+static inline int
+epoll_create1(__unused int flags)
+{
+	return (kqueue());
+}
+
+static inline int
+epoll_ctl(int efd, int op, int fd, struct epoll_event *event)
+{
+	struct kevent ev;
+
+	memset(&ev, 0, sizeof(struct kevent));
+	switch (op) {
+	case EPOLL_CTL_ADD:
+		/* timer events are set inside timerfd_settime() shim */
+		if (fd_is_timerfd(fd))
+			return (0);
+		ev.filter = EVFILT_READ;
+		ev.flags = EV_ADD;
+		ev.udata = event->data.ptr;
+		break;
+	case EPOLL_CTL_DEL:
+		ev.filter = fd_is_timerfd(fd) ? EVFILT_TIMER : EVFILT_READ;
+		ev.flags = EV_DELETE;
+		break;
+	default:
+		return (-1);
+	}
+	ev.ident = fd;
+
+	/*
+	 * kevent() returns ENOENT on deletion of already fired timer but
+	 * libinput does not check return code currently so no need to
+	 * handle this case at least now.
+	 */
+	return (kevent(efd, &ev, 1, NULL, 0, NULL));
+}
+
+static inline int
+epoll_wait(int efd, struct epoll_event *events, int maxevents,
+    int timeout)
+{
+	struct timespec ts, *tsp;
+
+	if (timeout < -1) {
+		errno = EINVAL;
+		return (-1);
+	}
+	if (timeout != -1) {
+		/* Convert from milliseconds to timespec. */
+		ts.tv_sec = timeout / 1000;
+		ts.tv_nsec = (timeout % 1000) * 1000000;
+		tsp = &ts;
+	} else {
+		tsp = NULL;
+	}
+
+	return (kevent(efd, NULL, 0, (struct kevent *)events, maxevents, tsp));
+}
