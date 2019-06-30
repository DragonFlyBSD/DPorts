--- SeqLib/bwa/kopen.c.orig	2016-10-13 18:10:17 UTC
+++ SeqLib/bwa/kopen.c
@@ -11,6 +11,7 @@
 #ifndef _WIN32
 #include <netdb.h>
 #include <arpa/inet.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #endif
 
