--- src/kqueue.c.orig	2023-01-22 12:57:53 UTC
+++ src/kqueue.c
@@ -14,6 +14,11 @@
  * PERFORMANCE OF THIS SOFTWARE.
  */
 
+#if (defined(__FreeBSD__) && __FreeBSD__ < 12) || defined(__DragonFly__)
+#define NOTE_ABSTIME 0
+typedef unsigned short	u_short;
+typedef unsigned int u_int;
+#endif
 #include "aml.h"
 #include "backend.h"
 
@@ -181,7 +186,12 @@ static int kq_set_deadline(void* state,
 
 	struct kevent event;
 	EV_SET(&event, 0, EVFILT_TIMER, EV_ADD | EV_ONESHOT,
-			NOTE_USECONDS | NOTE_ABSTIME, deadline, NULL);
+#if defined(__FreeBSD__)
+			NOTE_USECONDS | NOTE_ABSTIME,
+#else
+			0,
+#endif
+			deadline, NULL);
 
 	return kevent(self->fd, &event, 1, NULL, 0, NULL);
 }
