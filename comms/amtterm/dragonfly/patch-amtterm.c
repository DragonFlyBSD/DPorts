--- amtterm.c.orig	2017-02-27 10:24:26 UTC
+++ amtterm.c
@@ -26,6 +26,7 @@
 #include <fcntl.h>
 #include <termios.h>
 #include <signal.h>
+#include <sys/select.h>
 #include <sys/ioctl.h>
 
 #include "redir.h"
