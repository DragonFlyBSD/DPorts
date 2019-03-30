--- Samba/source/winexe/winexe.c.orig	2008-07-30 19:44:55 UTC
+++ Samba/source/winexe/winexe.c
@@ -17,7 +17,11 @@
 
 #include <sys/fcntl.h>
 #include <sys/unistd.h>
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <signal.h>
 
 struct program_args {
