--- src/hotkeys.c.intermediate	2020-11-29 14:46:51.000000000 +0000
+++ src/hotkeys.c
@@ -53,7 +53,7 @@ extern char *getenv();
 /* Mixer related */
 #include <fcntl.h>
 #include <sys/ioctl.h>
-#if defined (__FreeBSD__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 #include <sys/soundcard.h>
 #else
 #       if defined (__NetBSD__) || defined (__OpenBSD__)
