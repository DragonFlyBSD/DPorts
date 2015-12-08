--- sources/darkplaces/quakedef.h.orig	2009-09-18 03:24:40.000000000 +0300
+++ sources/darkplaces/quakedef.h
@@ -294,6 +294,9 @@ extern cvar_t developer_loading;
 #elif defined(WIN32)
 # define DP_OS_NAME		"Windows"
 # define DP_OS_STR		"win32"
+#elif defined(__DragonFly__)
+# define DP_OS_NAME		"DragonFly"
+# define DP_OS_STR		"dragonfly"
 #elif defined(__FreeBSD__)
 # define DP_OS_NAME		"FreeBSD"
 # define DP_OS_STR		"freebsd"
