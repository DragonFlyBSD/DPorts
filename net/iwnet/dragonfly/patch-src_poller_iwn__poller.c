--- src/poller/iwn_poller.c.orig	2022-09-07 10:03:04 UTC
+++ src/poller/iwn_poller.c
@@ -376,8 +376,13 @@ static void _timer_ready_impl(struct iwn
       .ident  = p->fd,
       .filter = EVFILT_TIMER,
       .flags  = EV_ADD | EV_ENABLE | EV_CLEAR | EV_ONESHOT,
+#if defined(__FreeBSD__)
       .fflags = NOTE_SECONDS,
       .data   = timeout_next - ctime,
+#else
+      .fflags = 0,
+      .data   = (timeout_next - ctime) * 1000,
+#endif
     };
     if (kevent(p->fd, &ev, 1, 0, 0, 0) == -1) {
       iwrc rc = iwrc_set_errno(IW_ERROR_ERRNO, errno);
@@ -502,7 +507,14 @@ static iwrc _poller_timeout_create_fd(st
 static iwrc _poller_timeout_add(struct poller_slot *s) {
 #if defined(IWN_KQUEUE)
   struct kevent ev = {
-    (unsigned) s->fd, EVFILT_TIMER, EV_ADD | EV_ONESHOT, NOTE_USECONDS, ((int64_t) s->timeout) * 1000
+    (unsigned) s->fd, EVFILT_TIMER, EV_ADD | EV_ONESHOT,
+#if defined(__FreeBSD__)
+    NOTE_USECONDS,
+    ((int64_t) s->timeout) * 1000
+#else
+    0,
+    ((int64_t) s->timeout)
+#endif
   };
   if (kevent(s->poller->fd, &ev, 1, 0, 0, 0) == -1) {
     return iwrc_set_errno(IW_ERROR_ERRNO, errno);
