--- libchula/test/util_test.c.orig	2017-01-13 15:58:26.000000000 +0200
+++ libchula/test/util_test.c
@@ -890,6 +890,8 @@ START_TEST (_syslog)
 }
 END_TEST
 
+/* explicitly disabled on DragonFly */
+#ifndef __DragonFly__
 START_TEST (_malloc_size)
 {
     ret_t   ret;
@@ -924,6 +926,7 @@ START_TEST (_malloc_size)
     ch_assert (ptr[size-1] == 9);
 }
 END_TEST
+#endif
 
 
 int
@@ -973,6 +976,8 @@ util_tests (void)
     check_add (s1, set_closexec);
     check_add (s1, set_reuseaddr);
     check_add (s1, _syslog);
+#ifndef __DragonFly__
     check_add (s1, _malloc_size);
+#endif
     run_test (s1);
 }
