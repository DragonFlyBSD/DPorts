--- compat/closefrom.c	2019-12-28 02:16:17 UTC
+++ compat/closefrom.c
@@ -46,7 +46,7 @@ closefrom(int lowfd)
 	int i;
 
 	/* Use /proc/self/fd (or /dev/fd on FreeBSD) if it exists. */
-# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__)
+# if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__) || defined(__DragonFly__)
 	path = "/dev/fd";
 # else
 	path = "/proc/self/fd";
