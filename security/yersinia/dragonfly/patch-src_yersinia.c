--- src/yersinia.c.orig	2017-09-18 15:05:32 UTC
+++ src/yersinia.c
@@ -886,7 +886,7 @@ handle_signals( void )
     posix_signal(SIGTSTP, SIG_IGN);
     posix_signal(SIGQUIT, SIG_IGN);
     posix_signal(SIGPIPE, SIG_IGN);
-#if !defined(OPENBSD) && !defined(FREEBSD) && !defined(DARWIN)
+#if !defined(OPENBSD) && !defined(FREEBSD) && !defined(DARWIN) && !defined(DRAGONFLY)
     posix_signal(SIGPOLL, SIG_IGN);
 #endif
     posix_signal(SIGCHLD, SIG_IGN);
@@ -910,7 +910,7 @@ handle_signals_parent( void )
     posix_signal( SIGTSTP, SIG_IGN );
     posix_signal( SIGQUIT, SIG_IGN );
     posix_signal( SIGPIPE, SIG_IGN );
-#if !defined(OPENBSD) && !defined(FREEBSD) && !defined(DARWIN)
+#if !defined(OPENBSD) && !defined(FREEBSD) && !defined(DARWIN) && !defined(DRAGONFLY)
     posix_signal( SIGPOLL, SIG_IGN );
 #endif
     posix_signal( SIGUSR1, final_parent );
