--- libtest/main.cc.orig	2013-10-28 20:44:56.653331000 +0100
+++ libtest/main.cc
@@ -256,7 +256,10 @@
       exit_code= EXIT_SUCCESS;
       std::auto_ptr<Framework> frame(new Framework);
 
-      fatal_assert(sigignore(SIGPIPE) == 0);
+      struct sigaction ignore_action;
+      ignore_action.sa_handler = SIG_IGN;
+      ignore_action.sa_flags = SA_RESTART;
+      assert(sigaction(SIGPIPE, &ignore_action, NULL) == 0);
 
       libtest::SignalThread signal;
       if (signal.setup() == false)
