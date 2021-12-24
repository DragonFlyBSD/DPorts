--- src/api/internal/io/NetUnix_p.h.orig	2021-06-20 19:43:51 UTC
+++ src/api/internal/io/NetUnix_p.h
@@ -33,6 +33,10 @@
 #include <sys/types.h>
 #include <unistd.h>
 
+#ifdef __DragonFly__
+#include <netinet/in.h>
+#include <sys/socket.h>
+#endif
 #ifdef __FreeBSD__
 #include <netinet/in.h>
 #endif
