--- src/event-loop.c.orig
+++ src/event-loop.c
@@ -33,10 +33,9 @@
 #include <string.h>
 #include <fcntl.h>
 #include <sys/socket.h>
+#include <sys/types.h>
+#include <sys/event.h>
 #include <sys/un.h>
-#include <sys/epoll.h>
-#include <sys/signalfd.h>
-#include <sys/timerfd.h>
 #include <unistd.h>
 #include "timespec-util.h"
 #include "wayland-util.h"
@@ -69,10 +68,11 @@
 };
 
 struct wl_event_loop {
-	int epoll_fd;
+	int event_fd;
 	struct wl_list check_list;
 	struct wl_list idle_list;
 	struct wl_list destroy_list;
+	struct wl_list signal_list;
 
 	struct wl_priv_signal destroy_signal;
 
@@ -81,7 +81,7 @@
 
 struct wl_event_source_interface {
 	int (*dispatch)(struct wl_event_source *source,
-			struct epoll_event *ep);
+			struct kevent *kv);
 };
 
 
@@ -95,21 +95,22 @@
 
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
 
+	/* Report the original (user) fd, not the loops internal dup. */
 	return fd_source->func(fd_source->fd, mask, source->data);
 }
 
@@ -121,30 +122,10 @@
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
 
@@ -180,6 +161,9 @@
 {
 	struct wl_event_source_fd *source;
 
+	struct kevent events[2];
+	unsigned int num_events = 0;
+
 	source = zalloc(sizeof *source);
 	if (source == NULL)
 		return NULL;
@@ -188,8 +172,36 @@
 	source->base.fd = wl_os_dupfd_cloexec(fd, 0);
 	source->func = func;
 	source->fd = fd;
+	add_source(loop, &source->base, mask, data);
 
-	return add_source(loop, &source->base, mask, data);
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
+
+	return &source->base;
 }
 
 /** Update a file descriptor source's event mask
@@ -216,16 +228,22 @@
 wl_event_source_fd_update(struct wl_event_source *source, uint32_t mask)
 {
 	struct wl_event_loop *loop = source->loop;
-	struct epoll_event ep;
+	struct kevent events[2];
+	unsigned int num_events = 0;
 
-	memset(&ep, 0, sizeof ep);
-	if (mask & WL_EVENT_READABLE)
-		ep.events |= EPOLLIN;
-	if (mask & WL_EVENT_WRITABLE)
-		ep.events |= EPOLLOUT;
-	ep.data.ptr = source;
+	if (mask & WL_EVENT_READABLE) {
+		EV_SET(&events[num_events], source->fd, EVFILT_READ,
+		       EV_ADD | EV_ENABLE, 0, 0, source);
+		num_events++;
+	}
 
-	return epoll_ctl(loop->epoll_fd, EPOLL_CTL_MOD, source->fd, &ep);
+	if (mask & WL_EVENT_WRITABLE) {
+		EV_SET(&events[num_events], source->fd, EVFILT_WRITE,
+		       EV_ADD | EV_ENABLE, 0, 0, source);
+		num_events++;
+	}
+
+	return kevent(loop->event_fd, events, num_events, NULL, 0, NULL);
 }
 
 /** \cond INTERNAL */
@@ -240,7 +258,7 @@
 
 static int
 noop_dispatch(struct wl_event_source *source,
-	      struct epoll_event *ep) {
+	      struct kevent *ep) {
 	return 0;
 }
 
@@ -258,25 +276,47 @@
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
 
-	its.it_interval.tv_sec = 0;
-	its.it_interval.tv_nsec = 0;
-	its.it_value = deadline;
-	return timerfd_settime(timerfd, TFD_TIMER_ABSTIME, &its, NULL);
+	if (clock_gettime(CLOCK_MONOTONIC, &now) == -1)
+		return -1;
+
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
@@ -297,37 +337,49 @@
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
+/* Fixed EVFILT_TIMER ident for the per-loop timer source. */
+#define WL_TIMER_KQUEUE_IDENT 1
+
 static int
 wl_timer_heap_ensure_timerfd(struct wl_timer_heap *timers)
 {
-	struct epoll_event ep;
-	int timer_fd;
+	struct kevent ev;
 
+	/*
+	 * There is a single persistent kqueue EVFILT_TIMER ident per event
+	 * loop, used for whichever timer is currently the earliest (the heap
+	 * root). If it is already registered, this is a no-op -- registering a
+	 * fresh ident per timer would leak knotes and let a stale, zero-delay
+	 * registration fire spuriously. The ident only needs to be unique
+	 * among EVFILT_TIMER filters on this loop's kqueue; it does not collide
+	 * with fd-based EVFILT_READ/EVFILT_WRITE idents.
+	 */
 	if (timers->base.fd != -1)
 		return 0;
 
-	memset(&ep, 0, sizeof ep);
-	ep.events = EPOLLIN;
-	ep.data.ptr = timers;
-
-	timer_fd = timerfd_create(CLOCK_MONOTONIC,
-				  TFD_CLOEXEC | TFD_NONBLOCK);
-	if (timer_fd < 0)
+	/*
+	 * Add the timer filter up front (disabled). This avoids error messages
+	 * when the timer filter is removed before ever updating it. Arming and
+	 * disarming happen in set_timer()/clear_timer().
+	 */
+	EV_SET(&ev, WL_TIMER_KQUEUE_IDENT,
+	       EVFILT_TIMER, EV_ADD | EV_DISABLE | EV_ONESHOT, 0, 0, timers);
+	if (kevent(timers->base.loop->event_fd, &ev, 1, NULL, 0, NULL) < 0) {
+		fprintf(stderr, "Could not add timer: %s\n",
+		        strerror(errno));
 		return -1;
-
-	if (epoll_ctl(timers->base.loop->epoll_fd,
-		      EPOLL_CTL_ADD, timer_fd, &ep) < 0) {
-		close(timer_fd);
-		return -1;
 	}
 
-	timers->base.fd = timer_fd;
+	timers->base.fd = WL_TIMER_KQUEUE_IDENT;
+
 	return 0;
 }
 
@@ -487,7 +539,6 @@
 	heap_sift_up(timers->data, source);
 }
 
-
 static int
 wl_timer_heap_dispatch(struct wl_timer_heap *timers)
 {
@@ -497,10 +548,18 @@
 
 	clock_gettime(CLOCK_MONOTONIC, &now);
 
+	/* The kqueue EVFILT_TIMER can fire up to one tick before the
+	 * CLOCK_MONOTONIC deadline. This function is only entered when the
+	 * timer armed for the earliest (root) deadline has fired, so the root
+	 * is due even if `now` reads marginally short. Fire the root
+	 * unconditionally and apply the strict deadline check only to the
+	 * remaining timers. */
+	bool root_due = true;
 	while (timers->active > 0) {
 		root = timers->data[0];
-		if (time_lt(now, root->deadline))
+		if (!root_due && time_lt(now, root->deadline))
 			break;
+		root_due = false;
 
 		wl_timer_heap_disarm(timers, root);
 
@@ -514,10 +573,10 @@
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
 
@@ -534,7 +593,7 @@
 
 static int
 wl_event_source_timer_dispatch(struct wl_event_source *source,
-			       struct epoll_event *ep)
+			       struct kevent *ev)
 {
 	struct wl_event_source_timer *timer;
 
@@ -642,7 +701,7 @@
 		if (tsource->heap_idx == 0) {
 			/* Only update the timerfd if the new deadline is
 			 * the earliest */
-			if (set_timer(timers->base.fd, deadline) < 0)
+			if (set_timer(timers->base.fd, timers->data[0]->deadline, timers) < 0)
 				return -1;
 		}
 	} else {
@@ -653,7 +712,7 @@
 		if (timers->active == 0) {
 			/* Only update the timerfd if this was the last
 			 * active timer */
-			if (clear_timer(timers->base.fd) < 0)
+			if (clear_timer(timers->base.fd, timers) < 0)
 				return -1;
 		}
 	}
@@ -667,26 +726,38 @@
 	struct wl_event_source base;
 	int signal_number;
 	wl_event_loop_signal_func_t func;
+	/* Link in wl_event_loop::signal_list. kqueue collapses all knotes for
+	 * one signal into a single knote/event, so the loop tracks every
+	 * source itself and dispatches them all when the signal fires. */
+	struct wl_list signal_link;
 };
 
 /** \endcond */
 
 static int
 wl_event_source_signal_dispatch(struct wl_event_source *source,
-				struct epoll_event *ep)
+				struct kevent *ev)
 {
-	struct wl_event_source_signal *signal_source =
-		(struct wl_event_source_signal *) source;
-	struct signalfd_siginfo signal_info;
-	int len;
+	struct wl_event_loop *loop = source->loop;
+	struct wl_event_source_signal *sig, *tmp;
+	int signal_number = (int) ev->ident;
+	int rc = 0;
 
-	len = read(source->fd, &signal_info, sizeof signal_info);
-	if (!(len == -1 && errno == EAGAIN) && len != sizeof signal_info)
-		/* Is there anything we can do here?  Will this ever happen? */
-		wl_log("signalfd read error: %s\n", strerror(errno));
+	/*
+	 * Multiple sources may watch the same signal, but kqueue delivers a
+	 * single EVFILT_SIGNAL event for it. Dispatch every source registered
+	 * for this signal number. The _safe variant allows a callback to
+	 * remove signal sources during iteration.
+	 */
+	wl_list_for_each_safe(sig, tmp, &loop->signal_list, signal_link) {
+		if (sig->signal_number != signal_number)
+			continue;
+		if (sig->base.fd == -1)
+			continue;
+		rc |= sig->func(sig->signal_number, sig->base.data);
+	}
 
-	return signal_source->func(signal_source->signal_number,
-				   signal_source->base.data);
+	return rc;
 }
 
 struct wl_event_source_interface signal_source_interface = {
@@ -720,6 +791,7 @@
 {
 	struct wl_event_source_signal *source;
 	sigset_t mask;
+	struct kevent ev;
 
 	source = zalloc(sizeof *source);
 	if (source == NULL)
@@ -727,15 +799,28 @@
 
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
+	wl_list_insert(&loop->signal_list, &source->signal_link);
+
+	return &source->base;
 }
 
 /** \cond INTERNAL */
@@ -832,24 +917,121 @@
 wl_event_source_remove(struct wl_event_source *source)
 {
 	struct wl_event_loop *loop = source->loop;
+	int ret = 0, saved_errno = 0;
 
-	/* We need to explicitly remove the fd, since closing the fd
-	 * isn't enough in case we've dup'ed the fd. */
-	if (source->fd >= 0) {
-		epoll_ctl(loop->epoll_fd, EPOLL_CTL_DEL, source->fd, NULL);
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
+
 		close(source->fd);
 		source->fd = -1;
-	}
+	} else if (source->interface == &timer_source_interface) {
 
-	if (source->interface == &timer_source_interface &&
-	    source->fd != TIMER_REMOVED) {
-		/* Disarm the timer (and the loop's timerfd, if necessary),
-		 * before removing its space in the loop timer heap */
-		wl_event_source_timer_update(source, 0);
-		wl_timer_heap_unreserve(&loop->timers);
-		/* Set the fd field to to indicate that the timer should NOT
-		 * be dispatched in `wl_event_loop_dispatch` */
-		source->fd = TIMER_REMOVED;
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
+		}
+
+		if (source->fd != TIMER_REMOVED) {
+			/* Disarm the timer (and the loop's timerfd, if necessary),
+			 * before removing its space in the loop timer heap */
+			wl_event_source_timer_update(source, 0);
+			wl_timer_heap_unreserve(&loop->timers);
+			/* Set the fd field to to indicate that the timer should NOT
+			 * be dispatched in `wl_event_loop_dispatch` */
+			source->fd = TIMER_REMOVED;
+		}
+	} else if (source->interface == &signal_source_interface) {
+		struct kevent ev;
+		int signal_number;
+		struct wl_event_source_signal *_source;
+
+		/* Only one kevent() call needed. */
+		_source = (struct wl_event_source_signal *) source;
+		signal_number = _source->signal_number;
+
+		/* Drop this source from the per-loop signal list. */
+		wl_list_remove(&_source->signal_link);
+
+		/*
+		 * If another source still watches this signal, keep the shared
+		 * knote but repoint its udata at a surviving source (this one is
+		 * about to be freed); otherwise delete the knote entirely.
+		 */
+		struct wl_event_source_signal *survivor = NULL, *iter;
+		wl_list_for_each(iter, &loop->signal_list, signal_link) {
+			if (iter->signal_number == signal_number) {
+				survivor = iter;
+				break;
+			}
+		}
+
+		if (survivor)
+			EV_SET(&ev, signal_number, EVFILT_SIGNAL,
+			       EV_ADD | EV_ENABLE, 0, 0, &survivor->base);
+		else
+			EV_SET(&ev, signal_number, EVFILT_SIGNAL, EV_DELETE,
+			       0, 0, source);
+
+		ret = kevent(loop->event_fd, &ev, 1, NULL, 0, NULL);
+		saved_errno = errno;
+
+		if (ret < 0) {
+			fprintf(stderr,
+			        "Error removing signal = %i from kqueue: %s\n",
+			        signal_number, strerror(saved_errno));
+		}
+		source->fd = -1;
 	}
 
 	wl_list_remove(&source->link);
@@ -892,14 +1074,15 @@
 	if (loop == NULL)
 		return NULL;
 
-	loop->epoll_fd = wl_os_epoll_create_cloexec();
-	if (loop->epoll_fd < 0) {
+	loop->event_fd = wl_os_kqueue_create_cloexec();
+	if (loop->event_fd < 0) {
 		free(loop);
 		return NULL;
 	}
 	wl_list_init(&loop->check_list);
 	wl_list_init(&loop->idle_list);
 	wl_list_init(&loop->destroy_list);
+	wl_list_init(&loop->signal_list);
 
 	wl_priv_signal_init(&loop->destroy_signal);
 
@@ -928,22 +1111,22 @@
 
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
+	/* Check sources are dispatched with an empty event (mask 0). */
+	struct kevent ev = {0};
 	struct wl_event_source *source, *next;
 	bool needs_recheck = false;
 
-	ep.events = 0;
 	wl_list_for_each_safe(source, next, &loop->check_list, link) {
 		int dispatch_result;
 
-		dispatch_result = source->interface->dispatch(source, &ep);
+		dispatch_result = source->interface->dispatch(source, &ev);
 		if (dispatch_result < 0) {
 			wl_log("Source dispatch function returned negative value!\n");
 			wl_log("This would previously accidentally suppress a follow-up dispatch\n");
@@ -997,9 +1180,10 @@
 WL_EXPORT int
 wl_event_loop_dispatch(struct wl_event_loop *loop, int timeout)
 {
-	struct epoll_event ep[32];
+	struct kevent ev[64];
 	struct wl_event_source *source;
 	int i, count;
+        struct timespec timeout_spec;
 	bool has_timers = false;
 	bool use_timeout = timeout > 0;
 	struct timespec now;
@@ -1014,7 +1198,13 @@
 	}
 
 	while (true) {
-		count = epoll_wait(loop->epoll_fd, ep, ARRAY_LENGTH(ep), timeout);
+		/* timeout is provided in milliseconds */
+		timeout_spec.tv_sec = (time_t) (timeout / 1000);
+		timeout_spec.tv_nsec = (long) (timeout % 1000) * 1000000L;
+
+		count = kevent(loop->event_fd, NULL, 0, ev, ARRAY_LENGTH(ev),
+		    (timeout != -1) ? &timeout_spec : NULL);
+
 		if (count >= 0)
 			break; /* have events or timeout */
 		else if (count < 0 && errno != EINTR && errno != EAGAIN)
@@ -1036,27 +1226,40 @@
 		return -1;
 
 	for (i = 0; i < count; i++) {
-		source = ep[i].data.ptr;
+		source = ev[i].udata;
 		if (source == &loop->timers.base) {
 			has_timers = true;
 			break;
 		}
 	}
 
+	/*
+	 * A zero-timeout kevent() poll does not report an already-expired
+	 * EVFILT_TIMER on DragonFly (unlike epoll_wait on Linux). Fall back to
+	 * the software timer heap: if the earliest deadline has passed,
+	 * dispatch timers even though no kqueue timer event was delivered.
+	 */
+	if (!has_timers && loop->timers.active > 0) {
+		clock_gettime(CLOCK_MONOTONIC, &now);
+		if (!time_lt(now, loop->timers.data[0]->deadline))
+			has_timers = true;
+	}
+
 	if (has_timers) {
 		/* Dispatch timer sources before non-timer sources, so that
 		 * the non-timer sources can not cancel (by calling
 		 * `wl_event_source_timer_update`) the dispatching of the timers
 		 * (Note that timer sources also can't cancel pending non-timer
-		 * sources, since epoll_wait has already been called) */
+		 * sources, since the wait has already been called) */
 		if (wl_timer_heap_dispatch(&loop->timers) < 0)
 			return -1;
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
@@ -1087,7 +1290,7 @@
 WL_EXPORT int
 wl_event_loop_get_fd(struct wl_event_loop *loop)
 {
-	return loop->epoll_fd;
+	return loop->event_fd;
 }
 
 /** Register a destroy listener for an event loop context
