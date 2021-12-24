--- src/Mayaqua/Network.h.orig	2021-06-24 08:28:36 UTC
+++ src/Mayaqua/Network.h
@@ -19,6 +19,10 @@
 #endif
 #endif
 
+#ifdef __DragonFly__
+#include <sys/socket.h> /* for struct sockaddr */
+#endif
+
 // Dynamic Value
 struct DYN_VALUE
 {
