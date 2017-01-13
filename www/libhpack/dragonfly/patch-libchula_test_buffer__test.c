--- libchula/test/buffer_test.c.orig	2014-07-10 00:59:50.000000000 +0300
+++ libchula/test/buffer_test.c
@@ -1972,6 +1972,8 @@ START_TEST (print_cstr)
 }
 END_TEST
 
+/* explicitly disabled on DragonFly */
+#ifndef __DragonFly__
 START_TEST (_import)
 {
     ret_t           ret;
@@ -1998,6 +2000,7 @@ START_TEST (_import)
     ch_assert_str_eq (buf.buf, "hola caracola");
 }
 END_TEST
+#endif
 
 
 int
@@ -2066,6 +2069,8 @@ buffer_tests (void)
     check_add (s1, cnt_cspn);
     check_add (s1, print_debug);
     check_add (s1, print_cstr);
+#ifndef __DragonFly__
     check_add (s1, _import);
+#endif
     run_test (s1);
 }
