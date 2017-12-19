--- shims/sys/timerfd.h.orig	2017-02-04 10:53:33 UTC
+++ shims/sys/timerfd.h
@@ -0,0 +1,88 @@
+#include <sys/param.h>
+#include <sys/event.h>
+#include <errno.h>
+#include <fcntl.h>
+#include <stdio.h>
+#include <time.h>
+
+#define	TFD_CLOEXEC		O_CLOEXEC
+#define	TFD_NONBLOCK		O_NONBLOCK
+#define	TFD_TIMER_ABSTIME	(1 << 0)
+
+#define	timespecclear(tvp)	((tvp)->tv_sec = (tvp)->tv_nsec = 0)
+#define	timespecisset(tvp)	((tvp)->tv_sec || (tvp)->tv_nsec)
+#define	timespeccmp(tvp, uvp, cmp)					\
+	(((tvp)->tv_sec == (uvp)->tv_sec) ?				\
+	    ((tvp)->tv_nsec cmp (uvp)->tv_nsec) :			\
+	    ((tvp)->tv_sec cmp (uvp)->tv_sec))
+#define	timespecsub(vvp, uvp)						\
+	do {								\
+		(vvp)->tv_sec -= (uvp)->tv_sec;				\
+		(vvp)->tv_nsec -= (uvp)->tv_nsec;			\
+		if ((vvp)->tv_nsec < 0) {				\
+			(vvp)->tv_sec--;				\
+			(vvp)->tv_nsec += 1000000000;			\
+		}							\
+	} while (0)
+
+/* Minimal kqueue timer period */
+#define	EVTIMER_MIN_DATA	0
+
+#ifdef NOTE_USECONDS
+#define	EVTIMER_FFLAGS	NOTE_USECONDS
+#define	tstokq(tvp)	((tvp)->tv_sec*1000000 + ((tvp)->tv_nsec+500)/1000)
+#else
+#define	EVTIMER_FFLAGS	0
+#define	tstokq(tvp)	((tvp)->tv_sec*1000 + ((tvp)->tv_nsec+500000)/1000000)
+#endif
+
+static inline int
+timerfd_create(clockid_t clock_id, int flags)
+{
+	/* Only CLOCK_MONOTONIC is supported */
+	if (clock_id != CLOCK_MONOTONIC) {
+		printf("timerfd_create: unsupported clock_id\n");
+		errno = EINVAL;
+		return (-1);
+	}
+	/*
+	 * Supply read() & close() calls to timerfd with valid file descriptor.
+	 * Fill it with zeroes as libinput discards data read from timerfd.
+	 */
+	return (open("/dev/zero", O_RDONLY | flags));
+}
+
+/*
+ * timerfd_settime() requires properly initialized variable libinput
+ * of type `struct libinput *` in caller context.
+ */
+#define	timerfd_settime(tfd, flags, new_value, old_value) ({		\
+	struct kevent ev_[3];						\
+	struct timespec expire_, now_;					\
+	typeof(((struct kevent *)0)->data) data_ = EVTIMER_MIN_DATA;	\
+	int nchanges_ = 2;						\
+	int ret_;							\
+	/* Sanity checks for supported parameters */			\
+	if ((old_value) != NULL)					\
+		log_error(libinput, "Returning of timer is not supported\n"); \
+	if (timespecisset(&(new_value)->it_interval))			\
+		log_error(libinput, "Periodic timers are not supported\n"); \
+	/* Drop pending EVFILT_TIMER events if any */			\
+	EV_SET(&ev_[0], (tfd), EVFILT_TIMER, EV_ADD, 0, 0, 0);		\
+	EV_SET(&ev_[1], (tfd), EVFILT_TIMER, EV_DELETE, 0, 0, 0);	\
+	if (timespecisset(&(new_value)->it_value)) {			\
+		timespecclear(&now_);					\
+		if ((flags) & TFD_TIMER_ABSTIME)			\
+			clock_gettime(CLOCK_MONOTONIC, &now_);		\
+		expire_ = (new_value)->it_value;			\
+		if (timespeccmp(&expire_, &now_, >)) {			\
+			timespecsub(&expire_, &now_);			\
+			data_ = MAX(tstokq(&expire_), EVTIMER_MIN_DATA);\
+		}							\
+		EV_SET(&ev_[2], (tfd), EVFILT_TIMER, EV_ADD | EV_ONESHOT, \
+		    EVTIMER_FFLAGS, data_, libinput->timer.source);	\
+		nchanges_++;						\
+	}								\
+	ret_ = kevent(libinput->epoll_fd, ev_, nchanges_, NULL, 0, NULL); \
+	ret_;								\
+})
