--- quakedef.h.orig	2014-03-05 01:21:13.000000000 +0200
+++ quakedef.h
@@ -444,6 +444,9 @@ extern cvar_t sessionid;
 #elif defined(WIN32)
 # define DP_OS_NAME		"Windows"
 # define DP_OS_STR		"win32"
+#elif defined(__DragonFly__)
+# define DP_OS_NAME		"DragonFly"
+# define DP_OS_STR		"dragonfly"
 #elif defined(__FreeBSD__)
 # define DP_OS_NAME		"FreeBSD"
 # define DP_OS_STR		"freebsd"
