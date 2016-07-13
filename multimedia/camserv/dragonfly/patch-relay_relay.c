--- relay/relay.c.orig	2002-09-16 00:13:16.000000000 +0200
+++ relay/relay.c
@@ -34,7 +34,11 @@
 
 #define BACKLOG  20
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 #define CLIENT_T_UNK              0
 #define CLIENT_T_CAMSERV          1
