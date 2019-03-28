--- source/wserv.c.orig	2003-04-24 22:04:51 UTC
+++ source/wserv.c
@@ -45,7 +45,7 @@
 #include "config.h"
 #include "irc_std.h"
 #include <sys/ioctl.h>
-#ifdef _ALL_SOURCE
+#if defined(_ALL_SOURCE) || defined(__DragonFly__) || defined(__FreeBSD__)
 #include <termios.h>
 #else
 #include <sys/termios.h>
