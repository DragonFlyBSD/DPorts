XXX needs recheck

--- lib/clplumbing/setproctitle.c.orig	2014-10-16 17:24:17 UTC
+++ lib/clplumbing/setproctitle.c
@@ -175,7 +175,7 @@ void set_proc_title(const char *fmt,...)
 
 
 #ifdef HAVE_SETPROCTITLE
-# if __FreeBSD__ >= 4 && !defined(FREEBSD4_0) && !defined(FREEBSD4_1)
+# if (__FreeBSD__ >= 4 && !defined(FREEBSD4_0) && !defined(FREEBSD4_1)) || defined(__DragonFly__)
   /* FreeBSD's setproctitle() automatically prepends the process name. */
   vsnprintf(statbuf, sizeof(statbuf), fmt, msg);
 
