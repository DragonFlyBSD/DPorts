Taken-from:
databases/libmemcached/dragonfly/patch-libtest_main.cc
--- libtest/main.cc.orig	2013-05-03 07:59:32.000000000 +0300
+++ libtest/main.cc
@@ -285,7 +285,14 @@ int main(int argc, char *argv[])
     do
     {
       exit_code= EXIT_SUCCESS;
+#ifndef __DragonFly__
       fatal_assert(sigignore(SIGPIPE) == 0);
+#else
+      struct sigaction ignore_action;
+      ignore_action.sa_handler = SIG_IGN;
+      ignore_action.sa_flags = SA_RESTART;
+      assert(sigaction(SIGPIPE, &ignore_action, NULL) == 0);
+#endif
 
       libtest::SignalThread signal;
       if (signal.setup() == false)
