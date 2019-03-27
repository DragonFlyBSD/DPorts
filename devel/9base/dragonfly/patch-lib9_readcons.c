--- lib9/readcons.c.orig	2010-06-04 10:46:05 UTC
+++ lib9/readcons.c
@@ -2,7 +2,9 @@
 #define NOPLAN9DEFINES
 #include <libc.h>
 #include <termios.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#endif
 
 static int
 rawx(int fd, int echoing)
