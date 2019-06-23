--- client-tty.c.orig	2018-09-15 15:51:34 UTC
+++ client-tty.c
@@ -32,6 +32,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <termios.h>
 #include <unistd.h>
