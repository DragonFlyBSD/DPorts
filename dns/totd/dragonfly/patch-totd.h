--- totd.h.orig	2005-01-29 18:51:36 UTC
+++ totd.h
@@ -49,7 +49,11 @@
 #ifdef HAVE_SYS_SOCKIO_H
 #include <sys/sockio.h>
 #endif
+#if !defined(__DragonFly__) && !defined(__FreeBSD__)
 #include <sys/termios.h>
+#else
+#include <termios.h>
+#endif
 #include <net/if.h>
 #include <netinet/in.h>
 #include <arpa/inet.h>
