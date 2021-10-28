--- dbus/sigsegv.c.ori	2021-10-23 20:09:04.729211000 +0200
+++ dbus/sigsegv.c	2021-10-23 20:09:23.398787000 +0200
@@ -48,7 +48,7 @@
 # define REGFORMAT "%x"
 #endif
 
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
 
 // TODO : does not compile yet on OSX
 static void signal_segv(int signum, siginfo_t* info, void*ptr) 
