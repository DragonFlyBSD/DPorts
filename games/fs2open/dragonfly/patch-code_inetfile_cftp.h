--- code/inetfile/cftp.h.orig	2021-01-27 17:07:03 UTC
+++ code/inetfile/cftp.h
@@ -15,6 +15,9 @@
 #ifndef _WIN32
 #include "netinet/in.h"
 #endif
+#ifdef __DragonFly__
+#include <sys/socket.h> /* for struct sockaddr_stroage */
+#endif
 
 #include "globalincs/pstypes.h"
 
