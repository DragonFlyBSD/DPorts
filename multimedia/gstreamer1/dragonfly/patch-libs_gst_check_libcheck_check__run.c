--- libs/gst/check/libcheck/check_run.c.orig	Tue Mar 11 20:14:44 2025
+++ libs/gst/check/libcheck/check_run.c	Thu Apr
@@ -478,6 +478,7 @@ tcase_run_tfun_fork (SRunner * sr, TCase * tc, TF * tf
 
   alarm_received = 0;
 
+#ifndef __DragonFly__
   if (timer_create (check_get_clockid (),
           NULL /* fire SIGALRM if timer expires */ ,
           &timerid) == 0) {
@@ -499,7 +500,10 @@ tcase_run_tfun_fork (SRunner * sr, TCase * tc, TF * tf
   } else {
     eprintf ("Error in call to timer_create:", __FILE__, __LINE__);
   }
-
+#else
+  eprintf("DragonFly BSD does not support POSIX timers yet", __FILE__,__LINE__);
+#endif
+  
   killpg (pid, SIGKILL);        /* Kill remaining processes. */
 
   return receive_result_info_fork (tc->name, tfun->name, i, status,
