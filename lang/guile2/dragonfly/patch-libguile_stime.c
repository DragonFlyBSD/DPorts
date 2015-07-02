--- libguile/stime.c.orig	2014-02-28 20:01:27 UTC
+++ libguile/stime.c
@@ -832,7 +832,7 @@ scm_init_stime()
   if (clock_gettime (CLOCK_REALTIME, &posix_real_time_base) == 0)
     get_internal_real_time = get_internal_real_time_posix_timer;
 
-#ifdef HAVE_POSIX_CPUTIME
+#if 0
   {
     clockid_t dummy;
     
