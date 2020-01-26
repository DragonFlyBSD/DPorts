--- src/hashcat-cli.c.intermediate	2020-01-26 09:24:05.000000000 +0000
+++ src/hashcat-cli.c
@@ -17,7 +17,7 @@
 
 // for interactive status prompt
 #ifdef POSIX
-#if defined(OSX) || defined(__FreeBSD__)
+#if defined(OSX) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <termios.h>
 #include <sys/ioctl.h>
@@ -2836,7 +2836,7 @@ void save_hash ()
 
 #ifdef POSIX
 
-#if defined(OSX) || defined(__FreeBSD__)
+#if defined(OSX) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 static struct termios savemodes;
 static int havemodes = 0;
