--- src/polkitd/gposixsignal.c.intermediate	2012-12-21 13:17:51.595293000 +0100
+++ src/polkitd/gposixsignal.c	2012-12-21 13:52:58.283549000 +0100
@@ -23,7 +23,7 @@
 #include "config.h"
 
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/event.h>
 #include <sys/time.h>
@@ -89,7 +89,7 @@
   gint fd;
   GSource *_source;
   _GPosixSignalSource *source;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   struct kevent ev;
 #endif
 
@@ -101,7 +101,7 @@
   if (sigprocmask (SIG_BLOCK, &sigset, NULL) == -1)
     g_assert_not_reached ();
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   fd = kqueue ();
   EV_SET (&ev, signum, EVFILT_SIGNAL, EV_ADD, 0, 0, NULL);
   kevent (fd, &ev, 1, NULL, 0, NULL);
