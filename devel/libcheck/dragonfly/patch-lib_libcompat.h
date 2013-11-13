--- lib/libcompat.h.orig	2013-11-05 02:02:22.000000000 +0000
+++ lib/libcompat.h
@@ -177,7 +177,9 @@ typedef int timer_t;
  * As the functions which use clockid_t are not defined on the system,
  * the clockid_t type probably also is not defined.
  */
+#ifndef __DragonFly__
 typedef int clockid_t;
+#endif
 
 /* 
  * Do a simple forward declaration in case the struct is not defined.
@@ -186,7 +188,9 @@ typedef int clockid_t;
  */
 struct sigevent;
 
+#ifndef __DragonFly__
 int clock_gettime(clockid_t clk_id, struct timespec *ts);
+#endif
 int timer_create(int clockid, struct sigevent *sevp, timer_t *timerid);
 int timer_settime(timer_t timerid, int flags, const struct itimerspec *new_value, struct itimerspec * old_value);
 int timer_delete(timer_t timerid);
