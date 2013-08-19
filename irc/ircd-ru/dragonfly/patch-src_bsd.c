--- src/bsd.c.orig	2006-07-14 13:53:58.000000000 +0000
+++ src/bsd.c
@@ -28,7 +28,6 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 
-extern int  errno;  /* ...seems that errno.h doesn't define this everywhere */
 #ifndef SYS_ERRLIST_DECLARED
 extern char *sys_errlist[];
 #endif
