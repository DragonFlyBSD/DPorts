--- spa/plugins/support/system.c.orig
+++ spa/plugins/support/system.c
@@ -9,6 +9,10 @@
 #include <stdlib.h>
 #include <stdio.h>
 #include <sys/epoll.h>
+#ifdef __DragonFly__
+#include <sys/stat.h>
+#include <fcntl.h>
+#endif
 #include <sys/ioctl.h>
 #include <sys/timerfd.h>
 #include <sys/eventfd.h>
@@ -188,9 +192,39 @@
 }

 /* events */
+#ifdef __DragonFly__
+/* No eventfd(2): epoll-shim's is a kqueue, which SCM_RIGHTS refuses, so
+ * use an unlinked FIFO opened O_RDWR (a read returns one write, no sum). */
 static int impl_eventfd_create(void *object, int flags)
 {
 	struct impl *impl = object;
+	char path[64];
+	static int serial;
+	int fd, fl = O_RDWR;
+
+	if (flags & SPA_FD_CLOEXEC)
+		fl |= O_CLOEXEC;
+	if (flags & SPA_FD_NONBLOCK)
+		fl |= O_NONBLOCK;
+
+	snprintf(path, sizeof(path), "/tmp/.spa-eventfd-%d-%d",
+			(int) getpid(), __sync_fetch_and_add(&serial, 1));
+	if (mkfifo(path, 0600) < 0)
+		return -errno;
+	fd = open(path, fl);
+	if (fd < 0) {
+		int res = -errno;
+		unlink(path);
+		return res;
+	}
+	unlink(path);
+	spa_log_debug(impl->log, "%p: new fifo-eventfd fd:%d", impl, fd);
+	return fd;
+}
+#else
+static int impl_eventfd_create(void *object, int flags)
+{
+	struct impl *impl = object;
 	int fl = 0, res, err;
 	if (flags & SPA_FD_CLOEXEC)
 		fl |= EFD_CLOEXEC;
@@ -203,6 +237,7 @@
 	spa_log_debug(impl->log, "%p: new fd:%d", impl, res);
 	return res < 0 ? err : res;
 }
+#endif
 
 static int impl_eventfd_write(void *object, int fd, uint64_t count)
 {
