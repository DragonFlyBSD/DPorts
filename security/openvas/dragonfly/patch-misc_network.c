--- misc/network.c.orig
+++ misc/network.c
@@ -33,8 +33,11 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <unistd.h>
+#if defined(__DragonFly__)
+#include <netinet/in.h>
+#endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #define s6_addr32 __u6_addr.__u6_addr32
 #endif
