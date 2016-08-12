--- assa/GenServer.cpp.orig	2008-01-24 04:49:26.000000000 +0200
+++ assa/GenServer.cpp
@@ -232,7 +232,7 @@ init (int* argc, char* argv [], const ch
     ignore_act.register_action( SIGPIPE );
     ignore_act.register_action( SIGCHLD );
 #if !(defined (__FreeBSD__) || defined(__FreeBSD_kernel__) \
-	  || defined (__NetBSD__))
+	  || defined (__NetBSD__) || defined (__DragonFly__))
     ignore_act.register_action( SIGCLD );
 #endif
     ignore_act.register_action( SIGALRM );
