--- src/epoll.c.orig
+++ src/epoll.c
@@ -8,6 +8,7 @@
 #include <assert.h>
 #include <errno.h>
 #include <poll.h>
+#include <pthread.h>
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
@@ -177,17 +178,52 @@
 {
 	ERRNO_SAVE;
 	errno_t ec;
+	int cs;
 
+	(void)pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, &cs);
 	ec = epoll_ctl_impl(fd, op, fd2, ev);
+	(void)pthread_setcancelstate(cs, NULL);
 
 	ERRNO_RETURN(ec, -1, 0);
 }
 
+/* poll() is a cancellation point and runs under desc->mutex: wait with
+ * cancellation off, allowing it only in the blocking ppoll below. */
+typedef struct {
+	EpollFDCtx *epollfd;
+	struct pollfd *pfds;
+} PpollCleanup;
+
+static void
+ppoll_cleanup(void *arg)
+{
+	PpollCleanup *pc = arg;
+
+	free(pc->pfds);
+
+	(void)pthread_mutex_lock(&pc->epollfd->nr_polling_threads_mutex);
+	--pc->epollfd->nr_polling_threads;
+	if (pc->epollfd->nr_polling_threads == 0) {
+		(void)pthread_cond_signal(&pc->epollfd->nr_polling_threads_cond);
+	}
+	(void)pthread_mutex_unlock(&pc->epollfd->nr_polling_threads_mutex);
+}
+
+static void
+desc_unref_cleanup(void *arg)
+{
+	FileDescription **desc = arg;
+
+	if (*desc) {
+		(void)file_description_unref(desc);
+	}
+}
+
 static errno_t
 epollfd_ctx_wait_or_block(FileDescription *desc, int kq, /**/
     struct epoll_event *ev, int cnt, int *actual_cnt,
     struct timespec const *deadline, struct timespec *timeout,
-    sigset_t const *sigs)
+    sigset_t const *sigs, int cs)
 {
 	errno_t ec;
 
@@ -243,21 +279,18 @@
 		usleep(500000);
 #endif
 
-		int n = real_ppoll(pfds, nfds, timeout, sigs);
+		PpollCleanup pc = { epollfd, pfds };
+		int n;
+
+		pthread_cleanup_push(ppoll_cleanup, &pc);
+		(void)pthread_setcancelstate(cs, NULL);
+		n = real_ppoll(pfds, nfds, timeout, sigs);
 		if (n < 0) {
 			ec = errno;
 		}
+		(void)pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, NULL);
+		pthread_cleanup_pop(1);
 
-		free(pfds);
-
-		(void)pthread_mutex_lock(&epollfd->nr_polling_threads_mutex);
-		--epollfd->nr_polling_threads;
-		if (epollfd->nr_polling_threads == 0) {
-			(void)pthread_cond_signal(
-			    &epollfd->nr_polling_threads_cond);
-		}
-		(void)pthread_mutex_unlock(&epollfd->nr_polling_threads_mutex);
-
 		if (n < 0) {
 			return ec;
 		}
@@ -317,6 +350,9 @@
 		return ec;
 	}
 
+	int cs;
+	(void)pthread_setcancelstate(PTHREAD_CANCEL_DISABLE, &cs);
+
 	FileDescription *desc = epoll_shim_ctx_find_desc(epoll_shim_ctx, fd);
 	if (!desc || desc->vtable != &epollfd_vtable) {
 		struct stat sb;
@@ -331,15 +367,18 @@
 		goto out;
 	}
 
+	pthread_cleanup_push(desc_unref_cleanup, &desc);
 	ec = epollfd_ctx_wait_or_block(desc, fd, ev, cnt, actual_cnt, /**/
 	    (to >= 0) ? &deadline : NULL,			      /**/
 	    (to >= 0) ? &timeout : NULL,			      /**/
-	    sigs);
+	    sigs, cs);
+	pthread_cleanup_pop(0);
 
 out:
 	if (desc) {
 		(void)file_description_unref(&desc);
 	}
+	(void)pthread_setcancelstate(cs, NULL);
 	return ec;
 }
 
