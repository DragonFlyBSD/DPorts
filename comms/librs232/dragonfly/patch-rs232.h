--- rs232.h.orig	2017-08-05 07:27:44 UTC
+++ rs232.h
@@ -42,7 +42,7 @@ extern "C" {
 
 
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <termios.h>
 #include <sys/ioctl.h>
