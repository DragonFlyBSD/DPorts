--- src/event-loop.c.orig	2020-04-08 17:13:54.915257000 +0300
+++ src/event-loop.c	2020-05-16 17:46:32.581743000 +0300
@@ -35,9 +35,8 @@
 #include <fcntl.h>
 #include <sys/socket.h>
 #include <sys/un.h>
-#include <sys/epoll.h>
-#include <sys/signalfd.h>
-#include <sys/timerfd.h>
+#include <sys/types.h>
+#include <sys/event.h>
 #include <unistd.h>
 #include "wayland-util.h"
 #include "wayland-private.h"
@@ -68,7 +67,7 @@ struct wl_timer_heap {
 };
 
 struct wl_event_loop {
-	int epoll_fd;
+	int event_fd;
 	struct wl_list check_list;
 	struct wl_list idle_list;
 	struct wl_list destroy_list;
@@ -80,10 +79,9 @@ struct wl_event_loop {
 
 struct wl_event_source_interface {
 	int (*dispatch)(struct wl_event_source *source,
-			struct epoll_event *ep);
+			struct kevent *ev);
 };
 
-
 struct wl_event_source_fd {
 	struct wl_event_source base;
 	wl_event_loop_fd_func_t func;
@@ -94,22 +92,22 @@ struct wl_event_source_fd {
 
 static int
 wl_event_source_fd_dispatch(struct wl_event_source *source,
-			    struct epoll_event *ep)
+			    struct kevent *ev)
 {
 	struct wl_event_source_fd *fd_source = (struct wl_event_source_fd *) source;
 	uint32_t mask;
 
 	mask = 0;
-	if (ep->events & EPOLLIN)
+	if (ev->filter == EVFILT_READ)
 		mask |= WL_EVENT_READABLE;
-	if (ep->events & EPOLLOUT)
+	if (ev->filter == EVFILT_WRITE)
 		mask |= WL_EVENT_WRITABLE;
-	if (ep->events & EPOLLHUP)
+	if (ev->flags & EV_EOF)
 		mask |= WL_EVENT_HANGUP;
-	if (ep->events & EPOLLERR)
+	if (ev->flags & EV_ERROR)
 		mask |= WL_EVENT_ERROR;
 
-	return fd_source->func(fd_source->fd, mask, source->data);
+	return fd_source->func(source->fd, mask, source->data);
 }
 
 struct wl_event_source_interface fd_source_interface = {
@@ -120,30 +118,10 @@ static struct wl_event_source *
 add_source(struct wl_event_loop *loop,
 	   struct wl_event_source *source, uint32_t mask, void *data)
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
 
@@ -179,6 +157,9 @@ wl_event_loop_add_fd(struct wl_event_loo
 {
 	struct wl_event_source_fd *source;
 
+	struct kevent events[2];
+	unsigned int num_events = 0;
+
 	source = malloc(sizeof *source);
 	if (source == NULL)
 		return NULL;
@@ -187,8 +168,36 @@ wl_event_loop_add_fd(struct wl_event_loo
 	source->base.fd = wl_os_dupfd_cloexec(fd, 0);
 	source->func = func;
 	source->fd = fd;
+	add_source(loop, &source->base, mask, data);
+
+	if (source->base.fd < 0) {
+		fprintf(stderr, "Could not add source\n: %s\n",
+		        strerror(errno));
+		free(source);
+		return NULL;
+	}
+
+	if (mask & WL_EVENT_READABLE) {
+		EV_SET(&events[num_events], source->base.fd, EVFILT_READ,
+		      EV_ADD | EV_ENABLE, 0, 0, &source->base);
+		num_events++;
+	}
+
+	if (mask & WL_EVENT_WRITABLE) {
+		EV_SET(&events[num_events], source->base.fd, EVFILT_WRITE,
+		      EV_ADD | EV_ENABLE, 0, 0, &source->base);
+		num_events++;
+	}
+
+	if (kevent(loop->event_fd, events, num_events, NULL, 0, NULL) < 0) {
+		fprintf(stderr, "Error adding source %i (%p) to loop %p: %s\n",
+		       source->fd, source, loop, strerror(errno));
+		close(source->base.fd);
+		free(source);
+		return NULL;
+	}
 
-	return add_source(loop, &source->base, mask, data);
+	return &source->base;
 }
 
 /** Update a file descriptor source's event mask
@@ -215,16 +224,22 @@ WL_EXPORT int
 wl_event_source_fd_update(struct wl_event_source *source, uint32_t mask)
 {
 	struct wl_event_loop *loop = source->loop;
-	struct epoll_event ep;
+	struct kevent events[2];
+	unsigned int num_events = 0;
+
+	if (mask & WL_EVENT_READABLE) {
+		EV_SET(&events[num_events], source->fd, EVFILT_READ,
+		       EV_ADD | EV_ENABLE, 0, 0, source);
+		num_events++;
+	}
 
-	memset(&ep, 0, sizeof ep);
-	if (mask & WL_EVENT_READABLE)
-		ep.events |= EPOLLIN;
-	if (mask & WL_EVENT_WRITABLE)
-		ep.events |= EPOLLOUT;
-	ep.data.ptr = source;
+	if (mask & WL_EVENT_WRITABLE) {
+		EV_SET(&events[num_events], source->fd, EVFILT_WRITE,
+		       EV_ADD | EV_ENABLE, 0, 0, source);
+		num_events++;
+	}
 
-	return epoll_ctl(loop->epoll_fd, EPOLL_CTL_MOD, source->fd, &ep);
+	return kevent(loop->event_fd, events, num_events, NULL, 0, NULL);
 }
 
 /** \cond INTERNAL */
@@ -239,7 +254,7 @@ struct wl_event_source_timer {
 
 static int
 noop_dispatch(struct wl_event_source *source,
-	      struct epoll_event *ep) {
+	      struct kevent *ep) {
 	return 0;
 }
 
@@ -257,25 +272,47 @@ time_lt(struct timespec ta, struct times
 }
 
 static int
-set_timer(int timerfd, struct timespec deadline) {
-	struct itimerspec its;
+set_timer(int timerfd,
+          struct timespec deadline,
+          struct wl_timer_heap *timers)
+{
+	struct kevent ev;
+	struct timespec now;
+	time_t diff_sec;
+	long diff_nsec;
+	long rel_deadline;  /* msec */
+
+	if (clock_gettime(CLOCK_MONOTONIC, &now) == -1)
+		return -1;
 
-	its.it_interval.tv_sec = 0;
-	its.it_interval.tv_nsec = 0;
-	its.it_value = deadline;
-	return timerfd_settime(timerfd, TFD_TIMER_ABSTIME, &its, NULL);
+	if (!time_lt(now, deadline))
+		return -1;
+
+	diff_sec = deadline.tv_sec - now.tv_sec;
+	diff_nsec = deadline.tv_nsec - now.tv_nsec;
+	if (diff_nsec < 0) {
+		diff_sec--;
+		diff_nsec += 1000000000L;
+	}
+
+	rel_deadline = (long) ((diff_sec * 1000) + (diff_nsec / 1000000));
+	if ((diff_nsec % 1000000) > 499999)
+		rel_deadline++;
+
+	EV_SET(&ev, timerfd, EVFILT_TIMER, EV_ADD | EV_ENABLE | EV_ONESHOT,
+	       0, rel_deadline, timers);
+
+	return kevent(timers->base.loop->event_fd, &ev, 1, NULL, 0, NULL);
 }
 
 static int
-clear_timer(int timerfd)
+clear_timer(int timerfd, struct wl_timer_heap *timers)
 {
-	struct itimerspec its;
+	struct kevent ev;
 
-	its.it_interval.tv_sec = 0;
-	its.it_interval.tv_nsec = 0;
-	its.it_value.tv_sec = 0;
-	its.it_value.tv_nsec = 0;
-	return timerfd_settime(timerfd, 0, &its, NULL);
+	EV_SET(&ev, timerfd, EVFILT_TIMER, EV_ADD | EV_DISABLE,
+	       0, 0, timers);
+	return kevent(timers->base.loop->event_fd, &ev, 1, NULL, 0, NULL);
 }
 
 static void
@@ -296,37 +333,43 @@ wl_timer_heap_init(struct wl_timer_heap
 static void
 wl_timer_heap_release(struct wl_timer_heap *timers)
 {
-	if (timers->base.fd != -1) {
-		close(timers->base.fd);
-	}
 	free(timers->data);
 }
 
+/*
+ * Timers are now kept in a binary heap. There is only one timer source
+ * which is used for all timer events. This routine ensures that the single
+ * kevent timer is created.
+ */
 static int
 wl_timer_heap_ensure_timerfd(struct wl_timer_heap *timers)
 {
-	struct epoll_event ep;
-	int timer_fd;
-
-	if (timers->base.fd != -1)
-		return 0;
-
-	memset(&ep, 0, sizeof ep);
-	ep.events = EPOLLIN;
-	ep.data.ptr = timers;
-
-	timer_fd = timerfd_create(CLOCK_MONOTONIC,
-				  TFD_CLOEXEC | TFD_NONBLOCK);
-	if (timer_fd < 0)
-		return -1;
+	struct kevent ev;
+	/*
+	 * Deprecated.
+	 * We don't need a static counter any more, but keep it here for now.
+	 * It must be => 0.
+	 */
+	static int timer_id = 1;
 
-	if (epoll_ctl(timers->base.loop->epoll_fd,
-		      EPOLL_CTL_ADD, timer_fd, &ep) < 0) {
-		close(timer_fd);
+	/*
+	 * We need to add timer filter already here. This avoids error messages
+	 * when the timer filter is removed before ever updating it.
+	 * Note the timer will not be enabled, this happens only in the update
+	 * routine which arms/disarms the timer.)
+	 */
+	EV_SET(&ev, timer_id,
+	       EVFILT_TIMER, EV_ADD | EV_DISABLE | EV_ONESHOT, 0, 0, timers);
+	if (kevent(timers->base.loop->event_fd, &ev, 1, NULL, 0, NULL) < 0) {
+		fprintf(stderr, "Could not add timer: %s\n",
+		        strerror(errno));
 		return -1;
 	}
 
-	timers->base.fd = timer_fd;
+	timers->base.fd = timer_id;
+	/* Deprecated, same as above. */
+	timer_id++;
+
 	return 0;
 }
 
@@ -484,7 +527,6 @@ wl_timer_heap_arm(struct wl_timer_heap *
 	heap_sift_up(timers->data, source);
 }
 
-
 static int
 wl_timer_heap_dispatch(struct wl_timer_heap *timers)
 {
@@ -511,10 +553,10 @@ wl_timer_heap_dispatch(struct wl_timer_h
 		list_tail->next_due = NULL;
 
 	if (timers->active > 0) {
-		if (set_timer(timers->base.fd, timers->data[0]->deadline) < 0)
+		if (set_timer(timers->base.fd, timers->data[0]->deadline, timers) < 0)
 			return -1;
 	} else {
-		if (clear_timer(timers->base.fd) < 0)
+		if (clear_timer(timers->base.fd, timers) < 0)
 			return -1;
 	}
 
@@ -531,7 +573,7 @@ wl_timer_heap_dispatch(struct wl_timer_h
 
 static int
 wl_event_source_timer_dispatch(struct wl_event_source *source,
-			       struct epoll_event *ep)
+			       struct kevent *ev)
 {
 	struct wl_event_source_timer *timer;
 
@@ -639,7 +681,7 @@ wl_event_source_timer_update(struct wl_e
 		if (tsource->heap_idx == 0) {
 			/* Only update the timerfd if the new deadline is
 			 * the earliest */
-			if (set_timer(timers->base.fd, deadline) < 0)
+			if (set_timer(timers->base.fd, deadline, timers) < 0)
 				return -1;
 		}
 	} else {
@@ -650,7 +692,7 @@ wl_event_source_timer_update(struct wl_e
 		if (timers->active == 0) {
 			/* Only update the timerfd if this was the last
 			 * active timer */
-			if (clear_timer(timers->base.fd) < 0)
+			if (clear_timer(timers->base.fd, timers) < 0)
 				return -1;
 		}
 	}
@@ -670,17 +712,11 @@ struct wl_event_source_signal {
 
 static int
 wl_event_source_signal_dispatch(struct wl_event_source *source,
-				struct epoll_event *ep)
+				struct kevent *ev)
 {
-	struct wl_event_source_signal *signal_source =
-		(struct wl_event_source_signal *) source;
-	struct signalfd_siginfo signal_info;
-	int len;
-
-	len = read(source->fd, &signal_info, sizeof signal_info);
-	if (!(len == -1 && errno == EAGAIN) && len != sizeof signal_info)
-		/* Is there anything we can do here?  Will this ever happen? */
-		wl_log("signalfd read error: %s\n", strerror(errno));
+	struct wl_event_source_signal *signal_source;
+
+	signal_source = (struct wl_event_source_signal *) source;
 
 	return signal_source->func(signal_source->signal_number,
 				   signal_source->base.data);
@@ -717,6 +753,7 @@ wl_event_loop_add_signal(struct wl_event
 {
 	struct wl_event_source_signal *source;
 	sigset_t mask;
+	struct kevent ev;
 
 	source = malloc(sizeof *source);
 	if (source == NULL)
@@ -724,15 +761,26 @@ wl_event_loop_add_signal(struct wl_event
 
 	source->base.interface = &signal_source_interface;
 	source->signal_number = signal_number;
+	source->func = func;
 
 	sigemptyset(&mask);
 	sigaddset(&mask, signal_number);
-	source->base.fd = signalfd(-1, &mask, SFD_CLOEXEC | SFD_NONBLOCK);
 	sigprocmask(SIG_BLOCK, &mask, NULL);
 
-	source->func = func;
+	source->base.fd = 0;
+	add_source(loop, &source->base, WL_EVENT_READABLE, data);
 
-	return add_source(loop, &source->base, WL_EVENT_READABLE, data);
+	EV_SET(&ev, signal_number, EVFILT_SIGNAL, EV_ADD | EV_ENABLE, 0, 0,
+	       source);
+
+	if (kevent(loop->event_fd, &ev, 1, NULL, 0, NULL) < 0) {
+		fprintf(stderr, "Error adding signal for %i (%p), %p: %s\n",
+			signal_number, source, loop, strerror(errno));
+		free(source);
+		return NULL;
+	}
+
+	return &source->base;
 }
 
 /** \cond INTERNAL */
@@ -829,17 +877,72 @@ WL_EXPORT int
 wl_event_source_remove(struct wl_event_source *source)
 {
 	struct wl_event_loop *loop = source->loop;
+	int ret = 0, saved_errno = 0;
+
+	/*
+	 * Since BSD doesn't treat all event sources as FDs, we need to
+	 * differentiate by source interface.
+	 */
+	if (source->interface == &fd_source_interface && source->fd >= 0) {
+		struct kevent ev[2];
+		int _ret[2], _saved_errno[2];
+
+		/*
+		 * We haven't stored state about the mask used when adding the
+		 * source, so we have to try and remove both READ and WRITE
+		 * filters. One may fail, which is OK. Removal of the source has
+		 * only failed if _both_ kevent() calls fail. We have to do two
+		 * kevent() calls so that we can get independent return values
+		 * for the two kevents.
+		 */
+		EV_SET(&ev[0], source->fd, EVFILT_READ, EV_DELETE, 0, 0,
+		      source);
+		EV_SET(&ev[1], source->fd, EVFILT_WRITE, EV_DELETE, 0, 0,
+		      source);
+
+		_ret[0] = kevent(loop->event_fd, &ev[0], 1, NULL, 0, NULL);
+		_saved_errno[0] = errno;
+		_ret[1] = kevent(loop->event_fd, &ev[1], 1, NULL, 0, NULL);
+		_saved_errno[1] = errno;
+
+		if (_ret[0] >= _ret[1]) {
+			ret = _ret[0];
+			saved_errno = _saved_errno[0];
+		} else {
+			ret = _ret[1];
+			saved_errno = _saved_errno[1];
+		}
+
+		if ((_ret[0] < 0) && (_ret[1] < 0)) {
+			fprintf(stderr,
+			        "Error removing fd = %i from kqueue: %s\n",
+			        source->fd, strerror(saved_errno));
+		}
 
-	/* We need to explicitly remove the fd, since closing the fd
-	 * isn't enough in case we've dup'ed the fd. */
-	if (source->fd >= 0) {
-		epoll_ctl(loop->epoll_fd, EPOLL_CTL_DEL, source->fd, NULL);
 		close(source->fd);
 		source->fd = -1;
+	} else if (source->interface == &timer_source_interface) {
+
+		/*
+		 * There is only timer event source with fd = 1 which is used
+		 * for all timer events. Generally we do not need to remove
+		 * the event source from kqueue.
+		 */
+		if (source->fd >= 0) {
+			struct kevent ev;
+
+			EV_SET(&ev, source->fd, EVFILT_TIMER, EV_DELETE, 0, 0, source);
+			ret = kevent(loop->event_fd, &ev, 1, NULL, 0, NULL);
+			saved_errno = errno;
+
+			if (ret < 0) {
+				fprintf(stderr,
+				        "Error removing timer = %i from kqueue: %s\n",
+				        source->fd, strerror(saved_errno));
+			}
 	}
 
-	if (source->interface == &timer_source_interface &&
-	    source->fd != TIMER_REMOVED) {
+		if (source->fd != TIMER_REMOVED) {
 		/* Disarm the timer (and the loop's timerfd, if necessary),
 		 * before removing its space in the loop timer heap */
 		wl_event_source_timer_update(source, 0);
@@ -848,6 +951,27 @@ wl_event_source_remove(struct wl_event_s
 		 * be dispatched in `wl_event_loop_dispatch` */
 		source->fd = TIMER_REMOVED;
 	}
+	} else if (source->interface == &signal_source_interface) {
+		struct kevent ev;
+		int signal_number;
+		struct wl_event_source_signal *_source;
+
+		/* Only one kevent() call needed. */
+		_source = (struct wl_event_source_signal *) source;
+		signal_number = _source->signal_number;
+
+		EV_SET(&ev, signal_number, EVFILT_SIGNAL, EV_DELETE, 0, 0,
+		      source);
+		ret = kevent(loop->event_fd, &ev, 1, NULL, 0, NULL);
+		saved_errno = errno;
+
+		if (ret < 0) {
+			fprintf(stderr,
+			        "Error removing signal = %i from kqueue: %s\n",
+			        source->fd, strerror(saved_errno));
+		}
+		source->fd = -1;
+	}
 
 	wl_list_remove(&source->link);
 	wl_list_insert(&loop->destroy_list, &source->link);
@@ -889,8 +1013,8 @@ wl_event_loop_create(void)
 	if (loop == NULL)
 		return NULL;
 
-	loop->epoll_fd = wl_os_epoll_create_cloexec();
-	if (loop->epoll_fd < 0) {
+	loop->event_fd = wl_os_kqueue_create_cloexec();
+	if (loop->event_fd < 0) {
 		free(loop);
 		return NULL;
 	}
@@ -925,22 +1049,21 @@ wl_event_loop_destroy(struct wl_event_lo
 
 	wl_event_loop_process_destroy_list(loop);
 	wl_timer_heap_release(&loop->timers);
-	close(loop->epoll_fd);
+	close(loop->event_fd);
 	free(loop);
 }
 
 static bool
 post_dispatch_check(struct wl_event_loop *loop)
 {
-	struct epoll_event ep;
+	struct kevent ev;
 	struct wl_event_source *source, *next;
 	bool needs_recheck = false;
 
-	ep.events = 0;
 	wl_list_for_each_safe(source, next, &loop->check_list, link) {
 		int dispatch_result;
 
-		dispatch_result = source->interface->dispatch(source, &ep);
+		dispatch_result = source->interface->dispatch(source, &ev);
 		if (dispatch_result < 0) {
 			wl_log("Source dispatch function returned negative value!");
 			wl_log("This would previously accidentally suppress a follow-up dispatch");
@@ -994,19 +1117,25 @@ wl_event_loop_dispatch_idle(struct wl_ev
 WL_EXPORT int
 wl_event_loop_dispatch(struct wl_event_loop *loop, int timeout)
 {
-	struct epoll_event ep[32];
+	struct kevent ev[64];
 	struct wl_event_source *source;
 	int i, count;
+	struct timespec timeout_spec;
 	bool has_timers = false;
 
 	wl_event_loop_dispatch_idle(loop);
 
-	count = epoll_wait(loop->epoll_fd, ep, ARRAY_LENGTH(ep), timeout);
+	/* timeout is provided in milliseconds */
+	timeout_spec.tv_sec = (time_t) (timeout / 1000);
+	timeout_spec.tv_nsec = (long) (timeout % 1000) * 1000000L;
+
+	count = kevent(loop->event_fd, NULL, 0, ev, ARRAY_LENGTH(ev),
+	               (timeout != -1) ? &timeout_spec : NULL);
 	if (count < 0)
 		return -1;
 
 	for (i = 0; i < count; i++) {
-		source = ep[i].data.ptr;
+		source = ev[i].udata;
 		if (source == &loop->timers.base)
 			has_timers = true;
 	}
@@ -1022,9 +1151,10 @@ wl_event_loop_dispatch(struct wl_event_l
 	}
 
 	for (i = 0; i < count; i++) {
-		source = ep[i].data.ptr;
-		if (source->fd != -1)
-			source->interface->dispatch(source, &ep[i]);
+		source = ev[i].udata;
+		if (source->fd != -1) {
+		       source->interface->dispatch(source, &ev[i]);
+		}
 	}
 
 	wl_event_loop_process_destroy_list(loop);
@@ -1055,7 +1185,7 @@ wl_event_loop_dispatch(struct wl_event_l
 WL_EXPORT int
 wl_event_loop_get_fd(struct wl_event_loop *loop)
 {
-	return loop->epoll_fd;
+	return loop->event_fd;
 }
 
 /** Register a destroy listener for an event loop context
