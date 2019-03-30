--- source/term.c.orig	2013-02-17 13:04:18 UTC
+++ source/term.c
@@ -57,7 +57,7 @@
  */
 
 
-#ifdef _ALL_SOURCE
+#if defined(_ALL_SOURCE) || defined(__DragonFly__) || defined(__FreeBSD__)
 #include <termios.h>
 #else
 #include <sys/termios.h>
