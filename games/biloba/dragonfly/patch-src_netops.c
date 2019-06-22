--- src/netops.c.orig	2011-02-24 20:13:25 UTC
+++ src/netops.c
@@ -31,6 +31,7 @@
 #include <sys/types.h>
 #include <errno.h>
 #ifndef __MINGW32__
+#include <sys/select.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
 #include <netdb.h>
