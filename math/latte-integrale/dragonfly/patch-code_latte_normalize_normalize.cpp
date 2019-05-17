XXX sigset() is not available on DragonFly

--- code/latte/normalize/normalize.cpp.orig	2018-09-11 03:17:02 UTC
+++ code/latte/normalize/normalize.cpp
@@ -554,8 +554,10 @@ static void decrease_verbosity(int sig)
 
 void install_verbosity_control_signal_handlers()
 {
+#ifndef __DragonFly__
   sigset(SIGUSR1, increase_verbosity);
   sigset(SIGUSR2, decrease_verbosity);
+#endif
 }
 
 
