--- src/qtv.h.orig
+++ src/qtv.h
@@ -102,7 +102,7 @@
 	#define ioctlsocket ioctl
 	#define closesocket close
 
-#elif defined(__linux__) || defined(ixemul) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(ixemul) || defined(__FreeBSD__) || defined(__DragonFly__)
 	#include <sys/time.h>
 	#include <sys/types.h>
 	#include <sys/socket.h>
