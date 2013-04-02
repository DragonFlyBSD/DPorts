--- utempter.c.orig	2013-03-01 20:33:17.004422000 +0100
+++ utempter.c	2013-03-01 20:30:20.891716000 +0100
@@ -36,7 +36,7 @@
 
 #ifdef __GLIBC__
 # include <pty.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include <libutil.h>
 #else
 # error Unsupported platform
@@ -157,7 +157,7 @@
 
 	(void) updwtmp(_PATH_WTMP, &ut);
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 	ut.ut_time = tv.tv_sec;
 
