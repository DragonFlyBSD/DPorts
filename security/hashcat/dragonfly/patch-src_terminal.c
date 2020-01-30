--- src/terminal.c.orig	2018-12-02 10:58:48 UTC
+++ src/terminal.c
@@ -398,7 +398,7 @@ int tty_fix()
 }
 #endif
 
-#if defined (__APPLE__) || defined (__FreeBSD__)
+#if defined (__APPLE__) || defined (__FreeBSD__) || defined(__DragonFly__)
 static struct termios savemodes;
 static int havemodes = 0;
 
