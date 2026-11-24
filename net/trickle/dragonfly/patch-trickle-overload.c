--- trickle-overload.c.orig
+++ trickle-overload.c
@@ -142,7 +142,7 @@
 DECLARE(dup2, int, (int, int));
 
 #ifdef HAVE_SENDFILE
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 DECLARE(sendfile, int, (int, int, off_t, size_t, struct sf_hdtr *, off_t *, int));
 #else
 DECLARE(sendfile, ssize_t, (int, int, off_t *, size_t));
@@ -523,7 +523,7 @@
 #define POLL_WRMASK (POLLOUT | POLLWRNORM | POLLWRBAND)
 #define POLL_RDMASK (POLLIN | /* POLLNORM | */  POLLPRI | POLLRDNORM | POLLRDBAND)
 
-#if defined(__linux__) || (defined(__svr4__) && defined(__sun__)) || defined(__OpenBSD__)
+#if defined(__linux__) || (defined(__svr4__) && defined(__sun__)) || defined(__OpenBSD__) || defined(__DragonFly__)
 int
 poll(struct pollfd *fds, nfds_t nfds, int __timeout)
 #elif defined(__FreeBSD__)
@@ -1001,7 +1001,7 @@
 }
 
 #ifdef HAVE_SENDFILE
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 int
 sendfile(int out_fd, int in_fd, off_t offset, size_t count, struct sf_hdtr *hdtr, off_t *sbytes, int flags)
 #else
@@ -1010,7 +1010,7 @@
 #endif
 {
 	size_t inbytes = count, outbytes = count, bytes;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	int ret = 0;
 #else
 	ssize_t ret = 0;
@@ -1027,7 +1027,7 @@
 	/* This is a slightly ugly hack. */
 	bytes = MIN(inbytes, outbytes);
 	if (bytes > 0)
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		ret = (*libc_sendfile)(out_fd, in_fd, offset, bytes, hdtr, sbytes, flags);
 #else
 		ret = (*libc_sendfile)(out_fd, in_fd, offset, bytes);
