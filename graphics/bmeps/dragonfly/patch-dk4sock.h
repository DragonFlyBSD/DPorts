--- dk4sock.h.orig	2019-04-17 18:39:21 UTC
+++ dk4sock.h
@@ -62,6 +62,10 @@ functions are used to hide this differen
 #endif
 #endif
 
+#ifdef __DragonFly__
+#include <sys/time.h>
+#endif
+
 #if DK4_HAVE_SYS_SOCKET_H
 #ifndef	SYS_SOCKET_H_INCLUDED
 #include <sys/socket.h>
