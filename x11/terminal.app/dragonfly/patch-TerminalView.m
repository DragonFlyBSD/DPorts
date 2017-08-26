--- TerminalView.m.orig	2017-08-02 17:17:43 UTC
+++ TerminalView.m
@@ -34,7 +34,7 @@ activated */
 #  include <pcap.h>
 #  include <util.h>
 #define TCSETS TIOCSETA
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <sys/ioctl.h>
 #  include <termios.h>
@@ -53,7 +53,7 @@ activated */
 #include <sys/types.h>
 #include <unistd.h>
 #include <fcntl.h>
-#ifndef __FreeBSD__
+#if !defined __FreeBSD__ && !defined __DragonFly__
 #if !(defined (__NetBSD__)) && !(defined (__SOLARIS__)) && !(defined(__OpenBSD__))
 #  include <pty.h>
 #endif
