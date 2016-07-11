--- snd_linux.c.orig	2001-05-18 22:06:18.000000000 +0200
+++ snd_linux.c
@@ -6,7 +6,7 @@
 #include <sys/mman.h>
 #include <sys/shm.h>
 #include <sys/wait.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #else
 #include <linux/soundcard.h>
