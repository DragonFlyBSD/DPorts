--- lib/libdsbsu.c.orig	2019-03-09 21:56:05 UTC
+++ lib/libdsbsu.c
@@ -37,6 +37,7 @@
 #include <paths.h>
 #include <unistd.h>
 #include <sys/types.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <sys/sysctl.h>
 #include <sys/un.h>
