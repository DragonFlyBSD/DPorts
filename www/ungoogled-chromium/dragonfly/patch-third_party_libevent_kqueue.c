diff --git third_party/libevent/kqueue.c third_party/libevent/kqueue.c
index 3c2ffd5524c..a4c67c35009 100644
--- third_party/libevent/kqueue.c
+++ third_party/libevent/kqueue.c
@@ -40,6 +40,7 @@
 #endif
 #include <sys/queue.h>
 #include <sys/event.h>
+#include <poll.h>
 #include <signal.h>
 #include <stdio.h>
 #include <stdlib.h>
@@ -54,7 +55,8 @@
 /* Some platforms apparently define the udata field of struct kevent as
  * intptr_t, whereas others define it as void*.  There doesn't seem to be an
  * easy way to tell them apart via autoconf, so we need to use OS macros. */
-#if defined(HAVE_INTTYPES_H) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__darwin__) && !defined(__APPLE__)
+#if defined(HAVE_INTTYPES_H) && !defined(__OpenBSD__) && !defined(__FreeBSD__) && !defined(__darwin__) && !defined(__APPLE__) && \
+    !defined(__DragonFly__)
 #define PTR_TO_UDATA(x)	((intptr_t)(x))
 #else
 #define PTR_TO_UDATA(x)	(x)
@@ -210,8 +212,9 @@ kq_dispatch(struct event_base *base, void *arg, struct timeval *tv)
 	}
 
 	res = kevent(kqop->kq, changes, kqop->nchanges,
-	    events, kqop->nevents, ts_p);
+		     events, kqop->nevents, ts_p);
 	kqop->nchanges = 0;
+
 	if (res == -1) {
 		if (errno != EINTR) {
                         event_warn("kevent");
