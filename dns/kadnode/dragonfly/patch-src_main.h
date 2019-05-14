--- src/main.h.orig	2018-08-25 19:21:15 UTC
+++ src/main.h
@@ -4,6 +4,7 @@
 
 
 #include <netinet/in.h>
+#include <sys/socket.h>
 
 #define MAIN_SRVNAME "kadnode"
 #define MAIN_VERSION "2.2.5"
