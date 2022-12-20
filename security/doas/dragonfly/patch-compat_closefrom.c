--- compat/closefrom.c.orig	2022-11-07 09:59:48.867946000 +0100
+++ compat/closefrom.c	2022-11-07 10:01:17.235989000 +0100
@@ -46,7 +46,7 @@
 	int i;
 
 	/* Use /proc/self/fd (or /dev/fd on FreeBSD) if it exists. */
-# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__) || defined(__MidnightBSD__)
+# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 	path = "/dev/fd";
 # else
 	path = "/proc/self/fd";
