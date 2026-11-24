--- src/rtpfwd.h.orig
+++ src/rtpfwd.h
@@ -18,6 +18,8 @@
 
 #include "rtp.h"
 #include "rtpsrtp.h"
+#include <sys/socket.h>
+#include <netinet/in.h>
 
 
 /*! \brief RTP forwarders code initialization
