--- rinetd.c.intermediate	2020-11-24 07:32:26.000000000 +0000
+++ rinetd.c
@@ -10,6 +10,8 @@
 #include <sys/ioctl.h>
 #include <netdb.h>
 #include <netinet/in.h>
+#include <arpa/inet.h>
+#include <unistd.h>
 #include <getopt.h>
 #include <errno.h>
 #include <poll.h>
