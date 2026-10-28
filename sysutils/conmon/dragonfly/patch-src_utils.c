--- src/utils.c.orig	2026-10-26 03:22:00 UTC
+++ src/utils.c
@@ -7,7 +7,7 @@
 #include <sys/prctl.h>
 #include <sys/signalfd.h>
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/procctl.h>
 #include <sys/event.h>
 #endif
@@ -115,7 +115,7 @@ void drop_signal_event(int fd)
 
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 int set_subreaper(gboolean enabled)
 {
