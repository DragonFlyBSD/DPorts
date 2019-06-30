--- lhnet.c.orig	2013-05-25 14:08:53 UTC
+++ lhnet.c
@@ -27,6 +27,7 @@
 #ifndef WIN32
 #include <unistd.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <sys/ioctl.h>
 #include <errno.h>
