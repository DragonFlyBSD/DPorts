--- misc/network.c.intermediate	2021-03-10 15:07:59.000000000 +0000
+++ misc/network.c
@@ -46,6 +46,9 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <unistd.h>
+#if defined(__DragonFly__)
+#include <netinet/in.h>
+#endif
 
 #ifdef __FreeBSD__
 #include <netinet/in.h>
