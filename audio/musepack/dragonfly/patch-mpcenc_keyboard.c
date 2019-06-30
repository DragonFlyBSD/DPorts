--- mpcenc/keyboard.c.orig	2006-12-19 19:39:02 UTC
+++ mpcenc/keyboard.c
@@ -52,6 +52,8 @@ CheckKey ( void )
 
 #else
 
+#include <sys/select.h>
+
 # ifdef USE_TERMIOS
 #  include <termios.h>
 
