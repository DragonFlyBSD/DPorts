--- src/modules/ipops/detailed_ip_type.c.orig
+++ src/modules/ipops/detailed_ip_type.c
@@ -26,7 +26,7 @@
 #include <stdio.h>
 #include <stdlib.h>
 #include <arpa/inet.h>
-#if defined(__OS_freebsd)
+#if defined(__OS_freebsd) || defined(__OS_dragonfly)
 #include <sys/socket.h>
 #endif
 #include <string.h>
