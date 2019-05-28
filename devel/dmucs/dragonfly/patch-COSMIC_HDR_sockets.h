--- COSMIC/HDR/sockets.h.orig	2006-06-22 13:47:15 UTC
+++ COSMIC/HDR/sockets.h
@@ -203,7 +203,7 @@ struct ip_firstfour {   /* copied from <
 #endif
 
 /* for FreeBSD */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <stdarg.h>
 # include <sys/types.h>
 # include <sys/socket.h>
