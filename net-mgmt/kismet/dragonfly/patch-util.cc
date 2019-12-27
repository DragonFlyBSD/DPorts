--- util.cc.orig	2016-07-02 18:06:10 UTC
+++ util.cc
@@ -819,7 +819,7 @@ void set_proc_title(const char *fmt, ...
 	memset(statbuf, 0, sizeof(statbuf));
 
 #ifdef HAVE_SETPROCTITLE
-# if __FreeBSD__ >= 4 && !defined(FREEBSD4_0) && !defined(FREEBSD4_1)
+# if defined(__DragonFly__) || defined(__FreeBSD__)
 	/* FreeBSD's setproctitle() automatically prepends the process name. */
 	vsnprintf(statbuf, sizeof(statbuf), fmt, msg);
 
