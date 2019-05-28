--- gethost.cc.orig	2006-06-22 13:47:14 UTC
+++ gethost.cc
@@ -68,7 +68,7 @@ main(int argc, char *argv[])
      * o Close the client socket.
      */
 
-#if (! defined (__CYGWIN__) && ! defined(__FreeBSD__))
+#if (! defined (__CYGWIN__) && ! defined(__FreeBSD__) && ! defined(__DragonFly__))
     /* install a SIGCHLD handler */
     sigset(SIGCHLD, sigchld_handler);
 #endif
