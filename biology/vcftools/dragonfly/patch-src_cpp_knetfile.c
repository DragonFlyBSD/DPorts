--- src/cpp/knetfile.c.orig	2018-08-02 17:34:47 UTC
+++ src/cpp/knetfile.c
@@ -40,6 +40,7 @@
 #ifndef _WIN32
 #include <netdb.h>
 #include <arpa/inet.h>
+#include <sys/select.h>
 #include <sys/socket.h>
 #endif
 
