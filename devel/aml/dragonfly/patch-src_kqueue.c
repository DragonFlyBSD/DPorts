--- src/kqueue.c.intermediate	2021-08-22 14:55:30 UTC
+++ src/kqueue.c
@@ -17,7 +17,7 @@
 #include "aml.h"
 #include "backend.h"
 
-#if defined(__FreeBSD__) && __FreeBSD__ < 12
+#if (defined(__FreeBSD__) && __FreeBSD__ < 12) || defined(__DragonFly__)
 #define NOTE_ABSTIME 0
 typedef unsigned short	u_short;
 typedef unsigned int u_int;
@@ -186,7 +186,12 @@ static int kq_set_deadline(void* state,
 
 	struct kevent event;
 	EV_SET(&event, 0, EVFILT_TIMER, EV_ADD | EV_ONESHOT,
-			NOTE_MSECONDS | NOTE_ABSTIME, deadline, NULL);
+#if defined(__FreeBSD__)
+	    NOTE_MSECONDS | NOTE_ABSTIME,
+#else
+	    0,
+#endif
+	    deadline, NULL);
 
 	return kevent(self->fd, &event, 1, NULL, 0, NULL);
 }
