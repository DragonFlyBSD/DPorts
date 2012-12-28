--- clients/audio/audial/audial.c.intermediate	2012-12-28 18:05:32.000000000 +0100
+++ clients/audio/audial/audial.c	2012-12-28 18:05:48.000000000 +0100
@@ -133,7 +133,7 @@
 #include <signal.h>
 #include <sys/time.h>
 
-#if !defined(__FreeBSD__) || (__FreeBSD__ < 3)
+#if defined(__FreeBSD__) && (__FreeBSD__ < 3)
 static void
 stopme(int sig)
 {
