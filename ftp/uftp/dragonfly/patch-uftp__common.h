--- uftp_common.h.orig	2013-04-27 18:20:19.000000000 +0000
+++ uftp_common.h
@@ -44,6 +44,10 @@
 
 #endif
 
+#ifdef __DragonFly__
+#include <sys/socket.h>
+#endif
+
 #include "uftp.h"
 #include "encryption.h"
 
