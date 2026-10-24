--- common/slp_socket.h.orig
+++ common/slp_socket.h
@@ -105,7 +105,7 @@
 # include <netdb.h>
 # include <netinet/in.h>
-#if defined(LINUX) || defined (DARWIN) || defined (__FreeBSD__)
+#if defined(LINUX) || defined (DARWIN) || defined (__FreeBSD__) || defined(__DragonFly__)
 # include <ifaddrs.h>
 #endif
 
