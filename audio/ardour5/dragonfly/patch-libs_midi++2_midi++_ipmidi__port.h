--- libs/midi++2/midi++/ipmidi_port.h.orig	2017-09-15 20:56:23 UTC
+++ libs/midi++2/midi++/ipmidi_port.h
@@ -23,7 +23,7 @@
 #include <iostream>
 #if defined(PLATFORM_WINDOWS)
 #include <winsock.h>
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #include <sys/socket.h>
 #if defined(__FreeBSD__)
