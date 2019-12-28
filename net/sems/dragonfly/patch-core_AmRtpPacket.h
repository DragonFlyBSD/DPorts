--- core/AmRtpPacket.h.orig	2019-08-08 09:53:18 UTC
+++ core/AmRtpPacket.h
@@ -30,6 +30,7 @@
 
 #include <sys/time.h>
 #include <sys/types.h>
+#include <sys/socket.h>
 #include <netinet/in.h>
 
 #include <string>
