--- src/libpgagroal/ev.c.orig
+++ src/libpgagroal/ev.c
@@ -1698,8 +1698,14 @@
 ev_kqueue_periodic_start(struct periodic_watcher* watcher)
 {
    struct kevent kev;
+#ifdef NOTE_USECONDS
    EV_SET(&kev, (uintptr_t)watcher, EVFILT_TIMER, EV_ADD | EV_ENABLE, NOTE_USECONDS,
           watcher->interval * 1000, watcher);
+#else
+   /* DragonFly: no unit flags, data is in milliseconds */
+   EV_SET(&kev, (uintptr_t)watcher, EVFILT_TIMER, EV_ADD | EV_ENABLE, 0,
+          watcher->interval, watcher);
+#endif
    if (kevent(loop->kqueuefd, &kev, 1, NULL, 0, NULL) == -1)
    {
       pgagroal_log_error("kevent timer add: %s", strerror(errno));
