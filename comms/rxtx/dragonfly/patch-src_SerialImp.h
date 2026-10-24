--- src/SerialImp.h.orig
+++ src/SerialImp.h
@@ -97,7 +97,7 @@
 
 /* glue for unsupported linux speeds see also win32termios.h */
 
-#if !defined(__APPLE__) && !defined(__FreeBSD__) /* dima */
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__) /* dima */
 /* this is now handled in SerialImp.c
 #define B14400		1010001
 #define B28800		1010002
@@ -172,7 +172,7 @@
 #	define LOCKFILEPREFIX "LK."
 #	define UUCP
 #endif /* __sgi__ || sgi */
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #	define DEVICEDIR "/dev/"
 #	define LOCKDIR "/var/spool/lock"
 #	define LOCKFILEPREFIX "LK.."
