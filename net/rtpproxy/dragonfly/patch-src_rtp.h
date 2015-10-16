--- src/rtp.h.orig	2015-03-09 19:40:27.000000000 +0200
+++ src/rtp.h
@@ -29,6 +29,10 @@
 #ifndef _RTP_H_
 #define _RTP_H_
 
+#ifdef __DragonFly__
+#include <sys/socket.h>
+#endif
+
 /*
  * RTP payload types
  */
