--- src/event.c.orig
+++ src/event.c
@@ -171,7 +171,12 @@
     /* libcurl wants us to timeout now, however setting both fields of
      * new_value.it_value to zero disarms the timer. The closest we can
      * do is to schedule the timer to fire in 1 ns. */
+#ifdef NOTE_NSECONDS
     EV_SET(&timer_event, id, EVFILT_TIMER, EV_ADD, NOTE_NSECONDS, 1, NULL);
+#else
+    /* DragonFly: no unit flags; the shortest timer is 1 ms */
+    EV_SET(&timer_event, id, EVFILT_TIMER, EV_ADD, 0, 1, NULL);
+#endif
   } else {
     // libcurl passes a -1 to indicate the timer should be deleted
     EV_SET(&timer_event, id, EVFILT_TIMER, EV_DELETE, 0, 0, NULL);
