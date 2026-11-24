--- src/watchdog/wd_if.c.orig
+++ src/watchdog/wd_if.c
@@ -34,6 +34,7 @@
 #include <errno.h>
 
 #include <sys/socket.h>
+#include <netinet/in.h>
 #ifdef __linux__
 #include <linux/netlink.h>
 #include <linux/rtnetlink.h>
