--- dmucs.h.orig	2006-05-19 19:12:10 UTC
+++ dmucs.h
@@ -47,6 +47,9 @@ extern bool debugMode;
 #endif
 
 #include "COSMIC/HDR/sockets.h"
+#ifdef __cplusplus
+#include <cstring>
+#endif
 
 void addFd(Socket *sock);
 void removeFd(Socket *sock);
