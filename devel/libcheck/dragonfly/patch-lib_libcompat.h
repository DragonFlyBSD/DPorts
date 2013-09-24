--- lib/libcompat.h.orig	2013-04-18 10:19:02.000000000 +0000
+++ lib/libcompat.h
@@ -132,8 +132,13 @@ struct itimerspec
  */
 typedef int timer_t;
 
+#ifdef __DragonFly__
+int clock_gettime(clockid_t clk_id, struct timespec *ts);
+int timer_create(clockid_t clockid, struct sigevent *sevp, timer_t *timerid);
+#else
 int clock_gettime(int clk_id, struct timespec *ts);
 int timer_create(int clockid, struct sigevent *sevp, timer_t *timerid);
+#endif
 int timer_settime(timer_t timerid, int flags, const struct itimerspec *new_value, struct itimerspec * old_value);
 int timer_delete(timer_t timerid);
 #endif /* HAVE_LIBRT */
