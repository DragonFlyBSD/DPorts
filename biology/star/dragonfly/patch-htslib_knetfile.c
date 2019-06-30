--- htslib/knetfile.c.orig	2019-03-28 20:48:16 UTC
+++ htslib/knetfile.c
@@ -40,6 +40,7 @@
 #ifndef _WIN32
 #include <netdb.h>
 #include <arpa/inet.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #endif
 
