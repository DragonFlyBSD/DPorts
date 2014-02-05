--- TerminalView.m.intermediate	2014-02-05 13:18:56.198692000 +0000
+++ TerminalView.m
@@ -33,7 +33,7 @@ activated */
 #  include <termios.h>
 #  include <pcap.h>
 #define TCSETS TIOCSETA
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/types.h>
 #  include <sys/ioctl.h>
 #  include <termios.h>
@@ -52,7 +52,7 @@ activated */
 #include <sys/types.h>
 #include <unistd.h>
 #include <fcntl.h>
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #if !(defined (__NetBSD__)) && !(defined (__SOLARIS__)) && !(defined(__OpenBSD__))
 #  include <pty.h>
 #endif
