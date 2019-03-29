--- include/extra.h.orig	2003-09-15 15:42:26 UTC
+++ include/extra.h
@@ -33,8 +33,12 @@
 
 #include <stdio.h>
 
-#if defined(__FreeBSD__) | defined (__OpenBSD__) | defined (__NetBSD__)  
+#if defined(__FreeBSD__) | defined (__OpenBSD__) | defined (__NetBSD__) | defined (__DragonFly__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <sys/ttycom.h>
 #else 
 #include <termio.h>
