--- libtest/main.cc.orig	2014-02-09 11:52:42 UTC
+++ libtest/main.cc
@@ -288,7 +288,10 @@ int main(int argc, char *argv[])
     do
     {
       exit_code= EXIT_SUCCESS;
-      fatal_assert(sigignore(SIGPIPE) == 0);
+      struct sigaction ignore_action;
+      ignore_action.sa_handler = SIG_IGN;
+      ignore_action.sa_flags = SA_RESTART;
+      assert(sigaction(SIGPIPE, &ignore_action, NULL) == 0);
 
       libtest::SignalThread signal;
       if (signal.setup() == false)
