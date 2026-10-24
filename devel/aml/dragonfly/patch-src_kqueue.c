--- src/kqueue.c.orig
+++ src/kqueue.c
@@ -14,6 +14,11 @@
  * PERFORMANCE OF THIS SOFTWARE.
  */
 
+#ifdef __DragonFly__
+/* _POSIX_C_SOURCE hides the BSD types <sys/event.h> uses. */
+typedef unsigned short	u_short;
+typedef unsigned int	u_int;
+#endif
 #include "aml.h"
 #include "backend.h"
 
@@ -180,13 +185,20 @@
 	struct kq_state* self = state;
 
 	struct kevent event;
-#ifdef __MACH__
+#if defined(__MACH__) || defined(__DragonFly__)
 	struct timespec ts = { 0 };
 	clock_gettime(CLOCK_REALTIME, &ts);
 	uint64_t current_time = ts.tv_sec * UINT64_C(1000000) + ts.tv_nsec / UINT64_C(1000);
 	uint64_t relative_deadline = deadline > current_time ? deadline - current_time : 0;
+#ifdef __DragonFly__
+	/* DragonFly's EVFILT_TIMER takes a relative timeout in milliseconds
+	 * and has neither NOTE_USECONDS nor NOTE_ABSTIME. */
 	EV_SET(&event, 0, EVFILT_TIMER, EV_ADD | EV_ONESHOT,
+			0, (relative_deadline + 999) / 1000, NULL);
+#else
+	EV_SET(&event, 0, EVFILT_TIMER, EV_ADD | EV_ONESHOT,
 			NOTE_USECONDS, relative_deadline, NULL);
+#endif
 #else
 	EV_SET(&event, 0, EVFILT_TIMER, EV_ADD | EV_ONESHOT,
 			NOTE_USECONDS | NOTE_ABSTIME, deadline, NULL);
