--- src/lay/lay/laySignalHandler.cc.freebsd	2019-05-05 21:20:32 UTC
+++ src/lay/lay/laySignalHandler.cc
@@ -450,7 +450,7 @@ void install_signal_handlers ()
   act.sa_sigaction = signal_handler;
   sigemptyset (&act.sa_mask);
   act.sa_flags = SA_SIGINFO;
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DrafonFly__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   act.sa_restorer = 0;
 #endif
 
