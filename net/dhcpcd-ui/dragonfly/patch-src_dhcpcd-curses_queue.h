--- src/dhcpcd-curses/queue.h.orig	2019-06-26 22:43:50 UTC
+++ src/dhcpcd-curses/queue.h
@@ -34,6 +34,10 @@
 #ifndef COMPAT_QUEUE_H
 #define COMPAT_QUEUE_H
 
+#ifdef __DragonFly__
+#include <sys/queue.h>
+#endif
+
 /*
  * Tail queue definitions.
  */
