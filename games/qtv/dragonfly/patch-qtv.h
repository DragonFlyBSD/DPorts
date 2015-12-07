--- qtv.h.orig	2009-02-28 21:57:15.000000000 +0200
+++ qtv.h
@@ -91,7 +91,7 @@ Foundation, Inc., 59 Temple Place - Suit
 	#define ioctlsocket ioctl
 	#define closesocket close
 
-#elif defined(__linux__) || defined(ixemul) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(ixemul) || defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/time.h>
 	#include <sys/types.h>
 	#include <sys/socket.h>
