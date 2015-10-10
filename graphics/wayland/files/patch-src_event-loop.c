--- src/event-loop.c.orig	2015-06-26 06:08:19 +0200
+++ src/event-loop.c
@@ -32,17 +32,16 @@
 #include <fcntl.h>
 #include <sys/socket.h>
 #include <sys/un.h>
-#include <sys/epoll.h>
-#include <sys/signalfd.h>
-#include <sys/timerfd.h>
 #include <unistd.h>
 #include <assert.h>
+#include <event2/event.h>
+#include <event2/thread.h>
 #include "wayland-private.h"
 #include "wayland-server.h"
 #include "wayland-os.h"
 
 struct wl_event_loop {
-	int epoll_fd;
+	struct event_base *evbase;
 	struct wl_list check_list;
 	struct wl_list idle_list;
 	struct wl_list destroy_list;
@@ -51,8 +50,8 @@
 };
 
 struct wl_event_source_interface {
-	int (*dispatch)(struct wl_event_source *source,
-			struct epoll_event *ep);
+	int (*dispatch)(evutil_socket_t fd, short what,
+			void *arg);
 };
 
 struct wl_event_source {
@@ -60,6 +59,7 @@
 	struct wl_event_loop *loop;
 	struct wl_list link;
 	void *data;
+	struct event *ev;
 	int fd;
 };
 
@@ -69,22 +69,26 @@
 	int fd;
 };
 
+static void
+wl_event_source_libevent_dispatch(evutil_socket_t fd, short what, void *arg)
+{
+	struct wl_event_source *source = (struct wl_event_source *) arg;
+
+	(void)source->interface->dispatch(fd, what, arg);
+}
+
 static int
-wl_event_source_fd_dispatch(struct wl_event_source *source,
-			    struct epoll_event *ep)
+wl_event_source_fd_dispatch(evutil_socket_t fd, short what, void *arg)
 {
+	struct wl_event_source *source = (struct wl_event_source *) arg;
 	struct wl_event_source_fd *fd_source = (struct wl_event_source_fd *) source;
 	uint32_t mask;
 
 	mask = 0;
-	if (ep->events & EPOLLIN)
+	if (what & EV_READ)
 		mask |= WL_EVENT_READABLE;
-	if (ep->events & EPOLLOUT)
+	if (what & EV_WRITE)
 		mask |= WL_EVENT_WRITABLE;
-	if (ep->events & EPOLLHUP)
-		mask |= WL_EVENT_HANGUP;
-	if (ep->events & EPOLLERR)
-		mask |= WL_EVENT_ERROR;
 
 	return fd_source->func(fd_source->fd, mask, source->data);
 }
@@ -95,32 +99,12 @@
 
 static struct wl_event_source *
 add_source(struct wl_event_loop *loop,
-	   struct wl_event_source *source, uint32_t mask, void *data)
+	   struct wl_event_source *source, void *data)
 {
-	struct epoll_event ep;
-
-	if (source->fd < 0) {
-		free(source);
-		return NULL;
-	}
-
 	source->loop = loop;
 	source->data = data;
 	wl_list_init(&source->link);
 
-	memset(&ep, 0, sizeof ep);
-	if (mask & WL_EVENT_READABLE)
-		ep.events |= EPOLLIN;
-	if (mask & WL_EVENT_WRITABLE)
-		ep.events |= EPOLLOUT;
-	ep.data.ptr = source;
-
-	if (epoll_ctl(loop->epoll_fd, EPOLL_CTL_ADD, source->fd, &ep) < 0) {
-		close(source->fd);
-		free(source);
-		return NULL;
-	}
-
 	return source;
 }
 
@@ -131,33 +115,49 @@
 		     void *data)
 {
 	struct wl_event_source_fd *source;
+	short what;
 
 	source = malloc(sizeof *source);
 	if (source == NULL)
 		return NULL;
 
+	what = EV_PERSIST;
+	if (mask & WL_EVENT_READABLE)
+		what |= EV_READ;
+	if (mask & WL_EVENT_WRITABLE)
+		what |= EV_WRITE;
+
+	add_source(loop, &source->base, data);
 	source->base.interface = &fd_source_interface;
-	source->base.fd = wl_os_dupfd_cloexec(fd, 0);
+	source->base.fd = fcntl(fd, F_DUPFD_CLOEXEC, 0);
+	fcntl(source->base.fd, O_NONBLOCK);
 	source->func = func;
 	source->fd = fd;
+	source->base.ev = event_new(loop->evbase, source->base.fd, what,
+	    wl_event_source_libevent_dispatch, source);
+	event_add(source->base.ev, NULL);
 
-	return add_source(loop, &source->base, mask, data);
+	return &source->base;
 }
 
 WL_EXPORT int
 wl_event_source_fd_update(struct wl_event_source *source, uint32_t mask)
 {
 	struct wl_event_loop *loop = source->loop;
-	struct epoll_event ep;
+	short what;
 
-	memset(&ep, 0, sizeof ep);
+	what = EV_PERSIST;
 	if (mask & WL_EVENT_READABLE)
-		ep.events |= EPOLLIN;
+		what |= EV_READ;
 	if (mask & WL_EVENT_WRITABLE)
-		ep.events |= EPOLLOUT;
-	ep.data.ptr = source;
+		what |= EV_WRITE;
 
-	return epoll_ctl(loop->epoll_fd, EPOLL_CTL_MOD, source->fd, &ep);
+	event_free(source->ev);
+	source->ev = event_new(loop->evbase, source->fd, what,
+	    wl_event_source_libevent_dispatch, source);
+	event_add(source->ev, NULL);
+
+	return 0;
 }
 
 struct wl_event_source_timer {
@@ -166,18 +166,11 @@
 };
 
 static int
-wl_event_source_timer_dispatch(struct wl_event_source *source,
-			       struct epoll_event *ep)
+wl_event_source_timer_dispatch(evutil_socket_t fd, short what, void *arg)
 {
+	struct wl_event_source *source = (struct wl_event_source *) arg;
 	struct wl_event_source_timer *timer_source =
 		(struct wl_event_source_timer *) source;
-	uint64_t expires;
-	int len;
-
-	len = read(source->fd, &expires, sizeof expires);
-	if (!(len == -1 && errno == EAGAIN) && len != sizeof expires)
-		/* Is there anything we can do here?  Will this ever happen? */
-		wl_log("timerfd read error: %m\n");
 
 	return timer_source->func(timer_source->base.data);
 }
@@ -197,25 +190,27 @@
 	if (source == NULL)
 		return NULL;
 
+	add_source(loop, &source->base, data);
 	source->base.interface = &timer_source_interface;
-	source->base.fd = timerfd_create(CLOCK_MONOTONIC,
-					 TFD_CLOEXEC | TFD_NONBLOCK);
+	source->base.fd = -1;
 	source->func = func;
+	source->base.ev = event_new(loop->evbase, -1, 0,
+	    wl_event_source_libevent_dispatch, source);
 
-	return add_source(loop, &source->base, WL_EVENT_READABLE, data);
+	return &source->base;
 }
 
 WL_EXPORT int
 wl_event_source_timer_update(struct wl_event_source *source, int ms_delay)
 {
-	struct itimerspec its;
+	struct timeval tv;
 
-	its.it_interval.tv_sec = 0;
-	its.it_interval.tv_nsec = 0;
-	its.it_value.tv_sec = ms_delay / 1000;
-	its.it_value.tv_nsec = (ms_delay % 1000) * 1000 * 1000;
-	if (timerfd_settime(source->fd, 0, &its, NULL) < 0)
-		return -1;
+	tv.tv_sec = ms_delay / 1000;
+	tv.tv_usec = (ms_delay % 1000) * 1000;
+	if (ms_delay == 0)
+		event_del(source->ev);
+	else
+		event_add(source->ev, &tv);
 
 	return 0;
 }
@@ -227,18 +222,11 @@
 };
 
 static int
-wl_event_source_signal_dispatch(struct wl_event_source *source,
-			       struct epoll_event *ep)
+wl_event_source_signal_dispatch(evutil_socket_t fd, short what, void *arg)
 {
+	struct wl_event_source *source = (struct wl_event_source *) arg;
 	struct wl_event_source_signal *signal_source =
 		(struct wl_event_source_signal *) source;
-	struct signalfd_siginfo signal_info;
-	int len;
-
-	len = read(source->fd, &signal_info, sizeof signal_info);
-	if (!(len == -1 && errno == EAGAIN) && len != sizeof signal_info)
-		/* Is there anything we can do here?  Will this ever happen? */
-		wl_log("signalfd read error: %m\n");
 
 	return signal_source->func(signal_source->signal_number,
 				   signal_source->base.data);
@@ -255,23 +243,22 @@
 			void *data)
 {
 	struct wl_event_source_signal *source;
-	sigset_t mask;
 
 	source = malloc(sizeof *source);
 	if (source == NULL)
 		return NULL;
 
+	add_source(loop, &source->base, data);
 	source->base.interface = &signal_source_interface;
+	source->base.fd = -1;
+	source->func = func;
 	source->signal_number = signal_number;
 
-	sigemptyset(&mask);
-	sigaddset(&mask, signal_number);
-	source->base.fd = signalfd(-1, &mask, SFD_CLOEXEC | SFD_NONBLOCK);
-	sigprocmask(SIG_BLOCK, &mask, NULL);
-
-	source->func = func;
+	source->base.ev = event_new(loop->evbase, signal_number,
+	    EV_SIGNAL|EV_PERSIST, wl_event_source_libevent_dispatch, source);
+	event_add(source->base.ev, NULL);
 
-	return add_source(loop, &source->base, WL_EVENT_READABLE, data);
+	return &source->base;
 }
 
 struct wl_event_source_idle {
@@ -297,6 +284,7 @@
 	source->base.interface = &idle_source_interface;
 	source->base.loop = loop;
 	source->base.fd = -1;
+	source->base.ev = NULL;
 
 	source->func = func;
 	source->base.data = data;
@@ -312,17 +300,25 @@
 	wl_list_insert(source->loop->check_list.prev, &source->link);
 }
 
+WL_EXPORT void
+wl_event_source_activate(struct wl_event_source *source)
+{
+	if (source->ev != NULL) {
+		if (!event_pending(source->ev, EV_TIMEOUT|EV_READ|EV_WRITE|EV_SIGNAL, NULL)) {
+			event_add(source->ev, NULL);
+		}
+		event_active(source->ev, EV_TIMEOUT, 0);
+	}
+}
+
 WL_EXPORT int
 wl_event_source_remove(struct wl_event_source *source)
 {
 	struct wl_event_loop *loop = source->loop;
 
-	/* We need to explicitly remove the fd, since closing the fd
-	 * isn't enough in case we've dup'ed the fd. */
-	if (source->fd >= 0) {
-		epoll_ctl(loop->epoll_fd, EPOLL_CTL_DEL, source->fd, NULL);
-		close(source->fd);
-		source->fd = -1;
+	if (source->ev != NULL) {
+		event_free(source->ev);
+		source->ev = NULL;
 	}
 
 	wl_list_remove(&source->link);
@@ -336,8 +332,20 @@
 {
 	struct wl_event_source *source, *next;
 
-	wl_list_for_each_safe(source, next, &loop->destroy_list, link)
+	wl_list_for_each_safe(source, next, &loop->destroy_list, link){
+		if (source->ev != NULL) {
+			event_free(source->ev);
+			source->ev = NULL;
+		}
+
+		/* We need to explicitly remove the fd, since closing the fd
+		 * isn't enough in case we've dup'ed the fd. */
+		if (source->fd >= 0) {
+			close(source->fd);
+			source->fd = -1;
+		}
 		free(source);
+	}
 
 	wl_list_init(&loop->destroy_list);
 }
@@ -351,8 +359,9 @@
 	if (loop == NULL)
 		return NULL;
 
-	loop->epoll_fd = wl_os_epoll_create_cloexec();
-	if (loop->epoll_fd < 0) {
+	evthread_use_pthreads();
+	loop->evbase = event_base_new();
+	if (loop->evbase == NULL) {
 		free(loop);
 		return NULL;
 	}
@@ -371,21 +380,19 @@
 	wl_signal_emit(&loop->destroy_signal, loop);
 
 	wl_event_loop_process_destroy_list(loop);
-	close(loop->epoll_fd);
+	event_base_free(loop->evbase);
 	free(loop);
 }
 
 static int
 post_dispatch_check(struct wl_event_loop *loop)
 {
-	struct epoll_event ep;
 	struct wl_event_source *source, *next;
 	int n;
 
-	ep.events = 0;
 	n = 0;
 	wl_list_for_each_safe(source, next, &loop->check_list, link)
-		n += source->interface->dispatch(source, &ep);
+		n += source->interface->dispatch(source->fd, 0, source);
 
 	return n;
 }
@@ -406,22 +413,14 @@
 WL_EXPORT int
 wl_event_loop_dispatch(struct wl_event_loop *loop, int timeout)
 {
-	struct epoll_event ep[32];
-	struct wl_event_source *source;
-	int i, count, n;
+	int val, n;
 
 	wl_event_loop_dispatch_idle(loop);
 
-	count = epoll_wait(loop->epoll_fd, ep, ARRAY_LENGTH(ep), timeout);
-	if (count < 0)
+	val = event_base_loop(loop->evbase, EVLOOP_ONCE);
+	if (val < 0)
 		return -1;
 
-	for (i = 0; i < count; i++) {
-		source = ep[i].data.ptr;
-		if (source->fd != -1)
-			source->interface->dispatch(source, &ep[i]);
-	}
-
 	wl_event_loop_process_destroy_list(loop);
 
 	wl_event_loop_dispatch_idle(loop);
@@ -433,11 +432,14 @@
 	return 0;
 }
 
+/* Not implementable with libevent2 based event loop */
+#if 0
 WL_EXPORT int
 wl_event_loop_get_fd(struct wl_event_loop *loop)
 {
 	return loop->epoll_fd;
 }
+#endif
 
 WL_EXPORT void
 wl_event_loop_add_destroy_listener(struct wl_event_loop *loop,
